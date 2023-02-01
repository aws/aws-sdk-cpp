/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm/model/OpsItemLimitExceededException.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SSM
{
namespace Model
{

OpsItemLimitExceededException::OpsItemLimitExceededException() : 
    m_resourceTypesHasBeenSet(false),
    m_limit(0),
    m_limitHasBeenSet(false),
    m_limitTypeHasBeenSet(false),
    m_messageHasBeenSet(false)
{
}

OpsItemLimitExceededException::OpsItemLimitExceededException(JsonView jsonValue) : 
    m_resourceTypesHasBeenSet(false),
    m_limit(0),
    m_limitHasBeenSet(false),
    m_limitTypeHasBeenSet(false),
    m_messageHasBeenSet(false)
{
  *this = jsonValue;
}

OpsItemLimitExceededException& OpsItemLimitExceededException::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ResourceTypes"))
  {
    Aws::Utils::Array<JsonView> resourceTypesJsonList = jsonValue.GetArray("ResourceTypes");
    for(unsigned resourceTypesIndex = 0; resourceTypesIndex < resourceTypesJsonList.GetLength(); ++resourceTypesIndex)
    {
      m_resourceTypes.push_back(resourceTypesJsonList[resourceTypesIndex].AsString());
    }
    m_resourceTypesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Limit"))
  {
    m_limit = jsonValue.GetInteger("Limit");

    m_limitHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LimitType"))
  {
    m_limitType = jsonValue.GetString("LimitType");

    m_limitTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Message"))
  {
    m_message = jsonValue.GetString("Message");

    m_messageHasBeenSet = true;
  }

  return *this;
}

JsonValue OpsItemLimitExceededException::Jsonize() const
{
  JsonValue payload;

  if(m_resourceTypesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> resourceTypesJsonList(m_resourceTypes.size());
   for(unsigned resourceTypesIndex = 0; resourceTypesIndex < resourceTypesJsonList.GetLength(); ++resourceTypesIndex)
   {
     resourceTypesJsonList[resourceTypesIndex].AsString(m_resourceTypes[resourceTypesIndex]);
   }
   payload.WithArray("ResourceTypes", std::move(resourceTypesJsonList));

  }

  if(m_limitHasBeenSet)
  {
   payload.WithInteger("Limit", m_limit);

  }

  if(m_limitTypeHasBeenSet)
  {
   payload.WithString("LimitType", m_limitType);

  }

  if(m_messageHasBeenSet)
  {
   payload.WithString("Message", m_message);

  }

  return payload;
}

} // namespace Model
} // namespace SSM
} // namespace Aws
