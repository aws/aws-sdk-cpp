/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/neptune-graph/model/CreateGraphUsingImportTaskRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::NeptuneGraph::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CreateGraphUsingImportTaskRequest::SerializePayload() const
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

  if(m_importOptionsHasBeenSet)
  {
   payload.WithObject("importOptions", m_importOptions.Jsonize());

  }

  if(m_maxProvisionedMemoryHasBeenSet)
  {
   payload.WithInteger("maxProvisionedMemory", m_maxProvisionedMemory);

  }

  if(m_minProvisionedMemoryHasBeenSet)
  {
   payload.WithInteger("minProvisionedMemory", m_minProvisionedMemory);

  }

  if(m_failOnErrorHasBeenSet)
  {
   payload.WithBool("failOnError", m_failOnError);

  }

  if(m_sourceHasBeenSet)
  {
   payload.WithString("source", m_source);

  }

  if(m_formatHasBeenSet)
  {
   payload.WithString("format", FormatMapper::GetNameForFormat(m_format));
  }

  if(m_parquetTypeHasBeenSet)
  {
   payload.WithString("parquetType", ParquetTypeMapper::GetNameForParquetType(m_parquetType));
  }

  if(m_blankNodeHandlingHasBeenSet)
  {
   payload.WithString("blankNodeHandling", BlankNodeHandlingMapper::GetNameForBlankNodeHandling(m_blankNodeHandling));
  }

  if(m_roleArnHasBeenSet)
  {
   payload.WithString("roleArn", m_roleArn);

  }

  return payload.View().WriteReadable();
}



CreateGraphUsingImportTaskRequest::EndpointParameters CreateGraphUsingImportTaskRequest::GetEndpointContextParams() const
{
    EndpointParameters parameters;
    // Static context parameters
    parameters.emplace_back(Aws::String("ApiType"), "ControlPlane", Aws::Endpoint::EndpointParameter::ParameterOrigin::STATIC_CONTEXT);
    return parameters;
}


