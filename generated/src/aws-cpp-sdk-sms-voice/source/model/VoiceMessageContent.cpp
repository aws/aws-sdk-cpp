/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sms-voice/model/VoiceMessageContent.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace PinpointSMSVoice
{
namespace Model
{

VoiceMessageContent::VoiceMessageContent() : 
    m_callInstructionsMessageHasBeenSet(false),
    m_plainTextMessageHasBeenSet(false),
    m_sSMLMessageHasBeenSet(false)
{
}

VoiceMessageContent::VoiceMessageContent(JsonView jsonValue) : 
    m_callInstructionsMessageHasBeenSet(false),
    m_plainTextMessageHasBeenSet(false),
    m_sSMLMessageHasBeenSet(false)
{
  *this = jsonValue;
}

VoiceMessageContent& VoiceMessageContent::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CallInstructionsMessage"))
  {
    m_callInstructionsMessage = jsonValue.GetObject("CallInstructionsMessage");

    m_callInstructionsMessageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PlainTextMessage"))
  {
    m_plainTextMessage = jsonValue.GetObject("PlainTextMessage");

    m_plainTextMessageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SSMLMessage"))
  {
    m_sSMLMessage = jsonValue.GetObject("SSMLMessage");

    m_sSMLMessageHasBeenSet = true;
  }

  return *this;
}

JsonValue VoiceMessageContent::Jsonize() const
{
  JsonValue payload;

  if(m_callInstructionsMessageHasBeenSet)
  {
   payload.WithObject("CallInstructionsMessage", m_callInstructionsMessage.Jsonize());

  }

  if(m_plainTextMessageHasBeenSet)
  {
   payload.WithObject("PlainTextMessage", m_plainTextMessage.Jsonize());

  }

  if(m_sSMLMessageHasBeenSet)
  {
   payload.WithObject("SSMLMessage", m_sSMLMessage.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace PinpointSMSVoice
} // namespace Aws
