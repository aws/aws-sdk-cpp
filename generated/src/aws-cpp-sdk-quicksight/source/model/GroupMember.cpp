/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/GroupMember.h>
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

GroupMember::GroupMember() : 
    m_arnHasBeenSet(false),
    m_memberNameHasBeenSet(false)
{
}

GroupMember::GroupMember(JsonView jsonValue) : 
    m_arnHasBeenSet(false),
    m_memberNameHasBeenSet(false)
{
  *this = jsonValue;
}

GroupMember& GroupMember::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Arn"))
  {
    m_arn = jsonValue.GetString("Arn");

    m_arnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MemberName"))
  {
    m_memberName = jsonValue.GetString("MemberName");

    m_memberNameHasBeenSet = true;
  }

  return *this;
}

JsonValue GroupMember::Jsonize() const
{
  JsonValue payload;

  if(m_arnHasBeenSet)
  {
   payload.WithString("Arn", m_arn);

  }

  if(m_memberNameHasBeenSet)
  {
   payload.WithString("MemberName", m_memberName);

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
