/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sms-voice/model/ListConfigurationSetsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::PinpointSMSVoice::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

ListConfigurationSetsRequest::ListConfigurationSetsRequest() : 
    m_nextTokenHasBeenSet(false),
    m_pageSizeHasBeenSet(false)
{
}

Aws::String ListConfigurationSetsRequest::SerializePayload() const
{
  return {};
}

void ListConfigurationSetsRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_nextTokenHasBeenSet)
    {
      ss << m_nextToken;
      uri.AddQueryStringParameter("NextToken", ss.str());
      ss.str("");
    }

    if(m_pageSizeHasBeenSet)
    {
      ss << m_pageSize;
      uri.AddQueryStringParameter("PageSize", ss.str());
      ss.str("");
    }

}



