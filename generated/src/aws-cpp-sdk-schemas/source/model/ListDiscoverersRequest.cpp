﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/schemas/model/ListDiscoverersRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Schemas::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

Aws::String ListDiscoverersRequest::SerializePayload() const
{
  return {};
}

void ListDiscoverersRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_discovererIdPrefixHasBeenSet)
    {
      ss << m_discovererIdPrefix;
      uri.AddQueryStringParameter("discovererIdPrefix", ss.str());
      ss.str("");
    }

    if(m_limitHasBeenSet)
    {
      ss << m_limit;
      uri.AddQueryStringParameter("limit", ss.str());
      ss.str("");
    }

    if(m_nextTokenHasBeenSet)
    {
      ss << m_nextToken;
      uri.AddQueryStringParameter("nextToken", ss.str());
      ss.str("");
    }

    if(m_sourceArnPrefixHasBeenSet)
    {
      ss << m_sourceArnPrefix;
      uri.AddQueryStringParameter("sourceArnPrefix", ss.str());
      ss.str("");
    }

}



