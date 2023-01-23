/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rds-data/model/ColumnMetadata.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace RDSDataService
{
namespace Model
{

ColumnMetadata::ColumnMetadata() : 
    m_nameHasBeenSet(false),
    m_type(0),
    m_typeHasBeenSet(false),
    m_typeNameHasBeenSet(false),
    m_labelHasBeenSet(false),
    m_schemaNameHasBeenSet(false),
    m_tableNameHasBeenSet(false),
    m_isAutoIncrement(false),
    m_isAutoIncrementHasBeenSet(false),
    m_isSigned(false),
    m_isSignedHasBeenSet(false),
    m_isCurrency(false),
    m_isCurrencyHasBeenSet(false),
    m_isCaseSensitive(false),
    m_isCaseSensitiveHasBeenSet(false),
    m_nullable(0),
    m_nullableHasBeenSet(false),
    m_precision(0),
    m_precisionHasBeenSet(false),
    m_scale(0),
    m_scaleHasBeenSet(false),
    m_arrayBaseColumnType(0),
    m_arrayBaseColumnTypeHasBeenSet(false)
{
}

ColumnMetadata::ColumnMetadata(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_type(0),
    m_typeHasBeenSet(false),
    m_typeNameHasBeenSet(false),
    m_labelHasBeenSet(false),
    m_schemaNameHasBeenSet(false),
    m_tableNameHasBeenSet(false),
    m_isAutoIncrement(false),
    m_isAutoIncrementHasBeenSet(false),
    m_isSigned(false),
    m_isSignedHasBeenSet(false),
    m_isCurrency(false),
    m_isCurrencyHasBeenSet(false),
    m_isCaseSensitive(false),
    m_isCaseSensitiveHasBeenSet(false),
    m_nullable(0),
    m_nullableHasBeenSet(false),
    m_precision(0),
    m_precisionHasBeenSet(false),
    m_scale(0),
    m_scaleHasBeenSet(false),
    m_arrayBaseColumnType(0),
    m_arrayBaseColumnTypeHasBeenSet(false)
{
  *this = jsonValue;
}

ColumnMetadata& ColumnMetadata::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("type"))
  {
    m_type = jsonValue.GetInteger("type");

    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("typeName"))
  {
    m_typeName = jsonValue.GetString("typeName");

    m_typeNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("label"))
  {
    m_label = jsonValue.GetString("label");

    m_labelHasBeenSet = true;
  }

  if(jsonValue.ValueExists("schemaName"))
  {
    m_schemaName = jsonValue.GetString("schemaName");

    m_schemaNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("tableName"))
  {
    m_tableName = jsonValue.GetString("tableName");

    m_tableNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("isAutoIncrement"))
  {
    m_isAutoIncrement = jsonValue.GetBool("isAutoIncrement");

    m_isAutoIncrementHasBeenSet = true;
  }

  if(jsonValue.ValueExists("isSigned"))
  {
    m_isSigned = jsonValue.GetBool("isSigned");

    m_isSignedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("isCurrency"))
  {
    m_isCurrency = jsonValue.GetBool("isCurrency");

    m_isCurrencyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("isCaseSensitive"))
  {
    m_isCaseSensitive = jsonValue.GetBool("isCaseSensitive");

    m_isCaseSensitiveHasBeenSet = true;
  }

  if(jsonValue.ValueExists("nullable"))
  {
    m_nullable = jsonValue.GetInteger("nullable");

    m_nullableHasBeenSet = true;
  }

  if(jsonValue.ValueExists("precision"))
  {
    m_precision = jsonValue.GetInteger("precision");

    m_precisionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("scale"))
  {
    m_scale = jsonValue.GetInteger("scale");

    m_scaleHasBeenSet = true;
  }

  if(jsonValue.ValueExists("arrayBaseColumnType"))
  {
    m_arrayBaseColumnType = jsonValue.GetInteger("arrayBaseColumnType");

    m_arrayBaseColumnTypeHasBeenSet = true;
  }

  return *this;
}

JsonValue ColumnMetadata::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithInteger("type", m_type);

  }

  if(m_typeNameHasBeenSet)
  {
   payload.WithString("typeName", m_typeName);

  }

  if(m_labelHasBeenSet)
  {
   payload.WithString("label", m_label);

  }

  if(m_schemaNameHasBeenSet)
  {
   payload.WithString("schemaName", m_schemaName);

  }

  if(m_tableNameHasBeenSet)
  {
   payload.WithString("tableName", m_tableName);

  }

  if(m_isAutoIncrementHasBeenSet)
  {
   payload.WithBool("isAutoIncrement", m_isAutoIncrement);

  }

  if(m_isSignedHasBeenSet)
  {
   payload.WithBool("isSigned", m_isSigned);

  }

  if(m_isCurrencyHasBeenSet)
  {
   payload.WithBool("isCurrency", m_isCurrency);

  }

  if(m_isCaseSensitiveHasBeenSet)
  {
   payload.WithBool("isCaseSensitive", m_isCaseSensitive);

  }

  if(m_nullableHasBeenSet)
  {
   payload.WithInteger("nullable", m_nullable);

  }

  if(m_precisionHasBeenSet)
  {
   payload.WithInteger("precision", m_precision);

  }

  if(m_scaleHasBeenSet)
  {
   payload.WithInteger("scale", m_scale);

  }

  if(m_arrayBaseColumnTypeHasBeenSet)
  {
   payload.WithInteger("arrayBaseColumnType", m_arrayBaseColumnType);

  }

  return payload;
}

} // namespace Model
} // namespace RDSDataService
} // namespace Aws
