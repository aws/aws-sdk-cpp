/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker-a2i-runtime/model/ListHumanLoopsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::AugmentedAIRuntime::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

ListHumanLoopsRequest::ListHumanLoopsRequest() : 
    m_creationTimeAfterHasBeenSet(false),
    m_creationTimeBeforeHasBeenSet(false),
    m_flowDefinitionArnHasBeenSet(false),
    m_sortOrder(SortOrder::NOT_SET),
    m_sortOrderHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false)
{
}

Aws::String ListHumanLoopsRequest::SerializePayload() const
{
  return {};
}

void ListHumanLoopsRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_creationTimeAfterHasBeenSet)
    {
      ss << m_creationTimeAfter.ToGmtString(Aws::Utils::DateFormat::ISO_8601);
      uri.AddQueryStringParameter("CreationTimeAfter", ss.str());
      ss.str("");
    }

    if(m_creationTimeBeforeHasBeenSet)
    {
      ss << m_creationTimeBefore.ToGmtString(Aws::Utils::DateFormat::ISO_8601);
      uri.AddQueryStringParameter("CreationTimeBefore", ss.str());
      ss.str("");
    }

    if(m_flowDefinitionArnHasBeenSet)
    {
      ss << m_flowDefinitionArn;
      uri.AddQueryStringParameter("FlowDefinitionArn", ss.str());
      ss.str("");
    }

    if(m_sortOrderHasBeenSet)
    {
      ss << SortOrderMapper::GetNameForSortOrder(m_sortOrder);
      uri.AddQueryStringParameter("SortOrder", ss.str());
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

}



