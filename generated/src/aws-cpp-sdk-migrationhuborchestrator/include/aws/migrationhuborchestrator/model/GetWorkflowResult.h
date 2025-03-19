/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/migrationhuborchestrator/MigrationHubOrchestrator_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/migrationhuborchestrator/model/MigrationWorkflowStatusEnum.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/migrationhuborchestrator/model/Tool.h>
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
  class GetWorkflowResult
  {
  public:
    AWS_MIGRATIONHUBORCHESTRATOR_API GetWorkflowResult() = default;
    AWS_MIGRATIONHUBORCHESTRATOR_API GetWorkflowResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MIGRATIONHUBORCHESTRATOR_API GetWorkflowResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ID of the migration workflow.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    GetWorkflowResult& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the migration workflow.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    GetWorkflowResult& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the migration workflow.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    GetWorkflowResult& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the migration workflow.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    GetWorkflowResult& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the template.</p>
     */
    inline const Aws::String& GetTemplateId() const { return m_templateId; }
    template<typename TemplateIdT = Aws::String>
    void SetTemplateId(TemplateIdT&& value) { m_templateIdHasBeenSet = true; m_templateId = std::forward<TemplateIdT>(value); }
    template<typename TemplateIdT = Aws::String>
    GetWorkflowResult& WithTemplateId(TemplateIdT&& value) { SetTemplateId(std::forward<TemplateIdT>(value)); return *this;}
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
    GetWorkflowResult& WithAdsApplicationConfigurationId(AdsApplicationConfigurationIdT&& value) { SetAdsApplicationConfigurationId(std::forward<AdsApplicationConfigurationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the application configured in Application Discovery Service.</p>
     */
    inline const Aws::String& GetAdsApplicationName() const { return m_adsApplicationName; }
    template<typename AdsApplicationNameT = Aws::String>
    void SetAdsApplicationName(AdsApplicationNameT&& value) { m_adsApplicationNameHasBeenSet = true; m_adsApplicationName = std::forward<AdsApplicationNameT>(value); }
    template<typename AdsApplicationNameT = Aws::String>
    GetWorkflowResult& WithAdsApplicationName(AdsApplicationNameT&& value) { SetAdsApplicationName(std::forward<AdsApplicationNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the migration workflow.</p>
     */
    inline MigrationWorkflowStatusEnum GetStatus() const { return m_status; }
    inline void SetStatus(MigrationWorkflowStatusEnum value) { m_statusHasBeenSet = true; m_status = value; }
    inline GetWorkflowResult& WithStatus(MigrationWorkflowStatusEnum value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status message of the migration workflow.</p>
     */
    inline const Aws::String& GetStatusMessage() const { return m_statusMessage; }
    template<typename StatusMessageT = Aws::String>
    void SetStatusMessage(StatusMessageT&& value) { m_statusMessageHasBeenSet = true; m_statusMessage = std::forward<StatusMessageT>(value); }
    template<typename StatusMessageT = Aws::String>
    GetWorkflowResult& WithStatusMessage(StatusMessageT&& value) { SetStatusMessage(std::forward<StatusMessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time at which the migration workflow was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    GetWorkflowResult& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time at which the migration workflow was last started.</p>
     */
    inline const Aws::Utils::DateTime& GetLastStartTime() const { return m_lastStartTime; }
    template<typename LastStartTimeT = Aws::Utils::DateTime>
    void SetLastStartTime(LastStartTimeT&& value) { m_lastStartTimeHasBeenSet = true; m_lastStartTime = std::forward<LastStartTimeT>(value); }
    template<typename LastStartTimeT = Aws::Utils::DateTime>
    GetWorkflowResult& WithLastStartTime(LastStartTimeT&& value) { SetLastStartTime(std::forward<LastStartTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time at which the migration workflow was last stopped.</p>
     */
    inline const Aws::Utils::DateTime& GetLastStopTime() const { return m_lastStopTime; }
    template<typename LastStopTimeT = Aws::Utils::DateTime>
    void SetLastStopTime(LastStopTimeT&& value) { m_lastStopTimeHasBeenSet = true; m_lastStopTime = std::forward<LastStopTimeT>(value); }
    template<typename LastStopTimeT = Aws::Utils::DateTime>
    GetWorkflowResult& WithLastStopTime(LastStopTimeT&& value) { SetLastStopTime(std::forward<LastStopTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time at which the migration workflow was last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const { return m_lastModifiedTime; }
    template<typename LastModifiedTimeT = Aws::Utils::DateTime>
    void SetLastModifiedTime(LastModifiedTimeT&& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = std::forward<LastModifiedTimeT>(value); }
    template<typename LastModifiedTimeT = Aws::Utils::DateTime>
    GetWorkflowResult& WithLastModifiedTime(LastModifiedTimeT&& value) { SetLastModifiedTime(std::forward<LastModifiedTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time at which the migration workflow ended.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const { return m_endTime; }
    template<typename EndTimeT = Aws::Utils::DateTime>
    void SetEndTime(EndTimeT&& value) { m_endTimeHasBeenSet = true; m_endTime = std::forward<EndTimeT>(value); }
    template<typename EndTimeT = Aws::Utils::DateTime>
    GetWorkflowResult& WithEndTime(EndTimeT&& value) { SetEndTime(std::forward<EndTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>List of AWS services utilized in a migration workflow.</p>
     */
    inline const Aws::Vector<Tool>& GetTools() const { return m_tools; }
    template<typename ToolsT = Aws::Vector<Tool>>
    void SetTools(ToolsT&& value) { m_toolsHasBeenSet = true; m_tools = std::forward<ToolsT>(value); }
    template<typename ToolsT = Aws::Vector<Tool>>
    GetWorkflowResult& WithTools(ToolsT&& value) { SetTools(std::forward<ToolsT>(value)); return *this;}
    template<typename ToolsT = Tool>
    GetWorkflowResult& AddTools(ToolsT&& value) { m_toolsHasBeenSet = true; m_tools.emplace_back(std::forward<ToolsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The total number of steps in the migration workflow.</p>
     */
    inline int GetTotalSteps() const { return m_totalSteps; }
    inline void SetTotalSteps(int value) { m_totalStepsHasBeenSet = true; m_totalSteps = value; }
    inline GetWorkflowResult& WithTotalSteps(int value) { SetTotalSteps(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Get a list of completed steps in the migration workflow.</p>
     */
    inline int GetCompletedSteps() const { return m_completedSteps; }
    inline void SetCompletedSteps(int value) { m_completedStepsHasBeenSet = true; m_completedSteps = value; }
    inline GetWorkflowResult& WithCompletedSteps(int value) { SetCompletedSteps(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The inputs required for creating the migration workflow.</p>
     */
    inline const Aws::Map<Aws::String, StepInput>& GetWorkflowInputs() const { return m_workflowInputs; }
    template<typename WorkflowInputsT = Aws::Map<Aws::String, StepInput>>
    void SetWorkflowInputs(WorkflowInputsT&& value) { m_workflowInputsHasBeenSet = true; m_workflowInputs = std::forward<WorkflowInputsT>(value); }
    template<typename WorkflowInputsT = Aws::Map<Aws::String, StepInput>>
    GetWorkflowResult& WithWorkflowInputs(WorkflowInputsT&& value) { SetWorkflowInputs(std::forward<WorkflowInputsT>(value)); return *this;}
    template<typename WorkflowInputsKeyT = Aws::String, typename WorkflowInputsValueT = StepInput>
    GetWorkflowResult& AddWorkflowInputs(WorkflowInputsKeyT&& key, WorkflowInputsValueT&& value) {
      m_workflowInputsHasBeenSet = true; m_workflowInputs.emplace(std::forward<WorkflowInputsKeyT>(key), std::forward<WorkflowInputsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The tags added to the migration workflow.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    GetWorkflowResult& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    GetWorkflowResult& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The Amazon S3 bucket where the migration logs are stored.</p>
     */
    inline const Aws::String& GetWorkflowBucket() const { return m_workflowBucket; }
    template<typename WorkflowBucketT = Aws::String>
    void SetWorkflowBucket(WorkflowBucketT&& value) { m_workflowBucketHasBeenSet = true; m_workflowBucket = std::forward<WorkflowBucketT>(value); }
    template<typename WorkflowBucketT = Aws::String>
    GetWorkflowResult& WithWorkflowBucket(WorkflowBucketT&& value) { SetWorkflowBucket(std::forward<WorkflowBucketT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetWorkflowResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
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

    Aws::String m_adsApplicationName;
    bool m_adsApplicationNameHasBeenSet = false;

    MigrationWorkflowStatusEnum m_status{MigrationWorkflowStatusEnum::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_statusMessage;
    bool m_statusMessageHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime{};
    bool m_creationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastStartTime{};
    bool m_lastStartTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastStopTime{};
    bool m_lastStopTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedTime{};
    bool m_lastModifiedTimeHasBeenSet = false;

    Aws::Utils::DateTime m_endTime{};
    bool m_endTimeHasBeenSet = false;

    Aws::Vector<Tool> m_tools;
    bool m_toolsHasBeenSet = false;

    int m_totalSteps{0};
    bool m_totalStepsHasBeenSet = false;

    int m_completedSteps{0};
    bool m_completedStepsHasBeenSet = false;

    Aws::Map<Aws::String, StepInput> m_workflowInputs;
    bool m_workflowInputsHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_workflowBucket;
    bool m_workflowBucketHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace MigrationHubOrchestrator
} // namespace Aws
