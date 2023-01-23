/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsEcsTaskDefinitionContainerDefinitionsHealthCheckDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SecurityHub
{
namespace Model
{

AwsEcsTaskDefinitionContainerDefinitionsHealthCheckDetails::AwsEcsTaskDefinitionContainerDefinitionsHealthCheckDetails() : 
    m_commandHasBeenSet(false),
    m_interval(0),
    m_intervalHasBeenSet(false),
    m_retries(0),
    m_retriesHasBeenSet(false),
    m_startPeriod(0),
    m_startPeriodHasBeenSet(false),
    m_timeout(0),
    m_timeoutHasBeenSet(false)
{
}

AwsEcsTaskDefinitionContainerDefinitionsHealthCheckDetails::AwsEcsTaskDefinitionContainerDefinitionsHealthCheckDetails(JsonView jsonValue) : 
    m_commandHasBeenSet(false),
    m_interval(0),
    m_intervalHasBeenSet(false),
    m_retries(0),
    m_retriesHasBeenSet(false),
    m_startPeriod(0),
    m_startPeriodHasBeenSet(false),
    m_timeout(0),
    m_timeoutHasBeenSet(false)
{
  *this = jsonValue;
}

AwsEcsTaskDefinitionContainerDefinitionsHealthCheckDetails& AwsEcsTaskDefinitionContainerDefinitionsHealthCheckDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Command"))
  {
    Aws::Utils::Array<JsonView> commandJsonList = jsonValue.GetArray("Command");
    for(unsigned commandIndex = 0; commandIndex < commandJsonList.GetLength(); ++commandIndex)
    {
      m_command.push_back(commandJsonList[commandIndex].AsString());
    }
    m_commandHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Interval"))
  {
    m_interval = jsonValue.GetInteger("Interval");

    m_intervalHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Retries"))
  {
    m_retries = jsonValue.GetInteger("Retries");

    m_retriesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StartPeriod"))
  {
    m_startPeriod = jsonValue.GetInteger("StartPeriod");

    m_startPeriodHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Timeout"))
  {
    m_timeout = jsonValue.GetInteger("Timeout");

    m_timeoutHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsEcsTaskDefinitionContainerDefinitionsHealthCheckDetails::Jsonize() const
{
  JsonValue payload;

  if(m_commandHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> commandJsonList(m_command.size());
   for(unsigned commandIndex = 0; commandIndex < commandJsonList.GetLength(); ++commandIndex)
   {
     commandJsonList[commandIndex].AsString(m_command[commandIndex]);
   }
   payload.WithArray("Command", std::move(commandJsonList));

  }

  if(m_intervalHasBeenSet)
  {
   payload.WithInteger("Interval", m_interval);

  }

  if(m_retriesHasBeenSet)
  {
   payload.WithInteger("Retries", m_retries);

  }

  if(m_startPeriodHasBeenSet)
  {
   payload.WithInteger("StartPeriod", m_startPeriod);

  }

  if(m_timeoutHasBeenSet)
  {
   payload.WithInteger("Timeout", m_timeout);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
