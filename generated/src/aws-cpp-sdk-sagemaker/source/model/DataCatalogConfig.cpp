/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/DataCatalogConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SageMaker
{
namespace Model
{

DataCatalogConfig::DataCatalogConfig() : 
    m_tableNameHasBeenSet(false),
    m_catalogHasBeenSet(false),
    m_databaseHasBeenSet(false)
{
}

DataCatalogConfig::DataCatalogConfig(JsonView jsonValue) : 
    m_tableNameHasBeenSet(false),
    m_catalogHasBeenSet(false),
    m_databaseHasBeenSet(false)
{
  *this = jsonValue;
}

DataCatalogConfig& DataCatalogConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("TableName"))
  {
    m_tableName = jsonValue.GetString("TableName");

    m_tableNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Catalog"))
  {
    m_catalog = jsonValue.GetString("Catalog");

    m_catalogHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Database"))
  {
    m_database = jsonValue.GetString("Database");

    m_databaseHasBeenSet = true;
  }

  return *this;
}

JsonValue DataCatalogConfig::Jsonize() const
{
  JsonValue payload;

  if(m_tableNameHasBeenSet)
  {
   payload.WithString("TableName", m_tableName);

  }

  if(m_catalogHasBeenSet)
  {
   payload.WithString("Catalog", m_catalog);

  }

  if(m_databaseHasBeenSet)
  {
   payload.WithString("Database", m_database);

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
