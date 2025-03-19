/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qbusiness/model/PrincipalGroup.h>
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

PrincipalGroup::PrincipalGroup(JsonView jsonValue)
{
  *this = jsonValue;
}

PrincipalGroup& PrincipalGroup::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("access"))
  {
    m_access = ReadAccessTypeMapper::GetReadAccessTypeForName(jsonValue.GetString("access"));
    m_accessHasBeenSet = true;
  }
  if(jsonValue.ValueExists("membershipType"))
  {
    m_membershipType = MembershipTypeMapper::GetMembershipTypeForName(jsonValue.GetString("membershipType"));
    m_membershipTypeHasBeenSet = true;
  }
  return *this;
}

JsonValue PrincipalGroup::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_accessHasBeenSet)
  {
   payload.WithString("access", ReadAccessTypeMapper::GetNameForReadAccessType(m_access));
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
