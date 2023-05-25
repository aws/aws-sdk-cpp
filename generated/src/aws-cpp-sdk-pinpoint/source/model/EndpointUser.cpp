/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint/model/EndpointUser.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Pinpoint
{
namespace Model
{

EndpointUser::EndpointUser() : 
    m_userAttributesHasBeenSet(false),
    m_userIdHasBeenSet(false)
{
}

EndpointUser::EndpointUser(JsonView jsonValue) : 
    m_userAttributesHasBeenSet(false),
    m_userIdHasBeenSet(false)
{
  *this = jsonValue;
}

EndpointUser& EndpointUser::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("UserAttributes"))
  {
    Aws::Map<Aws::String, JsonView> userAttributesJsonMap = jsonValue.GetObject("UserAttributes").GetAllObjects();
    for(auto& userAttributesItem : userAttributesJsonMap)
    {
      Aws::Utils::Array<JsonView> listOf__stringJsonList = userAttributesItem.second.AsArray();
      Aws::Vector<Aws::String> listOf__stringList;
      listOf__stringList.reserve((size_t)listOf__stringJsonList.GetLength());
      for(unsigned listOf__stringIndex = 0; listOf__stringIndex < listOf__stringJsonList.GetLength(); ++listOf__stringIndex)
      {
        listOf__stringList.push_back(listOf__stringJsonList[listOf__stringIndex].AsString());
      }
      m_userAttributes[userAttributesItem.first] = std::move(listOf__stringList);
    }
    m_userAttributesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("UserId"))
  {
    m_userId = jsonValue.GetString("UserId");

    m_userIdHasBeenSet = true;
  }

  return *this;
}

JsonValue EndpointUser::Jsonize() const
{
  JsonValue payload;

  if(m_userAttributesHasBeenSet)
  {
   JsonValue userAttributesJsonMap;
   for(auto& userAttributesItem : m_userAttributes)
   {
     Aws::Utils::Array<JsonValue> listOf__stringJsonList(userAttributesItem.second.size());
     for(unsigned listOf__stringIndex = 0; listOf__stringIndex < listOf__stringJsonList.GetLength(); ++listOf__stringIndex)
     {
       listOf__stringJsonList[listOf__stringIndex].AsString(userAttributesItem.second[listOf__stringIndex]);
     }
     userAttributesJsonMap.WithArray(userAttributesItem.first, std::move(listOf__stringJsonList));
   }
   payload.WithObject("UserAttributes", std::move(userAttributesJsonMap));

  }

  if(m_userIdHasBeenSet)
  {
   payload.WithString("UserId", m_userId);

  }

  return payload;
}

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
