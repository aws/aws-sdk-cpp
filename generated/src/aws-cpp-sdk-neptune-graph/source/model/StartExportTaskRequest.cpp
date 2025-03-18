/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/neptune-graph/model/StartExportTaskRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::NeptuneGraph::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String StartExportTaskRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_graphIdentifierHasBeenSet)
  {
   payload.WithString("graphIdentifier", m_graphIdentifier);

  }

  if(m_roleArnHasBeenSet)
  {
   payload.WithString("roleArn", m_roleArn);

  }

  if(m_formatHasBeenSet)
  {
   payload.WithString("format", ExportFormatMapper::GetNameForExportFormat(m_format));
  }

  if(m_destinationHasBeenSet)
  {
   payload.WithString("destination", m_destination);

  }

  if(m_kmsKeyIdentifierHasBeenSet)
  {
   payload.WithString("kmsKeyIdentifier", m_kmsKeyIdentifier);

  }

  if(m_parquetTypeHasBeenSet)
  {
   payload.WithString("parquetType", ParquetTypeMapper::GetNameForParquetType(m_parquetType));
  }

  if(m_exportFilterHasBeenSet)
  {
   payload.WithObject("exportFilter", m_exportFilter.Jsonize());

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

  return payload.View().WriteReadable();
}



StartExportTaskRequest::EndpointParameters StartExportTaskRequest::GetEndpointContextParams() const
{
    EndpointParameters parameters;
    // Static context parameters
    parameters.emplace_back(Aws::String("ApiType"), "ControlPlane", Aws::Endpoint::EndpointParameter::ParameterOrigin::STATIC_CONTEXT);
    return parameters;
}


