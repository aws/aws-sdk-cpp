/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/AxisLogarithmicScale.h>
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

AxisLogarithmicScale::AxisLogarithmicScale() : 
    m_base(0.0),
    m_baseHasBeenSet(false)
{
}

AxisLogarithmicScale::AxisLogarithmicScale(JsonView jsonValue) : 
    m_base(0.0),
    m_baseHasBeenSet(false)
{
  *this = jsonValue;
}

AxisLogarithmicScale& AxisLogarithmicScale::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Base"))
  {
    m_base = jsonValue.GetDouble("Base");

    m_baseHasBeenSet = true;
  }

  return *this;
}

JsonValue AxisLogarithmicScale::Jsonize() const
{
  JsonValue payload;

  if(m_baseHasBeenSet)
  {
   payload.WithDouble("Base", m_base);

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
