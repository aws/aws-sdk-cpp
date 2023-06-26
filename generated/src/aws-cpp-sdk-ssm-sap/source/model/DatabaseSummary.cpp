/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm-sap/model/DatabaseSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SsmSap
{
namespace Model
{

DatabaseSummary::DatabaseSummary() : 
    m_applicationIdHasBeenSet(false),
    m_componentIdHasBeenSet(false),
    m_databaseIdHasBeenSet(false),
    m_databaseType(DatabaseType::NOT_SET),
    m_databaseTypeHasBeenSet(false),
    m_arnHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

DatabaseSummary::DatabaseSummary(JsonView jsonValue) : 
    m_applicationIdHasBeenSet(false),
    m_componentIdHasBeenSet(false),
    m_databaseIdHasBeenSet(false),
    m_databaseType(DatabaseType::NOT_SET),
    m_databaseTypeHasBeenSet(false),
    m_arnHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
  *this = jsonValue;
}

DatabaseSummary& DatabaseSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ApplicationId"))
  {
    m_applicationId = jsonValue.GetString("ApplicationId");

    m_applicationIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ComponentId"))
  {
    m_componentId = jsonValue.GetString("ComponentId");

    m_componentIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DatabaseId"))
  {
    m_databaseId = jsonValue.GetString("DatabaseId");

    m_databaseIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DatabaseType"))
  {
    m_databaseType = DatabaseTypeMapper::GetDatabaseTypeForName(jsonValue.GetString("DatabaseType"));

    m_databaseTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Arn"))
  {
    m_arn = jsonValue.GetString("Arn");

    m_arnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Tags"))
  {
    Aws::Map<Aws::String, JsonView> tagsJsonMap = jsonValue.GetObject("Tags").GetAllObjects();
    for(auto& tagsItem : tagsJsonMap)
    {
      m_tags[tagsItem.first] = tagsItem.second.AsString();
    }
    m_tagsHasBeenSet = true;
  }

  return *this;
}

JsonValue DatabaseSummary::Jsonize() const
{
  JsonValue payload;

  if(m_applicationIdHasBeenSet)
  {
   payload.WithString("ApplicationId", m_applicationId);

  }

  if(m_componentIdHasBeenSet)
  {
   payload.WithString("ComponentId", m_componentId);

  }

  if(m_databaseIdHasBeenSet)
  {
   payload.WithString("DatabaseId", m_databaseId);

  }

  if(m_databaseTypeHasBeenSet)
  {
   payload.WithString("DatabaseType", DatabaseTypeMapper::GetNameForDatabaseType(m_databaseType));
  }

  if(m_arnHasBeenSet)
  {
   payload.WithString("Arn", m_arn);

  }

  if(m_tagsHasBeenSet)
  {
   JsonValue tagsJsonMap;
   for(auto& tagsItem : m_tags)
   {
     tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
   }
   payload.WithObject("Tags", std::move(tagsJsonMap));

  }

  return payload;
}

} // namespace Model
} // namespace SsmSap
} // namespace Aws
