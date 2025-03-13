/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/GeospatialLineStyle.h>
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

GeospatialLineStyle::GeospatialLineStyle(JsonView jsonValue)
{
  *this = jsonValue;
}

GeospatialLineStyle& GeospatialLineStyle::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("LineSymbolStyle"))
  {
    m_lineSymbolStyle = jsonValue.GetObject("LineSymbolStyle");
    m_lineSymbolStyleHasBeenSet = true;
  }
  return *this;
}

JsonValue GeospatialLineStyle::Jsonize() const
{
  JsonValue payload;

  if(m_lineSymbolStyleHasBeenSet)
  {
   payload.WithObject("LineSymbolStyle", m_lineSymbolStyle.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
