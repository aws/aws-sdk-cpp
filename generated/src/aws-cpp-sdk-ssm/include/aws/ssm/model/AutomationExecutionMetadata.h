/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ssm/model/AutomationExecutionStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/ssm/model/ExecutionMode.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ssm/model/ResolvedTargets.h>
#include <aws/ssm/model/AutomationType.h>
#include <aws/ssm/model/AlarmConfiguration.h>
#include <aws/ssm/model/AutomationSubtype.h>
#include <aws/ssm/model/Target.h>
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
   * <p>Details about a specific Automation execution.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/AutomationExecutionMetadata">AWS
   * API Reference</a></p>
   */
  class AutomationExecutionMetadata
  {
  public:
    AWS_SSM_API AutomationExecutionMetadata() = default;
    AWS_SSM_API AutomationExecutionMetadata(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API AutomationExecutionMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
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
    AutomationExecutionMetadata& WithAutomationExecutionId(AutomationExecutionIdT&& value) { SetAutomationExecutionId(std::forward<AutomationExecutionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the Automation runbook used during execution.</p>
     */
    inline const Aws::String& GetDocumentName() const { return m_documentName; }
    inline bool DocumentNameHasBeenSet() const { return m_documentNameHasBeenSet; }
    template<typename DocumentNameT = Aws::String>
    void SetDocumentName(DocumentNameT&& value) { m_documentNameHasBeenSet = true; m_documentName = std::forward<DocumentNameT>(value); }
    template<typename DocumentNameT = Aws::String>
    AutomationExecutionMetadata& WithDocumentName(DocumentNameT&& value) { SetDocumentName(std::forward<DocumentNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The document version used during the execution.</p>
     */
    inline const Aws::String& GetDocumentVersion() const { return m_documentVersion; }
    inline bool DocumentVersionHasBeenSet() const { return m_documentVersionHasBeenSet; }
    template<typename DocumentVersionT = Aws::String>
    void SetDocumentVersion(DocumentVersionT&& value) { m_documentVersionHasBeenSet = true; m_documentVersion = std::forward<DocumentVersionT>(value); }
    template<typename DocumentVersionT = Aws::String>
    AutomationExecutionMetadata& WithDocumentVersion(DocumentVersionT&& value) { SetDocumentVersion(std::forward<DocumentVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the execution.</p>
     */
    inline AutomationExecutionStatus GetAutomationExecutionStatus() const { return m_automationExecutionStatus; }
    inline bool AutomationExecutionStatusHasBeenSet() const { return m_automationExecutionStatusHasBeenSet; }
    inline void SetAutomationExecutionStatus(AutomationExecutionStatus value) { m_automationExecutionStatusHasBeenSet = true; m_automationExecutionStatus = value; }
    inline AutomationExecutionMetadata& WithAutomationExecutionStatus(AutomationExecutionStatus value) { SetAutomationExecutionStatus(value); return *this;}
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
    AutomationExecutionMetadata& WithExecutionStartTime(ExecutionStartTimeT&& value) { SetExecutionStartTime(std::forward<ExecutionStartTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time the execution finished. This isn't populated if the execution is
     * still in progress.</p>
     */
    inline const Aws::Utils::DateTime& GetExecutionEndTime() const { return m_executionEndTime; }
    inline bool ExecutionEndTimeHasBeenSet() const { return m_executionEndTimeHasBeenSet; }
    template<typename ExecutionEndTimeT = Aws::Utils::DateTime>
    void SetExecutionEndTime(ExecutionEndTimeT&& value) { m_executionEndTimeHasBeenSet = true; m_executionEndTime = std::forward<ExecutionEndTimeT>(value); }
    template<typename ExecutionEndTimeT = Aws::Utils::DateTime>
    AutomationExecutionMetadata& WithExecutionEndTime(ExecutionEndTimeT&& value) { SetExecutionEndTime(std::forward<ExecutionEndTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IAM role ARN of the user who ran the automation.</p>
     */
    inline const Aws::String& GetExecutedBy() const { return m_executedBy; }
    inline bool ExecutedByHasBeenSet() const { return m_executedByHasBeenSet; }
    template<typename ExecutedByT = Aws::String>
    void SetExecutedBy(ExecutedByT&& value) { m_executedByHasBeenSet = true; m_executedBy = std::forward<ExecutedByT>(value); }
    template<typename ExecutedByT = Aws::String>
    AutomationExecutionMetadata& WithExecutedBy(ExecutedByT&& value) { SetExecutedBy(std::forward<ExecutedByT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An S3 bucket where execution information is stored.</p>
     */
    inline const Aws::String& GetLogFile() const { return m_logFile; }
    inline bool LogFileHasBeenSet() const { return m_logFileHasBeenSet; }
    template<typename LogFileT = Aws::String>
    void SetLogFile(LogFileT&& value) { m_logFileHasBeenSet = true; m_logFile = std::forward<LogFileT>(value); }
    template<typename LogFileT = Aws::String>
    AutomationExecutionMetadata& WithLogFile(LogFileT&& value) { SetLogFile(std::forward<LogFileT>(value)); return *this;}
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
    AutomationExecutionMetadata& WithOutputs(OutputsT&& value) { SetOutputs(std::forward<OutputsT>(value)); return *this;}
    template<typename OutputsKeyT = Aws::String, typename OutputsValueT = Aws::Vector<Aws::String>>
    AutomationExecutionMetadata& AddOutputs(OutputsKeyT&& key, OutputsValueT&& value) {
      m_outputsHasBeenSet = true; m_outputs.emplace(std::forward<OutputsKeyT>(key), std::forward<OutputsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The Automation execution mode.</p>
     */
    inline ExecutionMode GetMode() const { return m_mode; }
    inline bool ModeHasBeenSet() const { return m_modeHasBeenSet; }
    inline void SetMode(ExecutionMode value) { m_modeHasBeenSet = true; m_mode = value; }
    inline AutomationExecutionMetadata& WithMode(ExecutionMode value) { SetMode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The execution ID of the parent automation.</p>
     */
    inline const Aws::String& GetParentAutomationExecutionId() const { return m_parentAutomationExecutionId; }
    inline bool ParentAutomationExecutionIdHasBeenSet() const { return m_parentAutomationExecutionIdHasBeenSet; }
    template<typename ParentAutomationExecutionIdT = Aws::String>
    void SetParentAutomationExecutionId(ParentAutomationExecutionIdT&& value) { m_parentAutomationExecutionIdHasBeenSet = true; m_parentAutomationExecutionId = std::forward<ParentAutomationExecutionIdT>(value); }
    template<typename ParentAutomationExecutionIdT = Aws::String>
    AutomationExecutionMetadata& WithParentAutomationExecutionId(ParentAutomationExecutionIdT&& value) { SetParentAutomationExecutionId(std::forward<ParentAutomationExecutionIdT>(value)); return *this;}
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
    AutomationExecutionMetadata& WithCurrentStepName(CurrentStepNameT&& value) { SetCurrentStepName(std::forward<CurrentStepNameT>(value)); return *this;}
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
    AutomationExecutionMetadata& WithCurrentAction(CurrentActionT&& value) { SetCurrentAction(std::forward<CurrentActionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of execution outputs as defined in the Automation runbook.</p>
     */
    inline const Aws::String& GetFailureMessage() const { return m_failureMessage; }
    inline bool FailureMessageHasBeenSet() const { return m_failureMessageHasBeenSet; }
    template<typename FailureMessageT = Aws::String>
    void SetFailureMessage(FailureMessageT&& value) { m_failureMessageHasBeenSet = true; m_failureMessage = std::forward<FailureMessageT>(value); }
    template<typename FailureMessageT = Aws::String>
    AutomationExecutionMetadata& WithFailureMessage(FailureMessageT&& value) { SetFailureMessage(std::forward<FailureMessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of execution outputs as defined in the Automation runbook.</p>
     */
    inline const Aws::String& GetTargetParameterName() const { return m_targetParameterName; }
    inline bool TargetParameterNameHasBeenSet() const { return m_targetParameterNameHasBeenSet; }
    template<typename TargetParameterNameT = Aws::String>
    void SetTargetParameterName(TargetParameterNameT&& value) { m_targetParameterNameHasBeenSet = true; m_targetParameterName = std::forward<TargetParameterNameT>(value); }
    template<typename TargetParameterNameT = Aws::String>
    AutomationExecutionMetadata& WithTargetParameterName(TargetParameterNameT&& value) { SetTargetParameterName(std::forward<TargetParameterNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The targets defined by the user when starting the automation.</p>
     */
    inline const Aws::Vector<Target>& GetTargets() const { return m_targets; }
    inline bool TargetsHasBeenSet() const { return m_targetsHasBeenSet; }
    template<typename TargetsT = Aws::Vector<Target>>
    void SetTargets(TargetsT&& value) { m_targetsHasBeenSet = true; m_targets = std::forward<TargetsT>(value); }
    template<typename TargetsT = Aws::Vector<Target>>
    AutomationExecutionMetadata& WithTargets(TargetsT&& value) { SetTargets(std::forward<TargetsT>(value)); return *this;}
    template<typename TargetsT = Target>
    AutomationExecutionMetadata& AddTargets(TargetsT&& value) { m_targetsHasBeenSet = true; m_targets.emplace_back(std::forward<TargetsT>(value)); return *this; }
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
    AutomationExecutionMetadata& WithTargetMaps(TargetMapsT&& value) { SetTargetMaps(std::forward<TargetMapsT>(value)); return *this;}
    template<typename TargetMapsT = Aws::Map<Aws::String, Aws::Vector<Aws::String>>>
    AutomationExecutionMetadata& AddTargetMaps(TargetMapsT&& value) { m_targetMapsHasBeenSet = true; m_targetMaps.emplace_back(std::forward<TargetMapsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of targets that resolved during the execution.</p>
     */
    inline const ResolvedTargets& GetResolvedTargets() const { return m_resolvedTargets; }
    inline bool ResolvedTargetsHasBeenSet() const { return m_resolvedTargetsHasBeenSet; }
    template<typename ResolvedTargetsT = ResolvedTargets>
    void SetResolvedTargets(ResolvedTargetsT&& value) { m_resolvedTargetsHasBeenSet = true; m_resolvedTargets = std::forward<ResolvedTargetsT>(value); }
    template<typename ResolvedTargetsT = ResolvedTargets>
    AutomationExecutionMetadata& WithResolvedTargets(ResolvedTargetsT&& value) { SetResolvedTargets(std::forward<ResolvedTargetsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <code>MaxConcurrency</code> value specified by the user when starting the
     * automation.</p>
     */
    inline const Aws::String& GetMaxConcurrency() const { return m_maxConcurrency; }
    inline bool MaxConcurrencyHasBeenSet() const { return m_maxConcurrencyHasBeenSet; }
    template<typename MaxConcurrencyT = Aws::String>
    void SetMaxConcurrency(MaxConcurrencyT&& value) { m_maxConcurrencyHasBeenSet = true; m_maxConcurrency = std::forward<MaxConcurrencyT>(value); }
    template<typename MaxConcurrencyT = Aws::String>
    AutomationExecutionMetadata& WithMaxConcurrency(MaxConcurrencyT&& value) { SetMaxConcurrency(std::forward<MaxConcurrencyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <code>MaxErrors</code> value specified by the user when starting the
     * automation.</p>
     */
    inline const Aws::String& GetMaxErrors() const { return m_maxErrors; }
    inline bool MaxErrorsHasBeenSet() const { return m_maxErrorsHasBeenSet; }
    template<typename MaxErrorsT = Aws::String>
    void SetMaxErrors(MaxErrorsT&& value) { m_maxErrorsHasBeenSet = true; m_maxErrors = std::forward<MaxErrorsT>(value); }
    template<typename MaxErrorsT = Aws::String>
    AutomationExecutionMetadata& WithMaxErrors(MaxErrorsT&& value) { SetMaxErrors(std::forward<MaxErrorsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of execution outputs as defined in the Automation runbook.</p>
     */
    inline const Aws::String& GetTarget() const { return m_target; }
    inline bool TargetHasBeenSet() const { return m_targetHasBeenSet; }
    template<typename TargetT = Aws::String>
    void SetTarget(TargetT&& value) { m_targetHasBeenSet = true; m_target = std::forward<TargetT>(value); }
    template<typename TargetT = Aws::String>
    AutomationExecutionMetadata& WithTarget(TargetT&& value) { SetTarget(std::forward<TargetT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Use this filter with <a>DescribeAutomationExecutions</a>. Specify either
     * Local or CrossAccount. CrossAccount is an Automation that runs in multiple
     * Amazon Web Services Regions and Amazon Web Services accounts. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/systems-manager-automation-multiple-accounts-and-regions.html">Running
     * automations in multiple Amazon Web Services Regions and accounts</a> in the
     * <i>Amazon Web Services Systems Manager User Guide</i>. </p>
     */
    inline AutomationType GetAutomationType() const { return m_automationType; }
    inline bool AutomationTypeHasBeenSet() const { return m_automationTypeHasBeenSet; }
    inline void SetAutomationType(AutomationType value) { m_automationTypeHasBeenSet = true; m_automationType = value; }
    inline AutomationExecutionMetadata& WithAutomationType(AutomationType value) { SetAutomationType(value); return *this;}
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
    AutomationExecutionMetadata& WithAlarmConfiguration(AlarmConfigurationT&& value) { SetAlarmConfiguration(std::forward<AlarmConfigurationT>(value)); return *this;}
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
    AutomationExecutionMetadata& WithTriggeredAlarms(TriggeredAlarmsT&& value) { SetTriggeredAlarms(std::forward<TriggeredAlarmsT>(value)); return *this;}
    template<typename TriggeredAlarmsT = AlarmStateInformation>
    AutomationExecutionMetadata& AddTriggeredAlarms(TriggeredAlarmsT&& value) { m_triggeredAlarmsHasBeenSet = true; m_triggeredAlarms.emplace_back(std::forward<TriggeredAlarmsT>(value)); return *this; }
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
    AutomationExecutionMetadata& WithTargetLocationsURL(TargetLocationsURLT&& value) { SetTargetLocationsURL(std::forward<TargetLocationsURLT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The subtype of the Automation operation. Currently, the only supported value
     * is <code>ChangeRequest</code>.</p>
     */
    inline AutomationSubtype GetAutomationSubtype() const { return m_automationSubtype; }
    inline bool AutomationSubtypeHasBeenSet() const { return m_automationSubtypeHasBeenSet; }
    inline void SetAutomationSubtype(AutomationSubtype value) { m_automationSubtypeHasBeenSet = true; m_automationSubtype = value; }
    inline AutomationExecutionMetadata& WithAutomationSubtype(AutomationSubtype value) { SetAutomationSubtype(value); return *this;}
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
    AutomationExecutionMetadata& WithScheduledTime(ScheduledTimeT&& value) { SetScheduledTime(std::forward<ScheduledTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the Automation runbooks that are run during a runbook
     * workflow in Change Manager.</p>  <p>The Automation runbooks specified for
     * the runbook workflow can't run until all required approvals for the change
     * request have been received.</p> 
     */
    inline const Aws::Vector<Runbook>& GetRunbooks() const { return m_runbooks; }
    inline bool RunbooksHasBeenSet() const { return m_runbooksHasBeenSet; }
    template<typename RunbooksT = Aws::Vector<Runbook>>
    void SetRunbooks(RunbooksT&& value) { m_runbooksHasBeenSet = true; m_runbooks = std::forward<RunbooksT>(value); }
    template<typename RunbooksT = Aws::Vector<Runbook>>
    AutomationExecutionMetadata& WithRunbooks(RunbooksT&& value) { SetRunbooks(std::forward<RunbooksT>(value)); return *this;}
    template<typename RunbooksT = Runbook>
    AutomationExecutionMetadata& AddRunbooks(RunbooksT&& value) { m_runbooksHasBeenSet = true; m_runbooks.emplace_back(std::forward<RunbooksT>(value)); return *this; }
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
    AutomationExecutionMetadata& WithOpsItemId(OpsItemIdT&& value) { SetOpsItemId(std::forward<OpsItemIdT>(value)); return *this;}
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
    AutomationExecutionMetadata& WithAssociationId(AssociationIdT&& value) { SetAssociationId(std::forward<AssociationIdT>(value)); return *this;}
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
    AutomationExecutionMetadata& WithChangeRequestName(ChangeRequestNameT&& value) { SetChangeRequestName(std::forward<ChangeRequestNameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_automationExecutionId;
    bool m_automationExecutionIdHasBeenSet = false;

    Aws::String m_documentName;
    bool m_documentNameHasBeenSet = false;

    Aws::String m_documentVersion;
    bool m_documentVersionHasBeenSet = false;

    AutomationExecutionStatus m_automationExecutionStatus{AutomationExecutionStatus::NOT_SET};
    bool m_automationExecutionStatusHasBeenSet = false;

    Aws::Utils::DateTime m_executionStartTime{};
    bool m_executionStartTimeHasBeenSet = false;

    Aws::Utils::DateTime m_executionEndTime{};
    bool m_executionEndTimeHasBeenSet = false;

    Aws::String m_executedBy;
    bool m_executedByHasBeenSet = false;

    Aws::String m_logFile;
    bool m_logFileHasBeenSet = false;

    Aws::Map<Aws::String, Aws::Vector<Aws::String>> m_outputs;
    bool m_outputsHasBeenSet = false;

    ExecutionMode m_mode{ExecutionMode::NOT_SET};
    bool m_modeHasBeenSet = false;

    Aws::String m_parentAutomationExecutionId;
    bool m_parentAutomationExecutionIdHasBeenSet = false;

    Aws::String m_currentStepName;
    bool m_currentStepNameHasBeenSet = false;

    Aws::String m_currentAction;
    bool m_currentActionHasBeenSet = false;

    Aws::String m_failureMessage;
    bool m_failureMessageHasBeenSet = false;

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

    AutomationType m_automationType{AutomationType::NOT_SET};
    bool m_automationTypeHasBeenSet = false;

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
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
