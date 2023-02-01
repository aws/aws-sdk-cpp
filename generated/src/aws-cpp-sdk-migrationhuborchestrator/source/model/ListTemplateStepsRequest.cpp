/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/migrationhuborchestrator/model/ListTemplateStepsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::MigrationHubOrchestrator::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

ListTemplateStepsRequest::ListTemplateStepsRequest() : 
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_templateIdHasBeenSet(false),
    m_stepGroupIdHasBeenSet(false)
{
}

Aws::String ListTemplateStepsRequest::SerializePayload() const
{
  return {};
}

void ListTemplateStepsRequest::AddQueryStringParameters(URI& uri) const
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

    if(m_templateIdHasBeenSet)
    {
      ss << m_templateId;
      uri.AddQueryStringParameter("templateId", ss.str());
      ss.str("");
    }

    if(m_stepGroupIdHasBeenSet)
    {
      ss << m_stepGroupId;
      uri.AddQueryStringParameter("stepGroupId", ss.str());
      ss.str("");
    }

}



