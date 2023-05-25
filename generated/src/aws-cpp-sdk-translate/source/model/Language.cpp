/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/translate/model/Language.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Translate
{
namespace Model
{

Language::Language() : 
    m_languageNameHasBeenSet(false),
    m_languageCodeHasBeenSet(false)
{
}

Language::Language(JsonView jsonValue) : 
    m_languageNameHasBeenSet(false),
    m_languageCodeHasBeenSet(false)
{
  *this = jsonValue;
}

Language& Language::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("LanguageName"))
  {
    m_languageName = jsonValue.GetString("LanguageName");

    m_languageNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LanguageCode"))
  {
    m_languageCode = jsonValue.GetString("LanguageCode");

    m_languageCodeHasBeenSet = true;
  }

  return *this;
}

JsonValue Language::Jsonize() const
{
  JsonValue payload;

  if(m_languageNameHasBeenSet)
  {
   payload.WithString("LanguageName", m_languageName);

  }

  if(m_languageCodeHasBeenSet)
  {
   payload.WithString("LanguageCode", m_languageCode);

  }

  return payload;
}

} // namespace Model
} // namespace Translate
} // namespace Aws
