﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mq/model/DescribeBrokerInstanceOptionsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::MQ::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

Aws::String DescribeBrokerInstanceOptionsRequest::SerializePayload() const
{
  return {};
}

void DescribeBrokerInstanceOptionsRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_engineTypeHasBeenSet)
    {
      ss << m_engineType;
      uri.AddQueryStringParameter("engineType", ss.str());
      ss.str("");
    }

    if(m_hostInstanceTypeHasBeenSet)
    {
      ss << m_hostInstanceType;
      uri.AddQueryStringParameter("hostInstanceType", ss.str());
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

    if(m_storageTypeHasBeenSet)
    {
      ss << m_storageType;
      uri.AddQueryStringParameter("storageType", ss.str());
      ss.str("");
    }

}



