/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/GeospatialPointLayer.h>
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

GeospatialPointLayer::GeospatialPointLayer(JsonView jsonValue)
{
  *this = jsonValue;
}

GeospatialPointLayer& GeospatialPointLayer::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Style"))
  {
    m_style = jsonValue.GetObject("Style");
    m_styleHasBeenSet = true;
  }
  return *this;
}

JsonValue GeospatialPointLayer::Jsonize() const
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
