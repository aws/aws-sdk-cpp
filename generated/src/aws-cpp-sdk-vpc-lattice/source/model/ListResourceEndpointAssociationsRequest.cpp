﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/vpc-lattice/model/ListResourceEndpointAssociationsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::VPCLattice::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

ListResourceEndpointAssociationsRequest::ListResourceEndpointAssociationsRequest() : 
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_resourceConfigurationIdentifierHasBeenSet(false),
    m_resourceEndpointAssociationIdentifierHasBeenSet(false),
    m_vpcEndpointIdHasBeenSet(false),
    m_vpcEndpointOwnerHasBeenSet(false)
{
}

Aws::String ListResourceEndpointAssociationsRequest::SerializePayload() const
{
  return {};
}

void ListResourceEndpointAssociationsRequest::AddQueryStringParameters(URI& uri) const
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

    if(m_resourceConfigurationIdentifierHasBeenSet)
    {
      ss << m_resourceConfigurationIdentifier;
      uri.AddQueryStringParameter("resourceConfigurationIdentifier", ss.str());
      ss.str("");
    }

    if(m_resourceEndpointAssociationIdentifierHasBeenSet)
    {
      ss << m_resourceEndpointAssociationIdentifier;
      uri.AddQueryStringParameter("resourceEndpointAssociationIdentifier", ss.str());
      ss.str("");
    }

    if(m_vpcEndpointIdHasBeenSet)
    {
      ss << m_vpcEndpointId;
      uri.AddQueryStringParameter("vpcEndpointId", ss.str());
      ss.str("");
    }

    if(m_vpcEndpointOwnerHasBeenSet)
    {
      ss << m_vpcEndpointOwner;
      uri.AddQueryStringParameter("vpcEndpointOwner", ss.str());
      ss.str("");
    }

}



