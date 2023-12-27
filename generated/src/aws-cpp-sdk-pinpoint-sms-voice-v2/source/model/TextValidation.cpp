/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint-sms-voice-v2/model/TextValidation.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace PinpointSMSVoiceV2
{
namespace Model
{

TextValidation::TextValidation() : 
    m_minLength(0),
    m_minLengthHasBeenSet(false),
    m_maxLength(0),
    m_maxLengthHasBeenSet(false),
    m_patternHasBeenSet(false)
{
}

TextValidation::TextValidation(JsonView jsonValue) : 
    m_minLength(0),
    m_minLengthHasBeenSet(false),
    m_maxLength(0),
    m_maxLengthHasBeenSet(false),
    m_patternHasBeenSet(false)
{
  *this = jsonValue;
}

TextValidation& TextValidation::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("MinLength"))
  {
    m_minLength = jsonValue.GetInteger("MinLength");

    m_minLengthHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MaxLength"))
  {
    m_maxLength = jsonValue.GetInteger("MaxLength");

    m_maxLengthHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Pattern"))
  {
    m_pattern = jsonValue.GetString("Pattern");

    m_patternHasBeenSet = true;
  }

  return *this;
}

JsonValue TextValidation::Jsonize() const
{
  JsonValue payload;

  if(m_minLengthHasBeenSet)
  {
   payload.WithInteger("MinLength", m_minLength);

  }

  if(m_maxLengthHasBeenSet)
  {
   payload.WithInteger("MaxLength", m_maxLength);

  }

  if(m_patternHasBeenSet)
  {
   payload.WithString("Pattern", m_pattern);

  }

  return payload;
}

} // namespace Model
} // namespace PinpointSMSVoiceV2
} // namespace Aws
