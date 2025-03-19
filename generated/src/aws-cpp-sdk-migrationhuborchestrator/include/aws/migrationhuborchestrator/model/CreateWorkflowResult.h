/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/migrationhuborchestrator/MigrationHubOrchestrator_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/migrationhuborchestrator/model/MigrationWorkflowStatusEnum.h>
#include <aws/core/utils/DateTime.h>
#include <aws/migrationhuborchestrator/model/StepInput.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace MigrationHubOrchestrator
{
namespace Model
{
  class CreateWorkflowResult
  {
  public:
    AWS_MIGRATIONHUBORCHESTRATOR_API CreateWorkflowResult() = default;
    AWS_MIGRATIONHUBORCHESTRATOR_API CreateWorkflowResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MIGRATIONHUBORCHESTRATOR_API CreateWorkflowResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ID of the migration workflow.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    CreateWorkflowResult& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the migration workflow.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    CreateWorkflowResult& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the migration workflow.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    CreateWorkflowResult& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the migration workflow.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    CreateWorkflowResult& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the template.</p>
     */
    inline const Aws::String& GetTemplateId() const { return m_templateId; }
    template<typename TemplateIdT = Aws::String>
    void SetTemplateId(TemplateIdT&& value) { m_templateIdHasBeenSet = true; m_templateId = std::forward<TemplateIdT>(value); }
    template<typename TemplateIdT = Aws::String>
    CreateWorkflowResult& WithTemplateId(TemplateIdT&& value) { SetTemplateId(std::forward<TemplateIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration ID of the application configured in Application Discovery
     * Service.</p>
     */
    inline const Aws::String& GetAdsApplicationConfigurationId() const { return m_adsApplicationConfigurationId; }
    template<typename AdsApplicationConfigurationIdT = Aws::String>
    void SetAdsApplicationConfigurationId(AdsApplicationConfigurationIdT&& value) { m_adsApplicationConfigurationIdHasBeenSet = true; m_adsApplicationConfigurationId = std::forward<AdsApplicationConfigurationIdT>(value); }
    template<typename AdsApplicationConfigurationIdT = Aws::String>
    CreateWorkflowResult& WithAdsApplicationConfigurationId(AdsApplicationConfigurationIdT&& value) { SetAdsApplicationConfigurationId(std::forward<AdsApplicationConfigurationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The inputs for creating a migration workflow.</p>
     */
    inline const Aws::Map<Aws::String, StepInput>& GetWorkflowInputs() const { return m_workflowInputs; }
    template<typename WorkflowInputsT = Aws::Map<Aws::String, StepInput>>
    void SetWorkflowInputs(WorkflowInputsT&& value) { m_workflowInputsHasBeenSet = true; m_workflowInputs = std::forward<WorkflowInputsT>(value); }
    template<typename WorkflowInputsT = Aws::Map<Aws::String, StepInput>>
    CreateWorkflowResult& WithWorkflowInputs(WorkflowInputsT&& value) { SetWorkflowInputs(std::forward<WorkflowInputsT>(value)); return *this;}
    template<typename WorkflowInputsKeyT = Aws::String, typename WorkflowInputsValueT = StepInput>
    CreateWorkflowResult& AddWorkflowInputs(WorkflowInputsKeyT&& key, WorkflowInputsValueT&& value) {
      m_workflowInputsHasBeenSet = true; m_workflowInputs.emplace(std::forward<WorkflowInputsKeyT>(key), std::forward<WorkflowInputsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The servers on which a step will be run.</p>
     */
    inline const Aws::Vector<Aws::String>& GetStepTargets() const { return m_stepTargets; }
    template<typename StepTargetsT = Aws::Vector<Aws::String>>
    void SetStepTargets(StepTargetsT&& value) { m_stepTargetsHasBeenSet = true; m_stepTargets = std::forward<StepTargetsT>(value); }
    template<typename StepTargetsT = Aws::Vector<Aws::String>>
    CreateWorkflowResult& WithStepTargets(StepTargetsT&& value) { SetStepTargets(std::forward<StepTargetsT>(value)); return *this;}
    template<typename StepTargetsT = Aws::String>
    CreateWorkflowResult& AddStepTargets(StepTargetsT&& value) { m_stepTargetsHasBeenSet = true; m_stepTargets.emplace_back(std::forward<StepTargetsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The status of the migration workflow.</p>
     */
    inline MigrationWorkflowStatusEnum GetStatus() const { return m_status; }
    inline void SetStatus(MigrationWorkflowStatusEnum value) { m_statusHasBeenSet = true; m_status = value; }
    inline CreateWorkflowResult& WithStatus(MigrationWorkflowStatusEnum value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time at which the migration workflow was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    CreateWorkflowResult& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags to add on a migration workflow.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    CreateWorkflowResult& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    CreateWorkflowResult& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateWorkflowResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_templateId;
    bool m_templateIdHasBeenSet = false;

    Aws::String m_adsApplicationConfigurationId;
    bool m_adsApplicationConfigurationIdHasBeenSet = false;

    Aws::Map<Aws::String, StepInput> m_workflowInputs;
    bool m_workflowInputsHasBeenSet = false;

    Aws::Vector<Aws::String> m_stepTargets;
    bool m_stepTargetsHasBeenSet = false;

    MigrationWorkflowStatusEnum m_status{MigrationWorkflowStatusEnum::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime{};
    bool m_creationTimeHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace MigrationHubOrchestrator
} // namespace Aws
