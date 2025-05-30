﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/networkmanager/model/ListConnectPeersRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::NetworkManager::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

Aws::String ListConnectPeersRequest::SerializePayload() const
{
  return {};
}

void ListConnectPeersRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_coreNetworkIdHasBeenSet)
    {
      ss << m_coreNetworkId;
      uri.AddQueryStringParameter("coreNetworkId", ss.str());
      ss.str("");
    }

    if(m_connectAttachmentIdHasBeenSet)
    {
      ss << m_connectAttachmentId;
      uri.AddQueryStringParameter("connectAttachmentId", ss.str());
      ss.str("");
    }

    if(m_maxResultsHasBeenSet)
    {
      ss << m_maxResults;
      uri.AddQueryStringParameter("maxResults", ss.str());
      ss.str("");
    }

    if(m_nextTokenHasBeenSet)
    {
      ss << m_nextToken;
      uri.AddQueryStringParameter("nextToken", ss.str());
      ss.str("");
    }

}



