/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/support/model/SupportedLanguage.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Support
{
namespace Model
{

SupportedLanguage::SupportedLanguage() : 
    m_codeHasBeenSet(false),
    m_languageHasBeenSet(false),
    m_displayHasBeenSet(false)
{
}

SupportedLanguage::SupportedLanguage(JsonView jsonValue) : 
    m_codeHasBeenSet(false),
    m_languageHasBeenSet(false),
    m_displayHasBeenSet(false)
{
  *this = jsonValue;
}

SupportedLanguage& SupportedLanguage::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("code"))
  {
    m_code = jsonValue.GetString("code");

    m_codeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("language"))
  {
    m_language = jsonValue.GetString("language");

    m_languageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("display"))
  {
    m_display = jsonValue.GetString("display");

    m_displayHasBeenSet = true;
  }

  return *this;
}

JsonValue SupportedLanguage::Jsonize() const
{
  JsonValue payload;

  if(m_codeHasBeenSet)
  {
   payload.WithString("code", m_code);

  }

  if(m_languageHasBeenSet)
  {
   payload.WithString("language", m_language);

  }

  if(m_displayHasBeenSet)
  {
   payload.WithString("display", m_display);

  }

  return payload;
}

} // namespace Model
} // namespace Support
} // namespace Aws
