﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/servicecatalog/ServiceCatalog_EXPORTS.h>
#include <aws/servicecatalog/ServiceCatalogRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/servicecatalog/model/EngineWorkflowStatus.h>
#include <aws/servicecatalog/model/EngineWorkflowResourceIdentifier.h>
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
  class NotifyProvisionProductEngineWorkflowResultRequest : public ServiceCatalogRequest
  {
  public:
    AWS_SERVICECATALOG_API NotifyProvisionProductEngineWorkflowResultRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "NotifyProvisionProductEngineWorkflowResult"; }

    AWS_SERVICECATALOG_API Aws::String SerializePayload() const override;

    AWS_SERVICECATALOG_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p> The encrypted contents of the provisioning engine execution payload that
     * Service Catalog sends after the Terraform product provisioning workflow starts.
     * </p>
     */
    inline const Aws::String& GetWorkflowToken() const { return m_workflowToken; }
    inline bool WorkflowTokenHasBeenSet() const { return m_workflowTokenHasBeenSet; }
    template<typename WorkflowTokenT = Aws::String>
    void SetWorkflowToken(WorkflowTokenT&& value) { m_workflowTokenHasBeenSet = true; m_workflowToken = std::forward<WorkflowTokenT>(value); }
    template<typename WorkflowTokenT = Aws::String>
    NotifyProvisionProductEngineWorkflowResultRequest& WithWorkflowToken(WorkflowTokenT&& value) { SetWorkflowToken(std::forward<WorkflowTokenT>(value)); return *this;}
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
    NotifyProvisionProductEngineWorkflowResultRequest& WithRecordId(RecordIdT&& value) { SetRecordId(std::forward<RecordIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The status of the provisioning engine execution. </p>
     */
    inline EngineWorkflowStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(EngineWorkflowStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline NotifyProvisionProductEngineWorkflowResultRequest& WithStatus(EngineWorkflowStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The reason why the provisioning engine execution failed. </p>
     */
    inline const Aws::String& GetFailureReason() const { return m_failureReason; }
    inline bool FailureReasonHasBeenSet() const { return m_failureReasonHasBeenSet; }
    template<typename FailureReasonT = Aws::String>
    void SetFailureReason(FailureReasonT&& value) { m_failureReasonHasBeenSet = true; m_failureReason = std::forward<FailureReasonT>(value); }
    template<typename FailureReasonT = Aws::String>
    NotifyProvisionProductEngineWorkflowResultRequest& WithFailureReason(FailureReasonT&& value) { SetFailureReason(std::forward<FailureReasonT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The ID for the provisioned product resources that are part of a resource
     * group. </p>
     */
    inline const EngineWorkflowResourceIdentifier& GetResourceIdentifier() const { return m_resourceIdentifier; }
    inline bool ResourceIdentifierHasBeenSet() const { return m_resourceIdentifierHasBeenSet; }
    template<typename ResourceIdentifierT = EngineWorkflowResourceIdentifier>
    void SetResourceIdentifier(ResourceIdentifierT&& value) { m_resourceIdentifierHasBeenSet = true; m_resourceIdentifier = std::forward<ResourceIdentifierT>(value); }
    template<typename ResourceIdentifierT = EngineWorkflowResourceIdentifier>
    NotifyProvisionProductEngineWorkflowResultRequest& WithResourceIdentifier(ResourceIdentifierT&& value) { SetResourceIdentifier(std::forward<ResourceIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The output of the provisioning engine execution. </p>
     */
    inline const Aws::Vector<RecordOutput>& GetOutputs() const { return m_outputs; }
    inline bool OutputsHasBeenSet() const { return m_outputsHasBeenSet; }
    template<typename OutputsT = Aws::Vector<RecordOutput>>
    void SetOutputs(OutputsT&& value) { m_outputsHasBeenSet = true; m_outputs = std::forward<OutputsT>(value); }
    template<typename OutputsT = Aws::Vector<RecordOutput>>
    NotifyProvisionProductEngineWorkflowResultRequest& WithOutputs(OutputsT&& value) { SetOutputs(std::forward<OutputsT>(value)); return *this;}
    template<typename OutputsT = RecordOutput>
    NotifyProvisionProductEngineWorkflowResultRequest& AddOutputs(OutputsT&& value) { m_outputsHasBeenSet = true; m_outputs.emplace_back(std::forward<OutputsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> The idempotency token that identifies the provisioning engine execution.
     * </p>
     */
    inline const Aws::String& GetIdempotencyToken() const { return m_idempotencyToken; }
    inline bool IdempotencyTokenHasBeenSet() const { return m_idempotencyTokenHasBeenSet; }
    template<typename IdempotencyTokenT = Aws::String>
    void SetIdempotencyToken(IdempotencyTokenT&& value) { m_idempotencyTokenHasBeenSet = true; m_idempotencyToken = std::forward<IdempotencyTokenT>(value); }
    template<typename IdempotencyTokenT = Aws::String>
    NotifyProvisionProductEngineWorkflowResultRequest& WithIdempotencyToken(IdempotencyTokenT&& value) { SetIdempotencyToken(std::forward<IdempotencyTokenT>(value)); return *this;}
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

    EngineWorkflowResourceIdentifier m_resourceIdentifier;
    bool m_resourceIdentifierHasBeenSet = false;

    Aws::Vector<RecordOutput> m_outputs;
    bool m_outputsHasBeenSet = false;

    Aws::String m_idempotencyToken{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_idempotencyTokenHasBeenSet = true;
  };

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
