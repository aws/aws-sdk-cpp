/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qbusiness/model/UsersAndGroups.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace QBusiness
{
namespace Model
{

UsersAndGroups::UsersAndGroups() : 
    m_userGroupsHasBeenSet(false),
    m_userIdsHasBeenSet(false)
{
}

UsersAndGroups::UsersAndGroups(JsonView jsonValue) : 
    m_userGroupsHasBeenSet(false),
    m_userIdsHasBeenSet(false)
{
  *this = jsonValue;
}

UsersAndGroups& UsersAndGroups::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("userGroups"))
  {
    Aws::Utils::Array<JsonView> userGroupsJsonList = jsonValue.GetArray("userGroups");
    for(unsigned userGroupsIndex = 0; userGroupsIndex < userGroupsJsonList.GetLength(); ++userGroupsIndex)
    {
      m_userGroups.push_back(userGroupsJsonList[userGroupsIndex].AsString());
    }
    m_userGroupsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("userIds"))
  {
    Aws::Utils::Array<JsonView> userIdsJsonList = jsonValue.GetArray("userIds");
    for(unsigned userIdsIndex = 0; userIdsIndex < userIdsJsonList.GetLength(); ++userIdsIndex)
    {
      m_userIds.push_back(userIdsJsonList[userIdsIndex].AsString());
    }
    m_userIdsHasBeenSet = true;
  }

  return *this;
}

JsonValue UsersAndGroups::Jsonize() const
{
  JsonValue payload;

  if(m_userGroupsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> userGroupsJsonList(m_userGroups.size());
   for(unsigned userGroupsIndex = 0; userGroupsIndex < userGroupsJsonList.GetLength(); ++userGroupsIndex)
   {
     userGroupsJsonList[userGroupsIndex].AsString(m_userGroups[userGroupsIndex]);
   }
   payload.WithArray("userGroups", std::move(userGroupsJsonList));

  }

  if(m_userIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> userIdsJsonList(m_userIds.size());
   for(unsigned userIdsIndex = 0; userIdsIndex < userIdsJsonList.GetLength(); ++userIdsIndex)
   {
     userIdsJsonList[userIdsIndex].AsString(m_userIds[userIdsIndex]);
   }
   payload.WithArray("userIds", std::move(userIdsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace QBusiness
} // namespace Aws
