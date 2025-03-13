/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/ApplicationTheme.h>
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

ApplicationTheme::ApplicationTheme(JsonView jsonValue)
{
  *this = jsonValue;
}

ApplicationTheme& ApplicationTheme::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("BrandColorPalette"))
  {
    m_brandColorPalette = jsonValue.GetObject("BrandColorPalette");
    m_brandColorPaletteHasBeenSet = true;
  }
  if(jsonValue.ValueExists("BrandElementStyle"))
  {
    m_brandElementStyle = jsonValue.GetObject("BrandElementStyle");
    m_brandElementStyleHasBeenSet = true;
  }
  return *this;
}

JsonValue ApplicationTheme::Jsonize() const
{
  JsonValue payload;

  if(m_brandColorPaletteHasBeenSet)
  {
   payload.WithObject("BrandColorPalette", m_brandColorPalette.Jsonize());

  }

  if(m_brandElementStyleHasBeenSet)
  {
   payload.WithObject("BrandElementStyle", m_brandElementStyle.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
