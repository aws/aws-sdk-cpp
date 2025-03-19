/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/GeospatialPolygonLayer.h>
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

GeospatialPolygonLayer::GeospatialPolygonLayer(JsonView jsonValue)
{
  *this = jsonValue;
}

GeospatialPolygonLayer& GeospatialPolygonLayer::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Style"))
  {
    m_style = jsonValue.GetObject("Style");
    m_styleHasBeenSet = true;
  }
  return *this;
}

JsonValue GeospatialPolygonLayer::Jsonize() const
{
  JsonValue payload;

  if(m_styleHasBeenSet)
  {
   payload.WithObject("Style", m_style.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
