/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/schemas/model/SchemaSummary.h>
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

SchemaSummary::SchemaSummary() : 
    m_lastModifiedHasBeenSet(false),
    m_schemaArnHasBeenSet(false),
    m_schemaNameHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_versionCount(0),
    m_versionCountHasBeenSet(false)
{
}

SchemaSummary::SchemaSummary(JsonView jsonValue) : 
    m_lastModifiedHasBeenSet(false),
    m_schemaArnHasBeenSet(false),
    m_schemaNameHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_versionCount(0),
    m_versionCountHasBeenSet(false)
{
  *this = jsonValue;
}

SchemaSummary& SchemaSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("LastModified"))
  {
    m_lastModified = jsonValue.GetString("LastModified");

    m_lastModifiedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SchemaArn"))
  {
    m_schemaArn = jsonValue.GetString("SchemaArn");

    m_schemaArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SchemaName"))
  {
    m_schemaName = jsonValue.GetString("SchemaName");

    m_schemaNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("tags"))
  {
    Aws::Map<Aws::String, JsonView> tagsJsonMap = jsonValue.GetObject("tags").GetAllObjects();
    for(auto& tagsItem : tagsJsonMap)
    {
      m_tags[tagsItem.first] = tagsItem.second.AsString();
    }
    m_tagsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("VersionCount"))
  {
    m_versionCount = jsonValue.GetInt64("VersionCount");

    m_versionCountHasBeenSet = true;
  }

  return *this;
}

JsonValue SchemaSummary::Jsonize() const
{
  JsonValue payload;

  if(m_lastModifiedHasBeenSet)
  {
   payload.WithString("LastModified", m_lastModified.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_schemaArnHasBeenSet)
  {
   payload.WithString("SchemaArn", m_schemaArn);

  }

  if(m_schemaNameHasBeenSet)
  {
   payload.WithString("SchemaName", m_schemaName);

  }

  if(m_tagsHasBeenSet)
  {
   JsonValue tagsJsonMap;
   for(auto& tagsItem : m_tags)
   {
     tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
   }
   payload.WithObject("tags", std::move(tagsJsonMap));

  }

  if(m_versionCountHasBeenSet)
  {
   payload.WithInt64("VersionCount", m_versionCount);

  }

  return payload;
}

} // namespace Model
} // namespace Schemas
} // namespace Aws
