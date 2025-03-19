/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/resource-groups/model/ListTagSyncTasksFilter.h>
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

ListTagSyncTasksFilter::ListTagSyncTasksFilter(JsonView jsonValue)
{
  *this = jsonValue;
}

ListTagSyncTasksFilter& ListTagSyncTasksFilter::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("GroupArn"))
  {
    m_groupArn = jsonValue.GetString("GroupArn");
    m_groupArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("GroupName"))
  {
    m_groupName = jsonValue.GetString("GroupName");
    m_groupNameHasBeenSet = true;
  }
  return *this;
}

JsonValue ListTagSyncTasksFilter::Jsonize() const
{
  JsonValue payload;

  if(m_groupArnHasBeenSet)
  {
   payload.WithString("GroupArn", m_groupArn);

  }

  if(m_groupNameHasBeenSet)
  {
   payload.WithString("GroupName", m_groupName);

  }

  return payload;
}

} // namespace Model
} // namespace ResourceGroups
} // namespace Aws
