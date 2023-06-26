/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/DeleteModelPackageGroupPolicyRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteModelPackageGroupPolicyRequest::DeleteModelPackageGroupPolicyRequest() : 
    m_modelPackageGroupNameHasBeenSet(false)
{
}

Aws::String DeleteModelPackageGroupPolicyRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_modelPackageGroupNameHasBeenSet)
  {
   payload.WithString("ModelPackageGroupName", m_modelPackageGroupName);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DeleteModelPackageGroupPolicyRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "SageMaker.DeleteModelPackageGroupPolicy"));
  return headers;

}




