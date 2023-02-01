/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mq/model/LdapServerMetadataOutput.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MQ
{
namespace Model
{

LdapServerMetadataOutput::LdapServerMetadataOutput() : 
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

LdapServerMetadataOutput::LdapServerMetadataOutput(JsonView jsonValue) : 
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

LdapServerMetadataOutput& LdapServerMetadataOutput::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("hosts"))
  {
    Aws::Utils::Array<JsonView> hostsJsonList = jsonValue.GetArray("hosts");
    for(unsigned hostsIndex = 0; hostsIndex < hostsJsonList.GetLength(); ++hostsIndex)
    {
      m_hosts.push_back(hostsJsonList[hostsIndex].AsString());
    }
    m_hostsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("roleBase"))
  {
    m_roleBase = jsonValue.GetString("roleBase");

    m_roleBaseHasBeenSet = true;
  }

  if(jsonValue.ValueExists("roleName"))
  {
    m_roleName = jsonValue.GetString("roleName");

    m_roleNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("roleSearchMatching"))
  {
    m_roleSearchMatching = jsonValue.GetString("roleSearchMatching");

    m_roleSearchMatchingHasBeenSet = true;
  }

  if(jsonValue.ValueExists("roleSearchSubtree"))
  {
    m_roleSearchSubtree = jsonValue.GetBool("roleSearchSubtree");

    m_roleSearchSubtreeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("serviceAccountUsername"))
  {
    m_serviceAccountUsername = jsonValue.GetString("serviceAccountUsername");

    m_serviceAccountUsernameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("userBase"))
  {
    m_userBase = jsonValue.GetString("userBase");

    m_userBaseHasBeenSet = true;
  }

  if(jsonValue.ValueExists("userRoleName"))
  {
    m_userRoleName = jsonValue.GetString("userRoleName");

    m_userRoleNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("userSearchMatching"))
  {
    m_userSearchMatching = jsonValue.GetString("userSearchMatching");

    m_userSearchMatchingHasBeenSet = true;
  }

  if(jsonValue.ValueExists("userSearchSubtree"))
  {
    m_userSearchSubtree = jsonValue.GetBool("userSearchSubtree");

    m_userSearchSubtreeHasBeenSet = true;
  }

  return *this;
}

JsonValue LdapServerMetadataOutput::Jsonize() const
{
  JsonValue payload;

  if(m_hostsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> hostsJsonList(m_hosts.size());
   for(unsigned hostsIndex = 0; hostsIndex < hostsJsonList.GetLength(); ++hostsIndex)
   {
     hostsJsonList[hostsIndex].AsString(m_hosts[hostsIndex]);
   }
   payload.WithArray("hosts", std::move(hostsJsonList));

  }

  if(m_roleBaseHasBeenSet)
  {
   payload.WithString("roleBase", m_roleBase);

  }

  if(m_roleNameHasBeenSet)
  {
   payload.WithString("roleName", m_roleName);

  }

  if(m_roleSearchMatchingHasBeenSet)
  {
   payload.WithString("roleSearchMatching", m_roleSearchMatching);

  }

  if(m_roleSearchSubtreeHasBeenSet)
  {
   payload.WithBool("roleSearchSubtree", m_roleSearchSubtree);

  }

  if(m_serviceAccountUsernameHasBeenSet)
  {
   payload.WithString("serviceAccountUsername", m_serviceAccountUsername);

  }

  if(m_userBaseHasBeenSet)
  {
   payload.WithString("userBase", m_userBase);

  }

  if(m_userRoleNameHasBeenSet)
  {
   payload.WithString("userRoleName", m_userRoleName);

  }

  if(m_userSearchMatchingHasBeenSet)
  {
   payload.WithString("userSearchMatching", m_userSearchMatching);

  }

  if(m_userSearchSubtreeHasBeenSet)
  {
   payload.WithBool("userSearchSubtree", m_userSearchSubtree);

  }

  return payload;
}

} // namespace Model
} // namespace MQ
} // namespace Aws
