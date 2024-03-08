/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qbusiness/model/MemberGroup.h>
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

MemberGroup::MemberGroup() : 
    m_groupNameHasBeenSet(false),
    m_type(MembershipType::NOT_SET),
    m_typeHasBeenSet(false)
{
}

MemberGroup::MemberGroup(JsonView jsonValue) : 
    m_groupNameHasBeenSet(false),
    m_type(MembershipType::NOT_SET),
    m_typeHasBeenSet(false)
{
  *this = jsonValue;
}

MemberGroup& MemberGroup::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("groupName"))
  {
    m_groupName = jsonValue.GetString("groupName");

    m_groupNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("type"))
  {
    m_type = MembershipTypeMapper::GetMembershipTypeForName(jsonValue.GetString("type"));

    m_typeHasBeenSet = true;
  }

  return *this;
}

JsonValue MemberGroup::Jsonize() const
{
  JsonValue payload;

  if(m_groupNameHasBeenSet)
  {
   payload.WithString("groupName", m_groupName);

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
