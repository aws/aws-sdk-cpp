/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/GeospatialPointStyle.h>
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

GeospatialPointStyle::GeospatialPointStyle(JsonView jsonValue)
{
  *this = jsonValue;
}

GeospatialPointStyle& GeospatialPointStyle::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CircleSymbolStyle"))
  {
    m_circleSymbolStyle = jsonValue.GetObject("CircleSymbolStyle");
    m_circleSymbolStyleHasBeenSet = true;
  }
  return *this;
}

JsonValue GeospatialPointStyle::Jsonize() const
{
  JsonValue payload;

  if(m_circleSymbolStyleHasBeenSet)
  {
   payload.WithObject("CircleSymbolStyle", m_circleSymbolStyle.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
