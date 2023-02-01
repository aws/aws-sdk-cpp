/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/migrationhuborchestrator/MigrationHubOrchestrator_EXPORTS.h>
#include <aws/migrationhuborchestrator/MigrationHubOrchestratorRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace MigrationHubOrchestrator
{
namespace Model
{

  /**
   */
  class DeleteWorkflowStepRequest : public MigrationHubOrchestratorRequest
  {
  public:
    AWS_MIGRATIONHUBORCHESTRATOR_API DeleteWorkflowStepRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteWorkflowStep"; }

    AWS_MIGRATIONHUBORCHESTRATOR_API Aws::String SerializePayload() const override;

    AWS_MIGRATIONHUBORCHESTRATOR_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>The ID of the step you want to delete.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The ID of the step you want to delete.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The ID of the step you want to delete.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The ID of the step you want to delete.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The ID of the step you want to delete.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The ID of the step you want to delete.</p>
     */
    inline DeleteWorkflowStepRequest& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The ID of the step you want to delete.</p>
     */
    inline DeleteWorkflowStepRequest& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The ID of the step you want to delete.</p>
     */
    inline DeleteWorkflowStepRequest& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The ID of the step group that contains the step you want to delete.</p>
     */
    inline const Aws::String& GetStepGroupId() const{ return m_stepGroupId; }

    /**
     * <p>The ID of the step group that contains the step you want to delete.</p>
     */
    inline bool StepGroupIdHasBeenSet() const { return m_stepGroupIdHasBeenSet; }

    /**
     * <p>The ID of the step group that contains the step you want to delete.</p>
     */
    inline void SetStepGroupId(const Aws::String& value) { m_stepGroupIdHasBeenSet = true; m_stepGroupId = value; }

    /**
     * <p>The ID of the step group that contains the step you want to delete.</p>
     */
    inline void SetStepGroupId(Aws::String&& value) { m_stepGroupIdHasBeenSet = true; m_stepGroupId = std::move(value); }

    /**
     * <p>The ID of the step group that contains the step you want to delete.</p>
     */
    inline void SetStepGroupId(const char* value) { m_stepGroupIdHasBeenSet = true; m_stepGroupId.assign(value); }

    /**
     * <p>The ID of the step group that contains the step you want to delete.</p>
     */
    inline DeleteWorkflowStepRequest& WithStepGroupId(const Aws::String& value) { SetStepGroupId(value); return *this;}

    /**
     * <p>The ID of the step group that contains the step you want to delete.</p>
     */
    inline DeleteWorkflowStepRequest& WithStepGroupId(Aws::String&& value) { SetStepGroupId(std::move(value)); return *this;}

    /**
     * <p>The ID of the step group that contains the step you want to delete.</p>
     */
    inline DeleteWorkflowStepRequest& WithStepGroupId(const char* value) { SetStepGroupId(value); return *this;}


    /**
     * <p>The ID of the migration workflow.</p>
     */
    inline const Aws::String& GetWorkflowId() const{ return m_workflowId; }

    /**
     * <p>The ID of the migration workflow.</p>
     */
    inline bool WorkflowIdHasBeenSet() const { return m_workflowIdHasBeenSet; }

    /**
     * <p>The ID of the migration workflow.</p>
     */
    inline void SetWorkflowId(const Aws::String& value) { m_workflowIdHasBeenSet = true; m_workflowId = value; }

    /**
     * <p>The ID of the migration workflow.</p>
     */
    inline void SetWorkflowId(Aws::String&& value) { m_workflowIdHasBeenSet = true; m_workflowId = std::move(value); }

    /**
     * <p>The ID of the migration workflow.</p>
     */
    inline void SetWorkflowId(const char* value) { m_workflowIdHasBeenSet = true; m_workflowId.assign(value); }

    /**
     * <p>The ID of the migration workflow.</p>
     */
    inline DeleteWorkflowStepRequest& WithWorkflowId(const Aws::String& value) { SetWorkflowId(value); return *this;}

    /**
     * <p>The ID of the migration workflow.</p>
     */
    inline DeleteWorkflowStepRequest& WithWorkflowId(Aws::String&& value) { SetWorkflowId(std::move(value)); return *this;}

    /**
     * <p>The ID of the migration workflow.</p>
     */
    inline DeleteWorkflowStepRequest& WithWorkflowId(const char* value) { SetWorkflowId(value); return *this;}

  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_stepGroupId;
    bool m_stepGroupIdHasBeenSet = false;

    Aws::String m_workflowId;
    bool m_workflowIdHasBeenSet = false;
  };

} // namespace Model
} // namespace MigrationHubOrchestrator
} // namespace Aws
