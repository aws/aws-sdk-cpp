/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/RdsParameters.h>
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

RdsParameters::RdsParameters() : 
    m_instanceIdHasBeenSet(false),
    m_databaseHasBeenSet(false)
{
}

RdsParameters::RdsParameters(JsonView jsonValue) : 
    m_instanceIdHasBeenSet(false),
    m_databaseHasBeenSet(false)
{
  *this = jsonValue;
}

RdsParameters& RdsParameters::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("InstanceId"))
  {
    m_instanceId = jsonValue.GetString("InstanceId");

    m_instanceIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Database"))
  {
    m_database = jsonValue.GetString("Database");

    m_databaseHasBeenSet = true;
  }

  return *this;
}

JsonValue RdsParameters::Jsonize() const
{
  JsonValue payload;

  if(m_instanceIdHasBeenSet)
  {
   payload.WithString("InstanceId", m_instanceId);

  }

  if(m_databaseHasBeenSet)
  {
   payload.WithString("Database", m_database);

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
