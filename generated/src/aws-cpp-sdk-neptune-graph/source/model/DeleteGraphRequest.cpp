/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/neptune-graph/model/DeleteGraphRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::NeptuneGraph::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

DeleteGraphRequest::DeleteGraphRequest() : 
    m_graphIdentifierHasBeenSet(false),
    m_skipSnapshot(false),
    m_skipSnapshotHasBeenSet(false)
{
}

Aws::String DeleteGraphRequest::SerializePayload() const
{
  return {};
}

void DeleteGraphRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_skipSnapshotHasBeenSet)
    {
      ss << m_skipSnapshot;
      uri.AddQueryStringParameter("skipSnapshot", ss.str());
      ss.str("");
    }

}


DeleteGraphRequest::EndpointParameters DeleteGraphRequest::GetEndpointContextParams() const
{
    EndpointParameters parameters;
    // Static context parameters
    parameters.emplace_back(Aws::String("ApiType"), "ControlPlane", Aws::Endpoint::EndpointParameter::ParameterOrigin::STATIC_CONTEXT);
    return parameters;
}


