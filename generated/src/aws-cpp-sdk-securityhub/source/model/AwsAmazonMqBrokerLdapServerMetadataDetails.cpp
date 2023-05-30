/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsAmazonMqBrokerLdapServerMetadataDetails.h>
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

AwsAmazonMqBrokerLdapServerMetadataDetails::AwsAmazonMqBrokerLdapServerMetadataDetails() : 
    m_hostsHasBeenSet(false),
    m_roleBaseHasBeenSet(false),
    m_roleNameHasBeenSet(false),
    m_roleSearchMatchingHasBeenSet(false),
    m_roleSearchSubtree(false),
    m_roleSearchSubtreeHasBeenSet(false),
    m_serviceAccountUsernameHasBeenSet(false),
    m_userBaseHasBeenSet(false),
    m_userRoleNameHasBeenSet(false),
    m_userSearchMatchingHasBeenSet(false),
    m_userSearchSubtree(false),
    m_userSearchSubtreeHasBeenSet(false)
{
}

AwsAmazonMqBrokerLdapServerMetadataDetails::AwsAmazonMqBrokerLdapServerMetadataDetails(JsonView jsonValue) : 
    m_hostsHasBeenSet(false),
    m_roleBaseHasBeenSet(false),
    m_roleNameHasBeenSet(false),
    m_roleSearchMatchingHasBeenSet(false),
    m_roleSearchSubtree(false),
    m_roleSearchSubtreeHasBeenSet(false),
    m_serviceAccountUsernameHasBeenSet(false),
    m_userBaseHasBeenSet(false),
    m_userRoleNameHasBeenSet(false),
    m_userSearchMatchingHasBeenSet(false),
    m_userSearchSubtree(false),
    m_userSearchSubtreeHasBeenSet(false)
{
  *this = jsonValue;
}

AwsAmazonMqBrokerLdapServerMetadataDetails& AwsAmazonMqBrokerLdapServerMetadataDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Hosts"))
  {
    Aws::Utils::Array<JsonView> hostsJsonList = jsonValue.GetArray("Hosts");
    for(unsigned hostsIndex = 0; hostsIndex < hostsJsonList.GetLength(); ++hostsIndex)
    {
      m_hosts.push_back(hostsJsonList[hostsIndex].AsString());
    }
    m_hostsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RoleBase"))
  {
    m_roleBase = jsonValue.GetString("RoleBase");

    m_roleBaseHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RoleName"))
  {
    m_roleName = jsonValue.GetString("RoleName");

    m_roleNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RoleSearchMatching"))
  {
    m_roleSearchMatching = jsonValue.GetString("RoleSearchMatching");

    m_roleSearchMatchingHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RoleSearchSubtree"))
  {
    m_roleSearchSubtree = jsonValue.GetBool("RoleSearchSubtree");

    m_roleSearchSubtreeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ServiceAccountUsername"))
  {
    m_serviceAccountUsername = jsonValue.GetString("ServiceAccountUsername");

    m_serviceAccountUsernameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("UserBase"))
  {
    m_userBase = jsonValue.GetString("UserBase");

    m_userBaseHasBeenSet = true;
  }

  if(jsonValue.ValueExists("UserRoleName"))
  {
    m_userRoleName = jsonValue.GetString("UserRoleName");

    m_userRoleNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("UserSearchMatching"))
  {
    m_userSearchMatching = jsonValue.GetString("UserSearchMatching");

    m_userSearchMatchingHasBeenSet = true;
  }

  if(jsonValue.ValueExists("UserSearchSubtree"))
  {
    m_userSearchSubtree = jsonValue.GetBool("UserSearchSubtree");

    m_userSearchSubtreeHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsAmazonMqBrokerLdapServerMetadataDetails::Jsonize() const
{
  JsonValue payload;

  if(m_hostsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> hostsJsonList(m_hosts.size());
   for(unsigned hostsIndex = 0; hostsIndex < hostsJsonList.GetLength(); ++hostsIndex)
   {
     hostsJsonList[hostsIndex].AsString(m_hosts[hostsIndex]);
   }
   payload.WithArray("Hosts", std::move(hostsJsonList));

  }

  if(m_roleBaseHasBeenSet)
  {
   payload.WithString("RoleBase", m_roleBase);

  }

  if(m_roleNameHasBeenSet)
  {
   payload.WithString("RoleName", m_roleName);

  }

  if(m_roleSearchMatchingHasBeenSet)
  {
   payload.WithString("RoleSearchMatching", m_roleSearchMatching);

  }

  if(m_roleSearchSubtreeHasBeenSet)
  {
   payload.WithBool("RoleSearchSubtree", m_roleSearchSubtree);

  }

  if(m_serviceAccountUsernameHasBeenSet)
  {
   payload.WithString("ServiceAccountUsername", m_serviceAccountUsername);

  }

  if(m_userBaseHasBeenSet)
  {
   payload.WithString("UserBase", m_userBase);

  }

  if(m_userRoleNameHasBeenSet)
  {
   payload.WithString("UserRoleName", m_userRoleName);

  }

  if(m_userSearchMatchingHasBeenSet)
  {
   payload.WithString("UserSearchMatching", m_userSearchMatching);

  }

  if(m_userSearchSubtreeHasBeenSet)
  {
   payload.WithBool("UserSearchSubtree", m_userSearchSubtree);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
