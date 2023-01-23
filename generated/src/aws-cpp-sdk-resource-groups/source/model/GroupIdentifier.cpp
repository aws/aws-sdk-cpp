/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/resource-groups/model/GroupIdentifier.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ResourceGroups
{
namespace Model
{

GroupIdentifier::GroupIdentifier() : 
    m_groupNameHasBeenSet(false),
    m_groupArnHasBeenSet(false)
{
}

GroupIdentifier::GroupIdentifier(JsonView jsonValue) : 
    m_groupNameHasBeenSet(false),
    m_groupArnHasBeenSet(false)
{
  *this = jsonValue;
}

GroupIdentifier& GroupIdentifier::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("GroupName"))
  {
    m_groupName = jsonValue.GetString("GroupName");

    m_groupNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("GroupArn"))
  {
    m_groupArn = jsonValue.GetString("GroupArn");

    m_groupArnHasBeenSet = true;
  }

  return *this;
}

JsonValue GroupIdentifier::Jsonize() const
{
  JsonValue payload;

  if(m_groupNameHasBeenSet)
  {
   payload.WithString("GroupName", m_groupName);

  }

  if(m_groupArnHasBeenSet)
  {
   payload.WithString("GroupArn", m_groupArn);

  }

  return payload;
}

} // namespace Model
} // namespace ResourceGroups
} // namespace Aws
