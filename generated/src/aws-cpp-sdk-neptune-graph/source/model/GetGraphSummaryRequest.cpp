/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/neptune-graph/model/GetGraphSummaryRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::NeptuneGraph::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

GetGraphSummaryRequest::GetGraphSummaryRequest() : 
    m_graphIdentifierHasBeenSet(false),
    m_mode(GraphSummaryMode::NOT_SET),
    m_modeHasBeenSet(false)
{
}

Aws::String GetGraphSummaryRequest::SerializePayload() const
{
  return {};
}

Aws::Http::HeaderValueCollection GetGraphSummaryRequest::GetRequestSpecificHeaders() const
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

void GetGraphSummaryRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_modeHasBeenSet)
    {
      ss << GraphSummaryModeMapper::GetNameForGraphSummaryMode(m_mode);
      uri.AddQueryStringParameter("mode", ss.str());
      ss.str("");
    }

}


GetGraphSummaryRequest::EndpointParameters GetGraphSummaryRequest::GetEndpointContextParams() const
{
    EndpointParameters parameters;
    // Static context parameters
    parameters.emplace_back(Aws::String("ApiType"), "DataPlane", Aws::Endpoint::EndpointParameter::ParameterOrigin::STATIC_CONTEXT);
    return parameters;
}


