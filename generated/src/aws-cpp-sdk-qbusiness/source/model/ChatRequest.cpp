/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qbusiness/model/ChatRequest.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::QBusiness::Model;
using namespace Aws::Utils::Stream;
using namespace Aws::Utils;
using namespace Aws::Http;
using namespace Aws;

std::shared_ptr<Aws::IOStream> ChatRequest::GetBody() const
{
    return m_inputStream;
}

void ChatRequest::AddQueryStringParameters(URI& uri) const
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

    if(m_conversationIdHasBeenSet)
    {
      ss << m_conversationId;
      uri.AddQueryStringParameter("conversationId", ss.str());
      ss.str("");
    }

    if(m_parentMessageIdHasBeenSet)
    {
      ss << m_parentMessageId;
      uri.AddQueryStringParameter("parentMessageId", ss.str());
      ss.str("");
    }

    if(m_clientTokenHasBeenSet)
    {
      ss << m_clientToken;
      uri.AddQueryStringParameter("clientToken", ss.str());
      ss.str("");
    }

}

