/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/VisibleRangeOptions.h>
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

VisibleRangeOptions::VisibleRangeOptions() : 
    m_percentRangeHasBeenSet(false)
{
}

VisibleRangeOptions::VisibleRangeOptions(JsonView jsonValue) : 
    m_percentRangeHasBeenSet(false)
{
  *this = jsonValue;
}

VisibleRangeOptions& VisibleRangeOptions::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("PercentRange"))
  {
    m_percentRange = jsonValue.GetObject("PercentRange");

    m_percentRangeHasBeenSet = true;
  }

  return *this;
}

JsonValue VisibleRangeOptions::Jsonize() const
{
  JsonValue payload;

  if(m_percentRangeHasBeenSet)
  {
   payload.WithObject("PercentRange", m_percentRange.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
