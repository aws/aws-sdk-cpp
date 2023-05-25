/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/AxisDataOptions.h>
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

AxisDataOptions::AxisDataOptions() : 
    m_numericAxisOptionsHasBeenSet(false),
    m_dateAxisOptionsHasBeenSet(false)
{
}

AxisDataOptions::AxisDataOptions(JsonView jsonValue) : 
    m_numericAxisOptionsHasBeenSet(false),
    m_dateAxisOptionsHasBeenSet(false)
{
  *this = jsonValue;
}

AxisDataOptions& AxisDataOptions::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("NumericAxisOptions"))
  {
    m_numericAxisOptions = jsonValue.GetObject("NumericAxisOptions");

    m_numericAxisOptionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DateAxisOptions"))
  {
    m_dateAxisOptions = jsonValue.GetObject("DateAxisOptions");

    m_dateAxisOptionsHasBeenSet = true;
  }

  return *this;
}

JsonValue AxisDataOptions::Jsonize() const
{
  JsonValue payload;

  if(m_numericAxisOptionsHasBeenSet)
  {
   payload.WithObject("NumericAxisOptions", m_numericAxisOptions.Jsonize());

  }

  if(m_dateAxisOptionsHasBeenSet)
  {
   payload.WithObject("DateAxisOptions", m_dateAxisOptions.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
