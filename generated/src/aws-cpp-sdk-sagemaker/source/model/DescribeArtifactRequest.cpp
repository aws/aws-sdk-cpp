/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/DescribeArtifactRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeArtifactRequest::DescribeArtifactRequest() : 
    m_artifactArnHasBeenSet(false)
{
}

Aws::String DescribeArtifactRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_artifactArnHasBeenSet)
  {
   payload.WithString("ArtifactArn", m_artifactArn);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DescribeArtifactRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "SageMaker.DescribeArtifact"));
  return headers;

}




