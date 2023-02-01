/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/AxisScale.h>
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

AxisScale::AxisScale() : 
    m_linearHasBeenSet(false),
    m_logarithmicHasBeenSet(false)
{
}

AxisScale::AxisScale(JsonView jsonValue) : 
    m_linearHasBeenSet(false),
    m_logarithmicHasBeenSet(false)
{
  *this = jsonValue;
}

AxisScale& AxisScale::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Linear"))
  {
    m_linear = jsonValue.GetObject("Linear");

    m_linearHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Logarithmic"))
  {
    m_logarithmic = jsonValue.GetObject("Logarithmic");

    m_logarithmicHasBeenSet = true;
  }

  return *this;
}

JsonValue AxisScale::Jsonize() const
{
  JsonValue payload;

  if(m_linearHasBeenSet)
  {
   payload.WithObject("Linear", m_linear.Jsonize());

  }

  if(m_logarithmicHasBeenSet)
  {
   payload.WithObject("Logarithmic", m_logarithmic.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
