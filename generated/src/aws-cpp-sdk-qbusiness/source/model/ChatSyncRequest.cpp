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
    m_actionExecutionHasBeenSet(false),
    m_applicationIdHasBeenSet(false),
    m_attachmentsHasBeenSet(false),
    m_attributeFilterHasBeenSet(false),
    m_clientToken(Aws::Utils::UUID::PseudoRandomUUID()),
    m_clientTokenHasBeenSet(true),
    m_conversationIdHasBeenSet(false),
    m_parentMessageIdHasBeenSet(false),
    m_userGroupsHasBeenSet(false),
    m_userIdHasBeenSet(false),
    m_userMessageHasBeenSet(false)
{
}

Aws::String ChatSyncRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_actionExecutionHasBeenSet)
  {
   payload.WithObject("actionExecution", m_actionExecution.Jsonize());

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

  if(m_attributeFilterHasBeenSet)
  {
   payload.WithObject("attributeFilter", m_attributeFilter.Jsonize());

  }

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("clientToken", m_clientToken);

  }

  if(m_conversationIdHasBeenSet)
  {
   payload.WithString("conversationId", m_conversationId);

  }

  if(m_parentMessageIdHasBeenSet)
  {
   payload.WithString("parentMessageId", m_parentMessageId);

  }

  if(m_userMessageHasBeenSet)
  {
   payload.WithString("userMessage", m_userMessage);

  }

  return payload.View().WriteReadable();
}

void ChatSyncRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_userGroupsHasBeenSet)
    {
      for(const auto& item : m_userGroups)
      {
        ss << item;
        uri.AddQueryStringParameter("userGroups", ss.str());
        ss.str("");
      }
    }

    if(m_userIdHasBeenSet)
    {
      ss << m_userId;
      uri.AddQueryStringParameter("userId", ss.str());
      ss.str("");
    }

}



