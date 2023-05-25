/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/BatchDescribeModelPackageRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

BatchDescribeModelPackageRequest::BatchDescribeModelPackageRequest() : 
    m_modelPackageArnListHasBeenSet(false)
{
}

Aws::String BatchDescribeModelPackageRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_modelPackageArnListHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> modelPackageArnListJsonList(m_modelPackageArnList.size());
   for(unsigned modelPackageArnListIndex = 0; modelPackageArnListIndex < modelPackageArnListJsonList.GetLength(); ++modelPackageArnListIndex)
   {
     modelPackageArnListJsonList[modelPackageArnListIndex].AsString(m_modelPackageArnList[modelPackageArnListIndex]);
   }
   payload.WithArray("ModelPackageArnList", std::move(modelPackageArnListJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection BatchDescribeModelPackageRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "SageMaker.BatchDescribeModelPackage"));
  return headers;

}




