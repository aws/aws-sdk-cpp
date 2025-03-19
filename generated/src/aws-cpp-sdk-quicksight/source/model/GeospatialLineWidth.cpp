/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/GeospatialLineWidth.h>
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

GeospatialLineWidth::GeospatialLineWidth(JsonView jsonValue)
{
  *this = jsonValue;
}

GeospatialLineWidth& GeospatialLineWidth::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("LineWidth"))
  {
    m_lineWidth = jsonValue.GetDouble("LineWidth");
    m_lineWidthHasBeenSet = true;
  }
  return *this;
}

JsonValue GeospatialLineWidth::Jsonize() const
{
  JsonValue payload;

  if(m_lineWidthHasBeenSet)
  {
   payload.WithDouble("LineWidth", m_lineWidth);

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
