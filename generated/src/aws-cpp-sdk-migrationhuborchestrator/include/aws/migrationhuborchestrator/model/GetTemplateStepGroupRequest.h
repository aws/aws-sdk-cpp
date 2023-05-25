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
namespace MigrationHubOrchestrator
{
namespace Model
{

  /**
   */
  class GetTemplateStepGroupRequest : public MigrationHubOrchestratorRequest
  {
  public:
    AWS_MIGRATIONHUBORCHESTRATOR_API GetTemplateStepGroupRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetTemplateStepGroup"; }

    AWS_MIGRATIONHUBORCHESTRATOR_API Aws::String SerializePayload() const override;


    /**
     * <p>The ID of the template.</p>
     */
    inline const Aws::String& GetTemplateId() const{ return m_templateId; }

    /**
     * <p>The ID of the template.</p>
     */
    inline bool TemplateIdHasBeenSet() const { return m_templateIdHasBeenSet; }

    /**
     * <p>The ID of the template.</p>
     */
    inline void SetTemplateId(const Aws::String& value) { m_templateIdHasBeenSet = true; m_templateId = value; }

    /**
     * <p>The ID of the template.</p>
     */
    inline void SetTemplateId(Aws::String&& value) { m_templateIdHasBeenSet = true; m_templateId = std::move(value); }

    /**
     * <p>The ID of the template.</p>
     */
    inline void SetTemplateId(const char* value) { m_templateIdHasBeenSet = true; m_templateId.assign(value); }

    /**
     * <p>The ID of the template.</p>
     */
    inline GetTemplateStepGroupRequest& WithTemplateId(const Aws::String& value) { SetTemplateId(value); return *this;}

    /**
     * <p>The ID of the template.</p>
     */
    inline GetTemplateStepGroupRequest& WithTemplateId(Aws::String&& value) { SetTemplateId(std::move(value)); return *this;}

    /**
     * <p>The ID of the template.</p>
     */
    inline GetTemplateStepGroupRequest& WithTemplateId(const char* value) { SetTemplateId(value); return *this;}


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
    inline GetTemplateStepGroupRequest& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The ID of the step group.</p>
     */
    inline GetTemplateStepGroupRequest& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The ID of the step group.</p>
     */
    inline GetTemplateStepGroupRequest& WithId(const char* value) { SetId(value); return *this;}

  private:

    Aws::String m_templateId;
    bool m_templateIdHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;
  };

} // namespace Model
} // namespace MigrationHubOrchestrator
} // namespace Aws
