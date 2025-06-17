/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/ResourceGroupByRule.h>
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

ResourceGroupByRule::ResourceGroupByRule(JsonView jsonValue)
{
  *this = jsonValue;
}

ResourceGroupByRule& ResourceGroupByRule::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("GroupByField"))
  {
    m_groupByField = ResourceGroupByFieldMapper::GetResourceGroupByFieldForName(jsonValue.GetString("GroupByField"));
    m_groupByFieldHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Filters"))
  {
    m_filters = jsonValue.GetObject("Filters");
    m_filtersHasBeenSet = true;
  }
  return *this;
}

JsonValue ResourceGroupByRule::Jsonize() const
{
  JsonValue payload;

  if(m_groupByFieldHasBeenSet)
  {
   payload.WithString("GroupByField", ResourceGroupByFieldMapper::GetNameForResourceGroupByField(m_groupByField));
  }

  if(m_filtersHasBeenSet)
  {
   payload.WithObject("Filters", m_filters.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
