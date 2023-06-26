/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/vpc-lattice/model/ListServiceNetworkVpcAssociationsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::VPCLattice::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

ListServiceNetworkVpcAssociationsRequest::ListServiceNetworkVpcAssociationsRequest() : 
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_serviceNetworkIdentifierHasBeenSet(false),
    m_vpcIdentifierHasBeenSet(false)
{
}

Aws::String ListServiceNetworkVpcAssociationsRequest::SerializePayload() const
{
  return {};
}

void ListServiceNetworkVpcAssociationsRequest::AddQueryStringParameters(URI& uri) const
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

    if(m_serviceNetworkIdentifierHasBeenSet)
    {
      ss << m_serviceNetworkIdentifier;
      uri.AddQueryStringParameter("serviceNetworkIdentifier", ss.str());
      ss.str("");
    }

    if(m_vpcIdentifierHasBeenSet)
    {
      ss << m_vpcIdentifier;
      uri.AddQueryStringParameter("vpcIdentifier", ss.str());
      ss.str("");
    }

}



