/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/DeleteArtifactRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteArtifactRequest::DeleteArtifactRequest() : 
    m_artifactArnHasBeenSet(false),
    m_sourceHasBeenSet(false)
{
}

Aws::String DeleteArtifactRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_artifactArnHasBeenSet)
  {
   payload.WithString("ArtifactArn", m_artifactArn);

  }

  if(m_sourceHasBeenSet)
  {
   payload.WithObject("Source", m_source.Jsonize());

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DeleteArtifactRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "SageMaker.DeleteArtifact"));
  return headers;

}




