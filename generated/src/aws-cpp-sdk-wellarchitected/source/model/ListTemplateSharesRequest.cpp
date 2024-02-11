/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wellarchitected/model/ListTemplateSharesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::WellArchitected::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

ListTemplateSharesRequest::ListTemplateSharesRequest() : 
    m_templateArnHasBeenSet(false),
    m_sharedWithPrefixHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_status(ShareStatus::NOT_SET),
    m_statusHasBeenSet(false)
{
}

Aws::String ListTemplateSharesRequest::SerializePayload() const
{
  return {};
}

void ListTemplateSharesRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_sharedWithPrefixHasBeenSet)
    {
      ss << m_sharedWithPrefix;
      uri.AddQueryStringParameter("SharedWithPrefix", ss.str());
      ss.str("");
    }

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

    if(m_statusHasBeenSet)
    {
      ss << ShareStatusMapper::GetNameForShareStatus(m_status);
      uri.AddQueryStringParameter("Status", ss.str());
      ss.str("");
    }

}



