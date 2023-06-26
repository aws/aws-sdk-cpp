/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/servicecatalog/model/NotifyUpdateProvisionedProductEngineWorkflowResultRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ServiceCatalog::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

NotifyUpdateProvisionedProductEngineWorkflowResultRequest::NotifyUpdateProvisionedProductEngineWorkflowResultRequest() : 
    m_workflowTokenHasBeenSet(false),
    m_recordIdHasBeenSet(false),
    m_status(EngineWorkflowStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_failureReasonHasBeenSet(false),
    m_outputsHasBeenSet(false),
    m_idempotencyToken(Aws::Utils::UUID::PseudoRandomUUID()),
    m_idempotencyTokenHasBeenSet(true)
{
}

Aws::String NotifyUpdateProvisionedProductEngineWorkflowResultRequest::SerializePayload() const
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

  if(m_outputsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> outputsJsonList(m_outputs.size());
   for(unsigned outputsIndex = 0; outputsIndex < outputsJsonList.GetLength(); ++outputsIndex)
   {
     outputsJsonList[outputsIndex].AsObject(m_outputs[outputsIndex].Jsonize());
   }
   payload.WithArray("Outputs", std::move(outputsJsonList));

  }

  if(m_idempotencyTokenHasBeenSet)
  {
   payload.WithString("IdempotencyToken", m_idempotencyToken);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection NotifyUpdateProvisionedProductEngineWorkflowResultRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWS242ServiceCatalogService.NotifyUpdateProvisionedProductEngineWorkflowResult"));
  return headers;

}




