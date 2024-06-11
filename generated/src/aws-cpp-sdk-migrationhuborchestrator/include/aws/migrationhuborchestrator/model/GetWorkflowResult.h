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
    AWS_MIGRATIONHUBORCHESTRATOR_API GetWorkflowResult();
    AWS_MIGRATIONHUBORCHESTRATOR_API GetWorkflowResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MIGRATIONHUBORCHESTRATOR_API GetWorkflowResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ID of the migration workflow.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline void SetId(const Aws::String& value) { m_id = value; }
    inline void SetId(Aws::String&& value) { m_id = std::move(value); }
    inline void SetId(const char* value) { m_id.assign(value); }
    inline GetWorkflowResult& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline GetWorkflowResult& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline GetWorkflowResult& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the migration workflow.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline void SetArn(const Aws::String& value) { m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arn.assign(value); }
    inline GetWorkflowResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline GetWorkflowResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline GetWorkflowResult& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the migration workflow.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline void SetName(const Aws::String& value) { m_name = value; }
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }
    inline void SetName(const char* value) { m_name.assign(value); }
    inline GetWorkflowResult& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline GetWorkflowResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline GetWorkflowResult& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the migration workflow.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline void SetDescription(const Aws::String& value) { m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_description.assign(value); }
    inline GetWorkflowResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline GetWorkflowResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline GetWorkflowResult& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the template.</p>
     */
    inline const Aws::String& GetTemplateId() const{ return m_templateId; }
    inline void SetTemplateId(const Aws::String& value) { m_templateId = value; }
    inline void SetTemplateId(Aws::String&& value) { m_templateId = std::move(value); }
    inline void SetTemplateId(const char* value) { m_templateId.assign(value); }
    inline GetWorkflowResult& WithTemplateId(const Aws::String& value) { SetTemplateId(value); return *this;}
    inline GetWorkflowResult& WithTemplateId(Aws::String&& value) { SetTemplateId(std::move(value)); return *this;}
    inline GetWorkflowResult& WithTemplateId(const char* value) { SetTemplateId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration ID of the application configured in Application Discovery
     * Service.</p>
     */
    inline const Aws::String& GetAdsApplicationConfigurationId() const{ return m_adsApplicationConfigurationId; }
    inline void SetAdsApplicationConfigurationId(const Aws::String& value) { m_adsApplicationConfigurationId = value; }
    inline void SetAdsApplicationConfigurationId(Aws::String&& value) { m_adsApplicationConfigurationId = std::move(value); }
    inline void SetAdsApplicationConfigurationId(const char* value) { m_adsApplicationConfigurationId.assign(value); }
    inline GetWorkflowResult& WithAdsApplicationConfigurationId(const Aws::String& value) { SetAdsApplicationConfigurationId(value); return *this;}
    inline GetWorkflowResult& WithAdsApplicationConfigurationId(Aws::String&& value) { SetAdsApplicationConfigurationId(std::move(value)); return *this;}
    inline GetWorkflowResult& WithAdsApplicationConfigurationId(const char* value) { SetAdsApplicationConfigurationId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the application configured in Application Discovery Service.</p>
     */
    inline const Aws::String& GetAdsApplicationName() const{ return m_adsApplicationName; }
    inline void SetAdsApplicationName(const Aws::String& value) { m_adsApplicationName = value; }
    inline void SetAdsApplicationName(Aws::String&& value) { m_adsApplicationName = std::move(value); }
    inline void SetAdsApplicationName(const char* value) { m_adsApplicationName.assign(value); }
    inline GetWorkflowResult& WithAdsApplicationName(const Aws::String& value) { SetAdsApplicationName(value); return *this;}
    inline GetWorkflowResult& WithAdsApplicationName(Aws::String&& value) { SetAdsApplicationName(std::move(value)); return *this;}
    inline GetWorkflowResult& WithAdsApplicationName(const char* value) { SetAdsApplicationName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the migration workflow.</p>
     */
    inline const MigrationWorkflowStatusEnum& GetStatus() const{ return m_status; }
    inline void SetStatus(const MigrationWorkflowStatusEnum& value) { m_status = value; }
    inline void SetStatus(MigrationWorkflowStatusEnum&& value) { m_status = std::move(value); }
    inline GetWorkflowResult& WithStatus(const MigrationWorkflowStatusEnum& value) { SetStatus(value); return *this;}
    inline GetWorkflowResult& WithStatus(MigrationWorkflowStatusEnum&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status message of the migration workflow.</p>
     */
    inline const Aws::String& GetStatusMessage() const{ return m_statusMessage; }
    inline void SetStatusMessage(const Aws::String& value) { m_statusMessage = value; }
    inline void SetStatusMessage(Aws::String&& value) { m_statusMessage = std::move(value); }
    inline void SetStatusMessage(const char* value) { m_statusMessage.assign(value); }
    inline GetWorkflowResult& WithStatusMessage(const Aws::String& value) { SetStatusMessage(value); return *this;}
    inline GetWorkflowResult& WithStatusMessage(Aws::String&& value) { SetStatusMessage(std::move(value)); return *this;}
    inline GetWorkflowResult& WithStatusMessage(const char* value) { SetStatusMessage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time at which the migration workflow was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTime = value; }
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTime = std::move(value); }
    inline GetWorkflowResult& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}
    inline GetWorkflowResult& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time at which the migration workflow was last started.</p>
     */
    inline const Aws::Utils::DateTime& GetLastStartTime() const{ return m_lastStartTime; }
    inline void SetLastStartTime(const Aws::Utils::DateTime& value) { m_lastStartTime = value; }
    inline void SetLastStartTime(Aws::Utils::DateTime&& value) { m_lastStartTime = std::move(value); }
    inline GetWorkflowResult& WithLastStartTime(const Aws::Utils::DateTime& value) { SetLastStartTime(value); return *this;}
    inline GetWorkflowResult& WithLastStartTime(Aws::Utils::DateTime&& value) { SetLastStartTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time at which the migration workflow was last stopped.</p>
     */
    inline const Aws::Utils::DateTime& GetLastStopTime() const{ return m_lastStopTime; }
    inline void SetLastStopTime(const Aws::Utils::DateTime& value) { m_lastStopTime = value; }
    inline void SetLastStopTime(Aws::Utils::DateTime&& value) { m_lastStopTime = std::move(value); }
    inline GetWorkflowResult& WithLastStopTime(const Aws::Utils::DateTime& value) { SetLastStopTime(value); return *this;}
    inline GetWorkflowResult& WithLastStopTime(Aws::Utils::DateTime&& value) { SetLastStopTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time at which the migration workflow was last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const{ return m_lastModifiedTime; }
    inline void SetLastModifiedTime(const Aws::Utils::DateTime& value) { m_lastModifiedTime = value; }
    inline void SetLastModifiedTime(Aws::Utils::DateTime&& value) { m_lastModifiedTime = std::move(value); }
    inline GetWorkflowResult& WithLastModifiedTime(const Aws::Utils::DateTime& value) { SetLastModifiedTime(value); return *this;}
    inline GetWorkflowResult& WithLastModifiedTime(Aws::Utils::DateTime&& value) { SetLastModifiedTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time at which the migration workflow ended.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const{ return m_endTime; }
    inline void SetEndTime(const Aws::Utils::DateTime& value) { m_endTime = value; }
    inline void SetEndTime(Aws::Utils::DateTime&& value) { m_endTime = std::move(value); }
    inline GetWorkflowResult& WithEndTime(const Aws::Utils::DateTime& value) { SetEndTime(value); return *this;}
    inline GetWorkflowResult& WithEndTime(Aws::Utils::DateTime&& value) { SetEndTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>List of AWS services utilized in a migration workflow.</p>
     */
    inline const Aws::Vector<Tool>& GetTools() const{ return m_tools; }
    inline void SetTools(const Aws::Vector<Tool>& value) { m_tools = value; }
    inline void SetTools(Aws::Vector<Tool>&& value) { m_tools = std::move(value); }
    inline GetWorkflowResult& WithTools(const Aws::Vector<Tool>& value) { SetTools(value); return *this;}
    inline GetWorkflowResult& WithTools(Aws::Vector<Tool>&& value) { SetTools(std::move(value)); return *this;}
    inline GetWorkflowResult& AddTools(const Tool& value) { m_tools.push_back(value); return *this; }
    inline GetWorkflowResult& AddTools(Tool&& value) { m_tools.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The total number of steps in the migration workflow.</p>
     */
    inline int GetTotalSteps() const{ return m_totalSteps; }
    inline void SetTotalSteps(int value) { m_totalSteps = value; }
    inline GetWorkflowResult& WithTotalSteps(int value) { SetTotalSteps(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Get a list of completed steps in the migration workflow.</p>
     */
    inline int GetCompletedSteps() const{ return m_completedSteps; }
    inline void SetCompletedSteps(int value) { m_completedSteps = value; }
    inline GetWorkflowResult& WithCompletedSteps(int value) { SetCompletedSteps(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The inputs required for creating the migration workflow.</p>
     */
    inline const Aws::Map<Aws::String, StepInput>& GetWorkflowInputs() const{ return m_workflowInputs; }
    inline void SetWorkflowInputs(const Aws::Map<Aws::String, StepInput>& value) { m_workflowInputs = value; }
    inline void SetWorkflowInputs(Aws::Map<Aws::String, StepInput>&& value) { m_workflowInputs = std::move(value); }
    inline GetWorkflowResult& WithWorkflowInputs(const Aws::Map<Aws::String, StepInput>& value) { SetWorkflowInputs(value); return *this;}
    inline GetWorkflowResult& WithWorkflowInputs(Aws::Map<Aws::String, StepInput>&& value) { SetWorkflowInputs(std::move(value)); return *this;}
    inline GetWorkflowResult& AddWorkflowInputs(const Aws::String& key, const StepInput& value) { m_workflowInputs.emplace(key, value); return *this; }
    inline GetWorkflowResult& AddWorkflowInputs(Aws::String&& key, const StepInput& value) { m_workflowInputs.emplace(std::move(key), value); return *this; }
    inline GetWorkflowResult& AddWorkflowInputs(const Aws::String& key, StepInput&& value) { m_workflowInputs.emplace(key, std::move(value)); return *this; }
    inline GetWorkflowResult& AddWorkflowInputs(Aws::String&& key, StepInput&& value) { m_workflowInputs.emplace(std::move(key), std::move(value)); return *this; }
    inline GetWorkflowResult& AddWorkflowInputs(const char* key, StepInput&& value) { m_workflowInputs.emplace(key, std::move(value)); return *this; }
    inline GetWorkflowResult& AddWorkflowInputs(const char* key, const StepInput& value) { m_workflowInputs.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The tags added to the migration workflow.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tags = std::move(value); }
    inline GetWorkflowResult& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline GetWorkflowResult& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline GetWorkflowResult& AddTags(const Aws::String& key, const Aws::String& value) { m_tags.emplace(key, value); return *this; }
    inline GetWorkflowResult& AddTags(Aws::String&& key, const Aws::String& value) { m_tags.emplace(std::move(key), value); return *this; }
    inline GetWorkflowResult& AddTags(const Aws::String& key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }
    inline GetWorkflowResult& AddTags(Aws::String&& key, Aws::String&& value) { m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline GetWorkflowResult& AddTags(const char* key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }
    inline GetWorkflowResult& AddTags(Aws::String&& key, const char* value) { m_tags.emplace(std::move(key), value); return *this; }
    inline GetWorkflowResult& AddTags(const char* key, const char* value) { m_tags.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Amazon S3 bucket where the migration logs are stored.</p>
     */
    inline const Aws::String& GetWorkflowBucket() const{ return m_workflowBucket; }
    inline void SetWorkflowBucket(const Aws::String& value) { m_workflowBucket = value; }
    inline void SetWorkflowBucket(Aws::String&& value) { m_workflowBucket = std::move(value); }
    inline void SetWorkflowBucket(const char* value) { m_workflowBucket.assign(value); }
    inline GetWorkflowResult& WithWorkflowBucket(const Aws::String& value) { SetWorkflowBucket(value); return *this;}
    inline GetWorkflowResult& WithWorkflowBucket(Aws::String&& value) { SetWorkflowBucket(std::move(value)); return *this;}
    inline GetWorkflowResult& WithWorkflowBucket(const char* value) { SetWorkflowBucket(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetWorkflowResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetWorkflowResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetWorkflowResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_id;

    Aws::String m_arn;

    Aws::String m_name;

    Aws::String m_description;

    Aws::String m_templateId;

    Aws::String m_adsApplicationConfigurationId;

    Aws::String m_adsApplicationName;

    MigrationWorkflowStatusEnum m_status;

    Aws::String m_statusMessage;

    Aws::Utils::DateTime m_creationTime;

    Aws::Utils::DateTime m_lastStartTime;

    Aws::Utils::DateTime m_lastStopTime;

    Aws::Utils::DateTime m_lastModifiedTime;

    Aws::Utils::DateTime m_endTime;

    Aws::Vector<Tool> m_tools;

    int m_totalSteps;

    int m_completedSteps;

    Aws::Map<Aws::String, StepInput> m_workflowInputs;

    Aws::Map<Aws::String, Aws::String> m_tags;

    Aws::String m_workflowBucket;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace MigrationHubOrchestrator
} // namespace Aws
