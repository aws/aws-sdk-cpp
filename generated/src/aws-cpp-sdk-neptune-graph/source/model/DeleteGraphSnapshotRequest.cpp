/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/neptune-graph/model/DeleteGraphSnapshotRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::NeptuneGraph::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteGraphSnapshotRequest::DeleteGraphSnapshotRequest() : 
    m_snapshotIdentifierHasBeenSet(false)
{
}

Aws::String DeleteGraphSnapshotRequest::SerializePayload() const
{
  return {};
}



DeleteGraphSnapshotRequest::EndpointParameters DeleteGraphSnapshotRequest::GetEndpointContextParams() const
{
    EndpointParameters parameters;
    // Static context parameters
    parameters.emplace_back(Aws::String("ApiType"), "ControlPlane", Aws::Endpoint::EndpointParameter::ParameterOrigin::STATIC_CONTEXT);
    return parameters;
}


