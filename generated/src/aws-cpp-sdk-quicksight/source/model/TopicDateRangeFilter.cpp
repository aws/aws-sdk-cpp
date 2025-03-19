/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/TopicDateRangeFilter.h>
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

TopicDateRangeFilter::TopicDateRangeFilter(JsonView jsonValue)
{
  *this = jsonValue;
}

TopicDateRangeFilter& TopicDateRangeFilter::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Inclusive"))
  {
    m_inclusive = jsonValue.GetBool("Inclusive");
    m_inclusiveHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Constant"))
  {
    m_constant = jsonValue.GetObject("Constant");
    m_constantHasBeenSet = true;
  }
  return *this;
}

JsonValue TopicDateRangeFilter::Jsonize() const
{
  JsonValue payload;

  if(m_inclusiveHasBeenSet)
  {
   payload.WithBool("Inclusive", m_inclusive);

  }

  if(m_constantHasBeenSet)
  {
   payload.WithObject("Constant", m_constant.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
