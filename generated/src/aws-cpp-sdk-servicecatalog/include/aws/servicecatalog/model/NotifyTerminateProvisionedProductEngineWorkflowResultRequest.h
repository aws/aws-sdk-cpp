/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/servicecatalog/ServiceCatalog_EXPORTS.h>
#include <aws/servicecatalog/ServiceCatalogRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/servicecatalog/model/EngineWorkflowStatus.h>
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
  class NotifyTerminateProvisionedProductEngineWorkflowResultRequest : public ServiceCatalogRequest
  {
  public:
    AWS_SERVICECATALOG_API NotifyTerminateProvisionedProductEngineWorkflowResultRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "NotifyTerminateProvisionedProductEngineWorkflowResult"; }

    AWS_SERVICECATALOG_API Aws::String SerializePayload() const override;

    AWS_SERVICECATALOG_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p> The encrypted contents of the terminate engine execution payload that
     * Service Catalog sends after the Terraform product terminate workflow starts.
     * </p>
     */
    inline const Aws::String& GetWorkflowToken() const { return m_workflowToken; }
    inline bool WorkflowTokenHasBeenSet() const { return m_workflowTokenHasBeenSet; }
    template<typename WorkflowTokenT = Aws::String>
    void SetWorkflowToken(WorkflowTokenT&& value) { m_workflowTokenHasBeenSet = true; m_workflowToken = std::forward<WorkflowTokenT>(value); }
    template<typename WorkflowTokenT = Aws::String>
    NotifyTerminateProvisionedProductEngineWorkflowResultRequest& WithWorkflowToken(WorkflowTokenT&& value) { SetWorkflowToken(std::forward<WorkflowTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The identifier of the record. </p>
     */
    inline const Aws::String& GetRecordId() const { return m_recordId; }
    inline bool RecordIdHasBeenSet() const { return m_recordIdHasBeenSet; }
    template<typename RecordIdT = Aws::String>
    void SetRecordId(RecordIdT&& value) { m_recordIdHasBeenSet = true; m_recordId = std::forward<RecordIdT>(value); }
    template<typename RecordIdT = Aws::String>
    NotifyTerminateProvisionedProductEngineWorkflowResultRequest& WithRecordId(RecordIdT&& value) { SetRecordId(std::forward<RecordIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The status of the terminate engine execution. </p>
     */
    inline EngineWorkflowStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(EngineWorkflowStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline NotifyTerminateProvisionedProductEngineWorkflowResultRequest& WithStatus(EngineWorkflowStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The reason why the terminate engine execution failed. </p>
     */
    inline const Aws::String& GetFailureReason() const { return m_failureReason; }
    inline bool FailureReasonHasBeenSet() const { return m_failureReasonHasBeenSet; }
    template<typename FailureReasonT = Aws::String>
    void SetFailureReason(FailureReasonT&& value) { m_failureReasonHasBeenSet = true; m_failureReason = std::forward<FailureReasonT>(value); }
    template<typename FailureReasonT = Aws::String>
    NotifyTerminateProvisionedProductEngineWorkflowResultRequest& WithFailureReason(FailureReasonT&& value) { SetFailureReason(std::forward<FailureReasonT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The idempotency token that identifies the terminate engine execution. </p>
     */
    inline const Aws::String& GetIdempotencyToken() const { return m_idempotencyToken; }
    inline bool IdempotencyTokenHasBeenSet() const { return m_idempotencyTokenHasBeenSet; }
    template<typename IdempotencyTokenT = Aws::String>
    void SetIdempotencyToken(IdempotencyTokenT&& value) { m_idempotencyTokenHasBeenSet = true; m_idempotencyToken = std::forward<IdempotencyTokenT>(value); }
    template<typename IdempotencyTokenT = Aws::String>
    NotifyTerminateProvisionedProductEngineWorkflowResultRequest& WithIdempotencyToken(IdempotencyTokenT&& value) { SetIdempotencyToken(std::forward<IdempotencyTokenT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_workflowToken;
    bool m_workflowTokenHasBeenSet = false;

    Aws::String m_recordId;
    bool m_recordIdHasBeenSet = false;

    EngineWorkflowStatus m_status{EngineWorkflowStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_failureReason;
    bool m_failureReasonHasBeenSet = false;

    Aws::String m_idempotencyToken{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_idempotencyTokenHasBeenSet = true;
  };

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
