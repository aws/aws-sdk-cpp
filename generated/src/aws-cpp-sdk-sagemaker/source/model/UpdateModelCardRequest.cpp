/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/UpdateModelCardRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateModelCardRequest::UpdateModelCardRequest() : 
    m_modelCardNameHasBeenSet(false),
    m_contentHasBeenSet(false),
    m_modelCardStatus(ModelCardStatus::NOT_SET),
    m_modelCardStatusHasBeenSet(false)
{
}

Aws::String UpdateModelCardRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_modelCardNameHasBeenSet)
  {
   payload.WithString("ModelCardName", m_modelCardName);

  }

  if(m_contentHasBeenSet)
  {
   payload.WithString("Content", m_content);

  }

  if(m_modelCardStatusHasBeenSet)
  {
   payload.WithString("ModelCardStatus", ModelCardStatusMapper::GetNameForModelCardStatus(m_modelCardStatus));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateModelCardRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "SageMaker.UpdateModelCard"));
  return headers;

}




