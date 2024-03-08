/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qbusiness/model/DeleteConversationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::QBusiness::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

DeleteConversationRequest::DeleteConversationRequest() : 
    m_applicationIdHasBeenSet(false),
    m_conversationIdHasBeenSet(false),
    m_userIdHasBeenSet(false)
{
}

Aws::String DeleteConversationRequest::SerializePayload() const
{
  return {};
}

void DeleteConversationRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_userIdHasBeenSet)
    {
      ss << m_userId;
      uri.AddQueryStringParameter("userId", ss.str());
      ss.str("");
    }

}



