<?php
namespace Bd;

require_once 'Bd/Type/QueryType.php';
require_once 'Bd/Type/UserType.php';

use Bd\Type\QueryType;
use Bd\Type\UserType;
use GraphQL\Type\Definition\Type;

class Types
{
    private static $query;
    public static function query()
    {
        return self::$query ?: (self::$query = new QueryType());
    }
    public static function string()
    {
        return Type::string();
    }
	public static function int()
	{
		return Type::int();
	}
	public static function listOf($type)
	{
		return Type::listOf($type);
	}
	
	private static $user;
	public static function user()
	{
		return self::$user ?: (self::$user = new UserType());
	}
}