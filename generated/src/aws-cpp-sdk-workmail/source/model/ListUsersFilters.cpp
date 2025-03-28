﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workmail/model/ListUsersFilters.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace WorkMail
{
namespace Model
{

ListUsersFilters::ListUsersFilters(JsonView jsonValue)
{
  *this = jsonValue;
}

ListUsersFilters& ListUsersFilters::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("UsernamePrefix"))
  {
    m_usernamePrefix = jsonValue.GetString("UsernamePrefix");
    m_usernamePrefixHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DisplayNamePrefix"))
  {
    m_displayNamePrefix = jsonValue.GetString("DisplayNamePrefix");
    m_displayNamePrefixHasBeenSet = true;
  }
  if(jsonValue.ValueExists("PrimaryEmailPrefix"))
  {
    m_primaryEmailPrefix = jsonValue.GetString("PrimaryEmailPrefix");
    m_primaryEmailPrefixHasBeenSet = true;
  }
  if(jsonValue.ValueExists("State"))
  {
    m_state = EntityStateMapper::GetEntityStateForName(jsonValue.GetString("State"));
    m_stateHasBeenSet = true;
  }
  if(jsonValue.ValueExists("IdentityProviderUserIdPrefix"))
  {
    m_identityProviderUserIdPrefix = jsonValue.GetString("IdentityProviderUserIdPrefix");
    m_identityProviderUserIdPrefixHasBeenSet = true;
  }
  return *this;
}

JsonValue ListUsersFilters::Jsonize() const
{
  JsonValue payload;

  if(m_usernamePrefixHasBeenSet)
  {
   payload.WithString("UsernamePrefix", m_usernamePrefix);

  }

  if(m_displayNamePrefixHasBeenSet)
  {
   payload.WithString("DisplayNamePrefix", m_displayNamePrefix);

  }

  if(m_primaryEmailPrefixHasBeenSet)
  {
   payload.WithString("PrimaryEmailPrefix", m_primaryEmailPrefix);

  }

  if(m_stateHasBeenSet)
  {
   payload.WithString("State", EntityStateMapper::GetNameForEntityState(m_state));
  }

  if(m_identityProviderUserIdPrefixHasBeenSet)
  {
   payload.WithString("IdentityProviderUserIdPrefix", m_identityProviderUserIdPrefix);

  }

  return payload;
}

} // namespace Model
} // namespace WorkMail
} // namespace Aws
