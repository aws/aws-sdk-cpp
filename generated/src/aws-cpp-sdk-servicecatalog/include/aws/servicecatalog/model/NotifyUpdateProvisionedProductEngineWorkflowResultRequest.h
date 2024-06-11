/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/servicecatalog/ServiceCatalog_EXPORTS.h>
#include <aws/servicecatalog/ServiceCatalogRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/servicecatalog/model/EngineWorkflowStatus.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/servicecatalog/model/RecordOutput.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace ServiceCatalog
{
namespace Model
{

  /**
   */
  class NotifyUpdateProvisionedProductEngineWorkflowResultRequest : public ServiceCatalogRequest
  {
  public:
    AWS_SERVICECATALOG_API NotifyUpdateProvisionedProductEngineWorkflowResultRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "NotifyUpdateProvisionedProductEngineWorkflowResult"; }

    AWS_SERVICECATALOG_API Aws::String SerializePayload() const override;

    AWS_SERVICECATALOG_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p> The encrypted contents of the update engine execution payload that Service
     * Catalog sends after the Terraform product update workflow starts. </p>
     */
    inline const Aws::String& GetWorkflowToken() const{ return m_workflowToken; }
    inline bool WorkflowTokenHasBeenSet() const { return m_workflowTokenHasBeenSet; }
    inline void SetWorkflowToken(const Aws::String& value) { m_workflowTokenHasBeenSet = true; m_workflowToken = value; }
    inline void SetWorkflowToken(Aws::String&& value) { m_workflowTokenHasBeenSet = true; m_workflowToken = std::move(value); }
    inline void SetWorkflowToken(const char* value) { m_workflowTokenHasBeenSet = true; m_workflowToken.assign(value); }
    inline NotifyUpdateProvisionedProductEngineWorkflowResultRequest& WithWorkflowToken(const Aws::String& value) { SetWorkflowToken(value); return *this;}
    inline NotifyUpdateProvisionedProductEngineWorkflowResultRequest& WithWorkflowToken(Aws::String&& value) { SetWorkflowToken(std::move(value)); return *this;}
    inline NotifyUpdateProvisionedProductEngineWorkflowResultRequest& WithWorkflowToken(const char* value) { SetWorkflowToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The identifier of the record. </p>
     */
    inline const Aws::String& GetRecordId() const{ return m_recordId; }
    inline bool RecordIdHasBeenSet() const { return m_recordIdHasBeenSet; }
    inline void SetRecordId(const Aws::String& value) { m_recordIdHasBeenSet = true; m_recordId = value; }
    inline void SetRecordId(Aws::String&& value) { m_recordIdHasBeenSet = true; m_recordId = std::move(value); }
    inline void SetRecordId(const char* value) { m_recordIdHasBeenSet = true; m_recordId.assign(value); }
    inline NotifyUpdateProvisionedProductEngineWorkflowResultRequest& WithRecordId(const Aws::String& value) { SetRecordId(value); return *this;}
    inline NotifyUpdateProvisionedProductEngineWorkflowResultRequest& WithRecordId(Aws::String&& value) { SetRecordId(std::move(value)); return *this;}
    inline NotifyUpdateProvisionedProductEngineWorkflowResultRequest& WithRecordId(const char* value) { SetRecordId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The status of the update engine execution. </p>
     */
    inline const EngineWorkflowStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const EngineWorkflowStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(EngineWorkflowStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline NotifyUpdateProvisionedProductEngineWorkflowResultRequest& WithStatus(const EngineWorkflowStatus& value) { SetStatus(value); return *this;}
    inline NotifyUpdateProvisionedProductEngineWorkflowResultRequest& WithStatus(EngineWorkflowStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The reason why the update engine execution failed. </p>
     */
    inline const Aws::String& GetFailureReason() const{ return m_failureReason; }
    inline bool FailureReasonHasBeenSet() const { return m_failureReasonHasBeenSet; }
    inline void SetFailureReason(const Aws::String& value) { m_failureReasonHasBeenSet = true; m_failureReason = value; }
    inline void SetFailureReason(Aws::String&& value) { m_failureReasonHasBeenSet = true; m_failureReason = std::move(value); }
    inline void SetFailureReason(const char* value) { m_failureReasonHasBeenSet = true; m_failureReason.assign(value); }
    inline NotifyUpdateProvisionedProductEngineWorkflowResultRequest& WithFailureReason(const Aws::String& value) { SetFailureReason(value); return *this;}
    inline NotifyUpdateProvisionedProductEngineWorkflowResultRequest& WithFailureReason(Aws::String&& value) { SetFailureReason(std::move(value)); return *this;}
    inline NotifyUpdateProvisionedProductEngineWorkflowResultRequest& WithFailureReason(const char* value) { SetFailureReason(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The output of the update engine execution. </p>
     */
    inline const Aws::Vector<RecordOutput>& GetOutputs() const{ return m_outputs; }
    inline bool OutputsHasBeenSet() const { return m_outputsHasBeenSet; }
    inline void SetOutputs(const Aws::Vector<RecordOutput>& value) { m_outputsHasBeenSet = true; m_outputs = value; }
    inline void SetOutputs(Aws::Vector<RecordOutput>&& value) { m_outputsHasBeenSet = true; m_outputs = std::move(value); }
    inline NotifyUpdateProvisionedProductEngineWorkflowResultRequest& WithOutputs(const Aws::Vector<RecordOutput>& value) { SetOutputs(value); return *this;}
    inline NotifyUpdateProvisionedProductEngineWorkflowResultRequest& WithOutputs(Aws::Vector<RecordOutput>&& value) { SetOutputs(std::move(value)); return *this;}
    inline NotifyUpdateProvisionedProductEngineWorkflowResultRequest& AddOutputs(const RecordOutput& value) { m_outputsHasBeenSet = true; m_outputs.push_back(value); return *this; }
    inline NotifyUpdateProvisionedProductEngineWorkflowResultRequest& AddOutputs(RecordOutput&& value) { m_outputsHasBeenSet = true; m_outputs.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> The idempotency token that identifies the update engine execution. </p>
     */
    inline const Aws::String& GetIdempotencyToken() const{ return m_idempotencyToken; }
    inline bool IdempotencyTokenHasBeenSet() const { return m_idempotencyTokenHasBeenSet; }
    inline void SetIdempotencyToken(const Aws::String& value) { m_idempotencyTokenHasBeenSet = true; m_idempotencyToken = value; }
    inline void SetIdempotencyToken(Aws::String&& value) { m_idempotencyTokenHasBeenSet = true; m_idempotencyToken = std::move(value); }
    inline void SetIdempotencyToken(const char* value) { m_idempotencyTokenHasBeenSet = true; m_idempotencyToken.assign(value); }
    inline NotifyUpdateProvisionedProductEngineWorkflowResultRequest& WithIdempotencyToken(const Aws::String& value) { SetIdempotencyToken(value); return *this;}
    inline NotifyUpdateProvisionedProductEngineWorkflowResultRequest& WithIdempotencyToken(Aws::String&& value) { SetIdempotencyToken(std::move(value)); return *this;}
    inline NotifyUpdateProvisionedProductEngineWorkflowResultRequest& WithIdempotencyToken(const char* value) { SetIdempotencyToken(value); return *this;}
    ///@}
  private:

    Aws::String m_workflowToken;
    bool m_workflowTokenHasBeenSet = false;

    Aws::String m_recordId;
    bool m_recordIdHasBeenSet = false;

    EngineWorkflowStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_failureReason;
    bool m_failureReasonHasBeenSet = false;

    Aws::Vector<RecordOutput> m_outputs;
    bool m_outputsHasBeenSet = false;

    Aws::String m_idempotencyToken;
    bool m_idempotencyTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
