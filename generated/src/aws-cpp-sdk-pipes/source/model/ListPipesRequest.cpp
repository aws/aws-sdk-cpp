/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pipes/model/ListPipesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Pipes::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

ListPipesRequest::ListPipesRequest() : 
    m_currentState(PipeState::NOT_SET),
    m_currentStateHasBeenSet(false),
    m_desiredState(RequestedPipeState::NOT_SET),
    m_desiredStateHasBeenSet(false),
    m_limit(0),
    m_limitHasBeenSet(false),
    m_namePrefixHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_sourcePrefixHasBeenSet(false),
    m_targetPrefixHasBeenSet(false)
{
}

Aws::String ListPipesRequest::SerializePayload() const
{
  return {};
}

void ListPipesRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_currentStateHasBeenSet)
    {
      ss << PipeStateMapper::GetNameForPipeState(m_currentState);
      uri.AddQueryStringParameter("CurrentState", ss.str());
      ss.str("");
    }

    if(m_desiredStateHasBeenSet)
    {
      ss << RequestedPipeStateMapper::GetNameForRequestedPipeState(m_desiredState);
      uri.AddQueryStringParameter("DesiredState", ss.str());
      ss.str("");
    }

    if(m_limitHasBeenSet)
    {
      ss << m_limit;
      uri.AddQueryStringParameter("Limit", ss.str());
      ss.str("");
    }

    if(m_namePrefixHasBeenSet)
    {
      ss << m_namePrefix;
      uri.AddQueryStringParameter("NamePrefix", ss.str());
      ss.str("");
    }

    if(m_nextTokenHasBeenSet)
    {
      ss << m_nextToken;
      uri.AddQueryStringParameter("NextToken", ss.str());
      ss.str("");
    }

    if(m_sourcePrefixHasBeenSet)
    {
      ss << m_sourcePrefix;
      uri.AddQueryStringParameter("SourcePrefix", ss.str());
      ss.str("");
    }

    if(m_targetPrefixHasBeenSet)
    {
      ss << m_targetPrefix;
      uri.AddQueryStringParameter("TargetPrefix", ss.str());
      ss.str("");
    }

}



