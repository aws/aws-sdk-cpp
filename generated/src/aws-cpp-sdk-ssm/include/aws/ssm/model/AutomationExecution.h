/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/ssm/model/AutomationExecutionStatus.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/ssm/model/ExecutionMode.h>
#include <aws/ssm/model/ResolvedTargets.h>
#include <aws/ssm/model/ProgressCounters.h>
#include <aws/ssm/model/AlarmConfiguration.h>
#include <aws/ssm/model/AutomationSubtype.h>
#include <aws/ssm/model/StepExecution.h>
#include <aws/ssm/model/Target.h>
#include <aws/ssm/model/TargetLocation.h>
#include <aws/ssm/model/AlarmStateInformation.h>
#include <aws/ssm/model/Runbook.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace SSM
{
namespace Model
{

  /**
   * <p>Detailed information about the current state of an individual Automation
   * execution.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/AutomationExecution">AWS
   * API Reference</a></p>
   */
  class AutomationExecution
  {
  public:
    AWS_SSM_API AutomationExecution();
    AWS_SSM_API AutomationExecution(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API AutomationExecution& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The execution ID.</p>
     */
    inline const Aws::String& GetAutomationExecutionId() const{ return m_automationExecutionId; }
    inline bool AutomationExecutionIdHasBeenSet() const { return m_automationExecutionIdHasBeenSet; }
    inline void SetAutomationExecutionId(const Aws::String& value) { m_automationExecutionIdHasBeenSet = true; m_automationExecutionId = value; }
    inline void SetAutomationExecutionId(Aws::String&& value) { m_automationExecutionIdHasBeenSet = true; m_automationExecutionId = std::move(value); }
    inline void SetAutomationExecutionId(const char* value) { m_automationExecutionIdHasBeenSet = true; m_automationExecutionId.assign(value); }
    inline AutomationExecution& WithAutomationExecutionId(const Aws::String& value) { SetAutomationExecutionId(value); return *this;}
    inline AutomationExecution& WithAutomationExecutionId(Aws::String&& value) { SetAutomationExecutionId(std::move(value)); return *this;}
    inline AutomationExecution& WithAutomationExecutionId(const char* value) { SetAutomationExecutionId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the Automation runbook used during the execution.</p>
     */
    inline const Aws::String& GetDocumentName() const{ return m_documentName; }
    inline bool DocumentNameHasBeenSet() const { return m_documentNameHasBeenSet; }
    inline void SetDocumentName(const Aws::String& value) { m_documentNameHasBeenSet = true; m_documentName = value; }
    inline void SetDocumentName(Aws::String&& value) { m_documentNameHasBeenSet = true; m_documentName = std::move(value); }
    inline void SetDocumentName(const char* value) { m_documentNameHasBeenSet = true; m_documentName.assign(value); }
    inline AutomationExecution& WithDocumentName(const Aws::String& value) { SetDocumentName(value); return *this;}
    inline AutomationExecution& WithDocumentName(Aws::String&& value) { SetDocumentName(std::move(value)); return *this;}
    inline AutomationExecution& WithDocumentName(const char* value) { SetDocumentName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the document to use during execution.</p>
     */
    inline const Aws::String& GetDocumentVersion() const{ return m_documentVersion; }
    inline bool DocumentVersionHasBeenSet() const { return m_documentVersionHasBeenSet; }
    inline void SetDocumentVersion(const Aws::String& value) { m_documentVersionHasBeenSet = true; m_documentVersion = value; }
    inline void SetDocumentVersion(Aws::String&& value) { m_documentVersionHasBeenSet = true; m_documentVersion = std::move(value); }
    inline void SetDocumentVersion(const char* value) { m_documentVersionHasBeenSet = true; m_documentVersion.assign(value); }
    inline AutomationExecution& WithDocumentVersion(const Aws::String& value) { SetDocumentVersion(value); return *this;}
    inline AutomationExecution& WithDocumentVersion(Aws::String&& value) { SetDocumentVersion(std::move(value)); return *this;}
    inline AutomationExecution& WithDocumentVersion(const char* value) { SetDocumentVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time the execution started.</p>
     */
    inline const Aws::Utils::DateTime& GetExecutionStartTime() const{ return m_executionStartTime; }
    inline bool ExecutionStartTimeHasBeenSet() const { return m_executionStartTimeHasBeenSet; }
    inline void SetExecutionStartTime(const Aws::Utils::DateTime& value) { m_executionStartTimeHasBeenSet = true; m_executionStartTime = value; }
    inline void SetExecutionStartTime(Aws::Utils::DateTime&& value) { m_executionStartTimeHasBeenSet = true; m_executionStartTime = std::move(value); }
    inline AutomationExecution& WithExecutionStartTime(const Aws::Utils::DateTime& value) { SetExecutionStartTime(value); return *this;}
    inline AutomationExecution& WithExecutionStartTime(Aws::Utils::DateTime&& value) { SetExecutionStartTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time the execution finished.</p>
     */
    inline const Aws::Utils::DateTime& GetExecutionEndTime() const{ return m_executionEndTime; }
    inline bool ExecutionEndTimeHasBeenSet() const { return m_executionEndTimeHasBeenSet; }
    inline void SetExecutionEndTime(const Aws::Utils::DateTime& value) { m_executionEndTimeHasBeenSet = true; m_executionEndTime = value; }
    inline void SetExecutionEndTime(Aws::Utils::DateTime&& value) { m_executionEndTimeHasBeenSet = true; m_executionEndTime = std::move(value); }
    inline AutomationExecution& WithExecutionEndTime(const Aws::Utils::DateTime& value) { SetExecutionEndTime(value); return *this;}
    inline AutomationExecution& WithExecutionEndTime(Aws::Utils::DateTime&& value) { SetExecutionEndTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The execution status of the Automation.</p>
     */
    inline const AutomationExecutionStatus& GetAutomationExecutionStatus() const{ return m_automationExecutionStatus; }
    inline bool AutomationExecutionStatusHasBeenSet() const { return m_automationExecutionStatusHasBeenSet; }
    inline void SetAutomationExecutionStatus(const AutomationExecutionStatus& value) { m_automationExecutionStatusHasBeenSet = true; m_automationExecutionStatus = value; }
    inline void SetAutomationExecutionStatus(AutomationExecutionStatus&& value) { m_automationExecutionStatusHasBeenSet = true; m_automationExecutionStatus = std::move(value); }
    inline AutomationExecution& WithAutomationExecutionStatus(const AutomationExecutionStatus& value) { SetAutomationExecutionStatus(value); return *this;}
    inline AutomationExecution& WithAutomationExecutionStatus(AutomationExecutionStatus&& value) { SetAutomationExecutionStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of details about the current state of all steps that comprise an
     * execution. An Automation runbook contains a list of steps that are run in
     * order.</p>
     */
    inline const Aws::Vector<StepExecution>& GetStepExecutions() const{ return m_stepExecutions; }
    inline bool StepExecutionsHasBeenSet() const { return m_stepExecutionsHasBeenSet; }
    inline void SetStepExecutions(const Aws::Vector<StepExecution>& value) { m_stepExecutionsHasBeenSet = true; m_stepExecutions = value; }
    inline void SetStepExecutions(Aws::Vector<StepExecution>&& value) { m_stepExecutionsHasBeenSet = true; m_stepExecutions = std::move(value); }
    inline AutomationExecution& WithStepExecutions(const Aws::Vector<StepExecution>& value) { SetStepExecutions(value); return *this;}
    inline AutomationExecution& WithStepExecutions(Aws::Vector<StepExecution>&& value) { SetStepExecutions(std::move(value)); return *this;}
    inline AutomationExecution& AddStepExecutions(const StepExecution& value) { m_stepExecutionsHasBeenSet = true; m_stepExecutions.push_back(value); return *this; }
    inline AutomationExecution& AddStepExecutions(StepExecution&& value) { m_stepExecutionsHasBeenSet = true; m_stepExecutions.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A boolean value that indicates if the response contains the full list of the
     * Automation step executions. If true, use the DescribeAutomationStepExecutions
     * API operation to get the full list of step executions.</p>
     */
    inline bool GetStepExecutionsTruncated() const{ return m_stepExecutionsTruncated; }
    inline bool StepExecutionsTruncatedHasBeenSet() const { return m_stepExecutionsTruncatedHasBeenSet; }
    inline void SetStepExecutionsTruncated(bool value) { m_stepExecutionsTruncatedHasBeenSet = true; m_stepExecutionsTruncated = value; }
    inline AutomationExecution& WithStepExecutionsTruncated(bool value) { SetStepExecutionsTruncated(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The key-value map of execution parameters, which were supplied when calling
     * <a>StartAutomationExecution</a>.</p>
     */
    inline const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& GetParameters() const{ return m_parameters; }
    inline bool ParametersHasBeenSet() const { return m_parametersHasBeenSet; }
    inline void SetParameters(const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& value) { m_parametersHasBeenSet = true; m_parameters = value; }
    inline void SetParameters(Aws::Map<Aws::String, Aws::Vector<Aws::String>>&& value) { m_parametersHasBeenSet = true; m_parameters = std::move(value); }
    inline AutomationExecution& WithParameters(const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& value) { SetParameters(value); return *this;}
    inline AutomationExecution& WithParameters(Aws::Map<Aws::String, Aws::Vector<Aws::String>>&& value) { SetParameters(std::move(value)); return *this;}
    inline AutomationExecution& AddParameters(const Aws::String& key, const Aws::Vector<Aws::String>& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, value); return *this; }
    inline AutomationExecution& AddParameters(Aws::String&& key, const Aws::Vector<Aws::String>& value) { m_parametersHasBeenSet = true; m_parameters.emplace(std::move(key), value); return *this; }
    inline AutomationExecution& AddParameters(const Aws::String& key, Aws::Vector<Aws::String>&& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, std::move(value)); return *this; }
    inline AutomationExecution& AddParameters(Aws::String&& key, Aws::Vector<Aws::String>&& value) { m_parametersHasBeenSet = true; m_parameters.emplace(std::move(key), std::move(value)); return *this; }
    inline AutomationExecution& AddParameters(const char* key, Aws::Vector<Aws::String>&& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, std::move(value)); return *this; }
    inline AutomationExecution& AddParameters(const char* key, const Aws::Vector<Aws::String>& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The list of execution outputs as defined in the Automation runbook.</p>
     */
    inline const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& GetOutputs() const{ return m_outputs; }
    inline bool OutputsHasBeenSet() const { return m_outputsHasBeenSet; }
    inline void SetOutputs(const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& value) { m_outputsHasBeenSet = true; m_outputs = value; }
    inline void SetOutputs(Aws::Map<Aws::String, Aws::Vector<Aws::String>>&& value) { m_outputsHasBeenSet = true; m_outputs = std::move(value); }
    inline AutomationExecution& WithOutputs(const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& value) { SetOutputs(value); return *this;}
    inline AutomationExecution& WithOutputs(Aws::Map<Aws::String, Aws::Vector<Aws::String>>&& value) { SetOutputs(std::move(value)); return *this;}
    inline AutomationExecution& AddOutputs(const Aws::String& key, const Aws::Vector<Aws::String>& value) { m_outputsHasBeenSet = true; m_outputs.emplace(key, value); return *this; }
    inline AutomationExecution& AddOutputs(Aws::String&& key, const Aws::Vector<Aws::String>& value) { m_outputsHasBeenSet = true; m_outputs.emplace(std::move(key), value); return *this; }
    inline AutomationExecution& AddOutputs(const Aws::String& key, Aws::Vector<Aws::String>&& value) { m_outputsHasBeenSet = true; m_outputs.emplace(key, std::move(value)); return *this; }
    inline AutomationExecution& AddOutputs(Aws::String&& key, Aws::Vector<Aws::String>&& value) { m_outputsHasBeenSet = true; m_outputs.emplace(std::move(key), std::move(value)); return *this; }
    inline AutomationExecution& AddOutputs(const char* key, Aws::Vector<Aws::String>&& value) { m_outputsHasBeenSet = true; m_outputs.emplace(key, std::move(value)); return *this; }
    inline AutomationExecution& AddOutputs(const char* key, const Aws::Vector<Aws::String>& value) { m_outputsHasBeenSet = true; m_outputs.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>A message describing why an execution has failed, if the status is set to
     * Failed.</p>
     */
    inline const Aws::String& GetFailureMessage() const{ return m_failureMessage; }
    inline bool FailureMessageHasBeenSet() const { return m_failureMessageHasBeenSet; }
    inline void SetFailureMessage(const Aws::String& value) { m_failureMessageHasBeenSet = true; m_failureMessage = value; }
    inline void SetFailureMessage(Aws::String&& value) { m_failureMessageHasBeenSet = true; m_failureMessage = std::move(value); }
    inline void SetFailureMessage(const char* value) { m_failureMessageHasBeenSet = true; m_failureMessage.assign(value); }
    inline AutomationExecution& WithFailureMessage(const Aws::String& value) { SetFailureMessage(value); return *this;}
    inline AutomationExecution& WithFailureMessage(Aws::String&& value) { SetFailureMessage(std::move(value)); return *this;}
    inline AutomationExecution& WithFailureMessage(const char* value) { SetFailureMessage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The automation execution mode.</p>
     */
    inline const ExecutionMode& GetMode() const{ return m_mode; }
    inline bool ModeHasBeenSet() const { return m_modeHasBeenSet; }
    inline void SetMode(const ExecutionMode& value) { m_modeHasBeenSet = true; m_mode = value; }
    inline void SetMode(ExecutionMode&& value) { m_modeHasBeenSet = true; m_mode = std::move(value); }
    inline AutomationExecution& WithMode(const ExecutionMode& value) { SetMode(value); return *this;}
    inline AutomationExecution& WithMode(ExecutionMode&& value) { SetMode(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The AutomationExecutionId of the parent automation.</p>
     */
    inline const Aws::String& GetParentAutomationExecutionId() const{ return m_parentAutomationExecutionId; }
    inline bool ParentAutomationExecutionIdHasBeenSet() const { return m_parentAutomationExecutionIdHasBeenSet; }
    inline void SetParentAutomationExecutionId(const Aws::String& value) { m_parentAutomationExecutionIdHasBeenSet = true; m_parentAutomationExecutionId = value; }
    inline void SetParentAutomationExecutionId(Aws::String&& value) { m_parentAutomationExecutionIdHasBeenSet = true; m_parentAutomationExecutionId = std::move(value); }
    inline void SetParentAutomationExecutionId(const char* value) { m_parentAutomationExecutionIdHasBeenSet = true; m_parentAutomationExecutionId.assign(value); }
    inline AutomationExecution& WithParentAutomationExecutionId(const Aws::String& value) { SetParentAutomationExecutionId(value); return *this;}
    inline AutomationExecution& WithParentAutomationExecutionId(Aws::String&& value) { SetParentAutomationExecutionId(std::move(value)); return *this;}
    inline AutomationExecution& WithParentAutomationExecutionId(const char* value) { SetParentAutomationExecutionId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the user who ran the automation.</p>
     */
    inline const Aws::String& GetExecutedBy() const{ return m_executedBy; }
    inline bool ExecutedByHasBeenSet() const { return m_executedByHasBeenSet; }
    inline void SetExecutedBy(const Aws::String& value) { m_executedByHasBeenSet = true; m_executedBy = value; }
    inline void SetExecutedBy(Aws::String&& value) { m_executedByHasBeenSet = true; m_executedBy = std::move(value); }
    inline void SetExecutedBy(const char* value) { m_executedByHasBeenSet = true; m_executedBy.assign(value); }
    inline AutomationExecution& WithExecutedBy(const Aws::String& value) { SetExecutedBy(value); return *this;}
    inline AutomationExecution& WithExecutedBy(Aws::String&& value) { SetExecutedBy(std::move(value)); return *this;}
    inline AutomationExecution& WithExecutedBy(const char* value) { SetExecutedBy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the step that is currently running.</p>
     */
    inline const Aws::String& GetCurrentStepName() const{ return m_currentStepName; }
    inline bool CurrentStepNameHasBeenSet() const { return m_currentStepNameHasBeenSet; }
    inline void SetCurrentStepName(const Aws::String& value) { m_currentStepNameHasBeenSet = true; m_currentStepName = value; }
    inline void SetCurrentStepName(Aws::String&& value) { m_currentStepNameHasBeenSet = true; m_currentStepName = std::move(value); }
    inline void SetCurrentStepName(const char* value) { m_currentStepNameHasBeenSet = true; m_currentStepName.assign(value); }
    inline AutomationExecution& WithCurrentStepName(const Aws::String& value) { SetCurrentStepName(value); return *this;}
    inline AutomationExecution& WithCurrentStepName(Aws::String&& value) { SetCurrentStepName(std::move(value)); return *this;}
    inline AutomationExecution& WithCurrentStepName(const char* value) { SetCurrentStepName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The action of the step that is currently running.</p>
     */
    inline const Aws::String& GetCurrentAction() const{ return m_currentAction; }
    inline bool CurrentActionHasBeenSet() const { return m_currentActionHasBeenSet; }
    inline void SetCurrentAction(const Aws::String& value) { m_currentActionHasBeenSet = true; m_currentAction = value; }
    inline void SetCurrentAction(Aws::String&& value) { m_currentActionHasBeenSet = true; m_currentAction = std::move(value); }
    inline void SetCurrentAction(const char* value) { m_currentActionHasBeenSet = true; m_currentAction.assign(value); }
    inline AutomationExecution& WithCurrentAction(const Aws::String& value) { SetCurrentAction(value); return *this;}
    inline AutomationExecution& WithCurrentAction(Aws::String&& value) { SetCurrentAction(std::move(value)); return *this;}
    inline AutomationExecution& WithCurrentAction(const char* value) { SetCurrentAction(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The parameter name.</p>
     */
    inline const Aws::String& GetTargetParameterName() const{ return m_targetParameterName; }
    inline bool TargetParameterNameHasBeenSet() const { return m_targetParameterNameHasBeenSet; }
    inline void SetTargetParameterName(const Aws::String& value) { m_targetParameterNameHasBeenSet = true; m_targetParameterName = value; }
    inline void SetTargetParameterName(Aws::String&& value) { m_targetParameterNameHasBeenSet = true; m_targetParameterName = std::move(value); }
    inline void SetTargetParameterName(const char* value) { m_targetParameterNameHasBeenSet = true; m_targetParameterName.assign(value); }
    inline AutomationExecution& WithTargetParameterName(const Aws::String& value) { SetTargetParameterName(value); return *this;}
    inline AutomationExecution& WithTargetParameterName(Aws::String&& value) { SetTargetParameterName(std::move(value)); return *this;}
    inline AutomationExecution& WithTargetParameterName(const char* value) { SetTargetParameterName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The specified targets.</p>
     */
    inline const Aws::Vector<Target>& GetTargets() const{ return m_targets; }
    inline bool TargetsHasBeenSet() const { return m_targetsHasBeenSet; }
    inline void SetTargets(const Aws::Vector<Target>& value) { m_targetsHasBeenSet = true; m_targets = value; }
    inline void SetTargets(Aws::Vector<Target>&& value) { m_targetsHasBeenSet = true; m_targets = std::move(value); }
    inline AutomationExecution& WithTargets(const Aws::Vector<Target>& value) { SetTargets(value); return *this;}
    inline AutomationExecution& WithTargets(Aws::Vector<Target>&& value) { SetTargets(std::move(value)); return *this;}
    inline AutomationExecution& AddTargets(const Target& value) { m_targetsHasBeenSet = true; m_targets.push_back(value); return *this; }
    inline AutomationExecution& AddTargets(Target&& value) { m_targetsHasBeenSet = true; m_targets.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The specified key-value mapping of document parameters to target
     * resources.</p>
     */
    inline const Aws::Vector<Aws::Map<Aws::String, Aws::Vector<Aws::String>>>& GetTargetMaps() const{ return m_targetMaps; }
    inline bool TargetMapsHasBeenSet() const { return m_targetMapsHasBeenSet; }
    inline void SetTargetMaps(const Aws::Vector<Aws::Map<Aws::String, Aws::Vector<Aws::String>>>& value) { m_targetMapsHasBeenSet = true; m_targetMaps = value; }
    inline void SetTargetMaps(Aws::Vector<Aws::Map<Aws::String, Aws::Vector<Aws::String>>>&& value) { m_targetMapsHasBeenSet = true; m_targetMaps = std::move(value); }
    inline AutomationExecution& WithTargetMaps(const Aws::Vector<Aws::Map<Aws::String, Aws::Vector<Aws::String>>>& value) { SetTargetMaps(value); return *this;}
    inline AutomationExecution& WithTargetMaps(Aws::Vector<Aws::Map<Aws::String, Aws::Vector<Aws::String>>>&& value) { SetTargetMaps(std::move(value)); return *this;}
    inline AutomationExecution& AddTargetMaps(const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& value) { m_targetMapsHasBeenSet = true; m_targetMaps.push_back(value); return *this; }
    inline AutomationExecution& AddTargetMaps(Aws::Map<Aws::String, Aws::Vector<Aws::String>>&& value) { m_targetMapsHasBeenSet = true; m_targetMaps.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of resolved targets in the rate control execution.</p>
     */
    inline const ResolvedTargets& GetResolvedTargets() const{ return m_resolvedTargets; }
    inline bool ResolvedTargetsHasBeenSet() const { return m_resolvedTargetsHasBeenSet; }
    inline void SetResolvedTargets(const ResolvedTargets& value) { m_resolvedTargetsHasBeenSet = true; m_resolvedTargets = value; }
    inline void SetResolvedTargets(ResolvedTargets&& value) { m_resolvedTargetsHasBeenSet = true; m_resolvedTargets = std::move(value); }
    inline AutomationExecution& WithResolvedTargets(const ResolvedTargets& value) { SetResolvedTargets(value); return *this;}
    inline AutomationExecution& WithResolvedTargets(ResolvedTargets&& value) { SetResolvedTargets(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <code>MaxConcurrency</code> value specified by the user when the
     * execution started.</p>
     */
    inline const Aws::String& GetMaxConcurrency() const{ return m_maxConcurrency; }
    inline bool MaxConcurrencyHasBeenSet() const { return m_maxConcurrencyHasBeenSet; }
    inline void SetMaxConcurrency(const Aws::String& value) { m_maxConcurrencyHasBeenSet = true; m_maxConcurrency = value; }
    inline void SetMaxConcurrency(Aws::String&& value) { m_maxConcurrencyHasBeenSet = true; m_maxConcurrency = std::move(value); }
    inline void SetMaxConcurrency(const char* value) { m_maxConcurrencyHasBeenSet = true; m_maxConcurrency.assign(value); }
    inline AutomationExecution& WithMaxConcurrency(const Aws::String& value) { SetMaxConcurrency(value); return *this;}
    inline AutomationExecution& WithMaxConcurrency(Aws::String&& value) { SetMaxConcurrency(std::move(value)); return *this;}
    inline AutomationExecution& WithMaxConcurrency(const char* value) { SetMaxConcurrency(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The MaxErrors value specified by the user when the execution started.</p>
     */
    inline const Aws::String& GetMaxErrors() const{ return m_maxErrors; }
    inline bool MaxErrorsHasBeenSet() const { return m_maxErrorsHasBeenSet; }
    inline void SetMaxErrors(const Aws::String& value) { m_maxErrorsHasBeenSet = true; m_maxErrors = value; }
    inline void SetMaxErrors(Aws::String&& value) { m_maxErrorsHasBeenSet = true; m_maxErrors = std::move(value); }
    inline void SetMaxErrors(const char* value) { m_maxErrorsHasBeenSet = true; m_maxErrors.assign(value); }
    inline AutomationExecution& WithMaxErrors(const Aws::String& value) { SetMaxErrors(value); return *this;}
    inline AutomationExecution& WithMaxErrors(Aws::String&& value) { SetMaxErrors(std::move(value)); return *this;}
    inline AutomationExecution& WithMaxErrors(const char* value) { SetMaxErrors(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The target of the execution.</p>
     */
    inline const Aws::String& GetTarget() const{ return m_target; }
    inline bool TargetHasBeenSet() const { return m_targetHasBeenSet; }
    inline void SetTarget(const Aws::String& value) { m_targetHasBeenSet = true; m_target = value; }
    inline void SetTarget(Aws::String&& value) { m_targetHasBeenSet = true; m_target = std::move(value); }
    inline void SetTarget(const char* value) { m_targetHasBeenSet = true; m_target.assign(value); }
    inline AutomationExecution& WithTarget(const Aws::String& value) { SetTarget(value); return *this;}
    inline AutomationExecution& WithTarget(Aws::String&& value) { SetTarget(std::move(value)); return *this;}
    inline AutomationExecution& WithTarget(const char* value) { SetTarget(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The combination of Amazon Web Services Regions and/or Amazon Web Services
     * accounts where you want to run the Automation.</p>
     */
    inline const Aws::Vector<TargetLocation>& GetTargetLocations() const{ return m_targetLocations; }
    inline bool TargetLocationsHasBeenSet() const { return m_targetLocationsHasBeenSet; }
    inline void SetTargetLocations(const Aws::Vector<TargetLocation>& value) { m_targetLocationsHasBeenSet = true; m_targetLocations = value; }
    inline void SetTargetLocations(Aws::Vector<TargetLocation>&& value) { m_targetLocationsHasBeenSet = true; m_targetLocations = std::move(value); }
    inline AutomationExecution& WithTargetLocations(const Aws::Vector<TargetLocation>& value) { SetTargetLocations(value); return *this;}
    inline AutomationExecution& WithTargetLocations(Aws::Vector<TargetLocation>&& value) { SetTargetLocations(std::move(value)); return *this;}
    inline AutomationExecution& AddTargetLocations(const TargetLocation& value) { m_targetLocationsHasBeenSet = true; m_targetLocations.push_back(value); return *this; }
    inline AutomationExecution& AddTargetLocations(TargetLocation&& value) { m_targetLocationsHasBeenSet = true; m_targetLocations.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An aggregate of step execution statuses displayed in the Amazon Web Services
     * Systems Manager console for a multi-Region and multi-account Automation
     * execution.</p>
     */
    inline const ProgressCounters& GetProgressCounters() const{ return m_progressCounters; }
    inline bool ProgressCountersHasBeenSet() const { return m_progressCountersHasBeenSet; }
    inline void SetProgressCounters(const ProgressCounters& value) { m_progressCountersHasBeenSet = true; m_progressCounters = value; }
    inline void SetProgressCounters(ProgressCounters&& value) { m_progressCountersHasBeenSet = true; m_progressCounters = std::move(value); }
    inline AutomationExecution& WithProgressCounters(const ProgressCounters& value) { SetProgressCounters(value); return *this;}
    inline AutomationExecution& WithProgressCounters(ProgressCounters&& value) { SetProgressCounters(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The details for the CloudWatch alarm applied to your automation.</p>
     */
    inline const AlarmConfiguration& GetAlarmConfiguration() const{ return m_alarmConfiguration; }
    inline bool AlarmConfigurationHasBeenSet() const { return m_alarmConfigurationHasBeenSet; }
    inline void SetAlarmConfiguration(const AlarmConfiguration& value) { m_alarmConfigurationHasBeenSet = true; m_alarmConfiguration = value; }
    inline void SetAlarmConfiguration(AlarmConfiguration&& value) { m_alarmConfigurationHasBeenSet = true; m_alarmConfiguration = std::move(value); }
    inline AutomationExecution& WithAlarmConfiguration(const AlarmConfiguration& value) { SetAlarmConfiguration(value); return *this;}
    inline AutomationExecution& WithAlarmConfiguration(AlarmConfiguration&& value) { SetAlarmConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The CloudWatch alarm that was invoked by the automation.</p>
     */
    inline const Aws::Vector<AlarmStateInformation>& GetTriggeredAlarms() const{ return m_triggeredAlarms; }
    inline bool TriggeredAlarmsHasBeenSet() const { return m_triggeredAlarmsHasBeenSet; }
    inline void SetTriggeredAlarms(const Aws::Vector<AlarmStateInformation>& value) { m_triggeredAlarmsHasBeenSet = true; m_triggeredAlarms = value; }
    inline void SetTriggeredAlarms(Aws::Vector<AlarmStateInformation>&& value) { m_triggeredAlarmsHasBeenSet = true; m_triggeredAlarms = std::move(value); }
    inline AutomationExecution& WithTriggeredAlarms(const Aws::Vector<AlarmStateInformation>& value) { SetTriggeredAlarms(value); return *this;}
    inline AutomationExecution& WithTriggeredAlarms(Aws::Vector<AlarmStateInformation>&& value) { SetTriggeredAlarms(std::move(value)); return *this;}
    inline AutomationExecution& AddTriggeredAlarms(const AlarmStateInformation& value) { m_triggeredAlarmsHasBeenSet = true; m_triggeredAlarms.push_back(value); return *this; }
    inline AutomationExecution& AddTriggeredAlarms(AlarmStateInformation&& value) { m_triggeredAlarmsHasBeenSet = true; m_triggeredAlarms.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A publicly accessible URL for a file that contains the
     * <code>TargetLocations</code> body. Currently, only files in presigned Amazon S3
     * buckets are supported</p>
     */
    inline const Aws::String& GetTargetLocationsURL() const{ return m_targetLocationsURL; }
    inline bool TargetLocationsURLHasBeenSet() const { return m_targetLocationsURLHasBeenSet; }
    inline void SetTargetLocationsURL(const Aws::String& value) { m_targetLocationsURLHasBeenSet = true; m_targetLocationsURL = value; }
    inline void SetTargetLocationsURL(Aws::String&& value) { m_targetLocationsURLHasBeenSet = true; m_targetLocationsURL = std::move(value); }
    inline void SetTargetLocationsURL(const char* value) { m_targetLocationsURLHasBeenSet = true; m_targetLocationsURL.assign(value); }
    inline AutomationExecution& WithTargetLocationsURL(const Aws::String& value) { SetTargetLocationsURL(value); return *this;}
    inline AutomationExecution& WithTargetLocationsURL(Aws::String&& value) { SetTargetLocationsURL(std::move(value)); return *this;}
    inline AutomationExecution& WithTargetLocationsURL(const char* value) { SetTargetLocationsURL(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The subtype of the Automation operation. Currently, the only supported value
     * is <code>ChangeRequest</code>.</p>
     */
    inline const AutomationSubtype& GetAutomationSubtype() const{ return m_automationSubtype; }
    inline bool AutomationSubtypeHasBeenSet() const { return m_automationSubtypeHasBeenSet; }
    inline void SetAutomationSubtype(const AutomationSubtype& value) { m_automationSubtypeHasBeenSet = true; m_automationSubtype = value; }
    inline void SetAutomationSubtype(AutomationSubtype&& value) { m_automationSubtypeHasBeenSet = true; m_automationSubtype = std::move(value); }
    inline AutomationExecution& WithAutomationSubtype(const AutomationSubtype& value) { SetAutomationSubtype(value); return *this;}
    inline AutomationExecution& WithAutomationSubtype(AutomationSubtype&& value) { SetAutomationSubtype(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time the Automation operation is scheduled to start.</p>
     */
    inline const Aws::Utils::DateTime& GetScheduledTime() const{ return m_scheduledTime; }
    inline bool ScheduledTimeHasBeenSet() const { return m_scheduledTimeHasBeenSet; }
    inline void SetScheduledTime(const Aws::Utils::DateTime& value) { m_scheduledTimeHasBeenSet = true; m_scheduledTime = value; }
    inline void SetScheduledTime(Aws::Utils::DateTime&& value) { m_scheduledTimeHasBeenSet = true; m_scheduledTime = std::move(value); }
    inline AutomationExecution& WithScheduledTime(const Aws::Utils::DateTime& value) { SetScheduledTime(value); return *this;}
    inline AutomationExecution& WithScheduledTime(Aws::Utils::DateTime&& value) { SetScheduledTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the Automation runbooks that are run as part of a runbook
     * workflow.</p>  <p>The Automation runbooks specified for the runbook
     * workflow can't run until all required approvals for the change request have been
     * received.</p> 
     */
    inline const Aws::Vector<Runbook>& GetRunbooks() const{ return m_runbooks; }
    inline bool RunbooksHasBeenSet() const { return m_runbooksHasBeenSet; }
    inline void SetRunbooks(const Aws::Vector<Runbook>& value) { m_runbooksHasBeenSet = true; m_runbooks = value; }
    inline void SetRunbooks(Aws::Vector<Runbook>&& value) { m_runbooksHasBeenSet = true; m_runbooks = std::move(value); }
    inline AutomationExecution& WithRunbooks(const Aws::Vector<Runbook>& value) { SetRunbooks(value); return *this;}
    inline AutomationExecution& WithRunbooks(Aws::Vector<Runbook>&& value) { SetRunbooks(std::move(value)); return *this;}
    inline AutomationExecution& AddRunbooks(const Runbook& value) { m_runbooksHasBeenSet = true; m_runbooks.push_back(value); return *this; }
    inline AutomationExecution& AddRunbooks(Runbook&& value) { m_runbooksHasBeenSet = true; m_runbooks.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The ID of an OpsItem that is created to represent a Change Manager change
     * request.</p>
     */
    inline const Aws::String& GetOpsItemId() const{ return m_opsItemId; }
    inline bool OpsItemIdHasBeenSet() const { return m_opsItemIdHasBeenSet; }
    inline void SetOpsItemId(const Aws::String& value) { m_opsItemIdHasBeenSet = true; m_opsItemId = value; }
    inline void SetOpsItemId(Aws::String&& value) { m_opsItemIdHasBeenSet = true; m_opsItemId = std::move(value); }
    inline void SetOpsItemId(const char* value) { m_opsItemIdHasBeenSet = true; m_opsItemId.assign(value); }
    inline AutomationExecution& WithOpsItemId(const Aws::String& value) { SetOpsItemId(value); return *this;}
    inline AutomationExecution& WithOpsItemId(Aws::String&& value) { SetOpsItemId(std::move(value)); return *this;}
    inline AutomationExecution& WithOpsItemId(const char* value) { SetOpsItemId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of a State Manager association used in the Automation operation.</p>
     */
    inline const Aws::String& GetAssociationId() const{ return m_associationId; }
    inline bool AssociationIdHasBeenSet() const { return m_associationIdHasBeenSet; }
    inline void SetAssociationId(const Aws::String& value) { m_associationIdHasBeenSet = true; m_associationId = value; }
    inline void SetAssociationId(Aws::String&& value) { m_associationIdHasBeenSet = true; m_associationId = std::move(value); }
    inline void SetAssociationId(const char* value) { m_associationIdHasBeenSet = true; m_associationId.assign(value); }
    inline AutomationExecution& WithAssociationId(const Aws::String& value) { SetAssociationId(value); return *this;}
    inline AutomationExecution& WithAssociationId(Aws::String&& value) { SetAssociationId(std::move(value)); return *this;}
    inline AutomationExecution& WithAssociationId(const char* value) { SetAssociationId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the Change Manager change request.</p>
     */
    inline const Aws::String& GetChangeRequestName() const{ return m_changeRequestName; }
    inline bool ChangeRequestNameHasBeenSet() const { return m_changeRequestNameHasBeenSet; }
    inline void SetChangeRequestName(const Aws::String& value) { m_changeRequestNameHasBeenSet = true; m_changeRequestName = value; }
    inline void SetChangeRequestName(Aws::String&& value) { m_changeRequestNameHasBeenSet = true; m_changeRequestName = std::move(value); }
    inline void SetChangeRequestName(const char* value) { m_changeRequestNameHasBeenSet = true; m_changeRequestName.assign(value); }
    inline AutomationExecution& WithChangeRequestName(const Aws::String& value) { SetChangeRequestName(value); return *this;}
    inline AutomationExecution& WithChangeRequestName(Aws::String&& value) { SetChangeRequestName(std::move(value)); return *this;}
    inline AutomationExecution& WithChangeRequestName(const char* value) { SetChangeRequestName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Variables defined for the automation.</p>
     */
    inline const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& GetVariables() const{ return m_variables; }
    inline bool VariablesHasBeenSet() const { return m_variablesHasBeenSet; }
    inline void SetVariables(const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& value) { m_variablesHasBeenSet = true; m_variables = value; }
    inline void SetVariables(Aws::Map<Aws::String, Aws::Vector<Aws::String>>&& value) { m_variablesHasBeenSet = true; m_variables = std::move(value); }
    inline AutomationExecution& WithVariables(const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& value) { SetVariables(value); return *this;}
    inline AutomationExecution& WithVariables(Aws::Map<Aws::String, Aws::Vector<Aws::String>>&& value) { SetVariables(std::move(value)); return *this;}
    inline AutomationExecution& AddVariables(const Aws::String& key, const Aws::Vector<Aws::String>& value) { m_variablesHasBeenSet = true; m_variables.emplace(key, value); return *this; }
    inline AutomationExecution& AddVariables(Aws::String&& key, const Aws::Vector<Aws::String>& value) { m_variablesHasBeenSet = true; m_variables.emplace(std::move(key), value); return *this; }
    inline AutomationExecution& AddVariables(const Aws::String& key, Aws::Vector<Aws::String>&& value) { m_variablesHasBeenSet = true; m_variables.emplace(key, std::move(value)); return *this; }
    inline AutomationExecution& AddVariables(Aws::String&& key, Aws::Vector<Aws::String>&& value) { m_variablesHasBeenSet = true; m_variables.emplace(std::move(key), std::move(value)); return *this; }
    inline AutomationExecution& AddVariables(const char* key, Aws::Vector<Aws::String>&& value) { m_variablesHasBeenSet = true; m_variables.emplace(key, std::move(value)); return *this; }
    inline AutomationExecution& AddVariables(const char* key, const Aws::Vector<Aws::String>& value) { m_variablesHasBeenSet = true; m_variables.emplace(key, value); return *this; }
    ///@}
  private:

    Aws::String m_automationExecutionId;
    bool m_automationExecutionIdHasBeenSet = false;

    Aws::String m_documentName;
    bool m_documentNameHasBeenSet = false;

    Aws::String m_documentVersion;
    bool m_documentVersionHasBeenSet = false;

    Aws::Utils::DateTime m_executionStartTime;
    bool m_executionStartTimeHasBeenSet = false;

    Aws::Utils::DateTime m_executionEndTime;
    bool m_executionEndTimeHasBeenSet = false;

    AutomationExecutionStatus m_automationExecutionStatus;
    bool m_automationExecutionStatusHasBeenSet = false;

    Aws::Vector<StepExecution> m_stepExecutions;
    bool m_stepExecutionsHasBeenSet = false;

    bool m_stepExecutionsTruncated;
    bool m_stepExecutionsTruncatedHasBeenSet = false;

    Aws::Map<Aws::String, Aws::Vector<Aws::String>> m_parameters;
    bool m_parametersHasBeenSet = false;

    Aws::Map<Aws::String, Aws::Vector<Aws::String>> m_outputs;
    bool m_outputsHasBeenSet = false;

    Aws::String m_failureMessage;
    bool m_failureMessageHasBeenSet = false;

    ExecutionMode m_mode;
    bool m_modeHasBeenSet = false;

    Aws::String m_parentAutomationExecutionId;
    bool m_parentAutomationExecutionIdHasBeenSet = false;

    Aws::String m_executedBy;
    bool m_executedByHasBeenSet = false;

    Aws::String m_currentStepName;
    bool m_currentStepNameHasBeenSet = false;

    Aws::String m_currentAction;
    bool m_currentActionHasBeenSet = false;

    Aws::String m_targetParameterName;
    bool m_targetParameterNameHasBeenSet = false;

    Aws::Vector<Target> m_targets;
    bool m_targetsHasBeenSet = false;

    Aws::Vector<Aws::Map<Aws::String, Aws::Vector<Aws::String>>> m_targetMaps;
    bool m_targetMapsHasBeenSet = false;

    ResolvedTargets m_resolvedTargets;
    bool m_resolvedTargetsHasBeenSet = false;

    Aws::String m_maxConcurrency;
    bool m_maxConcurrencyHasBeenSet = false;

    Aws::String m_maxErrors;
    bool m_maxErrorsHasBeenSet = false;

    Aws::String m_target;
    bool m_targetHasBeenSet = false;

    Aws::Vector<TargetLocation> m_targetLocations;
    bool m_targetLocationsHasBeenSet = false;

    ProgressCounters m_progressCounters;
    bool m_progressCountersHasBeenSet = false;

    AlarmConfiguration m_alarmConfiguration;
    bool m_alarmConfigurationHasBeenSet = false;

    Aws::Vector<AlarmStateInformation> m_triggeredAlarms;
    bool m_triggeredAlarmsHasBeenSet = false;

    Aws::String m_targetLocationsURL;
    bool m_targetLocationsURLHasBeenSet = false;

    AutomationSubtype m_automationSubtype;
    bool m_automationSubtypeHasBeenSet = false;

    Aws::Utils::DateTime m_scheduledTime;
    bool m_scheduledTimeHasBeenSet = false;

    Aws::Vector<Runbook> m_runbooks;
    bool m_runbooksHasBeenSet = false;

    Aws::String m_opsItemId;
    bool m_opsItemIdHasBeenSet = false;

    Aws::String m_associationId;
    bool m_associationIdHasBeenSet = false;

    Aws::String m_changeRequestName;
    bool m_changeRequestNameHasBeenSet = false;

    Aws::Map<Aws::String, Aws::Vector<Aws::String>> m_variables;
    bool m_variablesHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
