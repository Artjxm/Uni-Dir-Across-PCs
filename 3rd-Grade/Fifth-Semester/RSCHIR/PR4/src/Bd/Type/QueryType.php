<?php

namespace Bd\Type;

require_once 'Bd/DB.php';
require_once 'Bd/Types.php';

use Bd\DB;
use Bd\Types;
use GraphQL\Type\Definition\ObjectType;

class QueryType extends ObjectType
{
    public function __construct()
    {
        $config = [
            'fields' => function() {
                return [
                    'user' => [
                        'type' => Types::user(),
                        'description' => 'Возвращает пользователя по id',
                        'args' => [
                            'id' => Types::int()
                        ],
                        'resolve' => function ($root, $args) {
							if($_SERVER['REQUEST_METHOD'] == 'GET')
							{
								return DB::selectOne("SELECT * from users WHERE id = {$args['id']}");
							}
							echo 'Only GET method!';
                        }
                    ],
                    'allUsers' => [
                        'type' => Types::listOf(Types::user()),
                        'description' => 'Список пользователей',
                        'resolve' => function () {
							if($_SERVER['REQUEST_METHOD'] == 'GET')
							{
								return DB::select('SELECT * from users');
							}
							echo 'Only GET method!';
                        }
                    ],
					'Post' => [
                        'type' => Types::listOf(Types::user()),
                        'description' => 'Добавление пользователей',
						'args' => [
							'id' => ['type' => Types::int()],
							'name' => ['type' => Types::string()],
							'email' => ['type' => Types::string()]
						],
						'resolve' => function ($uzer, array $args) {
							$id = $args['id'];
							$name = $args['name'] . '';
							$email = $args['email'] . '';
							if($_SERVER['REQUEST_METHOD'] == 'POST')
							{
								return DB::query_user("INSERT INTO users (id, name, email) VALUES ({$id}, '{$name}', '{$email}')");
							}
							echo 'Only POST method!';
                        }
                    ],
					'Delete' => [
                        'type' => Types::listOf(Types::user()),
                        'description' => 'Добавление пользователей',
						'args' => [
							'id' => ['type' => Types::int()]
						],
						'resolve' => function ($uzer, array $args) {
							$id = $args['id'];
							if($_SERVER['REQUEST_METHOD'] == 'DELETE')
							{
								return DB::query_user("DELETE FROM users WHERE id = {$id}");
							}
							echo 'Only DELETE method!';
                        }
                    ],
					'Patch' => [
                        'type' => Types::listOf(Types::user()),
                        'description' => 'Добавление пользователей',
						'args' => [
							'old_id' => ['type' => Types::int()],
							'new_id' => ['type' => Types::int()],
							'name' => ['type' => Types::string()],
							'email' => ['type' => Types::string()]
						],
						'resolve' => function ($uzer, array $args) {
							$old_id = $args['old_id'];
							$new_id = $args['new_id'];
							$name = $args['name'] . '';
							$email = $args['email'] . '';
							if($_SERVER['REQUEST_METHOD'] == 'PATCH')
							{
								return DB::query_user("UPDATE users SET id={$new_id}, name='{$name}', email='{$email}' WHERE id={$old_id};");
							}
							echo 'Only PATCH method!';
                        }
                    ]
                ];
            }
        ];
        parent::__construct($config);
    }
}