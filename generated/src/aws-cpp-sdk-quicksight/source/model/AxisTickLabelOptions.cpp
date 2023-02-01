/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/AxisTickLabelOptions.h>
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

AxisTickLabelOptions::AxisTickLabelOptions() : 
    m_labelOptionsHasBeenSet(false),
    m_rotationAngle(0.0),
    m_rotationAngleHasBeenSet(false)
{
}

AxisTickLabelOptions::AxisTickLabelOptions(JsonView jsonValue) : 
    m_labelOptionsHasBeenSet(false),
    m_rotationAngle(0.0),
    m_rotationAngleHasBeenSet(false)
{
  *this = jsonValue;
}

AxisTickLabelOptions& AxisTickLabelOptions::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("LabelOptions"))
  {
    m_labelOptions = jsonValue.GetObject("LabelOptions");

    m_labelOptionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RotationAngle"))
  {
    m_rotationAngle = jsonValue.GetDouble("RotationAngle");

    m_rotationAngleHasBeenSet = true;
  }

  return *this;
}

JsonValue AxisTickLabelOptions::Jsonize() const
{
  JsonValue payload;

  if(m_labelOptionsHasBeenSet)
  {
   payload.WithObject("LabelOptions", m_labelOptions.Jsonize());

  }

  if(m_rotationAngleHasBeenSet)
  {
   payload.WithDouble("RotationAngle", m_rotationAngle);

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
