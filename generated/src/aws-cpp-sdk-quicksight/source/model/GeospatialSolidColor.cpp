/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/GeospatialSolidColor.h>
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

GeospatialSolidColor::GeospatialSolidColor(JsonView jsonValue)
{
  *this = jsonValue;
}

GeospatialSolidColor& GeospatialSolidColor::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Color"))
  {
    m_color = jsonValue.GetString("Color");
    m_colorHasBeenSet = true;
  }
  if(jsonValue.ValueExists("State"))
  {
    m_state = GeospatialColorStateMapper::GetGeospatialColorStateForName(jsonValue.GetString("State"));
    m_stateHasBeenSet = true;
  }
  return *this;
}

JsonValue GeospatialSolidColor::Jsonize() const
{
  JsonValue payload;

  if(m_colorHasBeenSet)
  {
   payload.WithString("Color", m_color);

  }

  if(m_stateHasBeenSet)
  {
   payload.WithString("State", GeospatialColorStateMapper::GetNameForGeospatialColorState(m_state));
  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
