/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/monitoring/CloudWatch_EXPORTS.h>
#include <aws/monitoring/model/ComparisonOperator.h>
#include <aws/monitoring/model/EvaluationState.h>
#include <aws/monitoring/model/ScheduledQueryConfiguration.h>
#include <aws/monitoring/model/StateValue.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Cbor {
class CborValue;
}  // namespace Cbor
}  // namespace Utils
namespace CloudWatch {
namespace Model {

/**
 * <p>The details about a log alarm.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/monitoring-2010-08-01/LogAlarm">AWS
 * API Reference</a></p>
 */
class LogAlarm {
 public:
  AWS_CLOUDWATCH_API LogAlarm() = default;
  AWS_CLOUDWATCH_API LogAlarm(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_CLOUDWATCH_API LogAlarm& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_CLOUDWATCH_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>The name of the alarm.</p>
   */
  inline const Aws::String& GetAlarmName() const { return m_alarmName; }
  inline bool AlarmNameHasBeenSet() const { return m_alarmNameHasBeenSet; }
  template <typename AlarmNameT = Aws::String>
  void SetAlarmName(AlarmNameT&& value) {
    m_alarmNameHasBeenSet = true;
    m_alarmName = std::forward<AlarmNameT>(value);
  }
  template <typename AlarmNameT = Aws::String>
  LogAlarm& WithAlarmName(AlarmNameT&& value) {
    SetAlarmName(std::forward<AlarmNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the alarm.</p>
   */
  inline const Aws::String& GetAlarmArn() const { return m_alarmArn; }
  inline bool AlarmArnHasBeenSet() const { return m_alarmArnHasBeenSet; }
  template <typename AlarmArnT = Aws::String>
  void SetAlarmArn(AlarmArnT&& value) {
    m_alarmArnHasBeenSet = true;
    m_alarmArn = std::forward<AlarmArnT>(value);
  }
  template <typename AlarmArnT = Aws::String>
  LogAlarm& WithAlarmArn(AlarmArnT&& value) {
    SetAlarmArn(std::forward<AlarmArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The description of the alarm.</p>
   */
  inline const Aws::String& GetAlarmDescription() const { return m_alarmDescription; }
  inline bool AlarmDescriptionHasBeenSet() const { return m_alarmDescriptionHasBeenSet; }
  template <typename AlarmDescriptionT = Aws::String>
  void SetAlarmDescription(AlarmDescriptionT&& value) {
    m_alarmDescriptionHasBeenSet = true;
    m_alarmDescription = std::forward<AlarmDescriptionT>(value);
  }
  template <typename AlarmDescriptionT = Aws::String>
  LogAlarm& WithAlarmDescription(AlarmDescriptionT&& value) {
    SetAlarmDescription(std::forward<AlarmDescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The time stamp of the last update to the alarm configuration.</p>
   */
  inline const Aws::Utils::DateTime& GetAlarmConfigurationUpdatedTimestamp() const { return m_alarmConfigurationUpdatedTimestamp; }
  inline bool AlarmConfigurationUpdatedTimestampHasBeenSet() const { return m_alarmConfigurationUpdatedTimestampHasBeenSet; }
  template <typename AlarmConfigurationUpdatedTimestampT = Aws::Utils::DateTime>
  void SetAlarmConfigurationUpdatedTimestamp(AlarmConfigurationUpdatedTimestampT&& value) {
    m_alarmConfigurationUpdatedTimestampHasBeenSet = true;
    m_alarmConfigurationUpdatedTimestamp = std::forward<AlarmConfigurationUpdatedTimestampT>(value);
  }
  template <typename AlarmConfigurationUpdatedTimestampT = Aws::Utils::DateTime>
  LogAlarm& WithAlarmConfigurationUpdatedTimestamp(AlarmConfigurationUpdatedTimestampT&& value) {
    SetAlarmConfigurationUpdatedTimestamp(std::forward<AlarmConfigurationUpdatedTimestampT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Indicates whether actions should be executed during any changes to the alarm
   * state.</p>
   */
  inline bool GetActionsEnabled() const { return m_actionsEnabled; }
  inline bool ActionsEnabledHasBeenSet() const { return m_actionsEnabledHasBeenSet; }
  inline void SetActionsEnabled(bool value) {
    m_actionsEnabledHasBeenSet = true;
    m_actionsEnabled = value;
  }
  inline LogAlarm& WithActionsEnabled(bool value) {
    SetActionsEnabled(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The actions to execute when this alarm transitions to the <code>OK</code>
   * state from any other state. Each action is specified as an Amazon Resource Name
   * (ARN).</p>
   */
  inline const Aws::Vector<Aws::String>& GetOKActions() const { return m_oKActions; }
  inline bool OKActionsHasBeenSet() const { return m_oKActionsHasBeenSet; }
  template <typename OKActionsT = Aws::Vector<Aws::String>>
  void SetOKActions(OKActionsT&& value) {
    m_oKActionsHasBeenSet = true;
    m_oKActions = std::forward<OKActionsT>(value);
  }
  template <typename OKActionsT = Aws::Vector<Aws::String>>
  LogAlarm& WithOKActions(OKActionsT&& value) {
    SetOKActions(std::forward<OKActionsT>(value));
    return *this;
  }
  template <typename OKActionsT = Aws::String>
  LogAlarm& AddOKActions(OKActionsT&& value) {
    m_oKActionsHasBeenSet = true;
    m_oKActions.emplace_back(std::forward<OKActionsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The actions to execute when this alarm transitions to the <code>ALARM</code>
   * state from any other state. Each action is specified as an Amazon Resource Name
   * (ARN).</p>
   */
  inline const Aws::Vector<Aws::String>& GetAlarmActions() const { return m_alarmActions; }
  inline bool AlarmActionsHasBeenSet() const { return m_alarmActionsHasBeenSet; }
  template <typename AlarmActionsT = Aws::Vector<Aws::String>>
  void SetAlarmActions(AlarmActionsT&& value) {
    m_alarmActionsHasBeenSet = true;
    m_alarmActions = std::forward<AlarmActionsT>(value);
  }
  template <typename AlarmActionsT = Aws::Vector<Aws::String>>
  LogAlarm& WithAlarmActions(AlarmActionsT&& value) {
    SetAlarmActions(std::forward<AlarmActionsT>(value));
    return *this;
  }
  template <typename AlarmActionsT = Aws::String>
  LogAlarm& AddAlarmActions(AlarmActionsT&& value) {
    m_alarmActionsHasBeenSet = true;
    m_alarmActions.emplace_back(std::forward<AlarmActionsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The actions to execute when this alarm transitions to the
   * <code>INSUFFICIENT_DATA</code> state from any other state. Each action is
   * specified as an Amazon Resource Name (ARN).</p>
   */
  inline const Aws::Vector<Aws::String>& GetInsufficientDataActions() const { return m_insufficientDataActions; }
  inline bool InsufficientDataActionsHasBeenSet() const { return m_insufficientDataActionsHasBeenSet; }
  template <typename InsufficientDataActionsT = Aws::Vector<Aws::String>>
  void SetInsufficientDataActions(InsufficientDataActionsT&& value) {
    m_insufficientDataActionsHasBeenSet = true;
    m_insufficientDataActions = std::forward<InsufficientDataActionsT>(value);
  }
  template <typename InsufficientDataActionsT = Aws::Vector<Aws::String>>
  LogAlarm& WithInsufficientDataActions(InsufficientDataActionsT&& value) {
    SetInsufficientDataActions(std::forward<InsufficientDataActionsT>(value));
    return *this;
  }
  template <typename InsufficientDataActionsT = Aws::String>
  LogAlarm& AddInsufficientDataActions(InsufficientDataActionsT&& value) {
    m_insufficientDataActionsHasBeenSet = true;
    m_insufficientDataActions.emplace_back(std::forward<InsufficientDataActionsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The state value for the alarm.</p>
   */
  inline StateValue GetStateValue() const { return m_stateValue; }
  inline bool StateValueHasBeenSet() const { return m_stateValueHasBeenSet; }
  inline void SetStateValue(StateValue value) {
    m_stateValueHasBeenSet = true;
    m_stateValue = value;
  }
  inline LogAlarm& WithStateValue(StateValue value) {
    SetStateValue(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An explanation for the alarm state, in text format.</p>
   */
  inline const Aws::String& GetStateReason() const { return m_stateReason; }
  inline bool StateReasonHasBeenSet() const { return m_stateReasonHasBeenSet; }
  template <typename StateReasonT = Aws::String>
  void SetStateReason(StateReasonT&& value) {
    m_stateReasonHasBeenSet = true;
    m_stateReason = std::forward<StateReasonT>(value);
  }
  template <typename StateReasonT = Aws::String>
  LogAlarm& WithStateReason(StateReasonT&& value) {
    SetStateReason(std::forward<StateReasonT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An explanation for the alarm state, in JSON format.</p>
   */
  inline const Aws::String& GetStateReasonData() const { return m_stateReasonData; }
  inline bool StateReasonDataHasBeenSet() const { return m_stateReasonDataHasBeenSet; }
  template <typename StateReasonDataT = Aws::String>
  void SetStateReasonData(StateReasonDataT&& value) {
    m_stateReasonDataHasBeenSet = true;
    m_stateReasonData = std::forward<StateReasonDataT>(value);
  }
  template <typename StateReasonDataT = Aws::String>
  LogAlarm& WithStateReasonData(StateReasonDataT&& value) {
    SetStateReasonData(std::forward<StateReasonDataT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The time stamp of the last update to the value of either the
   * <code>StateValue</code> or <code>EvaluationState</code> parameters.</p>
   */
  inline const Aws::Utils::DateTime& GetStateUpdatedTimestamp() const { return m_stateUpdatedTimestamp; }
  inline bool StateUpdatedTimestampHasBeenSet() const { return m_stateUpdatedTimestampHasBeenSet; }
  template <typename StateUpdatedTimestampT = Aws::Utils::DateTime>
  void SetStateUpdatedTimestamp(StateUpdatedTimestampT&& value) {
    m_stateUpdatedTimestampHasBeenSet = true;
    m_stateUpdatedTimestamp = std::forward<StateUpdatedTimestampT>(value);
  }
  template <typename StateUpdatedTimestampT = Aws::Utils::DateTime>
  LogAlarm& WithStateUpdatedTimestamp(StateUpdatedTimestampT&& value) {
    SetStateUpdatedTimestamp(std::forward<StateUpdatedTimestampT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The configuration of the underlying CloudWatch Logs scheduled query,
   * including the query string, log groups, schedule, aggregation expression, and
   * the ARN of the managed scheduled query.</p>
   */
  inline const ScheduledQueryConfiguration& GetScheduledQueryConfiguration() const { return m_scheduledQueryConfiguration; }
  inline bool ScheduledQueryConfigurationHasBeenSet() const { return m_scheduledQueryConfigurationHasBeenSet; }
  template <typename ScheduledQueryConfigurationT = ScheduledQueryConfiguration>
  void SetScheduledQueryConfiguration(ScheduledQueryConfigurationT&& value) {
    m_scheduledQueryConfigurationHasBeenSet = true;
    m_scheduledQueryConfiguration = std::forward<ScheduledQueryConfigurationT>(value);
  }
  template <typename ScheduledQueryConfigurationT = ScheduledQueryConfiguration>
  LogAlarm& WithScheduledQueryConfiguration(ScheduledQueryConfigurationT&& value) {
    SetScheduledQueryConfiguration(std::forward<ScheduledQueryConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of most recent scheduled query results that the alarm evaluates
   * against the threshold (the N in M-of-N evaluation).</p>
   */
  inline int64_t GetQueryResultsToEvaluate() const { return m_queryResultsToEvaluate; }
  inline bool QueryResultsToEvaluateHasBeenSet() const { return m_queryResultsToEvaluateHasBeenSet; }
  inline void SetQueryResultsToEvaluate(int64_t value) {
    m_queryResultsToEvaluateHasBeenSet = true;
    m_queryResultsToEvaluate = value;
  }
  inline LogAlarm& WithQueryResultsToEvaluate(int64_t value) {
    SetQueryResultsToEvaluate(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of query results, out of the most recent
   * <code>QueryResultsToEvaluate</code> results, that must breach the threshold to
   * trigger the alarm to transition to <code>ALARM</code> (the M in M-of-N
   * evaluation).</p>
   */
  inline int64_t GetQueryResultsToAlarm() const { return m_queryResultsToAlarm; }
  inline bool QueryResultsToAlarmHasBeenSet() const { return m_queryResultsToAlarmHasBeenSet; }
  inline void SetQueryResultsToAlarm(int64_t value) {
    m_queryResultsToAlarmHasBeenSet = true;
    m_queryResultsToAlarm = value;
  }
  inline LogAlarm& WithQueryResultsToAlarm(int64_t value) {
    SetQueryResultsToAlarm(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The value to compare with the aggregated query result.</p>
   */
  inline double GetThreshold() const { return m_threshold; }
  inline bool ThresholdHasBeenSet() const { return m_thresholdHasBeenSet; }
  inline void SetThreshold(double value) {
    m_thresholdHasBeenSet = true;
    m_threshold = value;
  }
  inline LogAlarm& WithThreshold(double value) {
    SetThreshold(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The arithmetic operation to use when comparing the aggregated query result
   * and the threshold. The aggregated query result is used as the first operand.</p>
   */
  inline ComparisonOperator GetComparisonOperator() const { return m_comparisonOperator; }
  inline bool ComparisonOperatorHasBeenSet() const { return m_comparisonOperatorHasBeenSet; }
  inline void SetComparisonOperator(ComparisonOperator value) {
    m_comparisonOperatorHasBeenSet = true;
    m_comparisonOperator = value;
  }
  inline LogAlarm& WithComparisonOperator(ComparisonOperator value) {
    SetComparisonOperator(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>How this alarm handles missing data points. Valid values are
   * <code>breaching</code>, <code>notBreaching</code>, <code>ignore</code>, and
   * <code>missing</code>.</p>
   */
  inline const Aws::String& GetTreatMissingData() const { return m_treatMissingData; }
  inline bool TreatMissingDataHasBeenSet() const { return m_treatMissingDataHasBeenSet; }
  template <typename TreatMissingDataT = Aws::String>
  void SetTreatMissingData(TreatMissingDataT&& value) {
    m_treatMissingDataHasBeenSet = true;
    m_treatMissingData = std::forward<TreatMissingDataT>(value);
  }
  template <typename TreatMissingDataT = Aws::String>
  LogAlarm& WithTreatMissingData(TreatMissingDataT&& value) {
    SetTreatMissingData(std::forward<TreatMissingDataT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time that the alarm's <code>StateValue</code> most recently
   * changed.</p>
   */
  inline const Aws::Utils::DateTime& GetStateTransitionedTimestamp() const { return m_stateTransitionedTimestamp; }
  inline bool StateTransitionedTimestampHasBeenSet() const { return m_stateTransitionedTimestampHasBeenSet; }
  template <typename StateTransitionedTimestampT = Aws::Utils::DateTime>
  void SetStateTransitionedTimestamp(StateTransitionedTimestampT&& value) {
    m_stateTransitionedTimestampHasBeenSet = true;
    m_stateTransitionedTimestamp = std::forward<StateTransitionedTimestampT>(value);
  }
  template <typename StateTransitionedTimestampT = Aws::Utils::DateTime>
  LogAlarm& WithStateTransitionedTimestamp(StateTransitionedTimestampT&& value) {
    SetStateTransitionedTimestamp(std::forward<StateTransitionedTimestampT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>If the value of this field is <code>EVALUATION_ERROR</code>, it indicates
   * configuration errors in the alarm setup that require review and correction.
   * Refer to the <code>StateReason</code> field of the alarm for more details.</p>
   * <p>If the value of this field is <code>EVALUATION_FAILURE</code>, it indicates
   * temporary CloudWatch issues. We recommend manual monitoring until the issue is
   * resolved.</p> <p>If the value of this field is <code>PARTIAL_DATA</code>, it
   * indicates that the query returned the maximum 500 contributor groups but more
   * matched. The alarm evaluates the available contributors, but results might be
   * incomplete.</p>
   */
  inline EvaluationState GetEvaluationState() const { return m_evaluationState; }
  inline bool EvaluationStateHasBeenSet() const { return m_evaluationStateHasBeenSet; }
  inline void SetEvaluationState(EvaluationState value) {
    m_evaluationStateHasBeenSet = true;
    m_evaluationState = value;
  }
  inline LogAlarm& WithEvaluationState(EvaluationState value) {
    SetEvaluationState(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of log lines from the most recent scheduled query execution that
   * are included in alarm action notifications. Valid range is 0 through 50. A value
   * of 0 means no log lines are included.</p>
   */
  inline int64_t GetActionLogLineCount() const { return m_actionLogLineCount; }
  inline bool ActionLogLineCountHasBeenSet() const { return m_actionLogLineCountHasBeenSet; }
  inline void SetActionLogLineCount(int64_t value) {
    m_actionLogLineCountHasBeenSet = true;
    m_actionLogLineCount = value;
  }
  inline LogAlarm& WithActionLogLineCount(int64_t value) {
    SetActionLogLineCount(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the IAM role that CloudWatch assumes to
   * retrieve log events for inclusion in alarm action notifications. Set when
   * <code>ActionLogLineCount</code> is greater than 0.</p>
   */
  inline const Aws::String& GetActionLogLineRoleArn() const { return m_actionLogLineRoleArn; }
  inline bool ActionLogLineRoleArnHasBeenSet() const { return m_actionLogLineRoleArnHasBeenSet; }
  template <typename ActionLogLineRoleArnT = Aws::String>
  void SetActionLogLineRoleArn(ActionLogLineRoleArnT&& value) {
    m_actionLogLineRoleArnHasBeenSet = true;
    m_actionLogLineRoleArn = std::forward<ActionLogLineRoleArnT>(value);
  }
  template <typename ActionLogLineRoleArnT = Aws::String>
  LogAlarm& WithActionLogLineRoleArn(ActionLogLineRoleArnT&& value) {
    SetActionLogLineRoleArn(std::forward<ActionLogLineRoleArnT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_alarmName;

  Aws::String m_alarmArn;

  Aws::String m_alarmDescription;

  Aws::Utils::DateTime m_alarmConfigurationUpdatedTimestamp{};

  bool m_actionsEnabled{false};

  Aws::Vector<Aws::String> m_oKActions;

  Aws::Vector<Aws::String> m_alarmActions;

  Aws::Vector<Aws::String> m_insufficientDataActions;

  StateValue m_stateValue{StateValue::NOT_SET};

  Aws::String m_stateReason;

  Aws::String m_stateReasonData;

  Aws::Utils::DateTime m_stateUpdatedTimestamp{};

  ScheduledQueryConfiguration m_scheduledQueryConfiguration;

  int64_t m_queryResultsToEvaluate{0};

  int64_t m_queryResultsToAlarm{0};

  double m_threshold{0.0};

  ComparisonOperator m_comparisonOperator{ComparisonOperator::NOT_SET};

  Aws::String m_treatMissingData;

  Aws::Utils::DateTime m_stateTransitionedTimestamp{};

  EvaluationState m_evaluationState{EvaluationState::NOT_SET};

  int64_t m_actionLogLineCount{0};

  Aws::String m_actionLogLineRoleArn;
  bool m_alarmNameHasBeenSet = false;
  bool m_alarmArnHasBeenSet = false;
  bool m_alarmDescriptionHasBeenSet = false;
  bool m_alarmConfigurationUpdatedTimestampHasBeenSet = false;
  bool m_actionsEnabledHasBeenSet = false;
  bool m_oKActionsHasBeenSet = false;
  bool m_alarmActionsHasBeenSet = false;
  bool m_insufficientDataActionsHasBeenSet = false;
  bool m_stateValueHasBeenSet = false;
  bool m_stateReasonHasBeenSet = false;
  bool m_stateReasonDataHasBeenSet = false;
  bool m_stateUpdatedTimestampHasBeenSet = false;
  bool m_scheduledQueryConfigurationHasBeenSet = false;
  bool m_queryResultsToEvaluateHasBeenSet = false;
  bool m_queryResultsToAlarmHasBeenSet = false;
  bool m_thresholdHasBeenSet = false;
  bool m_comparisonOperatorHasBeenSet = false;
  bool m_treatMissingDataHasBeenSet = false;
  bool m_stateTransitionedTimestampHasBeenSet = false;
  bool m_evaluationStateHasBeenSet = false;
  bool m_actionLogLineCountHasBeenSet = false;
  bool m_actionLogLineRoleArnHasBeenSet = false;
};

}  // namespace Model
}  // namespace CloudWatch
}  // namespace Aws
