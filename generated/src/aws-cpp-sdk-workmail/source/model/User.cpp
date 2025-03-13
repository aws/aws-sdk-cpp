/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workmail/model/User.h>
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

User::User(JsonView jsonValue)
{
  *this = jsonValue;
}

User& User::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Id"))
  {
    m_id = jsonValue.GetString("Id");
    m_idHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Email"))
  {
    m_email = jsonValue.GetString("Email");
    m_emailHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");
    m_nameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DisplayName"))
  {
    m_displayName = jsonValue.GetString("DisplayName");
    m_displayNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("State"))
  {
    m_state = EntityStateMapper::GetEntityStateForName(jsonValue.GetString("State"));
    m_stateHasBeenSet = true;
  }
  if(jsonValue.ValueExists("UserRole"))
  {
    m_userRole = UserRoleMapper::GetUserRoleForName(jsonValue.GetString("UserRole"));
    m_userRoleHasBeenSet = true;
  }
  if(jsonValue.ValueExists("EnabledDate"))
  {
    m_enabledDate = jsonValue.GetDouble("EnabledDate");
    m_enabledDateHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DisabledDate"))
  {
    m_disabledDate = jsonValue.GetDouble("DisabledDate");
    m_disabledDateHasBeenSet = true;
  }
  if(jsonValue.ValueExists("IdentityProviderUserId"))
  {
    m_identityProviderUserId = jsonValue.GetString("IdentityProviderUserId");
    m_identityProviderUserIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("IdentityProviderIdentityStoreId"))
  {
    m_identityProviderIdentityStoreId = jsonValue.GetString("IdentityProviderIdentityStoreId");
    m_identityProviderIdentityStoreIdHasBeenSet = true;
  }
  return *this;
}

JsonValue User::Jsonize() const
{
  JsonValue payload;

  if(m_idHasBeenSet)
  {
   payload.WithString("Id", m_id);

  }

  if(m_emailHasBeenSet)
  {
   payload.WithString("Email", m_email);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_displayNameHasBeenSet)
  {
   payload.WithString("DisplayName", m_displayName);

  }

  if(m_stateHasBeenSet)
  {
   payload.WithString("State", EntityStateMapper::GetNameForEntityState(m_state));
  }

  if(m_userRoleHasBeenSet)
  {
   payload.WithString("UserRole", UserRoleMapper::GetNameForUserRole(m_userRole));
  }

  if(m_enabledDateHasBeenSet)
  {
   payload.WithDouble("EnabledDate", m_enabledDate.SecondsWithMSPrecision());
  }

  if(m_disabledDateHasBeenSet)
  {
   payload.WithDouble("DisabledDate", m_disabledDate.SecondsWithMSPrecision());
  }

  if(m_identityProviderUserIdHasBeenSet)
  {
   payload.WithString("IdentityProviderUserId", m_identityProviderUserId);

  }

  if(m_identityProviderIdentityStoreIdHasBeenSet)
  {
   payload.WithString("IdentityProviderIdentityStoreId", m_identityProviderIdentityStoreId);

  }

  return payload;
}

} // namespace Model
} // namespace WorkMail
} // namespace Aws
