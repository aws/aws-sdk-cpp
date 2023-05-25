/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/translate/model/DetectedLanguageLowConfidenceException.h>
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

DetectedLanguageLowConfidenceException::DetectedLanguageLowConfidenceException() : 
    m_messageHasBeenSet(false),
    m_detectedLanguageCodeHasBeenSet(false)
{
}

DetectedLanguageLowConfidenceException::DetectedLanguageLowConfidenceException(JsonView jsonValue) : 
    m_messageHasBeenSet(false),
    m_detectedLanguageCodeHasBeenSet(false)
{
  *this = jsonValue;
}

DetectedLanguageLowConfidenceException& DetectedLanguageLowConfidenceException::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Message"))
  {
    m_message = jsonValue.GetString("Message");

    m_messageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DetectedLanguageCode"))
  {
    m_detectedLanguageCode = jsonValue.GetString("DetectedLanguageCode");

    m_detectedLanguageCodeHasBeenSet = true;
  }

  return *this;
}

JsonValue DetectedLanguageLowConfidenceException::Jsonize() const
{
  JsonValue payload;

  if(m_messageHasBeenSet)
  {
   payload.WithString("Message", m_message);

  }

  if(m_detectedLanguageCodeHasBeenSet)
  {
   payload.WithString("DetectedLanguageCode", m_detectedLanguageCode);

  }

  return payload;
}

} // namespace Model
} // namespace Translate
} // namespace Aws
