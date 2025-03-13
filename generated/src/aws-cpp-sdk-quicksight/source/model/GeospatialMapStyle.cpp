/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/GeospatialMapStyle.h>
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

GeospatialMapStyle::GeospatialMapStyle(JsonView jsonValue)
{
  *this = jsonValue;
}

GeospatialMapStyle& GeospatialMapStyle::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("BaseMapStyle"))
  {
    m_baseMapStyle = BaseMapStyleTypeMapper::GetBaseMapStyleTypeForName(jsonValue.GetString("BaseMapStyle"));
    m_baseMapStyleHasBeenSet = true;
  }
  if(jsonValue.ValueExists("BackgroundColor"))
  {
    m_backgroundColor = jsonValue.GetString("BackgroundColor");
    m_backgroundColorHasBeenSet = true;
  }
  if(jsonValue.ValueExists("BaseMapVisibility"))
  {
    m_baseMapVisibility = VisibilityMapper::GetVisibilityForName(jsonValue.GetString("BaseMapVisibility"));
    m_baseMapVisibilityHasBeenSet = true;
  }
  return *this;
}

JsonValue GeospatialMapStyle::Jsonize() const
{
  JsonValue payload;

  if(m_baseMapStyleHasBeenSet)
  {
   payload.WithString("BaseMapStyle", BaseMapStyleTypeMapper::GetNameForBaseMapStyleType(m_baseMapStyle));
  }

  if(m_backgroundColorHasBeenSet)
  {
   payload.WithString("BackgroundColor", m_backgroundColor);

  }

  if(m_baseMapVisibilityHasBeenSet)
  {
   payload.WithString("BaseMapVisibility", VisibilityMapper::GetNameForVisibility(m_baseMapVisibility));
  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
