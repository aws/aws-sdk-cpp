/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/neptune-graph/model/GetPrivateGraphEndpointRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::NeptuneGraph::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetPrivateGraphEndpointRequest::GetPrivateGraphEndpointRequest() : 
    m_graphIdentifierHasBeenSet(false),
    m_vpcIdHasBeenSet(false)
{
}

Aws::String GetPrivateGraphEndpointRequest::SerializePayload() const
{
  return {};
}



GetPrivateGraphEndpointRequest::EndpointParameters GetPrivateGraphEndpointRequest::GetEndpointContextParams() const
{
    EndpointParameters parameters;
    // Static context parameters
    parameters.emplace_back(Aws::String("ApiType"), "ControlPlane", Aws::Endpoint::EndpointParameter::ParameterOrigin::STATIC_CONTEXT);
    return parameters;
}


