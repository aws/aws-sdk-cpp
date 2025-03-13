/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/neptune-graph/model/StartImportTaskRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::NeptuneGraph::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String StartImportTaskRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_importOptionsHasBeenSet)
  {
   payload.WithObject("importOptions", m_importOptions.Jsonize());

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



StartImportTaskRequest::EndpointParameters StartImportTaskRequest::GetEndpointContextParams() const
{
    EndpointParameters parameters;
    // Static context parameters
    parameters.emplace_back(Aws::String("ApiType"), "ControlPlane", Aws::Endpoint::EndpointParameter::ParameterOrigin::STATIC_CONTEXT);
    return parameters;
}


