/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/schemas/model/SearchSchemaVersionSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Schemas
{
namespace Model
{

SearchSchemaVersionSummary::SearchSchemaVersionSummary() : 
    m_createdDateHasBeenSet(false),
    m_schemaVersionHasBeenSet(false),
    m_type(Type::NOT_SET),
    m_typeHasBeenSet(false)
{
}

SearchSchemaVersionSummary::SearchSchemaVersionSummary(JsonView jsonValue) : 
    m_createdDateHasBeenSet(false),
    m_schemaVersionHasBeenSet(false),
    m_type(Type::NOT_SET),
    m_typeHasBeenSet(false)
{
  *this = jsonValue;
}

SearchSchemaVersionSummary& SearchSchemaVersionSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CreatedDate"))
  {
    m_createdDate = jsonValue.GetString("CreatedDate");

    m_createdDateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SchemaVersion"))
  {
    m_schemaVersion = jsonValue.GetString("SchemaVersion");

    m_schemaVersionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Type"))
  {
    m_type = TypeMapper::GetTypeForName(jsonValue.GetString("Type"));

    m_typeHasBeenSet = true;
  }

  return *this;
}

JsonValue SearchSchemaVersionSummary::Jsonize() const
{
  JsonValue payload;

  if(m_createdDateHasBeenSet)
  {
   payload.WithString("CreatedDate", m_createdDate.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_schemaVersionHasBeenSet)
  {
   payload.WithString("SchemaVersion", m_schemaVersion);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", TypeMapper::GetNameForType(m_type));
  }

  return payload;
}

} // namespace Model
} // namespace Schemas
} // namespace Aws
