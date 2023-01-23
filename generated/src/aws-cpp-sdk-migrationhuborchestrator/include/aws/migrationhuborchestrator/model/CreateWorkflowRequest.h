/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/migrationhuborchestrator/MigrationHubOrchestrator_EXPORTS.h>
#include <aws/migrationhuborchestrator/MigrationHubOrchestratorRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/migrationhuborchestrator/model/StepInput.h>
#include <utility>

namespace Aws
{
namespace MigrationHubOrchestrator
{
namespace Model
{

  /**
   */
  class CreateWorkflowRequest : public MigrationHubOrchestratorRequest
  {
  public:
    AWS_MIGRATIONHUBORCHESTRATOR_API CreateWorkflowRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateWorkflow"; }

    AWS_MIGRATIONHUBORCHESTRATOR_API Aws::String SerializePayload() const override;


    /**
     * <p>The name of the migration workflow.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the migration workflow.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the migration workflow.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the migration workflow.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the migration workflow.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the migration workflow.</p>
     */
    inline CreateWorkflowRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the migration workflow.</p>
     */
    inline CreateWorkflowRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the migration workflow.</p>
     */
    inline CreateWorkflowRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The description of the migration workflow.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the migration workflow.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description of the migration workflow.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description of the migration workflow.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description of the migration workflow.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description of the migration workflow.</p>
     */
    inline CreateWorkflowRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the migration workflow.</p>
     */
    inline CreateWorkflowRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the migration workflow.</p>
     */
    inline CreateWorkflowRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


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
    inline CreateWorkflowRequest& WithTemplateId(const Aws::String& value) { SetTemplateId(value); return *this;}

    /**
     * <p>The ID of the template.</p>
     */
    inline CreateWorkflowRequest& WithTemplateId(Aws::String&& value) { SetTemplateId(std::move(value)); return *this;}

    /**
     * <p>The ID of the template.</p>
     */
    inline CreateWorkflowRequest& WithTemplateId(const char* value) { SetTemplateId(value); return *this;}


    /**
     * <p>The configuration ID of the application configured in Application Discovery
     * Service.</p>
     */
    inline const Aws::String& GetApplicationConfigurationId() const{ return m_applicationConfigurationId; }

    /**
     * <p>The configuration ID of the application configured in Application Discovery
     * Service.</p>
     */
    inline bool ApplicationConfigurationIdHasBeenSet() const { return m_applicationConfigurationIdHasBeenSet; }

    /**
     * <p>The configuration ID of the application configured in Application Discovery
     * Service.</p>
     */
    inline void SetApplicationConfigurationId(const Aws::String& value) { m_applicationConfigurationIdHasBeenSet = true; m_applicationConfigurationId = value; }

    /**
     * <p>The configuration ID of the application configured in Application Discovery
     * Service.</p>
     */
    inline void SetApplicationConfigurationId(Aws::String&& value) { m_applicationConfigurationIdHasBeenSet = true; m_applicationConfigurationId = std::move(value); }

    /**
     * <p>The configuration ID of the application configured in Application Discovery
     * Service.</p>
     */
    inline void SetApplicationConfigurationId(const char* value) { m_applicationConfigurationIdHasBeenSet = true; m_applicationConfigurationId.assign(value); }

    /**
     * <p>The configuration ID of the application configured in Application Discovery
     * Service.</p>
     */
    inline CreateWorkflowRequest& WithApplicationConfigurationId(const Aws::String& value) { SetApplicationConfigurationId(value); return *this;}

    /**
     * <p>The configuration ID of the application configured in Application Discovery
     * Service.</p>
     */
    inline CreateWorkflowRequest& WithApplicationConfigurationId(Aws::String&& value) { SetApplicationConfigurationId(std::move(value)); return *this;}

    /**
     * <p>The configuration ID of the application configured in Application Discovery
     * Service.</p>
     */
    inline CreateWorkflowRequest& WithApplicationConfigurationId(const char* value) { SetApplicationConfigurationId(value); return *this;}


    /**
     * <p>The input parameters required to create a migration workflow.</p>
     */
    inline const Aws::Map<Aws::String, StepInput>& GetInputParameters() const{ return m_inputParameters; }

    /**
     * <p>The input parameters required to create a migration workflow.</p>
     */
    inline bool InputParametersHasBeenSet() const { return m_inputParametersHasBeenSet; }

    /**
     * <p>The input parameters required to create a migration workflow.</p>
     */
    inline void SetInputParameters(const Aws::Map<Aws::String, StepInput>& value) { m_inputParametersHasBeenSet = true; m_inputParameters = value; }

    /**
     * <p>The input parameters required to create a migration workflow.</p>
     */
    inline void SetInputParameters(Aws::Map<Aws::String, StepInput>&& value) { m_inputParametersHasBeenSet = true; m_inputParameters = std::move(value); }

    /**
     * <p>The input parameters required to create a migration workflow.</p>
     */
    inline CreateWorkflowRequest& WithInputParameters(const Aws::Map<Aws::String, StepInput>& value) { SetInputParameters(value); return *this;}

