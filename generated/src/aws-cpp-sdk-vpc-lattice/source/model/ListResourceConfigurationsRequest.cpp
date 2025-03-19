/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/vpc-lattice/model/ListResourceConfigurationsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::VPCLattice::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

Aws::String ListResourceConfigurationsRequest::SerializePayload() const
{
  return {};
}

void ListResourceConfigurationsRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
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

    if(m_resourceConfigurationGroupIdentifierHasBeenSet)
    {
      ss << m_resourceConfigurationGroupIdentifier;
      uri.AddQueryStringParameter("resourceConfigurationGroupIdentifier", ss.str());
      ss.str("");
    }

    if(m_resourceGatewayIdentifierHasBeenSet)
    {
      ss << m_resourceGatewayIdentifier;
      uri.AddQueryStringParameter("resourceGatewayIdentifier", ss.str());
      ss.str("");
    }

}



