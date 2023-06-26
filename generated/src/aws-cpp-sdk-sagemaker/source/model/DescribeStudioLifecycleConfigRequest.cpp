/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/DescribeStudioLifecycleConfigRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeStudioLifecycleConfigRequest::DescribeStudioLifecycleConfigRequest() : 
    m_studioLifecycleConfigNameHasBeenSet(false)
{
}

Aws::String DescribeStudioLifecycleConfigRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_studioLifecycleConfigNameHasBeenSet)
  {
   payload.WithString("StudioLifecycleConfigName", m_studioLifecycleConfigName);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DescribeStudioLifecycleConfigRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "SageMaker.DescribeStudioLifecycleConfig"));
  return headers;

}




