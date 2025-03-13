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
    AWS_SSM_API AutomationExecution() = default;
    AWS_SSM_API AutomationExecution(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API AutomationExecution& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The execution ID.</p>
     */
    inline const Aws::String& GetAutomationExecutionId() const { return m_automationExecutionId; }
    inline bool AutomationExecutionIdHasBeenSet() const { return m_automationExecutionIdHasBeenSet; }
    template<typename AutomationExecutionIdT = Aws::String>
    void SetAutomationExecutionId(AutomationExecutionIdT&& value) { m_automationExecutionIdHasBeenSet = true; m_automationExecutionId = std::forward<AutomationExecutionIdT>(value); }
    template<typename AutomationExecutionIdT = Aws::String>
    AutomationExecution& WithAutomationExecutionId(AutomationExecutionIdT&& value) { SetAutomationExecutionId(std::forward<AutomationExecutionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the Automation runbook used during the execution.</p>
     */
    inline const Aws::String& GetDocumentName() const { return m_documentName; }
    inline bool DocumentNameHasBeenSet() const { return m_documentNameHasBeenSet; }
    template<typename DocumentNameT = Aws::String>
    void SetDocumentName(DocumentNameT&& value) { m_documentNameHasBeenSet = true; m_documentName = std::forward<DocumentNameT>(value); }
    template<typename DocumentNameT = Aws::String>
    AutomationExecution& WithDocumentName(DocumentNameT&& value) { SetDocumentName(std::forward<DocumentNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the document to use during execution.</p>
     */
    inline const Aws::String& GetDocumentVersion() const { return m_documentVersion; }
    inline bool DocumentVersionHasBeenSet() const { return m_documentVersionHasBeenSet; }
    template<typename DocumentVersionT = Aws::String>
    void SetDocumentVersion(DocumentVersionT&& value) { m_documentVersionHasBeenSet = true; m_documentVersion = std::forward<DocumentVersionT>(value); }
    template<typename DocumentVersionT = Aws::String>
    AutomationExecution& WithDocumentVersion(DocumentVersionT&& value) { SetDocumentVersion(std::forward<DocumentVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time the execution started.</p>
     */
    inline const Aws::Utils::DateTime& GetExecutionStartTime() const { return m_executionStartTime; }
    inline bool ExecutionStartTimeHasBeenSet() const { return m_executionStartTimeHasBeenSet; }
    template<typename ExecutionStartTimeT = Aws::Utils::DateTime>
    void SetExecutionStartTime(ExecutionStartTimeT&& value) { m_executionStartTimeHasBeenSet = true; m_executionStartTime = std::forward<ExecutionStartTimeT>(value); }
    template<typename ExecutionStartTimeT = Aws::Utils::DateTime>
    AutomationExecution& WithExecutionStartTime(ExecutionStartTimeT&& value) { SetExecutionStartTime(std::forward<ExecutionStartTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time the execution finished.</p>
     */
    inline const Aws::Utils::DateTime& GetExecutionEndTime() const { return m_executionEndTime; }
    inline bool ExecutionEndTimeHasBeenSet() const { return m_executionEndTimeHasBeenSet; }
    template<typename ExecutionEndTimeT = Aws::Utils::DateTime>
    void SetExecutionEndTime(ExecutionEndTimeT&& value) { m_executionEndTimeHasBeenSet = true; m_executionEndTime = std::forward<ExecutionEndTimeT>(value); }
    template<typename ExecutionEndTimeT = Aws::Utils::DateTime>
    AutomationExecution& WithExecutionEndTime(ExecutionEndTimeT&& value) { SetExecutionEndTime(std::forward<ExecutionEndTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The execution status of the Automation.</p>
     */
    inline AutomationExecutionStatus GetAutomationExecutionStatus() const { return m_automationExecutionStatus; }
    inline bool AutomationExecutionStatusHasBeenSet() const { return m_automationExecutionStatusHasBeenSet; }
    inline void SetAutomationExecutionStatus(AutomationExecutionStatus value) { m_automationExecutionStatusHasBeenSet = true; m_automationExecutionStatus = value; }
    inline AutomationExecution& WithAutomationExecutionStatus(AutomationExecutionStatus value) { SetAutomationExecutionStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of details about the current state of all steps that comprise an
     * execution. An Automation runbook contains a list of steps that are run in
     * order.</p>
     */
    inline const Aws::Vector<StepExecution>& GetStepExecutions() const { return m_stepExecutions; }
    inline bool StepExecutionsHasBeenSet() const { return m_stepExecutionsHasBeenSet; }
    template<typename StepExecutionsT = Aws::Vector<StepExecution>>
    void SetStepExecutions(StepExecutionsT&& value) { m_stepExecutionsHasBeenSet = true; m_stepExecutions = std::forward<StepExecutionsT>(value); }
    template<typename StepExecutionsT = Aws::Vector<StepExecution>>
    AutomationExecution& WithStepExecutions(StepExecutionsT&& value) { SetStepExecutions(std::forward<StepExecutionsT>(value)); return *this;}
    template<typename StepExecutionsT = StepExecution>
    AutomationExecution& AddStepExecutions(StepExecutionsT&& value) { m_stepExecutionsHasBeenSet = true; m_stepExecutions.emplace_back(std::forward<StepExecutionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A boolean value that indicates if the response contains the full list of the
     * Automation step executions. If true, use the DescribeAutomationStepExecutions
     * API operation to get the full list of step executions.</p>
     */
    inline bool GetStepExecutionsTruncated() const { return m_stepExecutionsTruncated; }
    inline bool StepExecutionsTruncatedHasBeenSet() const { return m_stepExecutionsTruncatedHasBeenSet; }
    inline void SetStepExecutionsTruncated(bool value) { m_stepExecutionsTruncatedHasBeenSet = true; m_stepExecutionsTruncated = value; }
    inline AutomationExecution& WithStepExecutionsTruncated(bool value) { SetStepExecutionsTruncated(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The key-value map of execution parameters, which were supplied when calling
     * <a>StartAutomationExecution</a>.</p>
     */
    inline const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& GetParameters() const { return m_parameters; }
    inline bool ParametersHasBeenSet() const { return m_parametersHasBeenSet; }
    template<typename ParametersT = Aws::Map<Aws::String, Aws::Vector<Aws::String>>>
    void SetParameters(ParametersT&& value) { m_parametersHasBeenSet = true; m_parameters = std::forward<ParametersT>(value); }
    template<typename ParametersT = Aws::Map<Aws::String, Aws::Vector<Aws::String>>>
    AutomationExecution& WithParameters(ParametersT&& value) { SetParameters(std::forward<ParametersT>(value)); return *this;}
    template<typename ParametersKeyT = Aws::String, typename ParametersValueT = Aws::Vector<Aws::String>>
    AutomationExecution& AddParameters(ParametersKeyT&& key, ParametersValueT&& value) {
      m_parametersHasBeenSet = true; m_parameters.emplace(std::forward<ParametersKeyT>(key), std::forward<ParametersValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The list of execution outputs as defined in the Automation runbook.</p>
     */
    inline const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& GetOutputs() const { return m_outputs; }
    inline bool OutputsHasBeenSet() const { return m_outputsHasBeenSet; }
    template<typename OutputsT = Aws::Map<Aws::String, Aws::Vector<Aws::String>>>
    void SetOutputs(OutputsT&& value) { m_outputsHasBeenSet = true; m_outputs = std::forward<OutputsT>(value); }
    template<typename OutputsT = Aws::Map<Aws::String, Aws::Vector<Aws::String>>>
    AutomationExecution& WithOutputs(OutputsT&& value) { SetOutputs(std::forward<OutputsT>(value)); return *this;}
    template<typename OutputsKeyT = Aws::String, typename OutputsValueT = Aws::Vector<Aws::String>>
    AutomationExecution& AddOutputs(OutputsKeyT&& key, OutputsValueT&& value) {
      m_outputsHasBeenSet = true; m_outputs.emplace(std::forward<OutputsKeyT>(key), std::forward<OutputsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>A message describing why an execution has failed, if the status is set to
     * Failed.</p>
     */
    inline const Aws::String& GetFailureMessage() const { return m_failureMessage; }
    inline bool FailureMessageHasBeenSet() const { return m_failureMessageHasBeenSet; }
    template<typename FailureMessageT = Aws::String>
    void SetFailureMessage(FailureMessageT&& value) { m_failureMessageHasBeenSet = true; m_failureMessage = std::forward<FailureMessageT>(value); }
    template<typename FailureMessageT = Aws::String>
    AutomationExecution& WithFailureMessage(FailureMessageT&& value) { SetFailureMessage(std::forward<FailureMessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The automation execution mode.</p>
     */
    inline ExecutionMode GetMode() const { return m_mode; }
    inline bool ModeHasBeenSet() const { return m_modeHasBeenSet; }
    inline void SetMode(ExecutionMode value) { m_modeHasBeenSet = true; m_mode = value; }
    inline AutomationExecution& WithMode(ExecutionMode value) { SetMode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The AutomationExecutionId of the parent automation.</p>
     */
    inline const Aws::String& GetParentAutomationExecutionId() const { return m_parentAutomationExecutionId; }
    inline bool ParentAutomationExecutionIdHasBeenSet() const { return m_parentAutomationExecutionIdHasBeenSet; }
    template<typename ParentAutomationExecutionIdT = Aws::String>
    void SetParentAutomationExecutionId(ParentAutomationExecutionIdT&& value) { m_parentAutomationExecutionIdHasBeenSet = true; m_parentAutomationExecutionId = std::forward<ParentAutomationExecutionIdT>(value); }
    template<typename ParentAutomationExecutionIdT = Aws::String>
    AutomationExecution& WithParentAutomationExecutionId(ParentAutomationExecutionIdT&& value) { SetParentAutomationExecutionId(std::forward<ParentAutomationExecutionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the user who ran the automation.</p>
     */
    inline const Aws::String& GetExecutedBy() const { return m_executedBy; }
    inline bool ExecutedByHasBeenSet() const { return m_executedByHasBeenSet; }
    template<typename ExecutedByT = Aws::String>
    void SetExecutedBy(ExecutedByT&& value) { m_executedByHasBeenSet = true; m_executedBy = std::forward<ExecutedByT>(value); }
    template<typename ExecutedByT = Aws::String>
    AutomationExecution& WithExecutedBy(ExecutedByT&& value) { SetExecutedBy(std::forward<ExecutedByT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the step that is currently running.</p>
     */
    inline const Aws::String& GetCurrentStepName() const { return m_currentStepName; }
    inline bool CurrentStepNameHasBeenSet() const { return m_currentStepNameHasBeenSet; }
    template<typename CurrentStepNameT = Aws::String>
    void SetCurrentStepName(CurrentStepNameT&& value) { m_currentStepNameHasBeenSet = true; m_currentStepName = std::forward<CurrentStepNameT>(value); }
    template<typename CurrentStepNameT = Aws::String>
    AutomationExecution& WithCurrentStepName(CurrentStepNameT&& value) { SetCurrentStepName(std::forward<CurrentStepNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The action of the step that is currently running.</p>
     */
    inline const Aws::String& GetCurrentAction() const { return m_currentAction; }
    inline bool CurrentActionHasBeenSet() const { return m_currentActionHasBeenSet; }
    template<typename CurrentActionT = Aws::String>
    void SetCurrentAction(CurrentActionT&& value) { m_currentActionHasBeenSet = true; m_currentAction = std::forward<CurrentActionT>(value); }
    template<typename CurrentActionT = Aws::String>
    AutomationExecution& WithCurrentAction(CurrentActionT&& value) { SetCurrentAction(std::forward<CurrentActionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The parameter name.</p>
     */
    inline const Aws::String& GetTargetParameterName() const { return m_targetParameterName; }
    inline bool TargetParameterNameHasBeenSet() const { return m_targetParameterNameHasBeenSet; }
    template<typename TargetParameterNameT = Aws::String>
    void SetTargetParameterName(TargetParameterNameT&& value) { m_targetParameterNameHasBeenSet = true; m_targetParameterName = std::forward<TargetParameterNameT>(value); }
    template<typename TargetParameterNameT = Aws::String>
    AutomationExecution& WithTargetParameterName(TargetParameterNameT&& value) { SetTargetParameterName(std::forward<TargetParameterNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The specified targets.</p>
     */
    inline const Aws::Vector<Target>& GetTargets() const { return m_targets; }
    inline bool TargetsHasBeenSet() const { return m_targetsHasBeenSet; }
    template<typename TargetsT = Aws::Vector<Target>>
    void SetTargets(TargetsT&& value) { m_targetsHasBeenSet = true; m_targets = std::forward<TargetsT>(value); }
    template<typename TargetsT = Aws::Vector<Target>>
    AutomationExecution& WithTargets(TargetsT&& value) { SetTargets(std::forward<TargetsT>(value)); return *this;}
    template<typename TargetsT = Target>
    AutomationExecution& AddTargets(TargetsT&& value) { m_targetsHasBeenSet = true; m_targets.emplace_back(std::forward<TargetsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The specified key-value mapping of document parameters to target
     * resources.</p>
     */
    inline const Aws::Vector<Aws::Map<Aws::String, Aws::Vector<Aws::String>>>& GetTargetMaps() const { return m_targetMaps; }
    inline bool TargetMapsHasBeenSet() const { return m_targetMapsHasBeenSet; }
    template<typename TargetMapsT = Aws::Vector<Aws::Map<Aws::String, Aws::Vector<Aws::String>>>>
    void SetTargetMaps(TargetMapsT&& value) { m_targetMapsHasBeenSet = true; m_targetMaps = std::forward<TargetMapsT>(value); }
    template<typename TargetMapsT = Aws::Vector<Aws::Map<Aws::String, Aws::Vector<Aws::String>>>>
    AutomationExecution& WithTargetMaps(TargetMapsT&& value) { SetTargetMaps(std::forward<TargetMapsT>(value)); return *this;}
    template<typename TargetMapsT = Aws::Map<Aws::String, Aws::Vector<Aws::String>>>
    AutomationExecution& AddTargetMaps(TargetMapsT&& value) { m_targetMapsHasBeenSet = true; m_targetMaps.emplace_back(std::forward<TargetMapsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of resolved targets in the rate control execution.</p>
     */
    inline const ResolvedTargets& GetResolvedTargets() const { return m_resolvedTargets; }
    inline bool ResolvedTargetsHasBeenSet() const { return m_resolvedTargetsHasBeenSet; }
    template<typename ResolvedTargetsT = ResolvedTargets>
    void SetResolvedTargets(ResolvedTargetsT&& value) { m_resolvedTargetsHasBeenSet = true; m_resolvedTargets = std::forward<ResolvedTargetsT>(value); }
    template<typename ResolvedTargetsT = ResolvedTargets>
    AutomationExecution& WithResolvedTargets(ResolvedTargetsT&& value) { SetResolvedTargets(std::forward<ResolvedTargetsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <code>MaxConcurrency</code> value specified by the user when the
     * execution started.</p>
     */
    inline const Aws::String& GetMaxConcurrency() const { return m_maxConcurrency; }
    inline bool MaxConcurrencyHasBeenSet() const { return m_maxConcurrencyHasBeenSet; }
    template<typename MaxConcurrencyT = Aws::String>
    void SetMaxConcurrency(MaxConcurrencyT&& value) { m_maxConcurrencyHasBeenSet = true; m_maxConcurrency = std::forward<MaxConcurrencyT>(value); }
    template<typename MaxConcurrencyT = Aws::String>
    AutomationExecution& WithMaxConcurrency(MaxConcurrencyT&& value) { SetMaxConcurrency(std::forward<MaxConcurrencyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The MaxErrors value specified by the user when the execution started.</p>
     */
    inline const Aws::String& GetMaxErrors() const { return m_maxErrors; }
    inline bool MaxErrorsHasBeenSet() const { return m_maxErrorsHasBeenSet; }
    template<typename MaxErrorsT = Aws::String>
    void SetMaxErrors(MaxErrorsT&& value) { m_maxErrorsHasBeenSet = true; m_maxErrors = std::forward<MaxErrorsT>(value); }
    template<typename MaxErrorsT = Aws::String>
    AutomationExecution& WithMaxErrors(MaxErrorsT&& value) { SetMaxErrors(std::forward<MaxErrorsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The target of the execution.</p>
     */
    inline const Aws::String& GetTarget() const { return m_target; }
    inline bool TargetHasBeenSet() const { return m_targetHasBeenSet; }
    template<typename TargetT = Aws::String>
    void SetTarget(TargetT&& value) { m_targetHasBeenSet = true; m_target = std::forward<TargetT>(value); }
    template<typename TargetT = Aws::String>
    AutomationExecution& WithTarget(TargetT&& value) { SetTarget(std::forward<TargetT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The combination of Amazon Web Services Regions and/or Amazon Web Services
     * accounts where you want to run the Automation.</p>
     */
    inline const Aws::Vector<TargetLocation>& GetTargetLocations() const { return m_targetLocations; }
    inline bool TargetLocationsHasBeenSet() const { return m_targetLocationsHasBeenSet; }
    template<typename TargetLocationsT = Aws::Vector<TargetLocation>>
    void SetTargetLocations(TargetLocationsT&& value) { m_targetLocationsHasBeenSet = true; m_targetLocations = std::forward<TargetLocationsT>(value); }
    template<typename TargetLocationsT = Aws::Vector<TargetLocation>>
    AutomationExecution& WithTargetLocations(TargetLocationsT&& value) { SetTargetLocations(std::forward<TargetLocationsT>(value)); return *this;}
    template<typename TargetLocationsT = TargetLocation>
    AutomationExecution& AddTargetLocations(TargetLocationsT&& value) { m_targetLocationsHasBeenSet = true; m_targetLocations.emplace_back(std::forward<TargetLocationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An aggregate of step execution statuses displayed in the Amazon Web Services
     * Systems Manager console for a multi-Region and multi-account Automation
     * execution.</p>
     */
    inline const ProgressCounters& GetProgressCounters() const { return m_progressCounters; }
    inline bool ProgressCountersHasBeenSet() const { return m_progressCountersHasBeenSet; }
    template<typename ProgressCountersT = ProgressCounters>
    void SetProgressCounters(ProgressCountersT&& value) { m_progressCountersHasBeenSet = true; m_progressCounters = std::forward<ProgressCountersT>(value); }
    template<typename ProgressCountersT = ProgressCounters>
    AutomationExecution& WithProgressCounters(ProgressCountersT&& value) { SetProgressCounters(std::forward<ProgressCountersT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The details for the CloudWatch alarm applied to your automation.</p>
     */
    inline const AlarmConfiguration& GetAlarmConfiguration() const { return m_alarmConfiguration; }
    inline bool AlarmConfigurationHasBeenSet() const { return m_alarmConfigurationHasBeenSet; }
    template<typename AlarmConfigurationT = AlarmConfiguration>
    void SetAlarmConfiguration(AlarmConfigurationT&& value) { m_alarmConfigurationHasBeenSet = true; m_alarmConfiguration = std::forward<AlarmConfigurationT>(value); }
    template<typename AlarmConfigurationT = AlarmConfiguration>
    AutomationExecution& WithAlarmConfiguration(AlarmConfigurationT&& value) { SetAlarmConfiguration(std::forward<AlarmConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The CloudWatch alarm that was invoked by the automation.</p>
     */
    inline const Aws::Vector<AlarmStateInformation>& GetTriggeredAlarms() const { return m_triggeredAlarms; }
    inline bool TriggeredAlarmsHasBeenSet() const { return m_triggeredAlarmsHasBeenSet; }
    template<typename TriggeredAlarmsT = Aws::Vector<AlarmStateInformation>>
    void SetTriggeredAlarms(TriggeredAlarmsT&& value) { m_triggeredAlarmsHasBeenSet = true; m_triggeredAlarms = std::forward<TriggeredAlarmsT>(value); }
    template<typename TriggeredAlarmsT = Aws::Vector<AlarmStateInformation>>
    AutomationExecution& WithTriggeredAlarms(TriggeredAlarmsT&& value) { SetTriggeredAlarms(std::forward<TriggeredAlarmsT>(value)); return *this;}
    template<typename TriggeredAlarmsT = AlarmStateInformation>
    AutomationExecution& AddTriggeredAlarms(TriggeredAlarmsT&& value) { m_triggeredAlarmsHasBeenSet = true; m_triggeredAlarms.emplace_back(std::forward<TriggeredAlarmsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A publicly accessible URL for a file that contains the
     * <code>TargetLocations</code> body. Currently, only files in presigned Amazon S3
     * buckets are supported</p>
     */
    inline const Aws::String& GetTargetLocationsURL() const { return m_targetLocationsURL; }
    inline bool TargetLocationsURLHasBeenSet() const { return m_targetLocationsURLHasBeenSet; }
    template<typename TargetLocationsURLT = Aws::String>
    void SetTargetLocationsURL(TargetLocationsURLT&& value) { m_targetLocationsURLHasBeenSet = true; m_targetLocationsURL = std::forward<TargetLocationsURLT>(value); }
    template<typename TargetLocationsURLT = Aws::String>
    AutomationExecution& WithTargetLocationsURL(TargetLocationsURLT&& value) { SetTargetLocationsURL(std::forward<TargetLocationsURLT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The subtype of the Automation operation. Currently, the only supported value
     * is <code>ChangeRequest</code>.</p>
     */
    inline AutomationSubtype GetAutomationSubtype() const { return m_automationSubtype; }
    inline bool AutomationSubtypeHasBeenSet() const { return m_automationSubtypeHasBeenSet; }
    inline void SetAutomationSubtype(AutomationSubtype value) { m_automationSubtypeHasBeenSet = true; m_automationSubtype = value; }
    inline AutomationExecution& WithAutomationSubtype(AutomationSubtype value) { SetAutomationSubtype(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time the Automation operation is scheduled to start.</p>
     */
    inline const Aws::Utils::DateTime& GetScheduledTime() const { return m_scheduledTime; }
    inline bool ScheduledTimeHasBeenSet() const { return m_scheduledTimeHasBeenSet; }
    template<typename ScheduledTimeT = Aws::Utils::DateTime>
    void SetScheduledTime(ScheduledTimeT&& value) { m_scheduledTimeHasBeenSet = true; m_scheduledTime = std::forward<ScheduledTimeT>(value); }
    template<typename ScheduledTimeT = Aws::Utils::DateTime>
    AutomationExecution& WithScheduledTime(ScheduledTimeT&& value) { SetScheduledTime(std::forward<ScheduledTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the Automation runbooks that are run as part of a runbook
     * workflow.</p>  <p>The Automation runbooks specified for the runbook
     * workflow can't run until all required approvals for the change request have been
     * received.</p> 
     */
    inline const Aws::Vector<Runbook>& GetRunbooks() const { return m_runbooks; }
    inline bool RunbooksHasBeenSet() const { return m_runbooksHasBeenSet; }
    template<typename RunbooksT = Aws::Vector<Runbook>>
    void SetRunbooks(RunbooksT&& value) { m_runbooksHasBeenSet = true; m_runbooks = std::forward<RunbooksT>(value); }
    template<typename RunbooksT = Aws::Vector<Runbook>>
    AutomationExecution& WithRunbooks(RunbooksT&& value) { SetRunbooks(std::forward<RunbooksT>(value)); return *this;}
    template<typename RunbooksT = Runbook>
    AutomationExecution& AddRunbooks(RunbooksT&& value) { m_runbooksHasBeenSet = true; m_runbooks.emplace_back(std::forward<RunbooksT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The ID of an OpsItem that is created to represent a Change Manager change
     * request.</p>
     */
    inline const Aws::String& GetOpsItemId() const { return m_opsItemId; }
    inline bool OpsItemIdHasBeenSet() const { return m_opsItemIdHasBeenSet; }
    template<typename OpsItemIdT = Aws::String>
    void SetOpsItemId(OpsItemIdT&& value) { m_opsItemIdHasBeenSet = true; m_opsItemId = std::forward<OpsItemIdT>(value); }
    template<typename OpsItemIdT = Aws::String>
    AutomationExecution& WithOpsItemId(OpsItemIdT&& value) { SetOpsItemId(std::forward<OpsItemIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of a State Manager association used in the Automation operation.</p>
     */
    inline const Aws::String& GetAssociationId() const { return m_associationId; }
    inline bool AssociationIdHasBeenSet() const { return m_associationIdHasBeenSet; }
    template<typename AssociationIdT = Aws::String>
    void SetAssociationId(AssociationIdT&& value) { m_associationIdHasBeenSet = true; m_associationId = std::forward<AssociationIdT>(value); }
    template<typename AssociationIdT = Aws::String>
    AutomationExecution& WithAssociationId(AssociationIdT&& value) { SetAssociationId(std::forward<AssociationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the Change Manager change request.</p>
     */
    inline const Aws::String& GetChangeRequestName() const { return m_changeRequestName; }
    inline bool ChangeRequestNameHasBeenSet() const { return m_changeRequestNameHasBeenSet; }
    template<typename ChangeRequestNameT = Aws::String>
    void SetChangeRequestName(ChangeRequestNameT&& value) { m_changeRequestNameHasBeenSet = true; m_changeRequestName = std::forward<ChangeRequestNameT>(value); }
    template<typename ChangeRequestNameT = Aws::String>
    AutomationExecution& WithChangeRequestName(ChangeRequestNameT&& value) { SetChangeRequestName(std::forward<ChangeRequestNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Variables defined for the automation.</p>
     */
    inline const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& GetVariables() const { return m_variables; }
    inline bool VariablesHasBeenSet() const { return m_variablesHasBeenSet; }
    template<typename VariablesT = Aws::Map<Aws::String, Aws::Vector<Aws::String>>>
    void SetVariables(VariablesT&& value) { m_variablesHasBeenSet = true; m_variables = std::forward<VariablesT>(value); }
    template<typename VariablesT = Aws::Map<Aws::String, Aws::Vector<Aws::String>>>
    AutomationExecution& WithVariables(VariablesT&& value) { SetVariables(std::forward<VariablesT>(value)); return *this;}
    template<typename VariablesKeyT = Aws::String, typename VariablesValueT = Aws::Vector<Aws::String>>
    AutomationExecution& AddVariables(VariablesKeyT&& key, VariablesValueT&& value) {
      m_variablesHasBeenSet = true; m_variables.emplace(std::forward<VariablesKeyT>(key), std::forward<VariablesValueT>(value)); return *this;
    }
    ///@}
  private:

    Aws::String m_automationExecutionId;
    bool m_automationExecutionIdHasBeenSet = false;

    Aws::String m_documentName;
    bool m_documentNameHasBeenSet = false;

    Aws::String m_documentVersion;
    bool m_documentVersionHasBeenSet = false;

    Aws::Utils::DateTime m_executionStartTime{};
    bool m_executionStartTimeHasBeenSet = false;

    Aws::Utils::DateTime m_executionEndTime{};
    bool m_executionEndTimeHasBeenSet = false;

    AutomationExecutionStatus m_automationExecutionStatus{AutomationExecutionStatus::NOT_SET};
    bool m_automationExecutionStatusHasBeenSet = false;

    Aws::Vector<StepExecution> m_stepExecutions;
    bool m_stepExecutionsHasBeenSet = false;

    bool m_stepExecutionsTruncated{false};
    bool m_stepExecutionsTruncatedHasBeenSet = false;

    Aws::Map<Aws::String, Aws::Vector<Aws::String>> m_parameters;
    bool m_parametersHasBeenSet = false;

    Aws::Map<Aws::String, Aws::Vector<Aws::String>> m_outputs;
    bool m_outputsHasBeenSet = false;

    Aws::String m_failureMessage;
    bool m_failureMessageHasBeenSet = false;

    ExecutionMode m_mode{ExecutionMode::NOT_SET};
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

    AutomationSubtype m_automationSubtype{AutomationSubtype::NOT_SET};
    bool m_automationSubtypeHasBeenSet = false;

    Aws::Utils::DateTime m_scheduledTime{};
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
