/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/transcribe/model/VocabularyInfo.h>
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

VocabularyInfo::VocabularyInfo() : 
    m_vocabularyNameHasBeenSet(false),
    m_languageCode(LanguageCode::NOT_SET),
    m_languageCodeHasBeenSet(false),
    m_lastModifiedTimeHasBeenSet(false),
    m_vocabularyState(VocabularyState::NOT_SET),
    m_vocabularyStateHasBeenSet(false)
{
}

VocabularyInfo::VocabularyInfo(JsonView jsonValue) : 
    m_vocabularyNameHasBeenSet(false),
    m_languageCode(LanguageCode::NOT_SET),
    m_languageCodeHasBeenSet(false),
    m_lastModifiedTimeHasBeenSet(false),
    m_vocabularyState(VocabularyState::NOT_SET),
    m_vocabularyStateHasBeenSet(false)
{
  *this = jsonValue;
}

VocabularyInfo& VocabularyInfo::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("VocabularyName"))
  {
    m_vocabularyName = jsonValue.GetString("VocabularyName");

    m_vocabularyNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LanguageCode"))
  {
    m_languageCode = LanguageCodeMapper::GetLanguageCodeForName(jsonValue.GetString("LanguageCode"));

    m_languageCodeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastModifiedTime"))
  {
    m_lastModifiedTime = jsonValue.GetDouble("LastModifiedTime");

    m_lastModifiedTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("VocabularyState"))
  {
    m_vocabularyState = VocabularyStateMapper::GetVocabularyStateForName(jsonValue.GetString("VocabularyState"));

    m_vocabularyStateHasBeenSet = true;
  }

  return *this;
}

JsonValue VocabularyInfo::Jsonize() const
{
  JsonValue payload;

  if(m_vocabularyNameHasBeenSet)
  {
   payload.WithString("VocabularyName", m_vocabularyName);

  }

  if(m_languageCodeHasBeenSet)
  {
   payload.WithString("LanguageCode", LanguageCodeMapper::GetNameForLanguageCode(m_languageCode));
  }

  if(m_lastModifiedTimeHasBeenSet)
  {
   payload.WithDouble("LastModifiedTime", m_lastModifiedTime.SecondsWithMSPrecision());
  }

  if(m_vocabularyStateHasBeenSet)
  {
   payload.WithString("VocabularyState", VocabularyStateMapper::GetNameForVocabularyState(m_vocabularyState));
  }

  return payload;
}

} // namespace Model
} // namespace TranscribeService
} // namespace Aws
