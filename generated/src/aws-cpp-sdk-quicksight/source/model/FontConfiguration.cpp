/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/FontConfiguration.h>
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

FontConfiguration::FontConfiguration() : 
    m_fontSizeHasBeenSet(false),
    m_fontDecoration(FontDecoration::NOT_SET),
    m_fontDecorationHasBeenSet(false),
    m_fontColorHasBeenSet(false),
    m_fontWeightHasBeenSet(false),
    m_fontStyle(FontStyle::NOT_SET),
    m_fontStyleHasBeenSet(false)
{
}

FontConfiguration::FontConfiguration(JsonView jsonValue) : 
    m_fontSizeHasBeenSet(false),
    m_fontDecoration(FontDecoration::NOT_SET),
    m_fontDecorationHasBeenSet(false),
    m_fontColorHasBeenSet(false),
    m_fontWeightHasBeenSet(false),
    m_fontStyle(FontStyle::NOT_SET),
    m_fontStyleHasBeenSet(false)
{
  *this = jsonValue;
}

FontConfiguration& FontConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("FontSize"))
  {
    m_fontSize = jsonValue.GetObject("FontSize");

    m_fontSizeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FontDecoration"))
  {
    m_fontDecoration = FontDecorationMapper::GetFontDecorationForName(jsonValue.GetString("FontDecoration"));

    m_fontDecorationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FontColor"))
  {
    m_fontColor = jsonValue.GetString("FontColor");

    m_fontColorHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FontWeight"))
  {
    m_fontWeight = jsonValue.GetObject("FontWeight");

    m_fontWeightHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FontStyle"))
  {
    m_fontStyle = FontStyleMapper::GetFontStyleForName(jsonValue.GetString("FontStyle"));

    m_fontStyleHasBeenSet = true;
  }

  return *this;
}

JsonValue FontConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_fontSizeHasBeenSet)
  {
   payload.WithObject("FontSize", m_fontSize.Jsonize());

  }

  if(m_fontDecorationHasBeenSet)
  {
   payload.WithString("FontDecoration", FontDecorationMapper::GetNameForFontDecoration(m_fontDecoration));
  }

  if(m_fontColorHasBeenSet)
  {
   payload.WithString("FontColor", m_fontColor);

  }

  if(m_fontWeightHasBeenSet)
  {
   payload.WithObject("FontWeight", m_fontWeight.Jsonize());

  }

  if(m_fontStyleHasBeenSet)
  {
   payload.WithString("FontStyle", FontStyleMapper::GetNameForFontStyle(m_fontStyle));
  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
