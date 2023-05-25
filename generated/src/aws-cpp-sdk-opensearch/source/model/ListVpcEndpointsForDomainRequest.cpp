/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/opensearch/model/ListVpcEndpointsForDomainRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::OpenSearchService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

ListVpcEndpointsForDomainRequest::ListVpcEndpointsForDomainRequest() : 
    m_domainNameHasBeenSet(false),
    m_nextTokenHasBeenSet(false)
{
}

Aws::String ListVpcEndpointsForDomainRequest::SerializePayload() const
{
  return {};
}

void ListVpcEndpointsForDomainRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_nextTokenHasBeenSet)
    {
      ss << m_nextToken;
      uri.AddQueryStringParameter("nextToken", ss.str());
      ss.str("");
    }

}



