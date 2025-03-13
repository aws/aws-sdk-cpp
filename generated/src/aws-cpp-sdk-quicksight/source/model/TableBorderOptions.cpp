/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/TableBorderOptions.h>
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

TableBorderOptions::TableBorderOptions(JsonView jsonValue)
{
  *this = jsonValue;
}

TableBorderOptions& TableBorderOptions::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Color"))
  {
    m_color = jsonValue.GetString("Color");
    m_colorHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Thickness"))
  {
    m_thickness = jsonValue.GetInteger("Thickness");
    m_thicknessHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Style"))
  {
    m_style = TableBorderStyleMapper::GetTableBorderStyleForName(jsonValue.GetString("Style"));
    m_styleHasBeenSet = true;
  }
  return *this;
}

JsonValue TableBorderOptions::Jsonize() const
{
  JsonValue payload;

  if(m_colorHasBeenSet)
  {
   payload.WithString("Color", m_color);

  }

  if(m_thicknessHasBeenSet)
  {
   payload.WithInteger("Thickness", m_thickness);

  }

  if(m_styleHasBeenSet)
  {
   payload.WithString("Style", TableBorderStyleMapper::GetNameForTableBorderStyle(m_style));
  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
