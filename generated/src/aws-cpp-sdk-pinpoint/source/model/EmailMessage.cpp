/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint/model/EmailMessage.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Pinpoint
{
namespace Model
{

EmailMessage::EmailMessage() : 
    m_bodyHasBeenSet(false),
    m_feedbackForwardingAddressHasBeenSet(false),
    m_fromAddressHasBeenSet(false),
    m_rawEmailHasBeenSet(false),
    m_replyToAddressesHasBeenSet(false),
    m_simpleEmailHasBeenSet(false),
    m_substitutionsHasBeenSet(false)
{
}

EmailMessage::EmailMessage(JsonView jsonValue) : 
    m_bodyHasBeenSet(false),
    m_feedbackForwardingAddressHasBeenSet(false),
    m_fromAddressHasBeenSet(false),
    m_rawEmailHasBeenSet(false),
    m_replyToAddressesHasBeenSet(false),
    m_simpleEmailHasBeenSet(false),
    m_substitutionsHasBeenSet(false)
{
  *this = jsonValue;
}

EmailMessage& EmailMessage::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Body"))
  {
    m_body = jsonValue.GetString("Body");

    m_bodyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FeedbackForwardingAddress"))
  {
    m_feedbackForwardingAddress = jsonValue.GetString("FeedbackForwardingAddress");

    m_feedbackForwardingAddressHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FromAddress"))
  {
    m_fromAddress = jsonValue.GetString("FromAddress");

    m_fromAddressHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RawEmail"))
  {
    m_rawEmail = jsonValue.GetObject("RawEmail");

    m_rawEmailHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ReplyToAddresses"))
  {
    Aws::Utils::Array<JsonView> replyToAddressesJsonList = jsonValue.GetArray("ReplyToAddresses");
    for(unsigned replyToAddressesIndex = 0; replyToAddressesIndex < replyToAddressesJsonList.GetLength(); ++replyToAddressesIndex)
    {
      m_replyToAddresses.push_back(replyToAddressesJsonList[replyToAddressesIndex].AsString());
    }
    m_replyToAddressesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SimpleEmail"))
  {
    m_simpleEmail = jsonValue.GetObject("SimpleEmail");

    m_simpleEmailHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Substitutions"))
  {
    Aws::Map<Aws::String, JsonView> substitutionsJsonMap = jsonValue.GetObject("Substitutions").GetAllObjects();
    for(auto& substitutionsItem : substitutionsJsonMap)
    {
      Aws::Utils::Array<JsonView> listOf__stringJsonList = substitutionsItem.second.AsArray();
      Aws::Vector<Aws::String> listOf__stringList;
      listOf__stringList.reserve((size_t)listOf__stringJsonList.GetLength());
      for(unsigned listOf__stringIndex = 0; listOf__stringIndex < listOf__stringJsonList.GetLength(); ++listOf__stringIndex)
      {
        listOf__stringList.push_back(listOf__stringJsonList[listOf__stringIndex].AsString());
      }
      m_substitutions[substitutionsItem.first] = std::move(listOf__stringList);
    }
    m_substitutionsHasBeenSet = true;
  }

  return *this;
}

JsonValue EmailMessage::Jsonize() const
{
  JsonValue payload;

  if(m_bodyHasBeenSet)
  {
   payload.WithString("Body", m_body);

  }

  if(m_feedbackForwardingAddressHasBeenSet)
  {
   payload.WithString("FeedbackForwardingAddress", m_feedbackForwardingAddress);

  }

  if(m_fromAddressHasBeenSet)
  {
   payload.WithString("FromAddress", m_fromAddress);

  }

  if(m_rawEmailHasBeenSet)
  {
   payload.WithObject("RawEmail", m_rawEmail.Jsonize());

  }

  if(m_replyToAddressesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> replyToAddressesJsonList(m_replyToAddresses.size());
   for(unsigned replyToAddressesIndex = 0; replyToAddressesIndex < replyToAddressesJsonList.GetLength(); ++replyToAddressesIndex)
   {
     replyToAddressesJsonList[replyToAddressesIndex].AsString(m_replyToAddresses[replyToAddressesIndex]);
   }
   payload.WithArray("ReplyToAddresses", std::move(replyToAddressesJsonList));

  }

  if(m_simpleEmailHasBeenSet)
  {
   payload.WithObject("SimpleEmail", m_simpleEmail.Jsonize());

  }

  if(m_substitutionsHasBeenSet)
  {
   JsonValue substitutionsJsonMap;
   for(auto& substitutionsItem : m_substitutions)
   {
     Aws::Utils::Array<JsonValue> listOf__stringJsonList(substitutionsItem.second.size());
     for(unsigned listOf__stringIndex = 0; listOf__stringIndex < listOf__stringJsonList.GetLength(); ++listOf__stringIndex)
     {
       listOf__stringJsonList[listOf__stringIndex].AsString(substitutionsItem.second[listOf__stringIndex]);
     }
     substitutionsJsonMap.WithArray(substitutionsItem.first, std::move(listOf__stringJsonList));
   }
   payload.WithObject("Substitutions", std::move(substitutionsJsonMap));

  }

  return payload;
}

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
