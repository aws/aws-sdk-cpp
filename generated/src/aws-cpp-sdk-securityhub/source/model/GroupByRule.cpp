/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/GroupByRule.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SecurityHub
{
namespace Model
{

GroupByRule::GroupByRule(JsonView jsonValue)
{
  *this = jsonValue;
}

GroupByRule& GroupByRule::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Filters"))
  {
    m_filters = jsonValue.GetObject("Filters");
    m_filtersHasBeenSet = true;
  }
  if(jsonValue.ValueExists("GroupByField"))
  {
    m_groupByField = GroupByFieldMapper::GetGroupByFieldForName(jsonValue.GetString("GroupByField"));
    m_groupByFieldHasBeenSet = true;
  }
  return *this;
}

JsonValue GroupByRule::Jsonize() const
{
  JsonValue payload;

  if(m_filtersHasBeenSet)
  {
   payload.WithObject("Filters", m_filters.Jsonize());

  }

  if(m_groupByFieldHasBeenSet)
  {
   payload.WithString("GroupByField", GroupByFieldMapper::GetNameForGroupByField(m_groupByField));
  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
