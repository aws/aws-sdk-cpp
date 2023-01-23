/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/polly/model/LexiconAttributes.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Polly
{
namespace Model
{

LexiconAttributes::LexiconAttributes() : 
    m_alphabetHasBeenSet(false),
    m_languageCode(LanguageCode::NOT_SET),
    m_languageCodeHasBeenSet(false),
    m_lastModifiedHasBeenSet(false),
    m_lexiconArnHasBeenSet(false),
    m_lexemesCount(0),
    m_lexemesCountHasBeenSet(false),
    m_size(0),
    m_sizeHasBeenSet(false)
{
}

LexiconAttributes::LexiconAttributes(JsonView jsonValue) : 
    m_alphabetHasBeenSet(false),
    m_languageCode(LanguageCode::NOT_SET),
    m_languageCodeHasBeenSet(false),
    m_lastModifiedHasBeenSet(false),
    m_lexiconArnHasBeenSet(false),
    m_lexemesCount(0),
    m_lexemesCountHasBeenSet(false),
    m_size(0),
    m_sizeHasBeenSet(false)
{
  *this = jsonValue;
}

LexiconAttributes& LexiconAttributes::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Alphabet"))
  {
    m_alphabet = jsonValue.GetString("Alphabet");

    m_alphabetHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LanguageCode"))
  {
    m_languageCode = LanguageCodeMapper::GetLanguageCodeForName(jsonValue.GetString("LanguageCode"));

    m_languageCodeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastModified"))
  {
    m_lastModified = jsonValue.GetDouble("LastModified");

    m_lastModifiedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LexiconArn"))
  {
    m_lexiconArn = jsonValue.GetString("LexiconArn");

    m_lexiconArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LexemesCount"))
  {
    m_lexemesCount = jsonValue.GetInteger("LexemesCount");

    m_lexemesCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Size"))
  {
    m_size = jsonValue.GetInteger("Size");

    m_sizeHasBeenSet = true;
  }

  return *this;
}

JsonValue LexiconAttributes::Jsonize() const
{
  JsonValue payload;

  if(m_alphabetHasBeenSet)
  {
   payload.WithString("Alphabet", m_alphabet);

  }

  if(m_languageCodeHasBeenSet)
  {
   payload.WithString("LanguageCode", LanguageCodeMapper::GetNameForLanguageCode(m_languageCode));
  }

  if(m_lastModifiedHasBeenSet)
  {
   payload.WithDouble("LastModified", m_lastModified.SecondsWithMSPrecision());
  }

  if(m_lexiconArnHasBeenSet)
  {
   payload.WithString("LexiconArn", m_lexiconArn);

  }

  if(m_lexemesCountHasBeenSet)
  {
   payload.WithInteger("LexemesCount", m_lexemesCount);

  }

  if(m_sizeHasBeenSet)
  {
   payload.WithInteger("Size", m_size);

  }

  return payload;
}

} // namespace Model
} // namespace Polly
} // namespace Aws
