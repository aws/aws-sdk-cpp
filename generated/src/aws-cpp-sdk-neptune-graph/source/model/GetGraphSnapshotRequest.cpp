/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/neptune-graph/model/GetGraphSnapshotRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::NeptuneGraph::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetGraphSnapshotRequest::GetGraphSnapshotRequest() : 
    m_snapshotIdentifierHasBeenSet(false)
{
}

Aws::String GetGraphSnapshotRequest::SerializePayload() const
{
  return {};
}



GetGraphSnapshotRequest::EndpointParameters GetGraphSnapshotRequest::GetEndpointContextParams() const
{
    EndpointParameters parameters;
    // Static context parameters
    parameters.emplace_back(Aws::String("ApiType"), "ControlPlane", Aws::Endpoint::EndpointParameter::ParameterOrigin::STATIC_CONTEXT);
    return parameters;
}


