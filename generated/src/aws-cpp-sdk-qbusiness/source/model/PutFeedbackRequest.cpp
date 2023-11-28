/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qbusiness/model/PutFeedbackRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::QBusiness::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

PutFeedbackRequest::PutFeedbackRequest() : 
    m_applicationIdHasBeenSet(false),
    m_conversationIdHasBeenSet(false),
    m_messageCopiedAtHasBeenSet(false),
    m_messageIdHasBeenSet(false),
    m_messageUsefulnessHasBeenSet(false),
    m_userIdHasBeenSet(false)
{
}

Aws::String PutFeedbackRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_messageCopiedAtHasBeenSet)
  {
   payload.WithDouble("messageCopiedAt", m_messageCopiedAt.SecondsWithMSPrecision());
  }

  if(m_messageUsefulnessHasBeenSet)
  {
   payload.WithObject("messageUsefulness", m_messageUsefulness.Jsonize());

  }

  return payload.View().WriteReadable();
}

void PutFeedbackRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_userIdHasBeenSet)
    {
      ss << m_userId;
      uri.AddQueryStringParameter("userId", ss.str());
      ss.str("");
    }

}



