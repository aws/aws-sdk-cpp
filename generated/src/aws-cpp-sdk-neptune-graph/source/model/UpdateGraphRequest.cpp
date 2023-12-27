/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/neptune-graph/model/UpdateGraphRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::NeptuneGraph::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateGraphRequest::UpdateGraphRequest() : 
    m_graphIdentifierHasBeenSet(false),
    m_publicConnectivity(false),
    m_publicConnectivityHasBeenSet(false),
    m_provisionedMemory(0),
    m_provisionedMemoryHasBeenSet(false),
    m_deletionProtection(false),
    m_deletionProtectionHasBeenSet(false)
{
}

Aws::String UpdateGraphRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_publicConnectivityHasBeenSet)
  {
   payload.WithBool("publicConnectivity", m_publicConnectivity);

  }

  if(m_provisionedMemoryHasBeenSet)
  {
   payload.WithInteger("provisionedMemory", m_provisionedMemory);

  }

  if(m_deletionProtectionHasBeenSet)
  {
   payload.WithBool("deletionProtection", m_deletionProtection);

  }

  return payload.View().WriteReadable();
}



UpdateGraphRequest::EndpointParameters UpdateGraphRequest::GetEndpointContextParams() const
{
    EndpointParameters parameters;
    // Static context parameters
    parameters.emplace_back(Aws::String("ApiType"), "ControlPlane", Aws::Endpoint::EndpointParameter::ParameterOrigin::STATIC_CONTEXT);
    return parameters;
}


