/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/SnowflakeParameters.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace QuickSight
{
namespace Model
{

SnowflakeParameters::SnowflakeParameters() : 
    m_hostHasBeenSet(false),
    m_databaseHasBeenSet(false),
    m_warehouseHasBeenSet(false)
{
}

SnowflakeParameters::SnowflakeParameters(JsonView jsonValue) : 
    m_hostHasBeenSet(false),
    m_databaseHasBeenSet(false),
    m_warehouseHasBeenSet(false)
{
  *this = jsonValue;
}

SnowflakeParameters& SnowflakeParameters::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Host"))
  {
    m_host = jsonValue.GetString("Host");

    m_hostHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Database"))
  {
    m_database = jsonValue.GetString("Database");

    m_databaseHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Warehouse"))
  {
    m_warehouse = jsonValue.GetString("Warehouse");

    m_warehouseHasBeenSet = true;
  }

  return *this;
}

JsonValue SnowflakeParameters::Jsonize() const
{
  JsonValue payload;

  if(m_hostHasBeenSet)
  {
   payload.WithString("Host", m_host);

  }

  if(m_databaseHasBeenSet)
  {
   payload.WithString("Database", m_database);

  }

  if(m_warehouseHasBeenSet)
  {
   payload.WithString("Warehouse", m_warehouse);

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
