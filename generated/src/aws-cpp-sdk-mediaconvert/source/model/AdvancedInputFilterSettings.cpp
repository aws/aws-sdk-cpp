/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/AdvancedInputFilterSettings.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MediaConvert
{
namespace Model
{

AdvancedInputFilterSettings::AdvancedInputFilterSettings() : 
    m_addTexture(AdvancedInputFilterAddTexture::NOT_SET),
    m_addTextureHasBeenSet(false),
    m_sharpening(AdvancedInputFilterSharpen::NOT_SET),
    m_sharpeningHasBeenSet(false)
{
}

AdvancedInputFilterSettings::AdvancedInputFilterSettings(JsonView jsonValue) : 
    m_addTexture(AdvancedInputFilterAddTexture::NOT_SET),
    m_addTextureHasBeenSet(false),
    m_sharpening(AdvancedInputFilterSharpen::NOT_SET),
    m_sharpeningHasBeenSet(false)
{
  *this = jsonValue;
}

AdvancedInputFilterSettings& AdvancedInputFilterSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("addTexture"))
  {
    m_addTexture = AdvancedInputFilterAddTextureMapper::GetAdvancedInputFilterAddTextureForName(jsonValue.GetString("addTexture"));

    m_addTextureHasBeenSet = true;
  }

  if(jsonValue.ValueExists("sharpening"))
  {
    m_sharpening = AdvancedInputFilterSharpenMapper::GetAdvancedInputFilterSharpenForName(jsonValue.GetString("sharpening"));

    m_sharpeningHasBeenSet = true;
  }

  return *this;
}

JsonValue AdvancedInputFilterSettings::Jsonize() const
{
  JsonValue payload;

  if(m_addTextureHasBeenSet)
  {
   payload.WithString("addTexture", AdvancedInputFilterAddTextureMapper::GetNameForAdvancedInputFilterAddTexture(m_addTexture));
  }

  if(m_sharpeningHasBeenSet)
  {
   payload.WithString("sharpening", AdvancedInputFilterSharpenMapper::GetNameForAdvancedInputFilterSharpen(m_sharpening));
  }

  return payload;
}

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
