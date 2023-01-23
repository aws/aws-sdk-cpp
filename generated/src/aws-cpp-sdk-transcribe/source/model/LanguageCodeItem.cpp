/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/transcribe/model/LanguageCodeItem.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace TranscribeService
{
namespace Model
{

LanguageCodeItem::LanguageCodeItem() : 
    m_languageCode(LanguageCode::NOT_SET),
    m_languageCodeHasBeenSet(false),
    m_durationInSeconds(0.0),
    m_durationInSecondsHasBeenSet(false)
{
}

LanguageCodeItem::LanguageCodeItem(JsonView jsonValue) : 
    m_languageCode(LanguageCode::NOT_SET),
    m_languageCodeHasBeenSet(false),
    m_durationInSeconds(0.0),
    m_durationInSecondsHasBeenSet(false)
{
  *this = jsonValue;
}

LanguageCodeItem& LanguageCodeItem::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("LanguageCode"))
  {
    m_languageCode = LanguageCodeMapper::GetLanguageCodeForName(jsonValue.GetString("LanguageCode"));

    m_languageCodeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DurationInSeconds"))
  {
    m_durationInSeconds = jsonValue.GetDouble("DurationInSeconds");

    m_durationInSecondsHasBeenSet = true;
  }

  return *this;
}

JsonValue LanguageCodeItem::Jsonize() const
{
  JsonValue payload;

  if(m_languageCodeHasBeenSet)
  {
   payload.WithString("LanguageCode", LanguageCodeMapper::GetNameForLanguageCode(m_languageCode));
  }

  if(m_durationInSecondsHasBeenSet)
  {
   payload.WithDouble("DurationInSeconds", m_durationInSeconds);

  }

  return payload;
}

} // namespace Model
} // namespace TranscribeService
} // namespace Aws
