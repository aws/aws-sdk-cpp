/**
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
    AWS_SERVICECATALOG_API NotifyProvisionProductEngineWorkflowResultRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "NotifyProvisionProductEngineWorkflowResult"; }

    AWS_SERVICECATALOG_API Aws::String SerializePayload() const override;

    AWS_SERVICECATALOG_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p> The encrypted contents of the provisioning engine execution payload that
     * Service Catalog sends after the Terraform product provisioning workflow starts.
     * </p>
     */
    inline const Aws::String& GetWorkflowToken() const{ return m_workflowToken; }

    /**
     * <p> The encrypted contents of the provisioning engine execution payload that
     * Service Catalog sends after the Terraform product provisioning workflow starts.
     * </p>
     */
    inline bool WorkflowTokenHasBeenSet() const { return m_workflowTokenHasBeenSet; }

    /**
     * <p> The encrypted contents of the provisioning engine execution payload that
     * Service Catalog sends after the Terraform product provisioning workflow starts.
     * </p>
     */
    inline void SetWorkflowToken(const Aws::String& value) { m_workflowTokenHasBeenSet = true; m_workflowToken = value; }

    /**
     * <p> The encrypted contents of the provisioning engine execution payload that
     * Service Catalog sends after the Terraform product provisioning workflow starts.
     * </p>
     */
    inline void SetWorkflowToken(Aws::String&& value) { m_workflowTokenHasBeenSet = true; m_workflowToken = std::move(value); }

    /**
     * <p> The encrypted contents of the provisioning engine execution payload that
     * Service Catalog sends after the Terraform product provisioning workflow starts.
     * </p>
     */
    inline void SetWorkflowToken(const char* value) { m_workflowTokenHasBeenSet = true; m_workflowToken.assign(value); }

    /**
     * <p> The encrypted contents of the provisioning engine execution payload that
     * Service Catalog sends after the Terraform product provisioning workflow starts.
     * </p>
     */
    inline NotifyProvisionProductEngineWorkflowResultRequest& WithWorkflowToken(const Aws::String& value) { SetWorkflowToken(value); return *this;}

    /**
     * <p> The encrypted contents of the provisioning engine execution payload that
     * Service Catalog sends after the Terraform product provisioning workflow starts.
     * </p>
     */
    inline NotifyProvisionProductEngineWorkflowResultRequest& WithWorkflowToken(Aws::String&& value) { SetWorkflowToken(std::move(value)); return *this;}

    /**
     * <p> The encrypted contents of the provisioning engine execution payload that
     * Service Catalog sends after the Terraform product provisioning workflow starts.
     * </p>
     */
    inline NotifyProvisionProductEngineWorkflowResultRequest& WithWorkflowToken(const char* value) { SetWorkflowToken(value); return *this;}


    /**
     * <p> The identifier of the record. </p>
     */
    inline const Aws::String& GetRecordId() const{ return m_recordId; }

    /**
     * <p> The identifier of the record. </p>
     */
    inline bool RecordIdHasBeenSet() const { return m_recordIdHasBeenSet; }

    /**
     * <p> The identifier of the record. </p>
     */
    inline void SetRecordId(const Aws::String& value) { m_recordIdHasBeenSet = true; m_recordId = value; }

    /**
     * <p> The identifier of the record. </p>
     */
    inline void SetRecordId(Aws::String&& value) { m_recordIdHasBeenSet = true; m_recordId = std::move(value); }

    /**
     * <p> The identifier of the record. </p>
     */
    inline void SetRecordId(const char* value) { m_recordIdHasBeenSet = true; m_recordId.assign(value); }

    /**
     * <p> The identifier of the record. </p>
     */
    inline NotifyProvisionProductEngineWorkflowResultRequest& WithRecordId(const Aws::String& value) { SetRecordId(value); return *this;}

    /**
     * <p> The identifier of the record. </p>
     */
    inline NotifyProvisionProductEngineWorkflowResultRequest& WithRecordId(Aws::String&& value) { SetRecordId(std::move(value)); return *this;}

    /**
     * <p> The identifier of the record. </p>
     */
    inline NotifyProvisionProductEngineWorkflowResultRequest& WithRecordId(const char* value) { SetRecordId(value); return *this;}


    /**
     * <p> The status of the provisioning engine execution. </p>
     */
    inline const EngineWorkflowStatus& GetStatus() const{ return m_status; }

    /**
     * <p> The status of the provisioning engine execution. </p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p> The status of the provisioning engine execution. </p>
     */
    inline void SetStatus(const EngineWorkflowStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p> The status of the provisioning engine execution. </p>
     */
    inline void SetStatus(EngineWorkflowStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p> The status of the provisioning engine execution. </p>
     */
    inline NotifyProvisionProductEngineWorkflowResultRequest& WithStatus(const EngineWorkflowStatus& value) { SetStatus(value); return *this;}

    /**
     * <p> The status of the provisioning engine execution. </p>
     */
    inline NotifyProvisionProductEngineWorkflowResultRequest& WithStatus(EngineWorkflowStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p> The reason why the provisioning engine execution failed. </p>
     */
    inline const Aws::String& GetFailureReason() const{ return m_failureReason; }

    /**
     * <p> The reason why the provisioning engine execution failed. </p>
     */
    inline bool FailureReasonHasBeenSet() const { return m_failureReasonHasBeenSet; }

    /**
     * <p> The reason why the provisioning engine execution failed. </p>
     */
    inline void SetFailureReason(const Aws::String& value) { m_failureReasonHasBeenSet = true; m_failureReason = value; }

    /**
     * <p> The reason why the provisioning engine execution failed. </p>
     */
    inline void SetFailureReason(Aws::String&& value) { m_failureReasonHasBeenSet = true; m_failureReason = std::move(value); }

    /**
     * <p> The reason why the provisioning engine execution failed. </p>
     */
    inline void SetFailureReason(const char* value) { m_failureReasonHasBeenSet = true; m_failureReason.assign(value); }

    /**
     * <p> The reason why the provisioning engine execution failed. </p>
     */
    inline NotifyProvisionProductEngineWorkflowResultRequest& WithFailureReason(const Aws::String& value) { SetFailureReason(value); return *this;}

    /**
     * <p> The reason why the provisioning engine execution failed. </p>
     */
    inline NotifyProvisionProductEngineWorkflowResultRequest& WithFailureReason(Aws::String&& value) { SetFailureReason(std::move(value)); return *this;}

    /**
     * <p> The reason why the provisioning engine execution failed. </p>
     */
    inline NotifyProvisionProductEngineWorkflowResultRequest& WithFailureReason(const char* value) { SetFailureReason(value); return *this;}


    /**
     * <p> The ID for the provisioned product resources that are part of a resource
     * group. </p>
     */
    inline const EngineWorkflowResourceIdentifier& GetResourceIdentifier() const{ return m_resourceIdentifier; }

    /**
     * <p> The ID for the provisioned product resources that are part of a resource
     * group. </p>
     */
    inline bool ResourceIdentifierHasBeenSet() const { return m_resourceIdentifierHasBeenSet; }

    /**
     * <p> The ID for the provisioned product resources that are part of a resource
     * group. </p>
     */
    inline void SetResourceIdentifier(const EngineWorkflowResourceIdentifier& value) { m_resourceIdentifierHasBeenSet = true; m_resourceIdentifier = value; }

    /**
     * <p> The ID for the provisioned product resources that are part of a resource
     * group. </p>
     */
    inline void SetResourceIdentifier(EngineWorkflowResourceIdentifier&& value) { m_resourceIdentifierHasBeenSet = true; m_resourceIdentifier = std::move(value); }

    /**
     * <p> The ID for the provisioned product resources that are part of a resource
     * group. </p>
     */
    inline NotifyProvisionProductEngineWorkflowResultRequest& WithResourceIdentifier(const EngineWorkflowResourceIdentifier& value) { SetResourceIdentifier(value); return *this;}

    /**
     * <p> The ID for the provisioned product resources that are part of a resource
     * group. </p>
     */
    inline NotifyProvisionProductEngineWorkflowResultRequest& WithResourceIdentifier(EngineWorkflowResourceIdentifier&& value) { SetResourceIdentifier(std::move(value)); return *this;}


    /**
     * <p> The output of the provisioning engine execution. </p>
     */
    inline const Aws::Vector<RecordOutput>& GetOutputs() const{ return m_outputs; }

    /**
     * <p> The output of the provisioning engine execution. </p>
     */
    inline bool OutputsHasBeenSet() const { return m_outputsHasBeenSet; }

    /**
     * <p> The output of the provisioning engine execution. </p>
     */
    inline void SetOutputs(const Aws::Vector<RecordOutput>& value) { m_outputsHasBeenSet = true; m_outputs = value; }

    /**
     * <p> The output of the provisioning engine execution. </p>
     */
    inline void SetOutputs(Aws::Vector<RecordOutput>&& value) { m_outputsHasBeenSet = true; m_outputs = std::move(value); }

    /**
     * <p> The output of the provisioning engine execution. </p>
     */
    inline NotifyProvisionProductEngineWorkflowResultRequest& WithOutputs(const Aws::Vector<RecordOutput>& value) { SetOutputs(value); return *this;}

    /**
     * <p> The output of the provisioning engine execution. </p>
     */
    inline NotifyProvisionProductEngineWorkflowResultRequest& WithOutputs(Aws::Vector<RecordOutput>&& value) { SetOutputs(std::move(value)); return *this;}

    /**
     * <p> The output of the provisioning engine execution. </p>
     */
    inline NotifyProvisionProductEngineWorkflowResultRequest& AddOutputs(const RecordOutput& value) { m_outputsHasBeenSet = true; m_outputs.push_back(value); return *this; }

    /**
     * <p> The output of the provisioning engine execution. </p>
     */
    inline NotifyProvisionProductEngineWorkflowResultRequest& AddOutputs(RecordOutput&& value) { m_outputsHasBeenSet = true; m_outputs.push_back(std::move(value)); return *this; }


    /**
     * <p> The idempotency token that identifies the provisioning engine execution.
     * </p>
     */
    inline const Aws::String& GetIdempotencyToken() const{ return m_idempotencyToken; }

    /**
     * <p> The idempotency token that identifies the provisioning engine execution.
     * </p>
     */
    inline bool IdempotencyTokenHasBeenSet() const { return m_idempotencyTokenHasBeenSet; }

    /**
     * <p> The idempotency token that identifies the provisioning engine execution.
     * </p>
     */
    inline void SetIdempotencyToken(const Aws::String& value) { m_idempotencyTokenHasBeenSet = true; m_idempotencyToken = value; }

    /**
     * <p> The idempotency token that identifies the provisioning engine execution.
     * </p>
     */
    inline void SetIdempotencyToken(Aws::String&& value) { m_idempotencyTokenHasBeenSet = true; m_idempotencyToken = std::move(value); }

    /**
     * <p> The idempotency token that identifies the provisioning engine execution.
     * </p>
     */
    inline void SetIdempotencyToken(const char* value) { m_idempotencyTokenHasBeenSet = true; m_idempotencyToken.assign(value); }

    /**
     * <p> The idempotency token that identifies the provisioning engine execution.
     * </p>
     */
    inline NotifyProvisionProductEngineWorkflowResultRequest& WithIdempotencyToken(const Aws::String& value) { SetIdempotencyToken(value); return *this;}

    /**
     * <p> The idempotency token that identifies the provisioning engine execution.
     * </p>
     */
    inline NotifyProvisionProductEngineWorkflowResultRequest& WithIdempotencyToken(Aws::String&& value) { SetIdempotencyToken(std::move(value)); return *this;}

    /**
     * <p> The idempotency token that identifies the provisioning engine execution.
     * </p>
     */
    inline NotifyProvisionProductEngineWorkflowResultRequest& WithIdempotencyToken(const char* value) { SetIdempotencyToken(value); return *this;}

  private:

    Aws::String m_workflowToken;
    bool m_workflowTokenHasBeenSet = false;

    Aws::String m_recordId;
    bool m_recordIdHasBeenSet = false;

    EngineWorkflowStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_failureReason;
    bool m_failureReasonHasBeenSet = false;

    EngineWorkflowResourceIdentifier m_resourceIdentifier;
    bool m_resourceIdentifierHasBeenSet = false;

    Aws::Vector<RecordOutput> m_outputs;
    bool m_outputsHasBeenSet = false;

    Aws::String m_idempotencyToken;
    bool m_idempotencyTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
