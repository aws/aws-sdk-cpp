/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qconnect/model/SelfServiceConversationHistory.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace QConnect
{
namespace Model
{

SelfServiceConversationHistory::SelfServiceConversationHistory() : 
    m_botResponseHasBeenSet(false),
    m_inputTranscriptHasBeenSet(false),
    m_turnNumber(0),
    m_turnNumberHasBeenSet(false)
{
}

SelfServiceConversationHistory::SelfServiceConversationHistory(JsonView jsonValue)
  : SelfServiceConversationHistory()
{
  *this = jsonValue;
}

SelfServiceConversationHistory& SelfServiceConversationHistory::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("botResponse"))
  {
    m_botResponse = jsonValue.GetString("botResponse");

    m_botResponseHasBeenSet = true;
  }

  if(jsonValue.ValueExists("inputTranscript"))
  {
    m_inputTranscript = jsonValue.GetString("inputTranscript");

    m_inputTranscriptHasBeenSet = true;
  }

  if(jsonValue.ValueExists("turnNumber"))
  {
    m_turnNumber = jsonValue.GetInteger("turnNumber");

    m_turnNumberHasBeenSet = true;
  }

  return *this;
}

JsonValue SelfServiceConversationHistory::Jsonize() const
{
  JsonValue payload;

  if(m_botResponseHasBeenSet)
  {
   payload.WithString("botResponse", m_botResponse);

  }

  if(m_inputTranscriptHasBeenSet)
  {
   payload.WithString("inputTranscript", m_inputTranscript);

  }

  if(m_turnNumberHasBeenSet)
  {
   payload.WithInteger("turnNumber", m_turnNumber);

  }

  return payload;
}

} // namespace Model
} // namespace QConnect
} // namespace Aws
