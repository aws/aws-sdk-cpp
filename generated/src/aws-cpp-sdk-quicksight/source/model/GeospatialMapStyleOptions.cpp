/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/GeospatialMapStyleOptions.h>
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

GeospatialMapStyleOptions::GeospatialMapStyleOptions(JsonView jsonValue)
{
  *this = jsonValue;
}

GeospatialMapStyleOptions& GeospatialMapStyleOptions::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("BaseMapStyle"))
  {
    m_baseMapStyle = BaseMapStyleTypeMapper::GetBaseMapStyleTypeForName(jsonValue.GetString("BaseMapStyle"));
    m_baseMapStyleHasBeenSet = true;
  }
  return *this;
}

JsonValue GeospatialMapStyleOptions::Jsonize() const
{
  JsonValue payload;

  if(m_baseMapStyleHasBeenSet)
  {
   payload.WithString("BaseMapStyle", BaseMapStyleTypeMapper::GetNameForBaseMapStyleType(m_baseMapStyle));
  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
