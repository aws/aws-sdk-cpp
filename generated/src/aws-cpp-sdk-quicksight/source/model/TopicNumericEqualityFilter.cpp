/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/TopicNumericEqualityFilter.h>
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

TopicNumericEqualityFilter::TopicNumericEqualityFilter() : 
    m_constantHasBeenSet(false),
    m_aggregation(NamedFilterAggType::NOT_SET),
    m_aggregationHasBeenSet(false)
{
}

TopicNumericEqualityFilter::TopicNumericEqualityFilter(JsonView jsonValue) : 
    m_constantHasBeenSet(false),
    m_aggregation(NamedFilterAggType::NOT_SET),
    m_aggregationHasBeenSet(false)
{
  *this = jsonValue;
}

TopicNumericEqualityFilter& TopicNumericEqualityFilter::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Constant"))
  {
    m_constant = jsonValue.GetObject("Constant");

    m_constantHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Aggregation"))
  {
    m_aggregation = NamedFilterAggTypeMapper::GetNamedFilterAggTypeForName(jsonValue.GetString("Aggregation"));

    m_aggregationHasBeenSet = true;
  }

  return *this;
}

JsonValue TopicNumericEqualityFilter::Jsonize() const
{
  JsonValue payload;

  if(m_constantHasBeenSet)
  {
   payload.WithObject("Constant", m_constant.Jsonize());

  }

  if(m_aggregationHasBeenSet)
  {
   payload.WithString("Aggregation", NamedFilterAggTypeMapper::GetNameForNamedFilterAggType(m_aggregation));
  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
