/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/networkmanager/model/ListPeeringsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::NetworkManager::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

Aws::String ListPeeringsRequest::SerializePayload() const
{
  return {};
}

void ListPeeringsRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_coreNetworkIdHasBeenSet)
    {
      ss << m_coreNetworkId;
      uri.AddQueryStringParameter("coreNetworkId", ss.str());
      ss.str("");
    }

    if(m_peeringTypeHasBeenSet)
    {
      ss << PeeringTypeMapper::GetNameForPeeringType(m_peeringType);
      uri.AddQueryStringParameter("peeringType", ss.str());
      ss.str("");
    }

    if(m_edgeLocationHasBeenSet)
    {
      ss << m_edgeLocation;
      uri.AddQueryStringParameter("edgeLocation", ss.str());
      ss.str("");
    }

    if(m_stateHasBeenSet)
    {
      ss << PeeringStateMapper::GetNameForPeeringState(m_state);
      uri.AddQueryStringParameter("state", ss.str());
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



