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
  class UpdateWorkflowResult
  {
  public:
    AWS_MIGRATIONHUBORCHESTRATOR_API UpdateWorkflowResult();
    AWS_MIGRATIONHUBORCHESTRATOR_API UpdateWorkflowResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MIGRATIONHUBORCHESTRATOR_API UpdateWorkflowResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ID of the migration workflow.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The ID of the migration workflow.</p>
     */
    inline void SetId(const Aws::String& value) { m_id = value; }

    /**
     * <p>The ID of the migration workflow.</p>
     */
    inline void SetId(Aws::String&& value) { m_id = std::move(value); }

    /**
     * <p>The ID of the migration workflow.</p>
     */
    inline void SetId(const char* value) { m_id.assign(value); }

    /**
     * <p>The ID of the migration workflow.</p>
     */
    inline UpdateWorkflowResult& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The ID of the migration workflow.</p>
     */
    inline UpdateWorkflowResult& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The ID of the migration workflow.</p>
     */
    inline UpdateWorkflowResult& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the migration workflow.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the migration workflow.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the migration workflow.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the migration workflow.</p>
     */
    inline void SetArn(const char* value) { m_arn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the migration workflow.</p>
     */
    inline UpdateWorkflowResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the migration workflow.</p>
     */
    inline UpdateWorkflowResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the migration workflow.</p>
     */
    inline UpdateWorkflowResult& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The name of the migration workflow.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the migration workflow.</p>
     */
    inline void SetName(const Aws::String& value) { m_name = value; }

    /**
     * <p>The name of the migration workflow.</p>
     */
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }

    /**
     * <p>The name of the migration workflow.</p>
     */
    inline void SetName(const char* value) { m_name.assign(value); }

    /**
     * <p>The name of the migration workflow.</p>
     */
    inline UpdateWorkflowResult& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the migration workflow.</p>
     */
    inline UpdateWorkflowResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the migration workflow.</p>
     */
    inline UpdateWorkflowResult& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The description of the migration workflow.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the migration workflow.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_description = value; }

    /**
     * <p>The description of the migration workflow.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }

    /**
     * <p>The description of the migration workflow.</p>
     */
    inline void SetDescription(const char* value) { m_description.assign(value); }

    /**
     * <p>The description of the migration workflow.</p>
     */
    inline UpdateWorkflowResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the migration workflow.</p>
     */
    inline UpdateWorkflowResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the migration workflow.</p>
     */
    inline UpdateWorkflowResult& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The ID of the template.</p>
     */
    inline const Aws::String& GetTemplateId() const{ return m_templateId; }

    /**
     * <p>The ID of the template.</p>
     */
    inline void SetTemplateId(const Aws::String& value) { m_templateId = value; }

    /**
     * <p>The ID of the template.</p>
     */
    inline void SetTemplateId(Aws::String&& value) { m_templateId = std::move(value); }

    /**
     * <p>The ID of the template.</p>
     */
    inline void SetTemplateId(const char* value) { m_templateId.assign(value); }

    /**
     * <p>The ID of the template.</p>
     */
    inline UpdateWorkflowResult& WithTemplateId(const Aws::String& value) { SetTemplateId(value); return *this;}

    /**
     * <p>The ID of the template.</p>
     */
    inline UpdateWorkflowResult& WithTemplateId(Aws::String&& value) { SetTemplateId(std::move(value)); return *this;}

    /**
     * <p>The ID of the template.</p>
     */
    inline UpdateWorkflowResult& WithTemplateId(const char* value) { SetTemplateId(value); return *this;}


    /**
     * <p>The ID of the application configured in Application Discovery Service.</p>
     */
    inline const Aws::String& GetAdsApplicationConfigurationId() const{ return m_adsApplicationConfigurationId; }

    /**
     * <p>The ID of the application configured in Application Discovery Service.</p>
     */
    inline void SetAdsApplicationConfigurationId(const Aws::String& value) { m_adsApplicationConfigurationId = value; }

    /**
     * <p>The ID of the application configured in Application Discovery Service.</p>
     */
    inline void SetAdsApplicationConfigurationId(Aws::String&& value) { m_adsApplicationConfigurationId = std::move(value); }

    /**
     * <p>The ID of the application configured in Application Discovery Service.</p>
     */
    inline void SetAdsApplicationConfigurationId(const char* value) { m_adsApplicationConfigurationId.assign(value); }

    /**
     * <p>The ID of the application configured in Application Discovery Service.</p>
     */
    inline UpdateWorkflowResult& WithAdsApplicationConfigurationId(const Aws::String& value) { SetAdsApplicationConfigurationId(value); return *this;}

    /**
     * <p>The ID of the application configured in Application Discovery Service.</p>
     */
    inline UpdateWorkflowResult& WithAdsApplicationConfigurationId(Aws::String&& value) { SetAdsApplicationConfigurationId(std::move(value)); return *this;}

    /**
     * <p>The ID of the application configured in Application Discovery Service.</p>
     */
    inline UpdateWorkflowResult& WithAdsApplicationConfigurationId(const char* value) { SetAdsApplicationConfigurationId(value); return *this;}


    /**
     * <p>The inputs required to update a migration workflow.</p>
     */
    inline const Aws::Map<Aws::String, StepInput>& GetWorkflowInputs() const{ return m_workflowInputs; }

    /**
     * <p>The inputs required to update a migration workflow.</p>
     */
    inline void SetWorkflowInputs(const Aws::Map<Aws::String, StepInput>& value) { m_workflowInputs = value; }

    /**
     * <p>The inputs required to update a migration workflow.</p>
     */
    inline void SetWorkflowInputs(Aws::Map<Aws::String, StepInput>&& value) { m_workflowInputs = std::move(value); }

    /**
     * <p>The inputs required to update a migration workflow.</p>
     */
    inline UpdateWorkflowResult& WithWorkflowInputs(const Aws::Map<Aws::String, StepInput>& value) { SetWorkflowInputs(value); return *this;}

    /**
     * <p>The inputs required to update a migration workflow.</p>
     */
    inline UpdateWorkflowResult& WithWorkflowInputs(Aws::Map<Aws::String, StepInput>&& value) { SetWorkflowInputs(std::move(value)); return *this;}

    /**
     * <p>The inputs required to update a migration workflow.</p>
     */
    inline UpdateWorkflowResult& AddWorkflowInputs(const Aws::String& key, const StepInput& value) { m_workflowInputs.emplace(key, value); return *this; }

    /**
     * <p>The inputs required to update a migration workflow.</p>
     */
    inline UpdateWorkflowResult& AddWorkflowInputs(Aws::String&& key, const StepInput& value) { m_workflowInputs.emplace(std::move(key), value); return *this; }

    /**
     * <p>The inputs required to update a migration workflow.</p>
     */
    inline UpdateWorkflowResult& AddWorkflowInputs(const Aws::String& key, StepInput&& value) { m_workflowInputs.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The inputs required to update a migration workflow.</p>
     */
    inline UpdateWorkflowResult& AddWorkflowInputs(Aws::String&& key, StepInput&& value) { m_workflowInputs.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The inputs required to update a migration workflow.</p>
     */
    inline UpdateWorkflowResult& AddWorkflowInputs(const char* key, StepInput&& value) { m_workflowInputs.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The inputs required to update a migration workflow.</p>
     */
    inline UpdateWorkflowResult& AddWorkflowInputs(const char* key, const StepInput& value) { m_workflowInputs.emplace(key, value); return *this; }


    /**
     * <p>The servers on which a step will be run.</p>
     */
    inline const Aws::Vector<Aws::String>& GetStepTargets() const{ return m_stepTargets; }

    /**
     * <p>The servers on which a step will be run.</p>
     */
    inline void SetStepTargets(const Aws::Vector<Aws::String>& value) { m_stepTargets = value; }

    /**
     * <p>The servers on which a step will be run.</p>
     */
    inline void SetStepTargets(Aws::Vector<Aws::String>&& value) { m_stepTargets = std::move(value); }

    /**
     * <p>The servers on which a step will be run.</p>
     */
    inline UpdateWorkflowResult& WithStepTargets(const Aws::Vector<Aws::String>& value) { SetStepTargets(value); return *this;}

    /**
     * <p>The servers on which a step will be run.</p>
     */
    inline UpdateWorkflowResult& WithStepTargets(Aws::Vector<Aws::String>&& value) { SetStepTargets(std::move(value)); return *this;}

    /**
     * <p>The servers on which a step will be run.</p>
     */
    inline UpdateWorkflowResult& AddStepTargets(const Aws::String& value) { m_stepTargets.push_back(value); return *this; }

    /**
     * <p>The servers on which a step will be run.</p>
     */
    inline UpdateWorkflowResult& AddStepTargets(Aws::String&& value) { m_stepTargets.push_back(std::move(value)); return *this; }

    /**
     * <p>The servers on which a step will be run.</p>
     */
    inline UpdateWorkflowResult& AddStepTargets(const char* value) { m_stepTargets.push_back(value); return *this; }


    /**
     * <p>The status of the migration workflow.</p>
     */
    inline const MigrationWorkflowStatusEnum& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the migration workflow.</p>
     */
    inline void SetStatus(const MigrationWorkflowStatusEnum& value) { m_status = value; }

    /**
     * <p>The status of the migration workflow.</p>
     */
    inline void SetStatus(MigrationWorkflowStatusEnum&& value) { m_status = std::move(value); }

    /**
     * <p>The status of the migration workflow.</p>
     */
    inline UpdateWorkflowResult& WithStatus(const MigrationWorkflowStatusEnum& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the migration workflow.</p>
     */
    inline UpdateWorkflowResult& WithStatus(MigrationWorkflowStatusEnum&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The time at which the migration workflow was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>The time at which the migration workflow was created.</p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTime = value; }

    /**
     * <p>The time at which the migration workflow was created.</p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTime = std::move(value); }

    /**
     * <p>The time at which the migration workflow was created.</p>
     */
    inline UpdateWorkflowResult& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>The time at which the migration workflow was created.</p>
     */
    inline UpdateWorkflowResult& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


    /**
     * <p>The time at which the migration workflow was last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const{ return m_lastModifiedTime; }

    /**
     * <p>The time at which the migration workflow was last modified.</p>
     */
    inline void SetLastModifiedTime(const Aws::Utils::DateTime& value) { m_lastModifiedTime = value; }

    /**
     * <p>The time at which the migration workflow was last modified.</p>
     */
    inline void SetLastModifiedTime(Aws::Utils::DateTime&& value) { m_lastModifiedTime = std::move(value); }

    /**
     * <p>The time at which the migration workflow was last modified.</p>
     */
    inline UpdateWorkflowResult& WithLastModifiedTime(const Aws::Utils::DateTime& value) { SetLastModifiedTime(value); return *this;}

    /**
     * <p>The time at which the migration workflow was last modified.</p>
     */
    inline UpdateWorkflowResult& WithLastModifiedTime(Aws::Utils::DateTime&& value) { SetLastModifiedTime(std::move(value)); return *this;}


    /**
     * <p>The tags added to the migration workflow.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>The tags added to the migration workflow.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tags = value; }

    /**
     * <p>The tags added to the migration workflow.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tags = std::move(value); }

    /**
     * <p>The tags added to the migration workflow.</p>
     */
    inline UpdateWorkflowResult& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>The tags added to the migration workflow.</p>
     */
    inline UpdateWorkflowResult& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tags added to the migration workflow.</p>
     */
    inline UpdateWorkflowResult& AddTags(const Aws::String& key, const Aws::String& value) { m_tags.emplace(key, value); return *this; }

    /**
     * <p>The tags added to the migration workflow.</p>
     */
    inline UpdateWorkflowResult& AddTags(Aws::String&& key, const Aws::String& value) { m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags added to the migration workflow.</p>
     */
    inline UpdateWorkflowResult& AddTags(const Aws::String& key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags added to the migration workflow.</p>
     */
    inline UpdateWorkflowResult& AddTags(Aws::String&& key, Aws::String&& value) { m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The tags added to the migration workflow.</p>
     */
    inline UpdateWorkflowResult& AddTags(const char* key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags added to the migration workflow.</p>
     */
    inline UpdateWorkflowResult& AddTags(Aws::String&& key, const char* value) { m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags added to the migration workflow.</p>
     */
    inline UpdateWorkflowResult& AddTags(const char* key, const char* value) { m_tags.emplace(key, value); return *this; }

  private:

    Aws::String m_id;

    Aws::String m_arn;

    Aws::String m_name;

    Aws::String m_description;

    Aws::String m_templateId;

    Aws::String m_adsApplicationConfigurationId;

    Aws::Map<Aws::String, StepInput> m_workflowInputs;

    Aws::Vector<Aws::String> m_stepTargets;

    MigrationWorkflowStatusEnum m_status;

    Aws::Utils::DateTime m_creationTime;

    Aws::Utils::DateTime m_lastModifiedTime;

    Aws::Map<Aws::String, Aws::String> m_tags;
  };

} // namespace Model
} // namespace MigrationHubOrchestrator
} // namespace Aws
