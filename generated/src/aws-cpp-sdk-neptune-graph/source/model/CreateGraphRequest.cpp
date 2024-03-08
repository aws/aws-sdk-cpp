/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/neptune-graph/model/CreateGraphRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::NeptuneGraph::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateGraphRequest::CreateGraphRequest() : 
    m_graphNameHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_publicConnectivity(false),
    m_publicConnectivityHasBeenSet(false),
    m_kmsKeyIdentifierHasBeenSet(false),
    m_vectorSearchConfigurationHasBeenSet(false),
    m_replicaCount(0),
    m_replicaCountHasBeenSet(false),
    m_deletionProtection(false),
    m_deletionProtectionHasBeenSet(false),
    m_provisionedMemory(0),
    m_provisionedMemoryHasBeenSet(false)
{
}

Aws::String CreateGraphRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_graphNameHasBeenSet)
  {
   payload.WithString("graphName", m_graphName);

  }

  if(m_tagsHasBeenSet)
  {
   JsonValue tagsJsonMap;
   for(auto& tagsItem : m_tags)
   {
     tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
   }
   payload.WithObject("tags", std::move(tagsJsonMap));

  }

  if(m_publicConnectivityHasBeenSet)
  {
   payload.WithBool("publicConnectivity", m_publicConnectivity);

  }

  if(m_kmsKeyIdentifierHasBeenSet)
  {
   payload.WithString("kmsKeyIdentifier", m_kmsKeyIdentifier);

  }

  if(m_vectorSearchConfigurationHasBeenSet)
  {
   payload.WithObject("vectorSearchConfiguration", m_vectorSearchConfiguration.Jsonize());

  }

  if(m_replicaCountHasBeenSet)
  {
   payload.WithInteger("replicaCount", m_replicaCount);

  }

  if(m_deletionProtectionHasBeenSet)
  {
   payload.WithBool("deletionProtection", m_deletionProtection);

  }

  if(m_provisionedMemoryHasBeenSet)
  {
   payload.WithInteger("provisionedMemory", m_provisionedMemory);

  }

  return payload.View().WriteReadable();
}



CreateGraphRequest::EndpointParameters CreateGraphRequest::GetEndpointContextParams() const
{
    EndpointParameters parameters;
    // Static context parameters
    parameters.emplace_back(Aws::String("ApiType"), "ControlPlane", Aws::Endpoint::EndpointParameter::ParameterOrigin::STATIC_CONTEXT);
    return parameters;
}


