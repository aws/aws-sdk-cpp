/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/FolderMember.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace QuickSight
{
namespace Model
{

FolderMember::FolderMember(JsonView jsonValue)
{
  *this = jsonValue;
}

FolderMember& FolderMember::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("MemberId"))
  {
    m_memberId = jsonValue.GetString("MemberId");
    m_memberIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("MemberType"))
  {
    m_memberType = MemberTypeMapper::GetMemberTypeForName(jsonValue.GetString("MemberType"));
    m_memberTypeHasBeenSet = true;
  }
  return *this;
}

JsonValue FolderMember::Jsonize() const
{
  JsonValue payload;

  if(m_memberIdHasBeenSet)
  {
   payload.WithString("MemberId", m_memberId);

  }

  if(m_memberTypeHasBeenSet)
  {
   payload.WithString("MemberType", MemberTypeMapper::GetNameForMemberType(m_memberType));
  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
