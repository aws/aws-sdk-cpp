/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint-sms-voice-v2/model/KeywordInformation.h>
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

KeywordInformation::KeywordInformation(JsonView jsonValue)
{
  *this = jsonValue;
}

KeywordInformation& KeywordInformation::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Keyword"))
  {
    m_keyword = jsonValue.GetString("Keyword");
    m_keywordHasBeenSet = true;
  }
  if(jsonValue.ValueExists("KeywordMessage"))
  {
    m_keywordMessage = jsonValue.GetString("KeywordMessage");
    m_keywordMessageHasBeenSet = true;
  }
  if(jsonValue.ValueExists("KeywordAction"))
  {
    m_keywordAction = KeywordActionMapper::GetKeywordActionForName(jsonValue.GetString("KeywordAction"));
    m_keywordActionHasBeenSet = true;
  }
  return *this;
}

JsonValue KeywordInformation::Jsonize() const
{
  JsonValue payload;

  if(m_keywordHasBeenSet)
  {
   payload.WithString("Keyword", m_keyword);

  }

  if(m_keywordMessageHasBeenSet)
  {
   payload.WithString("KeywordMessage", m_keywordMessage);

  }

  if(m_keywordActionHasBeenSet)
  {
   payload.WithString("KeywordAction", KeywordActionMapper::GetNameForKeywordAction(m_keywordAction));
  }

  return payload;
}

} // namespace Model
} // namespace PinpointSMSVoiceV2
} // namespace Aws
