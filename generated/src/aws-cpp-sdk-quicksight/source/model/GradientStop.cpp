/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/GradientStop.h>
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

GradientStop::GradientStop(JsonView jsonValue)
{
  *this = jsonValue;
}

GradientStop& GradientStop::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("GradientOffset"))
  {
    m_gradientOffset = jsonValue.GetDouble("GradientOffset");
    m_gradientOffsetHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DataValue"))
  {
    m_dataValue = jsonValue.GetDouble("DataValue");
    m_dataValueHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Color"))
  {
    m_color = jsonValue.GetString("Color");
    m_colorHasBeenSet = true;
  }
  return *this;
}

JsonValue GradientStop::Jsonize() const
{
  JsonValue payload;

  if(m_gradientOffsetHasBeenSet)
  {
   payload.WithDouble("GradientOffset", m_gradientOffset);

  }

  if(m_dataValueHasBeenSet)
  {
   payload.WithDouble("DataValue", m_dataValue);

  }

  if(m_colorHasBeenSet)
  {
   payload.WithString("Color", m_color);

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
