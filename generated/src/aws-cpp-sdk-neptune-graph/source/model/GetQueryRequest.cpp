/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/neptune-graph/model/GetQueryRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::NeptuneGraph::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetQueryRequest::GetQueryRequest() : 
    m_graphIdentifierHasBeenSet(false),
    m_queryIdHasBeenSet(false)
{
}

Aws::String GetQueryRequest::SerializePayload() const
{
  return {};
}

Aws::Http::HeaderValueCollection GetQueryRequest::GetRequestSpecificHeaders() const
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



GetQueryRequest::EndpointParameters GetQueryRequest::GetEndpointContextParams() const
{
    EndpointParameters parameters;
    // Static context parameters
    parameters.emplace_back(Aws::String("ApiType"), "DataPlane", Aws::Endpoint::EndpointParameter::ParameterOrigin::STATIC_CONTEXT);
    return parameters;
}


