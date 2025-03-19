/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/ssm/model/AutomationExecutionStatus.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/ssm/model/FailureDetails.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ssm/model/TargetLocation.h>
#include <aws/ssm/model/ParentStepDetails.h>
#include <aws/ssm/model/Target.h>
#include <aws/ssm/model/AlarmStateInformation.h>
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
   * <p>Detailed information about an the execution state of an Automation
   * step.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/StepExecution">AWS
   * API Reference</a></p>
   */
  class StepExecution
  {
  public:
    AWS_SSM_API StepExecution() = default;
    AWS_SSM_API StepExecution(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API StepExecution& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of this execution step.</p>
     */
    inline const Aws::String& GetStepName() const { return m_stepName; }
    inline bool StepNameHasBeenSet() const { return m_stepNameHasBeenSet; }
    template<typename StepNameT = Aws::String>
    void SetStepName(StepNameT&& value) { m_stepNameHasBeenSet = true; m_stepName = std::forward<StepNameT>(value); }
    template<typename StepNameT = Aws::String>
    StepExecution& WithStepName(StepNameT&& value) { SetStepName(std::forward<StepNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The action this step performs. The action determines the behavior of the
     * step.</p>
     */
    inline const Aws::String& GetAction() const { return m_action; }
    inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }
    template<typename ActionT = Aws::String>
    void SetAction(ActionT&& value) { m_actionHasBeenSet = true; m_action = std::forward<ActionT>(value); }
    template<typename ActionT = Aws::String>
    StepExecution& WithAction(ActionT&& value) { SetAction(std::forward<ActionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timeout seconds of the step.</p>
     */
    inline long long GetTimeoutSeconds() const { return m_timeoutSeconds; }
    inline bool TimeoutSecondsHasBeenSet() const { return m_timeoutSecondsHasBeenSet; }
    inline void SetTimeoutSeconds(long long value) { m_timeoutSecondsHasBeenSet = true; m_timeoutSeconds = value; }
    inline StepExecution& WithTimeoutSeconds(long long value) { SetTimeoutSeconds(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The action to take if the step fails. The default value is
     * <code>Abort</code>.</p>
     */
    inline const Aws::String& GetOnFailure() const { return m_onFailure; }
    inline bool OnFailureHasBeenSet() const { return m_onFailureHasBeenSet; }
    template<typename OnFailureT = Aws::String>
    void SetOnFailure(OnFailureT&& value) { m_onFailureHasBeenSet = true; m_onFailure = std::forward<OnFailureT>(value); }
    template<typename OnFailureT = Aws::String>
    StepExecution& WithOnFailure(OnFailureT&& value) { SetOnFailure(std::forward<OnFailureT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of tries to run the action of the step. The default value
     * is <code>1</code>.</p>
     */
    inline int GetMaxAttempts() const { return m_maxAttempts; }
    inline bool MaxAttemptsHasBeenSet() const { return m_maxAttemptsHasBeenSet; }
    inline void SetMaxAttempts(int value) { m_maxAttemptsHasBeenSet = true; m_maxAttempts = value; }
    inline StepExecution& WithMaxAttempts(int value) { SetMaxAttempts(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If a step has begun execution, this contains the time the step started. If
     * the step is in Pending status, this field isn't populated.</p>
     */
    inline const Aws::Utils::DateTime& GetExecutionStartTime() const { return m_executionStartTime; }
    inline bool ExecutionStartTimeHasBeenSet() const { return m_executionStartTimeHasBeenSet; }
    template<typename ExecutionStartTimeT = Aws::Utils::DateTime>
    void SetExecutionStartTime(ExecutionStartTimeT&& value) { m_executionStartTimeHasBeenSet = true; m_executionStartTime = std::forward<ExecutionStartTimeT>(value); }
    template<typename ExecutionStartTimeT = Aws::Utils::DateTime>
    StepExecution& WithExecutionStartTime(ExecutionStartTimeT&& value) { SetExecutionStartTime(std::forward<ExecutionStartTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If a step has finished execution, this contains the time the execution ended.
     * If the step hasn't yet concluded, this field isn't populated.</p>
     */
    inline const Aws::Utils::DateTime& GetExecutionEndTime() const { return m_executionEndTime; }
    inline bool ExecutionEndTimeHasBeenSet() const { return m_executionEndTimeHasBeenSet; }
    template<typename ExecutionEndTimeT = Aws::Utils::DateTime>
    void SetExecutionEndTime(ExecutionEndTimeT&& value) { m_executionEndTimeHasBeenSet = true; m_executionEndTime = std::forward<ExecutionEndTimeT>(value); }
    template<typename ExecutionEndTimeT = Aws::Utils::DateTime>
    StepExecution& WithExecutionEndTime(ExecutionEndTimeT&& value) { SetExecutionEndTime(std::forward<ExecutionEndTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The execution status for this step.</p>
     */
    inline AutomationExecutionStatus GetStepStatus() const { return m_stepStatus; }
    inline bool StepStatusHasBeenSet() const { return m_stepStatusHasBeenSet; }
    inline void SetStepStatus(AutomationExecutionStatus value) { m_stepStatusHasBeenSet = true; m_stepStatus = value; }
    inline StepExecution& WithStepStatus(AutomationExecutionStatus value) { SetStepStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The response code returned by the execution of the step.</p>
     */
    inline const Aws::String& GetResponseCode() const { return m_responseCode; }
    inline bool ResponseCodeHasBeenSet() const { return m_responseCodeHasBeenSet; }
    template<typename ResponseCodeT = Aws::String>
    void SetResponseCode(ResponseCodeT&& value) { m_responseCodeHasBeenSet = true; m_responseCode = std::forward<ResponseCodeT>(value); }
    template<typename ResponseCodeT = Aws::String>
    StepExecution& WithResponseCode(ResponseCodeT&& value) { SetResponseCode(std::forward<ResponseCodeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Fully-resolved values passed into the step before execution.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetInputs() const { return m_inputs; }
    inline bool InputsHasBeenSet() const { return m_inputsHasBeenSet; }
    template<typename InputsT = Aws::Map<Aws::String, Aws::String>>
    void SetInputs(InputsT&& value) { m_inputsHasBeenSet = true; m_inputs = std::forward<InputsT>(value); }
    template<typename InputsT = Aws::Map<Aws::String, Aws::String>>
    StepExecution& WithInputs(InputsT&& value) { SetInputs(std::forward<InputsT>(value)); return *this;}
    template<typename InputsKeyT = Aws::String, typename InputsValueT = Aws::String>
    StepExecution& AddInputs(InputsKeyT&& key, InputsValueT&& value) {
      m_inputsHasBeenSet = true; m_inputs.emplace(std::forward<InputsKeyT>(key), std::forward<InputsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>Returned values from the execution of the step.</p>
     */
    inline const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& GetOutputs() const { return m_outputs; }
    inline bool OutputsHasBeenSet() const { return m_outputsHasBeenSet; }
    template<typename OutputsT = Aws::Map<Aws::String, Aws::Vector<Aws::String>>>
    void SetOutputs(OutputsT&& value) { m_outputsHasBeenSet = true; m_outputs = std::forward<OutputsT>(value); }
    template<typename OutputsT = Aws::Map<Aws::String, Aws::Vector<Aws::String>>>
    StepExecution& WithOutputs(OutputsT&& value) { SetOutputs(std::forward<OutputsT>(value)); return *this;}
    template<typename OutputsKeyT = Aws::String, typename OutputsValueT = Aws::Vector<Aws::String>>
    StepExecution& AddOutputs(OutputsKeyT&& key, OutputsValueT&& value) {
      m_outputsHasBeenSet = true; m_outputs.emplace(std::forward<OutputsKeyT>(key), std::forward<OutputsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>A message associated with the response code for an execution.</p>
     */
    inline const Aws::String& GetResponse() const { return m_response; }
    inline bool ResponseHasBeenSet() const { return m_responseHasBeenSet; }
    template<typename ResponseT = Aws::String>
    void SetResponse(ResponseT&& value) { m_responseHasBeenSet = true; m_response = std::forward<ResponseT>(value); }
    template<typename ResponseT = Aws::String>
    StepExecution& WithResponse(ResponseT&& value) { SetResponse(std::forward<ResponseT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If a step failed, this message explains why the execution failed.</p>
     */
    inline const Aws::String& GetFailureMessage() const { return m_failureMessage; }
    inline bool FailureMessageHasBeenSet() const { return m_failureMessageHasBeenSet; }
    template<typename FailureMessageT = Aws::String>
    void SetFailureMessage(FailureMessageT&& value) { m_failureMessageHasBeenSet = true; m_failureMessage = std::forward<FailureMessageT>(value); }
    template<typename FailureMessageT = Aws::String>
    StepExecution& WithFailureMessage(FailureMessageT&& value) { SetFailureMessage(std::forward<FailureMessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the Automation failure.</p>
     */
    inline const FailureDetails& GetFailureDetails() const { return m_failureDetails; }
    inline bool FailureDetailsHasBeenSet() const { return m_failureDetailsHasBeenSet; }
    template<typename FailureDetailsT = FailureDetails>
    void SetFailureDetails(FailureDetailsT&& value) { m_failureDetailsHasBeenSet = true; m_failureDetails = std::forward<FailureDetailsT>(value); }
    template<typename FailureDetailsT = FailureDetails>
    StepExecution& WithFailureDetails(FailureDetailsT&& value) { SetFailureDetails(std::forward<FailureDetailsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique ID of a step execution.</p>
     */
    inline const Aws::String& GetStepExecutionId() const { return m_stepExecutionId; }
    inline bool StepExecutionIdHasBeenSet() const { return m_stepExecutionIdHasBeenSet; }
    template<typename StepExecutionIdT = Aws::String>
    void SetStepExecutionId(StepExecutionIdT&& value) { m_stepExecutionIdHasBeenSet = true; m_stepExecutionId = std::forward<StepExecutionIdT>(value); }
    template<typename StepExecutionIdT = Aws::String>
    StepExecution& WithStepExecutionId(StepExecutionIdT&& value) { SetStepExecutionId(std::forward<StepExecutionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A user-specified list of parameters to override when running a step.</p>
     */
    inline const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& GetOverriddenParameters() const { return m_overriddenParameters; }
    inline bool OverriddenParametersHasBeenSet() const { return m_overriddenParametersHasBeenSet; }
    template<typename OverriddenParametersT = Aws::Map<Aws::String, Aws::Vector<Aws::String>>>
    void SetOverriddenParameters(OverriddenParametersT&& value) { m_overriddenParametersHasBeenSet = true; m_overriddenParameters = std::forward<OverriddenParametersT>(value); }
    template<typename OverriddenParametersT = Aws::Map<Aws::String, Aws::Vector<Aws::String>>>
    StepExecution& WithOverriddenParameters(OverriddenParametersT&& value) { SetOverriddenParameters(std::forward<OverriddenParametersT>(value)); return *this;}
    template<typename OverriddenParametersKeyT = Aws::String, typename OverriddenParametersValueT = Aws::Vector<Aws::String>>
    StepExecution& AddOverriddenParameters(OverriddenParametersKeyT&& key, OverriddenParametersValueT&& value) {
      m_overriddenParametersHasBeenSet = true; m_overriddenParameters.emplace(std::forward<OverriddenParametersKeyT>(key), std::forward<OverriddenParametersValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The flag which can be used to end automation no matter whether the step
     * succeeds or fails.</p>
     */
    inline bool GetIsEnd() const { return m_isEnd; }
    inline bool IsEndHasBeenSet() const { return m_isEndHasBeenSet; }
    inline void SetIsEnd(bool value) { m_isEndHasBeenSet = true; m_isEnd = value; }
    inline StepExecution& WithIsEnd(bool value) { SetIsEnd(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The next step after the step succeeds.</p>
     */
    inline const Aws::String& GetNextStep() const { return m_nextStep; }
    inline bool NextStepHasBeenSet() const { return m_nextStepHasBeenSet; }
    template<typename NextStepT = Aws::String>
    void SetNextStep(NextStepT&& value) { m_nextStepHasBeenSet = true; m_nextStep = std::forward<NextStepT>(value); }
    template<typename NextStepT = Aws::String>
    StepExecution& WithNextStep(NextStepT&& value) { SetNextStep(std::forward<NextStepT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The flag which can be used to help decide whether the failure of current step
     * leads to the Automation failure.</p>
     */
    inline bool GetIsCritical() const { return m_isCritical; }
    inline bool IsCriticalHasBeenSet() const { return m_isCriticalHasBeenSet; }
    inline void SetIsCritical(bool value) { m_isCriticalHasBeenSet = true; m_isCritical = value; }
    inline StepExecution& WithIsCritical(bool value) { SetIsCritical(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Strategies used when step fails, we support Continue and Abort. Abort will
     * fail the automation when the step fails. Continue will ignore the failure of
     * current step and allow automation to run the next step. With conditional
     * branching, we add step:stepName to support the automation to go to another
     * specific step.</p>
     */
    inline const Aws::Vector<Aws::String>& GetValidNextSteps() const { return m_validNextSteps; }
    inline bool ValidNextStepsHasBeenSet() const { return m_validNextStepsHasBeenSet; }
    template<typename ValidNextStepsT = Aws::Vector<Aws::String>>
    void SetValidNextSteps(ValidNextStepsT&& value) { m_validNextStepsHasBeenSet = true; m_validNextSteps = std::forward<ValidNextStepsT>(value); }
    template<typename ValidNextStepsT = Aws::Vector<Aws::String>>
    StepExecution& WithValidNextSteps(ValidNextStepsT&& value) { SetValidNextSteps(std::forward<ValidNextStepsT>(value)); return *this;}
    template<typename ValidNextStepsT = Aws::String>
    StepExecution& AddValidNextSteps(ValidNextStepsT&& value) { m_validNextStepsHasBeenSet = true; m_validNextSteps.emplace_back(std::forward<ValidNextStepsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The targets for the step execution.</p>
     */
    inline const Aws::Vector<Target>& GetTargets() const { return m_targets; }
    inline bool TargetsHasBeenSet() const { return m_targetsHasBeenSet; }
    template<typename TargetsT = Aws::Vector<Target>>
    void SetTargets(TargetsT&& value) { m_targetsHasBeenSet = true; m_targets = std::forward<TargetsT>(value); }
    template<typename TargetsT = Aws::Vector<Target>>
    StepExecution& WithTargets(TargetsT&& value) { SetTargets(std::forward<TargetsT>(value)); return *this;}
    template<typename TargetsT = Target>
    StepExecution& AddTargets(TargetsT&& value) { m_targetsHasBeenSet = true; m_targets.emplace_back(std::forward<TargetsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The combination of Amazon Web Services Regions and Amazon Web Services
     * accounts targeted by the current Automation execution.</p>
     */
    inline const TargetLocation& GetTargetLocation() const { return m_targetLocation; }
    inline bool TargetLocationHasBeenSet() const { return m_targetLocationHasBeenSet; }
    template<typename TargetLocationT = TargetLocation>
    void SetTargetLocation(TargetLocationT&& value) { m_targetLocationHasBeenSet = true; m_targetLocation = std::forward<TargetLocationT>(value); }
    template<typename TargetLocationT = TargetLocation>
    StepExecution& WithTargetLocation(TargetLocationT&& value) { SetTargetLocation(std::forward<TargetLocationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The CloudWatch alarms that were invoked by the automation.</p>
     */
    inline const Aws::Vector<AlarmStateInformation>& GetTriggeredAlarms() const { return m_triggeredAlarms; }
    inline bool TriggeredAlarmsHasBeenSet() const { return m_triggeredAlarmsHasBeenSet; }
    template<typename TriggeredAlarmsT = Aws::Vector<AlarmStateInformation>>
    void SetTriggeredAlarms(TriggeredAlarmsT&& value) { m_triggeredAlarmsHasBeenSet = true; m_triggeredAlarms = std::forward<TriggeredAlarmsT>(value); }
    template<typename TriggeredAlarmsT = Aws::Vector<AlarmStateInformation>>
    StepExecution& WithTriggeredAlarms(TriggeredAlarmsT&& value) { SetTriggeredAlarms(std::forward<TriggeredAlarmsT>(value)); return *this;}
    template<typename TriggeredAlarmsT = AlarmStateInformation>
    StepExecution& AddTriggeredAlarms(TriggeredAlarmsT&& value) { m_triggeredAlarmsHasBeenSet = true; m_triggeredAlarms.emplace_back(std::forward<TriggeredAlarmsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Information about the parent step.</p>
     */
    inline const ParentStepDetails& GetParentStepDetails() const { return m_parentStepDetails; }
    inline bool ParentStepDetailsHasBeenSet() const { return m_parentStepDetailsHasBeenSet; }
    template<typename ParentStepDetailsT = ParentStepDetails>
    void SetParentStepDetails(ParentStepDetailsT&& value) { m_parentStepDetailsHasBeenSet = true; m_parentStepDetails = std::forward<ParentStepDetailsT>(value); }
    template<typename ParentStepDetailsT = ParentStepDetails>
    StepExecution& WithParentStepDetails(ParentStepDetailsT&& value) { SetParentStepDetails(std::forward<ParentStepDetailsT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_stepName;
    bool m_stepNameHasBeenSet = false;

    Aws::String m_action;
    bool m_actionHasBeenSet = false;

    long long m_timeoutSeconds{0};
    bool m_timeoutSecondsHasBeenSet = false;

    Aws::String m_onFailure;
    bool m_onFailureHasBeenSet = false;

    int m_maxAttempts{0};
    bool m_maxAttemptsHasBeenSet = false;

    Aws::Utils::DateTime m_executionStartTime{};
    bool m_executionStartTimeHasBeenSet = false;

    Aws::Utils::DateTime m_executionEndTime{};
    bool m_executionEndTimeHasBeenSet = false;

    AutomationExecutionStatus m_stepStatus{AutomationExecutionStatus::NOT_SET};
    bool m_stepStatusHasBeenSet = false;

    Aws::String m_responseCode;
    bool m_responseCodeHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_inputs;
    bool m_inputsHasBeenSet = false;

    Aws::Map<Aws::String, Aws::Vector<Aws::String>> m_outputs;
    bool m_outputsHasBeenSet = false;

    Aws::String m_response;
    bool m_responseHasBeenSet = false;

    Aws::String m_failureMessage;
    bool m_failureMessageHasBeenSet = false;

    FailureDetails m_failureDetails;
    bool m_failureDetailsHasBeenSet = false;

    Aws::String m_stepExecutionId;
    bool m_stepExecutionIdHasBeenSet = false;

    Aws::Map<Aws::String, Aws::Vector<Aws::String>> m_overriddenParameters;
    bool m_overriddenParametersHasBeenSet = false;

    bool m_isEnd{false};
    bool m_isEndHasBeenSet = false;

    Aws::String m_nextStep;
    bool m_nextStepHasBeenSet = false;

    bool m_isCritical{false};
    bool m_isCriticalHasBeenSet = false;

    Aws::Vector<Aws::String> m_validNextSteps;
    bool m_validNextStepsHasBeenSet = false;

    Aws::Vector<Target> m_targets;
    bool m_targetsHasBeenSet = false;

    TargetLocation m_targetLocation;
    bool m_targetLocationHasBeenSet = false;

    Aws::Vector<AlarmStateInformation> m_triggeredAlarms;
    bool m_triggeredAlarmsHasBeenSet = false;

    ParentStepDetails m_parentStepDetails;
    bool m_parentStepDetailsHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
