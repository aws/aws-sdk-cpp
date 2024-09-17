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
    AWS_SSM_API StepExecution();
    AWS_SSM_API StepExecution(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API StepExecution& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of this execution step.</p>
     */
    inline const Aws::String& GetStepName() const{ return m_stepName; }
    inline bool StepNameHasBeenSet() const { return m_stepNameHasBeenSet; }
    inline void SetStepName(const Aws::String& value) { m_stepNameHasBeenSet = true; m_stepName = value; }
    inline void SetStepName(Aws::String&& value) { m_stepNameHasBeenSet = true; m_stepName = std::move(value); }
    inline void SetStepName(const char* value) { m_stepNameHasBeenSet = true; m_stepName.assign(value); }
    inline StepExecution& WithStepName(const Aws::String& value) { SetStepName(value); return *this;}
    inline StepExecution& WithStepName(Aws::String&& value) { SetStepName(std::move(value)); return *this;}
    inline StepExecution& WithStepName(const char* value) { SetStepName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The action this step performs. The action determines the behavior of the
     * step.</p>
     */
    inline const Aws::String& GetAction() const{ return m_action; }
    inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }
    inline void SetAction(const Aws::String& value) { m_actionHasBeenSet = true; m_action = value; }
    inline void SetAction(Aws::String&& value) { m_actionHasBeenSet = true; m_action = std::move(value); }
    inline void SetAction(const char* value) { m_actionHasBeenSet = true; m_action.assign(value); }
    inline StepExecution& WithAction(const Aws::String& value) { SetAction(value); return *this;}
    inline StepExecution& WithAction(Aws::String&& value) { SetAction(std::move(value)); return *this;}
    inline StepExecution& WithAction(const char* value) { SetAction(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timeout seconds of the step.</p>
     */
    inline long long GetTimeoutSeconds() const{ return m_timeoutSeconds; }
    inline bool TimeoutSecondsHasBeenSet() const { return m_timeoutSecondsHasBeenSet; }
    inline void SetTimeoutSeconds(long long value) { m_timeoutSecondsHasBeenSet = true; m_timeoutSeconds = value; }
    inline StepExecution& WithTimeoutSeconds(long long value) { SetTimeoutSeconds(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The action to take if the step fails. The default value is
     * <code>Abort</code>.</p>
     */
    inline const Aws::String& GetOnFailure() const{ return m_onFailure; }
    inline bool OnFailureHasBeenSet() const { return m_onFailureHasBeenSet; }
    inline void SetOnFailure(const Aws::String& value) { m_onFailureHasBeenSet = true; m_onFailure = value; }
    inline void SetOnFailure(Aws::String&& value) { m_onFailureHasBeenSet = true; m_onFailure = std::move(value); }
    inline void SetOnFailure(const char* value) { m_onFailureHasBeenSet = true; m_onFailure.assign(value); }
    inline StepExecution& WithOnFailure(const Aws::String& value) { SetOnFailure(value); return *this;}
    inline StepExecution& WithOnFailure(Aws::String&& value) { SetOnFailure(std::move(value)); return *this;}
    inline StepExecution& WithOnFailure(const char* value) { SetOnFailure(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of tries to run the action of the step. The default value
     * is <code>1</code>.</p>
     */
    inline int GetMaxAttempts() const{ return m_maxAttempts; }
    inline bool MaxAttemptsHasBeenSet() const { return m_maxAttemptsHasBeenSet; }
    inline void SetMaxAttempts(int value) { m_maxAttemptsHasBeenSet = true; m_maxAttempts = value; }
    inline StepExecution& WithMaxAttempts(int value) { SetMaxAttempts(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If a step has begun execution, this contains the time the step started. If
     * the step is in Pending status, this field isn't populated.</p>
     */
    inline const Aws::Utils::DateTime& GetExecutionStartTime() const{ return m_executionStartTime; }
    inline bool ExecutionStartTimeHasBeenSet() const { return m_executionStartTimeHasBeenSet; }
    inline void SetExecutionStartTime(const Aws::Utils::DateTime& value) { m_executionStartTimeHasBeenSet = true; m_executionStartTime = value; }
    inline void SetExecutionStartTime(Aws::Utils::DateTime&& value) { m_executionStartTimeHasBeenSet = true; m_executionStartTime = std::move(value); }
    inline StepExecution& WithExecutionStartTime(const Aws::Utils::DateTime& value) { SetExecutionStartTime(value); return *this;}
    inline StepExecution& WithExecutionStartTime(Aws::Utils::DateTime&& value) { SetExecutionStartTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If a step has finished execution, this contains the time the execution ended.
     * If the step hasn't yet concluded, this field isn't populated.</p>
     */
    inline const Aws::Utils::DateTime& GetExecutionEndTime() const{ return m_executionEndTime; }
    inline bool ExecutionEndTimeHasBeenSet() const { return m_executionEndTimeHasBeenSet; }
    inline void SetExecutionEndTime(const Aws::Utils::DateTime& value) { m_executionEndTimeHasBeenSet = true; m_executionEndTime = value; }
    inline void SetExecutionEndTime(Aws::Utils::DateTime&& value) { m_executionEndTimeHasBeenSet = true; m_executionEndTime = std::move(value); }
    inline StepExecution& WithExecutionEndTime(const Aws::Utils::DateTime& value) { SetExecutionEndTime(value); return *this;}
    inline StepExecution& WithExecutionEndTime(Aws::Utils::DateTime&& value) { SetExecutionEndTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The execution status for this step.</p>
     */
    inline const AutomationExecutionStatus& GetStepStatus() const{ return m_stepStatus; }
    inline bool StepStatusHasBeenSet() const { return m_stepStatusHasBeenSet; }
    inline void SetStepStatus(const AutomationExecutionStatus& value) { m_stepStatusHasBeenSet = true; m_stepStatus = value; }
    inline void SetStepStatus(AutomationExecutionStatus&& value) { m_stepStatusHasBeenSet = true; m_stepStatus = std::move(value); }
    inline StepExecution& WithStepStatus(const AutomationExecutionStatus& value) { SetStepStatus(value); return *this;}
    inline StepExecution& WithStepStatus(AutomationExecutionStatus&& value) { SetStepStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The response code returned by the execution of the step.</p>
     */
    inline const Aws::String& GetResponseCode() const{ return m_responseCode; }
    inline bool ResponseCodeHasBeenSet() const { return m_responseCodeHasBeenSet; }
    inline void SetResponseCode(const Aws::String& value) { m_responseCodeHasBeenSet = true; m_responseCode = value; }
    inline void SetResponseCode(Aws::String&& value) { m_responseCodeHasBeenSet = true; m_responseCode = std::move(value); }
    inline void SetResponseCode(const char* value) { m_responseCodeHasBeenSet = true; m_responseCode.assign(value); }
    inline StepExecution& WithResponseCode(const Aws::String& value) { SetResponseCode(value); return *this;}
    inline StepExecution& WithResponseCode(Aws::String&& value) { SetResponseCode(std::move(value)); return *this;}
    inline StepExecution& WithResponseCode(const char* value) { SetResponseCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Fully-resolved values passed into the step before execution.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetInputs() const{ return m_inputs; }
    inline bool InputsHasBeenSet() const { return m_inputsHasBeenSet; }
    inline void SetInputs(const Aws::Map<Aws::String, Aws::String>& value) { m_inputsHasBeenSet = true; m_inputs = value; }
    inline void SetInputs(Aws::Map<Aws::String, Aws::String>&& value) { m_inputsHasBeenSet = true; m_inputs = std::move(value); }
    inline StepExecution& WithInputs(const Aws::Map<Aws::String, Aws::String>& value) { SetInputs(value); return *this;}
    inline StepExecution& WithInputs(Aws::Map<Aws::String, Aws::String>&& value) { SetInputs(std::move(value)); return *this;}
    inline StepExecution& AddInputs(const Aws::String& key, const Aws::String& value) { m_inputsHasBeenSet = true; m_inputs.emplace(key, value); return *this; }
    inline StepExecution& AddInputs(Aws::String&& key, const Aws::String& value) { m_inputsHasBeenSet = true; m_inputs.emplace(std::move(key), value); return *this; }
    inline StepExecution& AddInputs(const Aws::String& key, Aws::String&& value) { m_inputsHasBeenSet = true; m_inputs.emplace(key, std::move(value)); return *this; }
    inline StepExecution& AddInputs(Aws::String&& key, Aws::String&& value) { m_inputsHasBeenSet = true; m_inputs.emplace(std::move(key), std::move(value)); return *this; }
    inline StepExecution& AddInputs(const char* key, Aws::String&& value) { m_inputsHasBeenSet = true; m_inputs.emplace(key, std::move(value)); return *this; }
    inline StepExecution& AddInputs(Aws::String&& key, const char* value) { m_inputsHasBeenSet = true; m_inputs.emplace(std::move(key), value); return *this; }
    inline StepExecution& AddInputs(const char* key, const char* value) { m_inputsHasBeenSet = true; m_inputs.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Returned values from the execution of the step.</p>
     */
    inline const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& GetOutputs() const{ return m_outputs; }
    inline bool OutputsHasBeenSet() const { return m_outputsHasBeenSet; }
    inline void SetOutputs(const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& value) { m_outputsHasBeenSet = true; m_outputs = value; }
    inline void SetOutputs(Aws::Map<Aws::String, Aws::Vector<Aws::String>>&& value) { m_outputsHasBeenSet = true; m_outputs = std::move(value); }
    inline StepExecution& WithOutputs(const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& value) { SetOutputs(value); return *this;}
    inline StepExecution& WithOutputs(Aws::Map<Aws::String, Aws::Vector<Aws::String>>&& value) { SetOutputs(std::move(value)); return *this;}
    inline StepExecution& AddOutputs(const Aws::String& key, const Aws::Vector<Aws::String>& value) { m_outputsHasBeenSet = true; m_outputs.emplace(key, value); return *this; }
    inline StepExecution& AddOutputs(Aws::String&& key, const Aws::Vector<Aws::String>& value) { m_outputsHasBeenSet = true; m_outputs.emplace(std::move(key), value); return *this; }
    inline StepExecution& AddOutputs(const Aws::String& key, Aws::Vector<Aws::String>&& value) { m_outputsHasBeenSet = true; m_outputs.emplace(key, std::move(value)); return *this; }
    inline StepExecution& AddOutputs(Aws::String&& key, Aws::Vector<Aws::String>&& value) { m_outputsHasBeenSet = true; m_outputs.emplace(std::move(key), std::move(value)); return *this; }
    inline StepExecution& AddOutputs(const char* key, Aws::Vector<Aws::String>&& value) { m_outputsHasBeenSet = true; m_outputs.emplace(key, std::move(value)); return *this; }
    inline StepExecution& AddOutputs(const char* key, const Aws::Vector<Aws::String>& value) { m_outputsHasBeenSet = true; m_outputs.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>A message associated with the response code for an execution.</p>
     */
    inline const Aws::String& GetResponse() const{ return m_response; }
    inline bool ResponseHasBeenSet() const { return m_responseHasBeenSet; }
    inline void SetResponse(const Aws::String& value) { m_responseHasBeenSet = true; m_response = value; }
    inline void SetResponse(Aws::String&& value) { m_responseHasBeenSet = true; m_response = std::move(value); }
    inline void SetResponse(const char* value) { m_responseHasBeenSet = true; m_response.assign(value); }
    inline StepExecution& WithResponse(const Aws::String& value) { SetResponse(value); return *this;}
    inline StepExecution& WithResponse(Aws::String&& value) { SetResponse(std::move(value)); return *this;}
    inline StepExecution& WithResponse(const char* value) { SetResponse(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If a step failed, this message explains why the execution failed.</p>
     */
    inline const Aws::String& GetFailureMessage() const{ return m_failureMessage; }
    inline bool FailureMessageHasBeenSet() const { return m_failureMessageHasBeenSet; }
    inline void SetFailureMessage(const Aws::String& value) { m_failureMessageHasBeenSet = true; m_failureMessage = value; }
    inline void SetFailureMessage(Aws::String&& value) { m_failureMessageHasBeenSet = true; m_failureMessage = std::move(value); }
    inline void SetFailureMessage(const char* value) { m_failureMessageHasBeenSet = true; m_failureMessage.assign(value); }
    inline StepExecution& WithFailureMessage(const Aws::String& value) { SetFailureMessage(value); return *this;}
    inline StepExecution& WithFailureMessage(Aws::String&& value) { SetFailureMessage(std::move(value)); return *this;}
    inline StepExecution& WithFailureMessage(const char* value) { SetFailureMessage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the Automation failure.</p>
     */
    inline const FailureDetails& GetFailureDetails() const{ return m_failureDetails; }
    inline bool FailureDetailsHasBeenSet() const { return m_failureDetailsHasBeenSet; }
    inline void SetFailureDetails(const FailureDetails& value) { m_failureDetailsHasBeenSet = true; m_failureDetails = value; }
    inline void SetFailureDetails(FailureDetails&& value) { m_failureDetailsHasBeenSet = true; m_failureDetails = std::move(value); }
    inline StepExecution& WithFailureDetails(const FailureDetails& value) { SetFailureDetails(value); return *this;}
    inline StepExecution& WithFailureDetails(FailureDetails&& value) { SetFailureDetails(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique ID of a step execution.</p>
     */
    inline const Aws::String& GetStepExecutionId() const{ return m_stepExecutionId; }
    inline bool StepExecutionIdHasBeenSet() const { return m_stepExecutionIdHasBeenSet; }
    inline void SetStepExecutionId(const Aws::String& value) { m_stepExecutionIdHasBeenSet = true; m_stepExecutionId = value; }
    inline void SetStepExecutionId(Aws::String&& value) { m_stepExecutionIdHasBeenSet = true; m_stepExecutionId = std::move(value); }
    inline void SetStepExecutionId(const char* value) { m_stepExecutionIdHasBeenSet = true; m_stepExecutionId.assign(value); }
    inline StepExecution& WithStepExecutionId(const Aws::String& value) { SetStepExecutionId(value); return *this;}
    inline StepExecution& WithStepExecutionId(Aws::String&& value) { SetStepExecutionId(std::move(value)); return *this;}
    inline StepExecution& WithStepExecutionId(const char* value) { SetStepExecutionId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A user-specified list of parameters to override when running a step.</p>
     */
    inline const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& GetOverriddenParameters() const{ return m_overriddenParameters; }
    inline bool OverriddenParametersHasBeenSet() const { return m_overriddenParametersHasBeenSet; }
    inline void SetOverriddenParameters(const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& value) { m_overriddenParametersHasBeenSet = true; m_overriddenParameters = value; }
    inline void SetOverriddenParameters(Aws::Map<Aws::String, Aws::Vector<Aws::String>>&& value) { m_overriddenParametersHasBeenSet = true; m_overriddenParameters = std::move(value); }
    inline StepExecution& WithOverriddenParameters(const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& value) { SetOverriddenParameters(value); return *this;}
    inline StepExecution& WithOverriddenParameters(Aws::Map<Aws::String, Aws::Vector<Aws::String>>&& value) { SetOverriddenParameters(std::move(value)); return *this;}
    inline StepExecution& AddOverriddenParameters(const Aws::String& key, const Aws::Vector<Aws::String>& value) { m_overriddenParametersHasBeenSet = true; m_overriddenParameters.emplace(key, value); return *this; }
    inline StepExecution& AddOverriddenParameters(Aws::String&& key, const Aws::Vector<Aws::String>& value) { m_overriddenParametersHasBeenSet = true; m_overriddenParameters.emplace(std::move(key), value); return *this; }
    inline StepExecution& AddOverriddenParameters(const Aws::String& key, Aws::Vector<Aws::String>&& value) { m_overriddenParametersHasBeenSet = true; m_overriddenParameters.emplace(key, std::move(value)); return *this; }
    inline StepExecution& AddOverriddenParameters(Aws::String&& key, Aws::Vector<Aws::String>&& value) { m_overriddenParametersHasBeenSet = true; m_overriddenParameters.emplace(std::move(key), std::move(value)); return *this; }
    inline StepExecution& AddOverriddenParameters(const char* key, Aws::Vector<Aws::String>&& value) { m_overriddenParametersHasBeenSet = true; m_overriddenParameters.emplace(key, std::move(value)); return *this; }
    inline StepExecution& AddOverriddenParameters(const char* key, const Aws::Vector<Aws::String>& value) { m_overriddenParametersHasBeenSet = true; m_overriddenParameters.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The flag which can be used to end automation no matter whether the step
     * succeeds or fails.</p>
     */
    inline bool GetIsEnd() const{ return m_isEnd; }
    inline bool IsEndHasBeenSet() const { return m_isEndHasBeenSet; }
    inline void SetIsEnd(bool value) { m_isEndHasBeenSet = true; m_isEnd = value; }
    inline StepExecution& WithIsEnd(bool value) { SetIsEnd(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The next step after the step succeeds.</p>
     */
    inline const Aws::String& GetNextStep() const{ return m_nextStep; }
    inline bool NextStepHasBeenSet() const { return m_nextStepHasBeenSet; }
    inline void SetNextStep(const Aws::String& value) { m_nextStepHasBeenSet = true; m_nextStep = value; }
    inline void SetNextStep(Aws::String&& value) { m_nextStepHasBeenSet = true; m_nextStep = std::move(value); }
    inline void SetNextStep(const char* value) { m_nextStepHasBeenSet = true; m_nextStep.assign(value); }
    inline StepExecution& WithNextStep(const Aws::String& value) { SetNextStep(value); return *this;}
    inline StepExecution& WithNextStep(Aws::String&& value) { SetNextStep(std::move(value)); return *this;}
    inline StepExecution& WithNextStep(const char* value) { SetNextStep(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The flag which can be used to help decide whether the failure of current step
     * leads to the Automation failure.</p>
     */
    inline bool GetIsCritical() const{ return m_isCritical; }
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
    inline const Aws::Vector<Aws::String>& GetValidNextSteps() const{ return m_validNextSteps; }
    inline bool ValidNextStepsHasBeenSet() const { return m_validNextStepsHasBeenSet; }
    inline void SetValidNextSteps(const Aws::Vector<Aws::String>& value) { m_validNextStepsHasBeenSet = true; m_validNextSteps = value; }
    inline void SetValidNextSteps(Aws::Vector<Aws::String>&& value) { m_validNextStepsHasBeenSet = true; m_validNextSteps = std::move(value); }
    inline StepExecution& WithValidNextSteps(const Aws::Vector<Aws::String>& value) { SetValidNextSteps(value); return *this;}
    inline StepExecution& WithValidNextSteps(Aws::Vector<Aws::String>&& value) { SetValidNextSteps(std::move(value)); return *this;}
    inline StepExecution& AddValidNextSteps(const Aws::String& value) { m_validNextStepsHasBeenSet = true; m_validNextSteps.push_back(value); return *this; }
    inline StepExecution& AddValidNextSteps(Aws::String&& value) { m_validNextStepsHasBeenSet = true; m_validNextSteps.push_back(std::move(value)); return *this; }
    inline StepExecution& AddValidNextSteps(const char* value) { m_validNextStepsHasBeenSet = true; m_validNextSteps.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The targets for the step execution.</p>
     */
    inline const Aws::Vector<Target>& GetTargets() const{ return m_targets; }
    inline bool TargetsHasBeenSet() const { return m_targetsHasBeenSet; }
    inline void SetTargets(const Aws::Vector<Target>& value) { m_targetsHasBeenSet = true; m_targets = value; }
    inline void SetTargets(Aws::Vector<Target>&& value) { m_targetsHasBeenSet = true; m_targets = std::move(value); }
    inline StepExecution& WithTargets(const Aws::Vector<Target>& value) { SetTargets(value); return *this;}
    inline StepExecution& WithTargets(Aws::Vector<Target>&& value) { SetTargets(std::move(value)); return *this;}
    inline StepExecution& AddTargets(const Target& value) { m_targetsHasBeenSet = true; m_targets.push_back(value); return *this; }
    inline StepExecution& AddTargets(Target&& value) { m_targetsHasBeenSet = true; m_targets.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The combination of Amazon Web Services Regions and Amazon Web Services
     * accounts targeted by the current Automation execution.</p>
     */
    inline const TargetLocation& GetTargetLocation() const{ return m_targetLocation; }
    inline bool TargetLocationHasBeenSet() const { return m_targetLocationHasBeenSet; }
    inline void SetTargetLocation(const TargetLocation& value) { m_targetLocationHasBeenSet = true; m_targetLocation = value; }
    inline void SetTargetLocation(TargetLocation&& value) { m_targetLocationHasBeenSet = true; m_targetLocation = std::move(value); }
    inline StepExecution& WithTargetLocation(const TargetLocation& value) { SetTargetLocation(value); return *this;}
    inline StepExecution& WithTargetLocation(TargetLocation&& value) { SetTargetLocation(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The CloudWatch alarms that were invoked by the automation.</p>
     */
    inline const Aws::Vector<AlarmStateInformation>& GetTriggeredAlarms() const{ return m_triggeredAlarms; }
    inline bool TriggeredAlarmsHasBeenSet() const { return m_triggeredAlarmsHasBeenSet; }
    inline void SetTriggeredAlarms(const Aws::Vector<AlarmStateInformation>& value) { m_triggeredAlarmsHasBeenSet = true; m_triggeredAlarms = value; }
    inline void SetTriggeredAlarms(Aws::Vector<AlarmStateInformation>&& value) { m_triggeredAlarmsHasBeenSet = true; m_triggeredAlarms = std::move(value); }
    inline StepExecution& WithTriggeredAlarms(const Aws::Vector<AlarmStateInformation>& value) { SetTriggeredAlarms(value); return *this;}
    inline StepExecution& WithTriggeredAlarms(Aws::Vector<AlarmStateInformation>&& value) { SetTriggeredAlarms(std::move(value)); return *this;}
    inline StepExecution& AddTriggeredAlarms(const AlarmStateInformation& value) { m_triggeredAlarmsHasBeenSet = true; m_triggeredAlarms.push_back(value); return *this; }
    inline StepExecution& AddTriggeredAlarms(AlarmStateInformation&& value) { m_triggeredAlarmsHasBeenSet = true; m_triggeredAlarms.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Information about the parent step.</p>
     */
    inline const ParentStepDetails& GetParentStepDetails() const{ return m_parentStepDetails; }
    inline bool ParentStepDetailsHasBeenSet() const { return m_parentStepDetailsHasBeenSet; }
    inline void SetParentStepDetails(const ParentStepDetails& value) { m_parentStepDetailsHasBeenSet = true; m_parentStepDetails = value; }
    inline void SetParentStepDetails(ParentStepDetails&& value) { m_parentStepDetailsHasBeenSet = true; m_parentStepDetails = std::move(value); }
    inline StepExecution& WithParentStepDetails(const ParentStepDetails& value) { SetParentStepDetails(value); return *this;}
    inline StepExecution& WithParentStepDetails(ParentStepDetails&& value) { SetParentStepDetails(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_stepName;
    bool m_stepNameHasBeenSet = false;

    Aws::String m_action;
    bool m_actionHasBeenSet = false;

    long long m_timeoutSeconds;
    bool m_timeoutSecondsHasBeenSet = false;

    Aws::String m_onFailure;
    bool m_onFailureHasBeenSet = false;

    int m_maxAttempts;
    bool m_maxAttemptsHasBeenSet = false;

    Aws::Utils::DateTime m_executionStartTime;
    bool m_executionStartTimeHasBeenSet = false;

    Aws::Utils::DateTime m_executionEndTime;
    bool m_executionEndTimeHasBeenSet = false;

    AutomationExecutionStatus m_stepStatus;
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

    bool m_isEnd;
    bool m_isEndHasBeenSet = false;

    Aws::String m_nextStep;
    bool m_nextStepHasBeenSet = false;

    bool m_isCritical;
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
