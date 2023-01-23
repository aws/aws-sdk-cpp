/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/DeleteImageVersionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteImageVersionRequest::DeleteImageVersionRequest() : 
    m_imageNameHasBeenSet(false),
    m_version(0),
    m_versionHasBeenSet(false),
    m_aliasHasBeenSet(false)
{
}

Aws::String DeleteImageVersionRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_imageNameHasBeenSet)
  {
   payload.WithString("ImageName", m_imageName);

  }

  if(m_versionHasBeenSet)
  {
   payload.WithInteger("Version", m_version);

  }

  if(m_aliasHasBeenSet)
  {
   payload.WithString("Alias", m_alias);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DeleteImageVersionRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "SageMaker.DeleteImageVersion"));
  return headers;

}




