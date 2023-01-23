/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/DeleteNotebookInstanceLifecycleConfigRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteNotebookInstanceLifecycleConfigRequest::DeleteNotebookInstanceLifecycleConfigRequest() : 
    m_notebookInstanceLifecycleConfigNameHasBeenSet(false)
{
}

Aws::String DeleteNotebookInstanceLifecycleConfigRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_notebookInstanceLifecycleConfigNameHasBeenSet)
  {
   payload.WithString("NotebookInstanceLifecycleConfigName", m_notebookInstanceLifecycleConfigName);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DeleteNotebookInstanceLifecycleConfigRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "SageMaker.DeleteNotebookInstanceLifecycleConfig"));
  return headers;

}




