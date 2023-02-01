/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/CreateModelCardExportJobRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateModelCardExportJobRequest::CreateModelCardExportJobRequest() : 
    m_modelCardNameHasBeenSet(false),
    m_modelCardVersion(0),
    m_modelCardVersionHasBeenSet(false),
    m_modelCardExportJobNameHasBeenSet(false),
    m_outputConfigHasBeenSet(false)
{
}

Aws::String CreateModelCardExportJobRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_modelCardNameHasBeenSet)
  {
   payload.WithString("ModelCardName", m_modelCardName);

  }

  if(m_modelCardVersionHasBeenSet)
  {
   payload.WithInteger("ModelCardVersion", m_modelCardVersion);

  }

  if(m_modelCardExportJobNameHasBeenSet)
  {
   payload.WithString("ModelCardExportJobName", m_modelCardExportJobName);

  }

  if(m_outputConfigHasBeenSet)
  {
   payload.WithObject("OutputConfig", m_outputConfig.Jsonize());

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateModelCardExportJobRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "SageMaker.CreateModelCardExportJob"));
  return headers;

}




