/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sso-admin/model/AccountAssignment.h>
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

AccountAssignment::AccountAssignment() : 
    m_accountIdHasBeenSet(false),
    m_permissionSetArnHasBeenSet(false),
    m_principalType(PrincipalType::NOT_SET),
    m_principalTypeHasBeenSet(false),
    m_principalIdHasBeenSet(false)
{
}

AccountAssignment::AccountAssignment(JsonView jsonValue) : 
    m_accountIdHasBeenSet(false),
    m_permissionSetArnHasBeenSet(false),
    m_principalType(PrincipalType::NOT_SET),
    m_principalTypeHasBeenSet(false),
    m_principalIdHasBeenSet(false)
{
  *this = jsonValue;
}

AccountAssignment& AccountAssignment::operator =(JsonView jsonValue)
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

  if(jsonValue.ValueExists("PrincipalType"))
  {
    m_principalType = PrincipalTypeMapper::GetPrincipalTypeForName(jsonValue.GetString("PrincipalType"));

    m_principalTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PrincipalId"))
  {
    m_principalId = jsonValue.GetString("PrincipalId");

    m_principalIdHasBeenSet = true;
  }

  return *this;
}

JsonValue AccountAssignment::Jsonize() const
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

  if(m_principalTypeHasBeenSet)
  {
   payload.WithString("PrincipalType", PrincipalTypeMapper::GetNameForPrincipalType(m_principalType));
  }

  if(m_principalIdHasBeenSet)
  {
   payload.WithString("PrincipalId", m_principalId);

  }

  return payload;
}

} // namespace Model
} // namespace SSOAdmin
} // namespace Aws
