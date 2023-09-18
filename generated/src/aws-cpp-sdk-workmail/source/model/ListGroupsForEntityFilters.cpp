/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workmail/model/ListGroupsForEntityFilters.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace WorkMail
{
namespace Model
{

ListGroupsForEntityFilters::ListGroupsForEntityFilters() : 
    m_groupNamePrefixHasBeenSet(false)
{
}

ListGroupsForEntityFilters::ListGroupsForEntityFilters(JsonView jsonValue) : 
    m_groupNamePrefixHasBeenSet(false)
{
  *this = jsonValue;
}

ListGroupsForEntityFilters& ListGroupsForEntityFilters::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("GroupNamePrefix"))
  {
    m_groupNamePrefix = jsonValue.GetString("GroupNamePrefix");

    m_groupNamePrefixHasBeenSet = true;
  }

  return *this;
}

JsonValue ListGroupsForEntityFilters::Jsonize() const
{
  JsonValue payload;

  if(m_groupNamePrefixHasBeenSet)
  {
   payload.WithString("GroupNamePrefix", m_groupNamePrefix);

  }

  return payload;
}

} // namespace Model
} // namespace WorkMail
} // namespace Aws
