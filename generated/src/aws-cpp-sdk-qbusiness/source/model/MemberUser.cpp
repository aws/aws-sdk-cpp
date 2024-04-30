/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qbusiness/model/MemberUser.h>
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

MemberUser::MemberUser() : 
    m_userIdHasBeenSet(false),
    m_type(MembershipType::NOT_SET),
    m_typeHasBeenSet(false)
{
}

MemberUser::MemberUser(JsonView jsonValue) : 
    m_userIdHasBeenSet(false),
    m_type(MembershipType::NOT_SET),
    m_typeHasBeenSet(false)
{
  *this = jsonValue;
}

MemberUser& MemberUser::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("userId"))
  {
    m_userId = jsonValue.GetString("userId");

    m_userIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("type"))
  {
    m_type = MembershipTypeMapper::GetMembershipTypeForName(jsonValue.GetString("type"));

    m_typeHasBeenSet = true;
  }

  return *this;
}

JsonValue MemberUser::Jsonize() const
{
  JsonValue payload;

  if(m_userIdHasBeenSet)
  {
   payload.WithString("userId", m_userId);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", MembershipTypeMapper::GetNameForMembershipType(m_type));
  }

  return payload;
}

} // namespace Model
} // namespace QBusiness
} // namespace Aws
