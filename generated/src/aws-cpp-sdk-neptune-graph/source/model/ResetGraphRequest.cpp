/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/neptune-graph/model/ResetGraphRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::NeptuneGraph::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ResetGraphRequest::ResetGraphRequest() : 
    m_graphIdentifierHasBeenSet(false),
    m_skipSnapshot(false),
    m_skipSnapshotHasBeenSet(false)
{
}

Aws::String ResetGraphRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_skipSnapshotHasBeenSet)
  {
   payload.WithBool("skipSnapshot", m_skipSnapshot);

  }

  return payload.View().WriteReadable();
}



ResetGraphRequest::EndpointParameters ResetGraphRequest::GetEndpointContextParams() const
{
    EndpointParameters parameters;
    // Static context parameters
    parameters.emplace_back(Aws::String("ApiType"), "ControlPlane", Aws::Endpoint::EndpointParameter::ParameterOrigin::STATIC_CONTEXT);
    return parameters;
}


