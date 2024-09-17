/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qbusiness/model/ChatSyncRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::QBusiness::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

ChatSyncRequest::ChatSyncRequest() : 
    m_applicationIdHasBeenSet(false),
    m_userIdHasBeenSet(false),
    m_userGroupsHasBeenSet(false),
    m_userMessageHasBeenSet(false),
    m_attachmentsHasBeenSet(false),
    m_actionExecutionHasBeenSet(false),
    m_authChallengeResponseHasBeenSet(false),
    m_conversationIdHasBeenSet(false),
    m_parentMessageIdHasBeenSet(false),
    m_attributeFilterHasBeenSet(false),
    m_chatMode(ChatMode::NOT_SET),
    m_chatModeHasBeenSet(false),
    m_chatModeConfigurationHasBeenSet(false),
    m_clientToken(Aws::Utils::UUID::PseudoRandomUUID()),
    m_clientTokenHasBeenSet(true)
{
}

Aws::String ChatSyncRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_userMessageHasBeenSet)
  {
   payload.WithString("userMessage", m_userMessage);

  }

  if(m_attachmentsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> attachmentsJsonList(m_attachments.size());
   for(unsigned attachmentsIndex = 0; attachmentsIndex < attachmentsJsonList.GetLength(); ++attachmentsIndex)
   {
     attachmentsJsonList[attachmentsIndex].AsObject(m_attachments[attachmentsIndex].Jsonize());
   }
   payload.WithArray("attachments", std::move(attachmentsJsonList));

  }

  if(m_actionExecutionHasBeenSet)
  {
   payload.WithObject("actionExecution", m_actionExecution.Jsonize());

  }

  if(m_authChallengeResponseHasBeenSet)
  {
   payload.WithObject("authChallengeResponse", m_authChallengeResponse.Jsonize());

  }

  if(m_conversationIdHasBeenSet)
  {
   payload.WithString("conversationId", m_conversationId);

  }

  if(m_parentMessageIdHasBeenSet)
  {
   payload.WithString("parentMessageId", m_parentMessageId);

  }

  if(m_attributeFilterHasBeenSet)
  {
   payload.WithObject("attributeFilter", m_attributeFilter.Jsonize());

  }

  if(m_chatModeHasBeenSet)
  {
   payload.WithString("chatMode", ChatModeMapper::GetNameForChatMode(m_chatMode));
  }

  if(m_chatModeConfigurationHasBeenSet)
  {
   payload.WithObject("chatModeConfiguration", m_chatModeConfiguration.Jsonize());

  }

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("clientToken", m_clientToken);

  }

  return payload.View().WriteReadable();
}

void ChatSyncRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_userIdHasBeenSet)
    {
      ss << m_userId;
      uri.AddQueryStringParameter("userId", ss.str());
      ss.str("");
    }

    if(m_userGroupsHasBeenSet)
    {
      for(const auto& item : m_userGroups)
      {
        ss << item;
        uri.AddQueryStringParameter("userGroups", ss.str());
        ss.str("");
      }
    }

}



