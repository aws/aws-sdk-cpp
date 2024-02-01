/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/neptune-graph/model/ListQueriesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::NeptuneGraph::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

ListQueriesRequest::ListQueriesRequest() : 
    m_graphIdentifierHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_state(QueryStateInput::NOT_SET),
    m_stateHasBeenSet(false)
{
}

Aws::String ListQueriesRequest::SerializePayload() const
{
  return {};
}

Aws::Http::HeaderValueCollection ListQueriesRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  Aws::StringStream ss;
  if(m_graphIdentifierHasBeenSet)
  {
    ss << m_graphIdentifier;
    headers.emplace("graphidentifier",  ss.str());
    ss.str("");
  }

  return headers;

}

void ListQueriesRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_maxResultsHasBeenSet)
    {
      ss << m_maxResults;
      uri.AddQueryStringParameter("maxResults", ss.str());
      ss.str("");
    }

    if(m_stateHasBeenSet)
    {
      ss << QueryStateInputMapper::GetNameForQueryStateInput(m_state);
      uri.AddQueryStringParameter("state", ss.str());
      ss.str("");
    }

}


ListQueriesRequest::EndpointParameters ListQueriesRequest::GetEndpointContextParams() const
{
    EndpointParameters parameters;
    // Static context parameters
    parameters.emplace_back(Aws::String("ApiType"), "DataPlane", Aws::Endpoint::EndpointParameter::ParameterOrigin::STATIC_CONTEXT);
    return parameters;
}


