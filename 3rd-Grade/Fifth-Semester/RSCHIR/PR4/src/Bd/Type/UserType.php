<?php

namespace Bd\Type;

require_once 'Bd/DB.php';
require_once 'Bd/Types.php';

use Bd\DB;
use Bd\Types;
use GraphQL\Type\Definition\ObjectType;

class UserType extends ObjectType
{
    public function __construct()
    {
        $config = [
            'description' => 'Пользователь',
            'fields' => function() {
                return [
                    'id' => [
                        'type' => Types::string(),
                        'description' => 'Идентификатор пользователя'
                    ],
                    'name' => [
                        'type' => Types::string(),
                        'description' => 'Имя пользователя'
                    ],
                    'email' => [
                        'type' => Types::string(),
                        'description' => 'E-mail пользователя'
                    ]
                ];
            }
        ];
        parent::__construct($config);
    }
}