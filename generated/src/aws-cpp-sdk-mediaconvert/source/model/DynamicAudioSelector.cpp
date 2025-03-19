/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/DynamicAudioSelector.h>
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

DynamicAudioSelector::DynamicAudioSelector(JsonView jsonValue)
{
  *this = jsonValue;
}

DynamicAudioSelector& DynamicAudioSelector::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("audioDurationCorrection"))
  {
    m_audioDurationCorrection = AudioDurationCorrectionMapper::GetAudioDurationCorrectionForName(jsonValue.GetString("audioDurationCorrection"));
    m_audioDurationCorrectionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("externalAudioFileInput"))
  {
    m_externalAudioFileInput = jsonValue.GetString("externalAudioFileInput");
    m_externalAudioFileInputHasBeenSet = true;
  }
  if(jsonValue.ValueExists("languageCode"))
  {
    m_languageCode = LanguageCodeMapper::GetLanguageCodeForName(jsonValue.GetString("languageCode"));
    m_languageCodeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("offset"))
  {
    m_offset = jsonValue.GetInteger("offset");
    m_offsetHasBeenSet = true;
  }
  if(jsonValue.ValueExists("selectorType"))
  {
    m_selectorType = DynamicAudioSelectorTypeMapper::GetDynamicAudioSelectorTypeForName(jsonValue.GetString("selectorType"));
    m_selectorTypeHasBeenSet = true;
  }
  return *this;
}

JsonValue DynamicAudioSelector::Jsonize() const
{
  JsonValue payload;

  if(m_audioDurationCorrectionHasBeenSet)
  {
   payload.WithString("audioDurationCorrection", AudioDurationCorrectionMapper::GetNameForAudioDurationCorrection(m_audioDurationCorrection));
  }

  if(m_externalAudioFileInputHasBeenSet)
  {
   payload.WithString("externalAudioFileInput", m_externalAudioFileInput);

  }

  if(m_languageCodeHasBeenSet)
  {
   payload.WithString("languageCode", LanguageCodeMapper::GetNameForLanguageCode(m_languageCode));
  }

  if(m_offsetHasBeenSet)
  {
   payload.WithInteger("offset", m_offset);

  }

  if(m_selectorTypeHasBeenSet)
  {
   payload.WithString("selectorType", DynamicAudioSelectorTypeMapper::GetNameForDynamicAudioSelectorType(m_selectorType));
  }

  return payload;
}

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
