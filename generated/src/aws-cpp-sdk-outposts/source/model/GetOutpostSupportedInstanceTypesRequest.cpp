/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/outposts/model/GetOutpostSupportedInstanceTypesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Outposts::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

Aws::String GetOutpostSupportedInstanceTypesRequest::SerializePayload() const
{
  return {};
}

void GetOutpostSupportedInstanceTypesRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_orderIdHasBeenSet)
    {
      ss << m_orderId;
      uri.AddQueryStringParameter("OrderId", ss.str());
      ss.str("");
    }

    if(m_assetIdHasBeenSet)
    {
      ss << m_assetId;
      uri.AddQueryStringParameter("AssetId", ss.str());
      ss.str("");
    }

    if(m_maxResultsHasBeenSet)
    {
      ss << m_maxResults;
      uri.AddQueryStringParameter("MaxResults", ss.str());
      ss.str("");
    }

    if(m_nextTokenHasBeenSet)
    {
      ss << m_nextToken;
      uri.AddQueryStringParameter("NextToken", ss.str());
      ss.str("");
    }

}



