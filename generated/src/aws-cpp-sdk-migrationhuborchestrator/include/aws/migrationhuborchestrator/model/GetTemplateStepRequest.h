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
  class GetTemplateStepRequest : public MigrationHubOrchestratorRequest
  {
  public:
    AWS_MIGRATIONHUBORCHESTRATOR_API GetTemplateStepRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetTemplateStep"; }

    AWS_MIGRATIONHUBORCHESTRATOR_API Aws::String SerializePayload() const override;

    AWS_MIGRATIONHUBORCHESTRATOR_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>The ID of the step.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline GetTemplateStepRequest& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline GetTemplateStepRequest& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline GetTemplateStepRequest& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the template.</p>
     */
    inline const Aws::String& GetTemplateId() const{ return m_templateId; }
    inline bool TemplateIdHasBeenSet() const { return m_templateIdHasBeenSet; }
    inline void SetTemplateId(const Aws::String& value) { m_templateIdHasBeenSet = true; m_templateId = value; }
    inline void SetTemplateId(Aws::String&& value) { m_templateIdHasBeenSet = true; m_templateId = std::move(value); }
    inline void SetTemplateId(const char* value) { m_templateIdHasBeenSet = true; m_templateId.assign(value); }
    inline GetTemplateStepRequest& WithTemplateId(const Aws::String& value) { SetTemplateId(value); return *this;}
    inline GetTemplateStepRequest& WithTemplateId(Aws::String&& value) { SetTemplateId(std::move(value)); return *this;}
    inline GetTemplateStepRequest& WithTemplateId(const char* value) { SetTemplateId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the step group.</p>
     */
    inline const Aws::String& GetStepGroupId() const{ return m_stepGroupId; }
    inline bool StepGroupIdHasBeenSet() const { return m_stepGroupIdHasBeenSet; }
    inline void SetStepGroupId(const Aws::String& value) { m_stepGroupIdHasBeenSet = true; m_stepGroupId = value; }
    inline void SetStepGroupId(Aws::String&& value) { m_stepGroupIdHasBeenSet = true; m_stepGroupId = std::move(value); }
    inline void SetStepGroupId(const char* value) { m_stepGroupIdHasBeenSet = true; m_stepGroupId.assign(value); }
    inline GetTemplateStepRequest& WithStepGroupId(const Aws::String& value) { SetStepGroupId(value); return *this;}
    inline GetTemplateStepRequest& WithStepGroupId(Aws::String&& value) { SetStepGroupId(std::move(value)); return *this;}
    inline GetTemplateStepRequest& WithStepGroupId(const char* value) { SetStepGroupId(value); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_templateId;
    bool m_templateIdHasBeenSet = false;

    Aws::String m_stepGroupId;
    bool m_stepGroupIdHasBeenSet = false;
  };

} // namespace Model
} // namespace MigrationHubOrchestrator
} // namespace Aws
