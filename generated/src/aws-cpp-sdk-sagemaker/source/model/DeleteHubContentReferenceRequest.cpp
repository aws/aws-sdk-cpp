/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/DeleteHubContentReferenceRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteHubContentReferenceRequest::DeleteHubContentReferenceRequest() : 
    m_hubNameHasBeenSet(false),
    m_hubContentType(HubContentType::NOT_SET),
    m_hubContentTypeHasBeenSet(false),
    m_hubContentNameHasBeenSet(false)
{
}

Aws::String DeleteHubContentReferenceRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_hubNameHasBeenSet)
  {
   payload.WithString("HubName", m_hubName);

  }

  if(m_hubContentTypeHasBeenSet)
  {
   payload.WithString("HubContentType", HubContentTypeMapper::GetNameForHubContentType(m_hubContentType));
  }

  if(m_hubContentNameHasBeenSet)
  {
   payload.WithString("HubContentName", m_hubContentName);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DeleteHubContentReferenceRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "SageMaker.DeleteHubContentReference"));
  return headers;

}




