/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qbusiness/model/GroupSummary.h>
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

GroupSummary::GroupSummary() : 
    m_groupNameHasBeenSet(false)
{
}

GroupSummary::GroupSummary(JsonView jsonValue) : 
    m_groupNameHasBeenSet(false)
{
  *this = jsonValue;
}

GroupSummary& GroupSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("groupName"))
  {
    m_groupName = jsonValue.GetString("groupName");

    m_groupNameHasBeenSet = true;
  }

  return *this;
}

JsonValue GroupSummary::Jsonize() const
{
  JsonValue payload;

  if(m_groupNameHasBeenSet)
  {
   payload.WithString("groupName", m_groupName);

  }

  return payload;
}

} // namespace Model
} // namespace QBusiness
} // namespace Aws
