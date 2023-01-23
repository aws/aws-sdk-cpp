/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/migrationhuborchestrator/MigrationHubOrchestrator_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/migrationhuborchestrator/model/StepActionType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/migrationhuborchestrator/model/StepAutomationConfiguration.h>
#include <aws/migrationhuborchestrator/model/StepOutput.h>
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
  class GetTemplateStepResult
  {
  public:
    AWS_MIGRATIONHUBORCHESTRATOR_API GetTemplateStepResult();
    AWS_MIGRATIONHUBORCHESTRATOR_API GetTemplateStepResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MIGRATIONHUBORCHESTRATOR_API GetTemplateStepResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ID of the step.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The ID of the step.</p>
     */
    inline void SetId(const Aws::String& value) { m_id = value; }

    /**
     * <p>The ID of the step.</p>
     */
    inline void SetId(Aws::String&& value) { m_id = std::move(value); }

    /**
     * <p>The ID of the step.</p>
     */
    inline void SetId(const char* value) { m_id.assign(value); }

    /**
     * <p>The ID of the step.</p>
     */
    inline GetTemplateStepResult& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The ID of the step.</p>
     */
    inline GetTemplateStepResult& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The ID of the step.</p>
     */
    inline GetTemplateStepResult& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The ID of the step group.</p>
     */
    inline const Aws::String& GetStepGroupId() const{ return m_stepGroupId; }

    /**
     * <p>The ID of the step group.</p>
     */
    inline void SetStepGroupId(const Aws::String& value) { m_stepGroupId = value; }

    /**
     * <p>The ID of the step group.</p>
     */
    inline void SetStepGroupId(Aws::String&& value) { m_stepGroupId = std::move(value); }

    /**
     * <p>The ID of the step group.</p>
     */
    inline void SetStepGroupId(const char* value) { m_stepGroupId.assign(value); }

    /**
     * <p>The ID of the step group.</p>
     */
    inline GetTemplateStepResult& WithStepGroupId(const Aws::String& value) { SetStepGroupId(value); return *this;}

    /**
     * <p>The ID of the step group.</p>
     */
    inline GetTemplateStepResult& WithStepGroupId(Aws::String&& value) { SetStepGroupId(std::move(value)); return *this;}

    /**
     * <p>The ID of the step group.</p>
     */
    inline GetTemplateStepResult& WithStepGroupId(const char* value) { SetStepGroupId(value); return *this;}


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
    inline GetTemplateStepResult& WithTemplateId(const Aws::String& value) { SetTemplateId(value); return *this;}

    /**
     * <p>The ID of the template.</p>
     */
    inline GetTemplateStepResult& WithTemplateId(Aws::String&& value) { SetTemplateId(std::move(value)); return *this;}

    /**
     * <p>The ID of the template.</p>
     */
    inline GetTemplateStepResult& WithTemplateId(const char* value) { SetTemplateId(value); return *this;}


    /**
     * <p>The name of the step.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the step.</p>
     */
    inline void SetName(const Aws::String& value) { m_name = value; }

    /**
     * <p>The name of the step.</p>
     */
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }

    /**
     * <p>The name of the step.</p>
     */
    inline void SetName(const char* value) { m_name.assign(value); }

    /**
     * <p>The name of the step.</p>
     */
    inline GetTemplateStepResult& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the step.</p>
     */
    inline GetTemplateStepResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the step.</p>
     */
    inline GetTemplateStepResult& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The description of the step.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the step.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_description = value; }

    /**
     * <p>The description of the step.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }

    /**
     * <p>The description of the step.</p>
     */
    inline void SetDescription(const char* value) { m_description.assign(value); }

    /**
     * <p>The description of the step.</p>
     */
    inline GetTemplateStepResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the step.</p>
     */
    inline GetTemplateStepResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the step.</p>
     */
    inline GetTemplateStepResult& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The action type of the step. You must run and update the status of a manual
     * step for the workflow to continue after the completion of the step.</p>
     */
    inline const StepActionType& GetStepActionType() const{ return m_stepActionType; }

    /**
     * <p>The action type of the step. You must run and update the status of a manual
     * step for the workflow to continue after the completion of the step.</p>
     */
    inline void SetStepActionType(const StepActionType& value) { m_stepActionType = value; }

    /**
     * <p>The action type of the step. You must run and update the status of a manual
     * step for the workflow to continue after the completion of the step.</p>
     */
    inline void SetStepActionType(StepActionType&& value) { m_stepActionType = std::move(value); }

    /**
     * <p>The action type of the step. You must run and update the status of a manual
     * step for the workflow to continue after the completion of the step.</p>
     */
    inline GetTemplateStepResult& WithStepActionType(const StepActionType& value) { SetStepActionType(value); return *this;}

    /**
     * <p>The action type of the step. You must run and update the status of a manual
     * step for the workflow to continue after the completion of the step.</p>
     */
    inline GetTemplateStepResult& WithStepActionType(StepActionType&& value) { SetStepActionType(std::move(value)); return *this;}


    /**
     * <p>The time at which the step was created.</p>
     */
    inline const Aws::String& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>The time at which the step was created.</p>
     */
    inline void SetCreationTime(const Aws::String& value) { m_creationTime = value; }

    /**
     * <p>The time at which the step was created.</p>
     */
    inline void SetCreationTime(Aws::String&& value) { m_creationTime = std::move(value); }

    /**
     * <p>The time at which the step was created.</p>
     */
    inline void SetCreationTime(const char* value) { m_creationTime.assign(value); }

    /**
     * <p>The time at which the step was created.</p>
     */
    inline GetTemplateStepResult& WithCreationTime(const Aws::String& value) { SetCreationTime(value); return *this;}

    /**
     * <p>The time at which the step was created.</p>
     */
    inline GetTemplateStepResult& WithCreationTime(Aws::String&& value) { SetCreationTime(std::move(value)); return *this;}

    /**
     * <p>The time at which the step was created.</p>
     */
    inline GetTemplateStepResult& WithCreationTime(const char* value) { SetCreationTime(value); return *this;}


    /**
     * <p>The previous step.</p>
     */
    inline const Aws::Vector<Aws::String>& GetPrevious() const{ return m_previous; }

    /**
     * <p>The previous step.</p>
     */
    inline void SetPrevious(const Aws::Vector<Aws::String>& value) { m_previous = value; }

    /**
     * <p>The previous step.</p>
     */
    inline void SetPrevious(Aws::Vector<Aws::String>&& value) { m_previous = std::move(value); }

    /**
     * <p>The previous step.</p>
     */
    inline GetTemplateStepResult& WithPrevious(const Aws::Vector<Aws::String>& value) { SetPrevious(value); return *this;}

    /**
     * <p>The previous step.</p>
     */
    inline GetTemplateStepResult& WithPrevious(Aws::Vector<Aws::String>&& value) { SetPrevious(std::move(value)); return *this;}

    /**
     * <p>The previous step.</p>
     */
    inline GetTemplateStepResult& AddPrevious(const Aws::String& value) { m_previous.push_back(value); return *this; }

    /**
     * <p>The previous step.</p>
     */
    inline GetTemplateStepResult& AddPrevious(Aws::String&& value) { m_previous.push_back(std::move(value)); return *this; }

    /**
     * <p>The previous step.</p>
     */
    inline GetTemplateStepResult& AddPrevious(const char* value) { m_previous.push_back(value); return *this; }


    /**
     * <p>The next step.</p>
     */
    inline const Aws::Vector<Aws::String>& GetNext() const{ return m_next; }

    /**
     * <p>The next step.</p>
     */
    inline void SetNext(const Aws::Vector<Aws::String>& value) { m_next = value; }

    /**
     * <p>The next step.</p>
     */
    inline void SetNext(Aws::Vector<Aws::String>&& value) { m_next = std::move(value); }

    /**
     * <p>The next step.</p>
     */
    inline GetTemplateStepResult& WithNext(const Aws::Vector<Aws::String>& value) { SetNext(value); return *this;}

    /**
     * <p>The next step.</p>
     */
    inline GetTemplateStepResult& WithNext(Aws::Vector<Aws::String>&& value) { SetNext(std::move(value)); return *this;}

    /**
     * <p>The next step.</p>
     */
    inline GetTemplateStepResult& AddNext(const Aws::String& value) { m_next.push_back(value); return *this; }

    /**
     * <p>The next step.</p>
     */
    inline GetTemplateStepResult& AddNext(Aws::String&& value) { m_next.push_back(std::move(value)); return *this; }

    /**
     * <p>The next step.</p>
     */
    inline GetTemplateStepResult& AddNext(const char* value) { m_next.push_back(value); return *this; }


    /**
     * <p>The outputs of the step.</p>
     */
    inline const Aws::Vector<StepOutput>& GetOutputs() const{ return m_outputs; }

    /**
     * <p>The outputs of the step.</p>
     */
    inline void SetOutputs(const Aws::Vector<StepOutput>& value) { m_outputs = value; }

    /**
     * <p>The outputs of the step.</p>
     */
    inline void SetOutputs(Aws::Vector<StepOutput>&& value) { m_outputs = std::move(value); }

    /**
     * <p>The outputs of the step.</p>
     */
    inline GetTemplateStepResult& WithOutputs(const Aws::Vector<StepOutput>& value) { SetOutputs(value); return *this;}

    /**
     * <p>The outputs of the step.</p>
     */
    inline GetTemplateStepResult& WithOutputs(Aws::Vector<StepOutput>&& value) { SetOutputs(std::move(value)); return *this;}

    /**
     * <p>The outputs of the step.</p>
     */
    inline GetTemplateStepResult& AddOutputs(const StepOutput& value) { m_outputs.push_back(value); return *this; }

    /**
     * <p>The outputs of the step.</p>
     */
    inline GetTemplateStepResult& AddOutputs(StepOutput&& value) { m_outputs.push_back(std::move(value)); return *this; }


    /**
     * <p>The custom script to run tests on source or target environments.</p>
     */
    inline const StepAutomationConfiguration& GetStepAutomationConfiguration() const{ return m_stepAutomationConfiguration; }

    /**
     * <p>The custom script to run tests on source or target environments.</p>
     */
    inline void SetStepAutomationConfiguration(const StepAutomationConfiguration& value) { m_stepAutomationConfiguration = value; }

    /**
     * <p>The custom script to run tests on source or target environments.</p>
     */
    inline void SetStepAutomationConfiguration(StepAutomationConfiguration&& value) { m_stepAutomationConfiguration = std::move(value); }

    /**
     * <p>The custom script to run tests on source or target environments.</p>
     */
    inline GetTemplateStepResult& WithStepAutomationConfiguration(const StepAutomationConfiguration& value) { SetStepAutomationConfiguration(value); return *this;}

    /**
     * <p>The custom script to run tests on source or target environments.</p>
     */
    inline GetTemplateStepResult& WithStepAutomationConfiguration(StepAutomationConfiguration&& value) { SetStepAutomationConfiguration(std::move(value)); return *this;}

  private:

    Aws::String m_id;

    Aws::String m_stepGroupId;

    Aws::String m_templateId;

    Aws::String m_name;

    Aws::String m_description;

    StepActionType m_stepActionType;

    Aws::String m_creationTime;

    Aws::Vector<Aws::String> m_previous;

    Aws::Vector<Aws::String> m_next;

    Aws::Vector<StepOutput> m_outputs;

    StepAutomationConfiguration m_stepAutomationConfiguration;
  };

} // namespace Model
} // namespace MigrationHubOrchestrator
} // namespace Aws
