/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/omics/model/ListWorkflowsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Omics::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

ListWorkflowsRequest::ListWorkflowsRequest() : 
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_startingTokenHasBeenSet(false),
    m_type(WorkflowType::NOT_SET),
    m_typeHasBeenSet(false)
{
}

Aws::String ListWorkflowsRequest::SerializePayload() const
{
  return {};
}

void ListWorkflowsRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_maxResultsHasBeenSet)
    {
      ss << m_maxResults;
      uri.AddQueryStringParameter("maxResults", ss.str());
      ss.str("");
    }

    if(m_nameHasBeenSet)
    {
      ss << m_name;
      uri.AddQueryStringParameter("name", ss.str());
      ss.str("");
    }

    if(m_startingTokenHasBeenSet)
    {
      ss << m_startingToken;
      uri.AddQueryStringParameter("startingToken", ss.str());
      ss.str("");
    }

    if(m_typeHasBeenSet)
    {
      ss << WorkflowTypeMapper::GetNameForWorkflowType(m_type);
      uri.AddQueryStringParameter("type", ss.str());
      ss.str("");
    }

}



