/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/snowball/model/LambdaResource.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Snowball
{
namespace Model
{

LambdaResource::LambdaResource() : 
    m_lambdaArnHasBeenSet(false),
    m_eventTriggersHasBeenSet(false)
{
}

LambdaResource::LambdaResource(JsonView jsonValue) : 
    m_lambdaArnHasBeenSet(false),
    m_eventTriggersHasBeenSet(false)
{
  *this = jsonValue;
}

LambdaResource& LambdaResource::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("LambdaArn"))
  {
    m_lambdaArn = jsonValue.GetString("LambdaArn");

    m_lambdaArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EventTriggers"))
  {
    Aws::Utils::Array<JsonView> eventTriggersJsonList = jsonValue.GetArray("EventTriggers");
    for(unsigned eventTriggersIndex = 0; eventTriggersIndex < eventTriggersJsonList.GetLength(); ++eventTriggersIndex)
    {
      m_eventTriggers.push_back(eventTriggersJsonList[eventTriggersIndex].AsObject());
    }
    m_eventTriggersHasBeenSet = true;
  }

  return *this;
}

JsonValue LambdaResource::Jsonize() const
{
  JsonValue payload;

  if(m_lambdaArnHasBeenSet)
  {
   payload.WithString("LambdaArn", m_lambdaArn);

  }

  if(m_eventTriggersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> eventTriggersJsonList(m_eventTriggers.size());
   for(unsigned eventTriggersIndex = 0; eventTriggersIndex < eventTriggersJsonList.GetLength(); ++eventTriggersIndex)
   {
     eventTriggersJsonList[eventTriggersIndex].AsObject(m_eventTriggers[eventTriggersIndex].Jsonize());
   }
   payload.WithArray("EventTriggers", std::move(eventTriggersJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Snowball
} // namespace Aws
