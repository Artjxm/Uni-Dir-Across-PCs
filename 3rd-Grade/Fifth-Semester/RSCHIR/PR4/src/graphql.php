<?php

require_once __DIR__ . '/vendor/autoload.php';
require_once 'Bd/Types.php';
require_once 'Bd/DB.php';

use Bd\Types;
use Bd\DB;
use GraphQL\GraphQL;
use GraphQL\Type\Definition\ObjectType;
use GraphQL\Type\Schema;

try {

	$config = [
		'host' => 'bd',
		'database' => 'appDB',
		'username' => 'root',
		'password' => 'qwerty'
	];

	DB::init($config);
	
    $mutationType = new ObjectType([
        'name' => 'Mutation',
        'fields' => [
            'sum' => [
                'type' => Types::int(),
                'args' => [
                    'x' => ['type' => Types::int()],
                    'y' => ['type' => Types::int()],
                ],
                'resolve' => static function ($calc, array $args): int {
                    return $args['x'] + $args['y'];
                },
            ],
        ],
    ]);

    $schema = new Schema([
        'query' => Types::query(),
        'mutation' => $mutationType,
    ]);

    $rawInput       = file_get_contents('php://input');
    $input          = json_decode($rawInput, true);
    $query          = $input['query'];
    $variableValues = $input['variables'] ?? null;

    $rootValue = ['prefix' => 'You said: '];
    $result    = GraphQL::executeQuery($schema, $query, $rootValue, null, $variableValues);
    $output    = $result->toArray();
} catch (Throwable $e) {
    $output = [
        'error' => [
            'message' => $e->getMessage(),
        ],
    ];
}

header('Content-Type: application/json; charset=UTF-8');
echo json_encode($output);