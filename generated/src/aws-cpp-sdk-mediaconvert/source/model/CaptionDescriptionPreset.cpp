/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/CaptionDescriptionPreset.h>
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

CaptionDescriptionPreset::CaptionDescriptionPreset() : 
    m_customLanguageCodeHasBeenSet(false),
    m_destinationSettingsHasBeenSet(false),
    m_languageCode(LanguageCode::NOT_SET),
    m_languageCodeHasBeenSet(false),
    m_languageDescriptionHasBeenSet(false)
{
}

CaptionDescriptionPreset::CaptionDescriptionPreset(JsonView jsonValue) : 
    m_customLanguageCodeHasBeenSet(false),
    m_destinationSettingsHasBeenSet(false),
    m_languageCode(LanguageCode::NOT_SET),
    m_languageCodeHasBeenSet(false),
    m_languageDescriptionHasBeenSet(false)
{
  *this = jsonValue;
}

CaptionDescriptionPreset& CaptionDescriptionPreset::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("customLanguageCode"))
  {
    m_customLanguageCode = jsonValue.GetString("customLanguageCode");

    m_customLanguageCodeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("destinationSettings"))
  {
    m_destinationSettings = jsonValue.GetObject("destinationSettings");

    m_destinationSettingsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("languageCode"))
  {
    m_languageCode = LanguageCodeMapper::GetLanguageCodeForName(jsonValue.GetString("languageCode"));

    m_languageCodeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("languageDescription"))
  {
    m_languageDescription = jsonValue.GetString("languageDescription");

    m_languageDescriptionHasBeenSet = true;
  }

  return *this;
}

JsonValue CaptionDescriptionPreset::Jsonize() const
{
  JsonValue payload;

  if(m_customLanguageCodeHasBeenSet)
  {
   payload.WithString("customLanguageCode", m_customLanguageCode);

  }

  if(m_destinationSettingsHasBeenSet)
  {
   payload.WithObject("destinationSettings", m_destinationSettings.Jsonize());

  }

  if(m_languageCodeHasBeenSet)
  {
   payload.WithString("languageCode", LanguageCodeMapper::GetNameForLanguageCode(m_languageCode));
  }

  if(m_languageDescriptionHasBeenSet)
  {
   payload.WithString("languageDescription", m_languageDescription);

  }

  return payload;
}

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