    /**
     * <p>The input parameters required to create a migration workflow.</p>
     */
    inline CreateWorkflowRequest& WithInputParameters(Aws::Map<Aws::String, StepInput>&& value) { SetInputParameters(std::move(value)); return *this;}

    /**
     * <p>The input parameters required to create a migration workflow.</p>
     */
    inline CreateWorkflowRequest& AddInputParameters(const Aws::String& key, const StepInput& value) { m_inputParametersHasBeenSet = true; m_inputParameters.emplace(key, value); return *this; }

    /**
     * <p>The input parameters required to create a migration workflow.</p>
     */
    inline CreateWorkflowRequest& AddInputParameters(Aws::String&& key, const StepInput& value) { m_inputParametersHasBeenSet = true; m_inputParameters.emplace(std::move(key), value); return *this; }

    /**
     * <p>The input parameters required to create a migration workflow.</p>
     */
    inline CreateWorkflowRequest& AddInputParameters(const Aws::String& key, StepInput&& value) { m_inputParametersHasBeenSet = true; m_inputParameters.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The input parameters required to create a migration workflow.</p>
     */
    inline CreateWorkflowRequest& AddInputParameters(Aws::String&& key, StepInput&& value) { m_inputParametersHasBeenSet = true; m_inputParameters.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The input parameters required to create a migration workflow.</p>
     */
    inline CreateWorkflowRequest& AddInputParameters(const char* key, StepInput&& value) { m_inputParametersHasBeenSet = true; m_inputParameters.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The input parameters required to create a migration workflow.</p>
     */
    inline CreateWorkflowRequest& AddInputParameters(const char* key, const StepInput& value) { m_inputParametersHasBeenSet = true; m_inputParameters.emplace(key, value); return *this; }


    /**
     * <p>The servers on which a step will be run.</p>
     */
    inline const Aws::Vector<Aws::String>& GetStepTargets() const{ return m_stepTargets; }

    /**
     * <p>The servers on which a step will be run.</p>
     */
    inline bool StepTargetsHasBeenSet() const { return m_stepTargetsHasBeenSet; }

    /**
     * <p>The servers on which a step will be run.</p>
     */
    inline void SetStepTargets(const Aws::Vector<Aws::String>& value) { m_stepTargetsHasBeenSet = true; m_stepTargets = value; }

    /**
     * <p>The servers on which a step will be run.</p>
     */
    inline void SetStepTargets(Aws::Vector<Aws::String>&& value) { m_stepTargetsHasBeenSet = true; m_stepTargets = std::move(value); }

    /**
     * <p>The servers on which a step will be run.</p>
     */
    inline CreateWorkflowRequest& WithStepTargets(const Aws::Vector<Aws::String>& value) { SetStepTargets(value); return *this;}

    /**
     * <p>The servers on which a step will be run.</p>
     */
    inline CreateWorkflowRequest& WithStepTargets(Aws::Vector<Aws::String>&& value) { SetStepTargets(std::move(value)); return *this;}

    /**
     * <p>The servers on which a step will be run.</p>
     */
    inline CreateWorkflowRequest& AddStepTargets(const Aws::String& value) { m_stepTargetsHasBeenSet = true; m_stepTargets.push_back(value); return *this; }

    /**
     * <p>The servers on which a step will be run.</p>
     */
    inline CreateWorkflowRequest& AddStepTargets(Aws::String&& value) { m_stepTargetsHasBeenSet = true; m_stepTargets.push_back(std::move(value)); return *this; }

    /**
     * <p>The servers on which a step will be run.</p>
     */
    inline CreateWorkflowRequest& AddStepTargets(const char* value) { m_stepTargetsHasBeenSet = true; m_stepTargets.push_back(value); return *this; }


    /**
     * <p>The tags to add on a migration workflow.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>The tags to add on a migration workflow.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The tags to add on a migration workflow.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The tags to add on a migration workflow.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The tags to add on a migration workflow.</p>
     */
    inline CreateWorkflowRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>The tags to add on a migration workflow.</p>
     */
    inline CreateWorkflowRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tags to add on a migration workflow.</p>
     */
    inline CreateWorkflowRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>The tags to add on a migration workflow.</p>
     */
    inline CreateWorkflowRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags to add on a migration workflow.</p>
     */
    inline CreateWorkflowRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags to add on a migration workflow.</p>
     */
    inline CreateWorkflowRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The tags to add on a migration workflow.</p>
     */
    inline CreateWorkflowRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags to add on a migration workflow.</p>
     */
    inline CreateWorkflowRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags to add on a migration workflow.</p>
     */
    inline CreateWorkflowRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_templateId;
    bool m_templateIdHasBeenSet = false;

    Aws::String m_applicationConfigurationId;
    bool m_applicationConfigurationIdHasBeenSet = false;

    Aws::Map<Aws::String, StepInput> m_inputParameters;
    bool m_inputParametersHasBeenSet = false;

    Aws::Vector<Aws::String> m_stepTargets;
    bool m_stepTargetsHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace MigrationHubOrchestrator
} // namespace Aws
