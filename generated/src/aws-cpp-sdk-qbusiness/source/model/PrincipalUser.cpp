/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qbusiness/model/PrincipalUser.h>
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

PrincipalUser::PrincipalUser() : 
    m_access(ReadAccessType::NOT_SET),
    m_accessHasBeenSet(false),
    m_idHasBeenSet(false),
    m_membershipType(MembershipType::NOT_SET),
    m_membershipTypeHasBeenSet(false)
{
}

PrincipalUser::PrincipalUser(JsonView jsonValue) : 
    m_access(ReadAccessType::NOT_SET),
    m_accessHasBeenSet(false),
    m_idHasBeenSet(false),
    m_membershipType(MembershipType::NOT_SET),
    m_membershipTypeHasBeenSet(false)
{
  *this = jsonValue;
}

PrincipalUser& PrincipalUser::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("access"))
  {
    m_access = ReadAccessTypeMapper::GetReadAccessTypeForName(jsonValue.GetString("access"));

    m_accessHasBeenSet = true;
  }

  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("membershipType"))
  {
    m_membershipType = MembershipTypeMapper::GetMembershipTypeForName(jsonValue.GetString("membershipType"));

    m_membershipTypeHasBeenSet = true;
  }

  return *this;
}

JsonValue PrincipalUser::Jsonize() const
{
  JsonValue payload;

  if(m_accessHasBeenSet)
  {
   payload.WithString("access", ReadAccessTypeMapper::GetNameForReadAccessType(m_access));
  }

  if(m_idHasBeenSet)
  {
   payload.WithString("id", m_id);

  }

  if(m_membershipTypeHasBeenSet)
  {
   payload.WithString("membershipType", MembershipTypeMapper::GetNameForMembershipType(m_membershipType));
  }

  return payload;
}

} // namespace Model
} // namespace QBusiness
} // namespace Aws
