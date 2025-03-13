/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/GeospatialCategoricalDataColor.h>
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

GeospatialCategoricalDataColor::GeospatialCategoricalDataColor(JsonView jsonValue)
{
  *this = jsonValue;
}

GeospatialCategoricalDataColor& GeospatialCategoricalDataColor::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Color"))
  {
    m_color = jsonValue.GetString("Color");
    m_colorHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DataValue"))
  {
    m_dataValue = jsonValue.GetString("DataValue");
    m_dataValueHasBeenSet = true;
  }
  return *this;
}

JsonValue GeospatialCategoricalDataColor::Jsonize() const
{
  JsonValue payload;

  if(m_colorHasBeenSet)
  {
   payload.WithString("Color", m_color);

  }

  if(m_dataValueHasBeenSet)
  {
   payload.WithString("DataValue", m_dataValue);

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
