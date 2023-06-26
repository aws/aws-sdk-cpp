/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/HlsOutputSettings.h>
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

HlsOutputSettings::HlsOutputSettings() : 
    m_h265PackagingType(HlsH265PackagingType::NOT_SET),
    m_h265PackagingTypeHasBeenSet(false),
    m_hlsSettingsHasBeenSet(false),
    m_nameModifierHasBeenSet(false),
    m_segmentModifierHasBeenSet(false)
{
}

HlsOutputSettings::HlsOutputSettings(JsonView jsonValue) : 
    m_h265PackagingType(HlsH265PackagingType::NOT_SET),
    m_h265PackagingTypeHasBeenSet(false),
    m_hlsSettingsHasBeenSet(false),
    m_nameModifierHasBeenSet(false),
    m_segmentModifierHasBeenSet(false)
{
  *this = jsonValue;
}

HlsOutputSettings& HlsOutputSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("h265PackagingType"))
  {
    m_h265PackagingType = HlsH265PackagingTypeMapper::GetHlsH265PackagingTypeForName(jsonValue.GetString("h265PackagingType"));

    m_h265PackagingTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("hlsSettings"))
  {
    m_hlsSettings = jsonValue.GetObject("hlsSettings");

    m_hlsSettingsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("nameModifier"))
  {
    m_nameModifier = jsonValue.GetString("nameModifier");

    m_nameModifierHasBeenSet = true;
  }

  if(jsonValue.ValueExists("segmentModifier"))
  {
    m_segmentModifier = jsonValue.GetString("segmentModifier");

    m_segmentModifierHasBeenSet = true;
  }

  return *this;
}

JsonValue HlsOutputSettings::Jsonize() const
{
  JsonValue payload;

  if(m_h265PackagingTypeHasBeenSet)
  {
   payload.WithString("h265PackagingType", HlsH265PackagingTypeMapper::GetNameForHlsH265PackagingType(m_h265PackagingType));
  }

  if(m_hlsSettingsHasBeenSet)
  {
   payload.WithObject("hlsSettings", m_hlsSettings.Jsonize());

  }

  if(m_nameModifierHasBeenSet)
  {
   payload.WithString("nameModifier", m_nameModifier);

  }

  if(m_segmentModifierHasBeenSet)
  {
   payload.WithString("segmentModifier", m_segmentModifier);

  }

  return payload;
}

} // namespace Model
} // namespace MediaLive
} // namespace Aws
