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
    AWS_MIGRATIONHUBORCHESTRATOR_API CreateWorkflowRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateWorkflow"; }

    AWS_MIGRATIONHUBORCHESTRATOR_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The name of the migration workflow.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    CreateWorkflowRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the migration workflow.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    CreateWorkflowRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the template.</p>
     */
    inline const Aws::String& GetTemplateId() const { return m_templateId; }
    inline bool TemplateIdHasBeenSet() const { return m_templateIdHasBeenSet; }
    template<typename TemplateIdT = Aws::String>
    void SetTemplateId(TemplateIdT&& value) { m_templateIdHasBeenSet = true; m_templateId = std::forward<TemplateIdT>(value); }
    template<typename TemplateIdT = Aws::String>
    CreateWorkflowRequest& WithTemplateId(TemplateIdT&& value) { SetTemplateId(std::forward<TemplateIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration ID of the application configured in Application Discovery
     * Service.</p>
     */
    inline const Aws::String& GetApplicationConfigurationId() const { return m_applicationConfigurationId; }
    inline bool ApplicationConfigurationIdHasBeenSet() const { return m_applicationConfigurationIdHasBeenSet; }
    template<typename ApplicationConfigurationIdT = Aws::String>
    void SetApplicationConfigurationId(ApplicationConfigurationIdT&& value) { m_applicationConfigurationIdHasBeenSet = true; m_applicationConfigurationId = std::forward<ApplicationConfigurationIdT>(value); }
    template<typename ApplicationConfigurationIdT = Aws::String>
    CreateWorkflowRequest& WithApplicationConfigurationId(ApplicationConfigurationIdT&& value) { SetApplicationConfigurationId(std::forward<ApplicationConfigurationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The input parameters required to create a migration workflow.</p>
     */
    inline const Aws::Map<Aws::String, StepInput>& GetInputParameters() const { return m_inputParameters; }
    inline bool InputParametersHasBeenSet() const { return m_inputParametersHasBeenSet; }
    template<typename InputParametersT = Aws::Map<Aws::String, StepInput>>
    void SetInputParameters(InputParametersT&& value) { m_inputParametersHasBeenSet = true; m_inputParameters = std::forward<InputParametersT>(value); }
    template<typename InputParametersT = Aws::Map<Aws::String, StepInput>>
    CreateWorkflowRequest& WithInputParameters(InputParametersT&& value) { SetInputParameters(std::forward<InputParametersT>(value)); return *this;}
    template<typename InputParametersKeyT = Aws::String, typename InputParametersValueT = StepInput>
    CreateWorkflowRequest& AddInputParameters(InputParametersKeyT&& key, InputParametersValueT&& value) {
      m_inputParametersHasBeenSet = true; m_inputParameters.emplace(std::forward<InputParametersKeyT>(key), std::forward<InputParametersValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The servers on which a step will be run.</p>
     */
    inline const Aws::Vector<Aws::String>& GetStepTargets() const { return m_stepTargets; }
    inline bool StepTargetsHasBeenSet() const { return m_stepTargetsHasBeenSet; }
    template<typename StepTargetsT = Aws::Vector<Aws::String>>
    void SetStepTargets(StepTargetsT&& value) { m_stepTargetsHasBeenSet = true; m_stepTargets = std::forward<StepTargetsT>(value); }
    template<typename StepTargetsT = Aws::Vector<Aws::String>>
    CreateWorkflowRequest& WithStepTargets(StepTargetsT&& value) { SetStepTargets(std::forward<StepTargetsT>(value)); return *this;}
    template<typename StepTargetsT = Aws::String>
    CreateWorkflowRequest& AddStepTargets(StepTargetsT&& value) { m_stepTargetsHasBeenSet = true; m_stepTargets.emplace_back(std::forward<StepTargetsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The tags to add on a migration workflow.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    CreateWorkflowRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    CreateWorkflowRequest& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}
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
