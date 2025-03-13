/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sso-admin/model/AccountAssignmentForPrincipal.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SSOAdmin
{
namespace Model
{

AccountAssignmentForPrincipal::AccountAssignmentForPrincipal(JsonView jsonValue)
{
  *this = jsonValue;
}

AccountAssignmentForPrincipal& AccountAssignmentForPrincipal::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AccountId"))
  {
    m_accountId = jsonValue.GetString("AccountId");
    m_accountIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("PermissionSetArn"))
  {
    m_permissionSetArn = jsonValue.GetString("PermissionSetArn");
    m_permissionSetArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("PrincipalId"))
  {
    m_principalId = jsonValue.GetString("PrincipalId");
    m_principalIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("PrincipalType"))
  {
    m_principalType = PrincipalTypeMapper::GetPrincipalTypeForName(jsonValue.GetString("PrincipalType"));
    m_principalTypeHasBeenSet = true;
  }
  return *this;
}

JsonValue AccountAssignmentForPrincipal::Jsonize() const
{
  JsonValue payload;

  if(m_accountIdHasBeenSet)
  {
   payload.WithString("AccountId", m_accountId);

  }

  if(m_permissionSetArnHasBeenSet)
  {
   payload.WithString("PermissionSetArn", m_permissionSetArn);

  }

  if(m_principalIdHasBeenSet)
  {
   payload.WithString("PrincipalId", m_principalId);

  }

  if(m_principalTypeHasBeenSet)
  {
   payload.WithString("PrincipalType", PrincipalTypeMapper::GetNameForPrincipalType(m_principalType));
  }

  return payload;
}

} // namespace Model
} // namespace SSOAdmin
} // namespace Aws
