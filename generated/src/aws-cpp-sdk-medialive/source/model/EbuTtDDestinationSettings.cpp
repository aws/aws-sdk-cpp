/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/EbuTtDDestinationSettings.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MediaLive
{
namespace Model
{

EbuTtDDestinationSettings::EbuTtDDestinationSettings(JsonView jsonValue)
{
  *this = jsonValue;
}

EbuTtDDestinationSettings& EbuTtDDestinationSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("copyrightHolder"))
  {
    m_copyrightHolder = jsonValue.GetString("copyrightHolder");
    m_copyrightHolderHasBeenSet = true;
  }
  if(jsonValue.ValueExists("fillLineGap"))
  {
    m_fillLineGap = EbuTtDFillLineGapControlMapper::GetEbuTtDFillLineGapControlForName(jsonValue.GetString("fillLineGap"));
    m_fillLineGapHasBeenSet = true;
  }
  if(jsonValue.ValueExists("fontFamily"))
  {
    m_fontFamily = jsonValue.GetString("fontFamily");
    m_fontFamilyHasBeenSet = true;
  }
  if(jsonValue.ValueExists("styleControl"))
  {
    m_styleControl = EbuTtDDestinationStyleControlMapper::GetEbuTtDDestinationStyleControlForName(jsonValue.GetString("styleControl"));
    m_styleControlHasBeenSet = true;
  }
  if(jsonValue.ValueExists("defaultFontSize"))
  {
    m_defaultFontSize = jsonValue.GetInteger("defaultFontSize");
    m_defaultFontSizeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("defaultLineHeight"))
  {
    m_defaultLineHeight = jsonValue.GetInteger("defaultLineHeight");
    m_defaultLineHeightHasBeenSet = true;
  }
  return *this;
}

JsonValue EbuTtDDestinationSettings::Jsonize() const
{
  JsonValue payload;

  if(m_copyrightHolderHasBeenSet)
  {
   payload.WithString("copyrightHolder", m_copyrightHolder);

  }

  if(m_fillLineGapHasBeenSet)
  {
   payload.WithString("fillLineGap", EbuTtDFillLineGapControlMapper::GetNameForEbuTtDFillLineGapControl(m_fillLineGap));
  }

  if(m_fontFamilyHasBeenSet)
  {
   payload.WithString("fontFamily", m_fontFamily);

  }

  if(m_styleControlHasBeenSet)
  {
   payload.WithString("styleControl", EbuTtDDestinationStyleControlMapper::GetNameForEbuTtDDestinationStyleControl(m_styleControl));
  }

  if(m_defaultFontSizeHasBeenSet)
  {
   payload.WithInteger("defaultFontSize", m_defaultFontSize);

  }

  if(m_defaultLineHeightHasBeenSet)
  {
   payload.WithInteger("defaultLineHeight", m_defaultLineHeight);

  }

  return payload;
}

} // namespace Model
} // namespace MediaLive
} // namespace Aws
