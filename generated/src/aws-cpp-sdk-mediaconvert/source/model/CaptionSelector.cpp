/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/CaptionSelector.h>
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

CaptionSelector::CaptionSelector() : 
    m_customLanguageCodeHasBeenSet(false),
    m_languageCode(LanguageCode::NOT_SET),
    m_languageCodeHasBeenSet(false),
    m_sourceSettingsHasBeenSet(false)
{
}

CaptionSelector::CaptionSelector(JsonView jsonValue) : 
    m_customLanguageCodeHasBeenSet(false),
    m_languageCode(LanguageCode::NOT_SET),
    m_languageCodeHasBeenSet(false),
    m_sourceSettingsHasBeenSet(false)
{
  *this = jsonValue;
}

CaptionSelector& CaptionSelector::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("customLanguageCode"))
  {
    m_customLanguageCode = jsonValue.GetString("customLanguageCode");

    m_customLanguageCodeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("languageCode"))
  {
    m_languageCode = LanguageCodeMapper::GetLanguageCodeForName(jsonValue.GetString("languageCode"));

    m_languageCodeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("sourceSettings"))
  {
    m_sourceSettings = jsonValue.GetObject("sourceSettings");

    m_sourceSettingsHasBeenSet = true;
  }

  return *this;
}

JsonValue CaptionSelector::Jsonize() const
{
  JsonValue payload;

  if(m_customLanguageCodeHasBeenSet)
  {
   payload.WithString("customLanguageCode", m_customLanguageCode);

  }

  if(m_languageCodeHasBeenSet)
  {
   payload.WithString("languageCode", LanguageCodeMapper::GetNameForLanguageCode(m_languageCode));
  }

  if(m_sourceSettingsHasBeenSet)
  {
   payload.WithObject("sourceSettings", m_sourceSettings.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
