/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/AxisDisplayMinMaxRange.h>
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

AxisDisplayMinMaxRange::AxisDisplayMinMaxRange() : 
    m_minimum(0.0),
    m_minimumHasBeenSet(false),
    m_maximum(0.0),
    m_maximumHasBeenSet(false)
{
}

AxisDisplayMinMaxRange::AxisDisplayMinMaxRange(JsonView jsonValue) : 
    m_minimum(0.0),
    m_minimumHasBeenSet(false),
    m_maximum(0.0),
    m_maximumHasBeenSet(false)
{
  *this = jsonValue;
}

AxisDisplayMinMaxRange& AxisDisplayMinMaxRange::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Minimum"))
  {
    m_minimum = jsonValue.GetDouble("Minimum");

    m_minimumHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Maximum"))
  {
    m_maximum = jsonValue.GetDouble("Maximum");

    m_maximumHasBeenSet = true;
  }

  return *this;
}

JsonValue AxisDisplayMinMaxRange::Jsonize() const
{
  JsonValue payload;

  if(m_minimumHasBeenSet)
  {
   payload.WithDouble("Minimum", m_minimum);

  }

  if(m_maximumHasBeenSet)
  {
   payload.WithDouble("Maximum", m_maximum);

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
