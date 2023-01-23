/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/migrationhuborchestrator/MigrationHubOrchestrator_EXPORTS.h>
#include <aws/migrationhuborchestrator/MigrationHubOrchestratorRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
  class UpdateWorkflowStepGroupRequest : public MigrationHubOrchestratorRequest
  {
  public:
    AWS_MIGRATIONHUBORCHESTRATOR_API UpdateWorkflowStepGroupRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateWorkflowStepGroup"; }

    AWS_MIGRATIONHUBORCHESTRATOR_API Aws::String SerializePayload() const override;

    AWS_MIGRATIONHUBORCHESTRATOR_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


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
    inline UpdateWorkflowStepGroupRequest& WithWorkflowId(const Aws::String& value) { SetWorkflowId(value); return *this;}

    /**
     * <p>The ID of the migration workflow.</p>
     */
    inline UpdateWorkflowStepGroupRequest& WithWorkflowId(Aws::String&& value) { SetWorkflowId(std::move(value)); return *this;}

    /**
     * <p>The ID of the migration workflow.</p>
     */
    inline UpdateWorkflowStepGroupRequest& WithWorkflowId(const char* value) { SetWorkflowId(value); return *this;}


    /**
     * <p>The ID of the step group.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The ID of the step group.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The ID of the step group.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The ID of the step group.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The ID of the step group.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The ID of the step group.</p>
     */
    inline UpdateWorkflowStepGroupRequest& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The ID of the step group.</p>
     */
    inline UpdateWorkflowStepGroupRequest& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The ID of the step group.</p>
     */
    inline UpdateWorkflowStepGroupRequest& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The name of the step group.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the step group.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the step group.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the step group.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the step group.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the step group.</p>
     */
    inline UpdateWorkflowStepGroupRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the step group.</p>
     */
    inline UpdateWorkflowStepGroupRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the step group.</p>
     */
    inline UpdateWorkflowStepGroupRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The description of the step group.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the step group.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description of the step group.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description of the step group.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description of the step group.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description of the step group.</p>
     */
    inline UpdateWorkflowStepGroupRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the step group.</p>
     */
    inline UpdateWorkflowStepGroupRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the step group.</p>
     */
    inline UpdateWorkflowStepGroupRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The next step group.</p>
     */
    inline const Aws::Vector<Aws::String>& GetNext() const{ return m_next; }

    /**
     * <p>The next step group.</p>
     */
    inline bool NextHasBeenSet() const { return m_nextHasBeenSet; }

    /**
     * <p>The next step group.</p>
     */
    inline void SetNext(const Aws::Vector<Aws::String>& value) { m_nextHasBeenSet = true; m_next = value; }

    /**
     * <p>The next step group.</p>
     */
    inline void SetNext(Aws::Vector<Aws::String>&& value) { m_nextHasBeenSet = true; m_next = std::move(value); }

    /**
     * <p>The next step group.</p>
     */
    inline UpdateWorkflowStepGroupRequest& WithNext(const Aws::Vector<Aws::String>& value) { SetNext(value); return *this;}

    /**
     * <p>The next step group.</p>
     */
    inline UpdateWorkflowStepGroupRequest& WithNext(Aws::Vector<Aws::String>&& value) { SetNext(std::move(value)); return *this;}

    /**
     * <p>The next step group.</p>
     */
    inline UpdateWorkflowStepGroupRequest& AddNext(const Aws::String& value) { m_nextHasBeenSet = true; m_next.push_back(value); return *this; }

    /**
     * <p>The next step group.</p>
     */
    inline UpdateWorkflowStepGroupRequest& AddNext(Aws::String&& value) { m_nextHasBeenSet = true; m_next.push_back(std::move(value)); return *this; }

    /**
     * <p>The next step group.</p>
     */
    inline UpdateWorkflowStepGroupRequest& AddNext(const char* value) { m_nextHasBeenSet = true; m_next.push_back(value); return *this; }


    /**
     * <p>The previous step group.</p>
     */
    inline const Aws::Vector<Aws::String>& GetPrevious() const{ return m_previous; }

    /**
     * <p>The previous step group.</p>
     */
    inline bool PreviousHasBeenSet() const { return m_previousHasBeenSet; }

    /**
     * <p>The previous step group.</p>
     */
    inline void SetPrevious(const Aws::Vector<Aws::String>& value) { m_previousHasBeenSet = true; m_previous = value; }

    /**
     * <p>The previous step group.</p>
     */
    inline void SetPrevious(Aws::Vector<Aws::String>&& value) { m_previousHasBeenSet = true; m_previous = std::move(value); }

    /**
     * <p>The previous step group.</p>
     */
    inline UpdateWorkflowStepGroupRequest& WithPrevious(const Aws::Vector<Aws::String>& value) { SetPrevious(value); return *this;}

    /**
     * <p>The previous step group.</p>
     */
    inline UpdateWorkflowStepGroupRequest& WithPrevious(Aws::Vector<Aws::String>&& value) { SetPrevious(std::move(value)); return *this;}

    /**
     * <p>The previous step group.</p>
     */
    inline UpdateWorkflowStepGroupRequest& AddPrevious(const Aws::String& value) { m_previousHasBeenSet = true; m_previous.push_back(value); return *this; }

    /**
     * <p>The previous step group.</p>
     */
    inline UpdateWorkflowStepGroupRequest& AddPrevious(Aws::String&& value) { m_previousHasBeenSet = true; m_previous.push_back(std::move(value)); return *this; }

    /**
     * <p>The previous step group.</p>
     */
    inline UpdateWorkflowStepGroupRequest& AddPrevious(const char* value) { m_previousHasBeenSet = true; m_previous.push_back(value); return *this; }

  private:

    Aws::String m_workflowId;
    bool m_workflowIdHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Vector<Aws::String> m_next;
    bool m_nextHasBeenSet = false;

    Aws::Vector<Aws::String> m_previous;
    bool m_previousHasBeenSet = false;
  };

} // namespace Model
} // namespace MigrationHubOrchestrator
} // namespace Aws
