/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/ListConnectorsV2Request.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::SecurityHub::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

Aws::String ListConnectorsV2Request::SerializePayload() const
{
  return {};
}

void ListConnectorsV2Request::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_nextTokenHasBeenSet)
    {
      ss << m_nextToken;
      uri.AddQueryStringParameter("NextToken", ss.str());
      ss.str("");
    }

    if(m_maxResultsHasBeenSet)
    {
      ss << m_maxResults;
      uri.AddQueryStringParameter("MaxResults", ss.str());
      ss.str("");
    }

    if(m_providerNameHasBeenSet)
    {
      ss << ConnectorProviderNameMapper::GetNameForConnectorProviderName(m_providerName);
      uri.AddQueryStringParameter("ProviderName", ss.str());
      ss.str("");
    }

    if(m_connectorStatusHasBeenSet)
    {
      ss << ConnectorStatusMapper::GetNameForConnectorStatus(m_connectorStatus);
      uri.AddQueryStringParameter("ConnectorStatus", ss.str());
      ss.str("");
    }

}



