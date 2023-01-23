/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/DescribeNotebookInstanceLifecycleConfigRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeNotebookInstanceLifecycleConfigRequest::DescribeNotebookInstanceLifecycleConfigRequest() : 
    m_notebookInstanceLifecycleConfigNameHasBeenSet(false)
{
}

Aws::String DescribeNotebookInstanceLifecycleConfigRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_notebookInstanceLifecycleConfigNameHasBeenSet)
  {
   payload.WithString("NotebookInstanceLifecycleConfigName", m_notebookInstanceLifecycleConfigName);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DescribeNotebookInstanceLifecycleConfigRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "SageMaker.DescribeNotebookInstanceLifecycleConfig"));
  return headers;

}




