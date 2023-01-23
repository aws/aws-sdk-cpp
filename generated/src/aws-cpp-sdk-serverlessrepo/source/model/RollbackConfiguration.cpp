/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/serverlessrepo/model/RollbackConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ServerlessApplicationRepository
{
namespace Model
{

RollbackConfiguration::RollbackConfiguration() : 
    m_monitoringTimeInMinutes(0),
    m_monitoringTimeInMinutesHasBeenSet(false),
    m_rollbackTriggersHasBeenSet(false)
{
}

RollbackConfiguration::RollbackConfiguration(JsonView jsonValue) : 
    m_monitoringTimeInMinutes(0),
    m_monitoringTimeInMinutesHasBeenSet(false),
    m_rollbackTriggersHasBeenSet(false)
{
  *this = jsonValue;
}

RollbackConfiguration& RollbackConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("monitoringTimeInMinutes"))
  {
    m_monitoringTimeInMinutes = jsonValue.GetInteger("monitoringTimeInMinutes");

    m_monitoringTimeInMinutesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("rollbackTriggers"))
  {
    Aws::Utils::Array<JsonView> rollbackTriggersJsonList = jsonValue.GetArray("rollbackTriggers");
    for(unsigned rollbackTriggersIndex = 0; rollbackTriggersIndex < rollbackTriggersJsonList.GetLength(); ++rollbackTriggersIndex)
    {
      m_rollbackTriggers.push_back(rollbackTriggersJsonList[rollbackTriggersIndex].AsObject());
    }
    m_rollbackTriggersHasBeenSet = true;
  }

  return *this;
}

JsonValue RollbackConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_monitoringTimeInMinutesHasBeenSet)
  {
   payload.WithInteger("monitoringTimeInMinutes", m_monitoringTimeInMinutes);

  }

  if(m_rollbackTriggersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> rollbackTriggersJsonList(m_rollbackTriggers.size());
   for(unsigned rollbackTriggersIndex = 0; rollbackTriggersIndex < rollbackTriggersJsonList.GetLength(); ++rollbackTriggersIndex)
   {
     rollbackTriggersJsonList[rollbackTriggersIndex].AsObject(m_rollbackTriggers[rollbackTriggersIndex].Jsonize());
   }
   payload.WithArray("rollbackTriggers", std::move(rollbackTriggersJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace ServerlessApplicationRepository
} // namespace Aws
