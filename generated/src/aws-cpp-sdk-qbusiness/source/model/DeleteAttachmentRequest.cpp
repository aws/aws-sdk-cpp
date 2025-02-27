/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qbusiness/model/DeleteAttachmentRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::QBusiness::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

DeleteAttachmentRequest::DeleteAttachmentRequest() : 
    m_applicationIdHasBeenSet(false),
    m_conversationIdHasBeenSet(false),
    m_attachmentIdHasBeenSet(false),
    m_userIdHasBeenSet(false)
{
}

Aws::String DeleteAttachmentRequest::SerializePayload() const
{
  return {};
}

void DeleteAttachmentRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_userIdHasBeenSet)
    {
      ss << m_userId;
      uri.AddQueryStringParameter("userId", ss.str());
      ss.str("");
    }

}



