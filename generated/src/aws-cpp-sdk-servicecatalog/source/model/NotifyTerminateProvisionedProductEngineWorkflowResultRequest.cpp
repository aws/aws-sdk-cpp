/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/servicecatalog/model/NotifyTerminateProvisionedProductEngineWorkflowResultRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ServiceCatalog::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String NotifyTerminateProvisionedProductEngineWorkflowResultRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_workflowTokenHasBeenSet)
  {
   payload.WithString("WorkflowToken", m_workflowToken);

  }

  if(m_recordIdHasBeenSet)
  {
   payload.WithString("RecordId", m_recordId);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", EngineWorkflowStatusMapper::GetNameForEngineWorkflowStatus(m_status));
  }

  if(m_failureReasonHasBeenSet)
  {
   payload.WithString("FailureReason", m_failureReason);

  }

  if(m_idempotencyTokenHasBeenSet)
  {
   payload.WithString("IdempotencyToken", m_idempotencyToken);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection NotifyTerminateProvisionedProductEngineWorkflowResultRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWS242ServiceCatalogService.NotifyTerminateProvisionedProductEngineWorkflowResult"));
  return headers;

}




