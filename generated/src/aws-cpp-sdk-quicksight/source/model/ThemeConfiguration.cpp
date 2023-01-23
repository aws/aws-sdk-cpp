/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/ThemeConfiguration.h>
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

ThemeConfiguration::ThemeConfiguration() : 
    m_dataColorPaletteHasBeenSet(false),
    m_uIColorPaletteHasBeenSet(false),
    m_sheetHasBeenSet(false),
    m_typographyHasBeenSet(false)
{
}

ThemeConfiguration::ThemeConfiguration(JsonView jsonValue) : 
    m_dataColorPaletteHasBeenSet(false),
    m_uIColorPaletteHasBeenSet(false),
    m_sheetHasBeenSet(false),
    m_typographyHasBeenSet(false)
{
  *this = jsonValue;
}

ThemeConfiguration& ThemeConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DataColorPalette"))
  {
    m_dataColorPalette = jsonValue.GetObject("DataColorPalette");

    m_dataColorPaletteHasBeenSet = true;
  }

  if(jsonValue.ValueExists("UIColorPalette"))
  {
    m_uIColorPalette = jsonValue.GetObject("UIColorPalette");

    m_uIColorPaletteHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Sheet"))
  {
    m_sheet = jsonValue.GetObject("Sheet");

    m_sheetHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Typography"))
  {
    m_typography = jsonValue.GetObject("Typography");

    m_typographyHasBeenSet = true;
  }

  return *this;
}

JsonValue ThemeConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_dataColorPaletteHasBeenSet)
  {
   payload.WithObject("DataColorPalette", m_dataColorPalette.Jsonize());

  }

  if(m_uIColorPaletteHasBeenSet)
  {
   payload.WithObject("UIColorPalette", m_uIColorPalette.Jsonize());

  }

  if(m_sheetHasBeenSet)
  {
   payload.WithObject("Sheet", m_sheet.Jsonize());

  }

  if(m_typographyHasBeenSet)
  {
   payload.WithObject("Typography", m_typography.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
