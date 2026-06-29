/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/monitoring/CloudWatchRequest.h>
#include <aws/monitoring/CloudWatch_EXPORTS.h>
#include <aws/monitoring/model/ComparisonOperator.h>
#include <aws/monitoring/model/ScheduledQueryConfiguration.h>
#include <aws/monitoring/model/Tag.h>

#include <utility>

namespace Aws {
namespace CloudWatch {
namespace Model {

/**
 */
class PutLogAlarmRequest : public CloudWatchRequest {
 public:
  AWS_CLOUDWATCH_API PutLogAlarmRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "PutLogAlarm"; }

  AWS_CLOUDWATCH_API Aws::String SerializePayload() const override;

  AWS_CLOUDWATCH_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The name for the alarm. This name must be unique within the Amazon Web
   * Services account and Region.</p>
   */
  inline const Aws::String& GetAlarmName() const { return m_alarmName; }
  inline bool AlarmNameHasBeenSet() const { return m_alarmNameHasBeenSet; }
  template <typename AlarmNameT = Aws::String>
  void SetAlarmName(AlarmNameT&& value) {
    m_alarmNameHasBeenSet = true;
    m_alarmName = std::forward<AlarmNameT>(value);
  }
  template <typename AlarmNameT = Aws::String>
  PutLogAlarmRequest& WithAlarmName(AlarmNameT&& value) {
    SetAlarmName(std::forward<AlarmNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The description for the alarm.</p>
   */
  inline const Aws::String& GetAlarmDescription() const { return m_alarmDescription; }
  inline bool AlarmDescriptionHasBeenSet() const { return m_alarmDescriptionHasBeenSet; }
  template <typename AlarmDescriptionT = Aws::String>
  void SetAlarmDescription(AlarmDescriptionT&& value) {
    m_alarmDescriptionHasBeenSet = true;
    m_alarmDescription = std::forward<AlarmDescriptionT>(value);
  }
  template <typename AlarmDescriptionT = Aws::String>
  PutLogAlarmRequest& WithAlarmDescription(AlarmDescriptionT&& value) {
    SetAlarmDescription(std::forward<AlarmDescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The configuration of the underlying CloudWatch Logs scheduled query that this
   * alarm evaluates, including the query string, log groups, schedule, and
   * aggregation expression.</p>
   */
  inline const ScheduledQueryConfiguration& GetScheduledQueryConfiguration() const { return m_scheduledQueryConfiguration; }
  inline bool ScheduledQueryConfigurationHasBeenSet() const { return m_scheduledQueryConfigurationHasBeenSet; }
  template <typename ScheduledQueryConfigurationT = ScheduledQueryConfiguration>
  void SetScheduledQueryConfiguration(ScheduledQueryConfigurationT&& value) {
    m_scheduledQueryConfigurationHasBeenSet = true;
    m_scheduledQueryConfiguration = std::forward<ScheduledQueryConfigurationT>(value);
  }
  template <typename ScheduledQueryConfigurationT = ScheduledQueryConfiguration>
  PutLogAlarmRequest& WithScheduledQueryConfiguration(ScheduledQueryConfigurationT&& value) {
    SetScheduledQueryConfiguration(std::forward<ScheduledQueryConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of log lines from the most recent scheduled query execution to
   * include in alarm action notifications. Valid range is 0 through 50. The default
   * is 0, which means no log lines are included.</p>
   */
  inline int GetActionLogLineCount() const { return m_actionLogLineCount; }
  inline bool ActionLogLineCountHasBeenSet() const { return m_actionLogLineCountHasBeenSet; }
  inline void SetActionLogLineCount(int value) {
    m_actionLogLineCountHasBeenSet = true;
    m_actionLogLineCount = value;
  }
  inline PutLogAlarmRequest& WithActionLogLineCount(int value) {
    SetActionLogLineCount(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of an IAM role that CloudWatch assumes to
   * retrieve log events for inclusion in alarm action notifications. Required when
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
  PutLogAlarmRequest& WithActionLogLineRoleArn(ActionLogLineRoleArnT&& value) {
    SetActionLogLineRoleArn(std::forward<ActionLogLineRoleArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Indicates whether actions should be executed during any changes to the alarm
   * state. The default is <code>true</code>.</p>
   */
  inline bool GetActionsEnabled() const { return m_actionsEnabled; }
  inline bool ActionsEnabledHasBeenSet() const { return m_actionsEnabledHasBeenSet; }
  inline void SetActionsEnabled(bool value) {
    m_actionsEnabledHasBeenSet = true;
    m_actionsEnabled = value;
  }
  inline PutLogAlarmRequest& WithActionsEnabled(bool value) {
    SetActionsEnabled(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The actions to execute when this alarm transitions to the <code>OK</code>
   * state from any other state. Each action is specified as an Amazon Resource Name
   * (ARN).</p> <p>Valid Values:</p> <p> <b>Amazon SNS actions:</b> </p> <p>
   * <code>arn:aws:sns:<i>region</i>:<i>account-id</i>:<i>sns-topic-name</i> </code>
   * </p> <p> <b>Lambda actions:</b> </p> <ul> <li> <p>Invoke the latest version of a
   * Lambda function:
   * <code>arn:aws:lambda:<i>region</i>:<i>account-id</i>:function:<i>function-name</i>
   * </code> </p> </li> <li> <p>Invoke a specific version of a Lambda function:
   * <code>arn:aws:lambda:<i>region</i>:<i>account-id</i>:function:<i>function-name</i>:<i>version-number</i>
   * </code> </p> </li> <li> <p>Invoke a function by using an alias Lambda function:
   * <code>arn:aws:lambda:<i>region</i>:<i>account-id</i>:function:<i>function-name</i>:<i>alias-name</i>
   * </code> </p> </li> </ul>
   */
  inline const Aws::Vector<Aws::String>& GetOKActions() const { return m_oKActions; }
  inline bool OKActionsHasBeenSet() const { return m_oKActionsHasBeenSet; }
  template <typename OKActionsT = Aws::Vector<Aws::String>>
  void SetOKActions(OKActionsT&& value) {
    m_oKActionsHasBeenSet = true;
    m_oKActions = std::forward<OKActionsT>(value);
  }
  template <typename OKActionsT = Aws::Vector<Aws::String>>
  PutLogAlarmRequest& WithOKActions(OKActionsT&& value) {
    SetOKActions(std::forward<OKActionsT>(value));
    return *this;
  }
  template <typename OKActionsT = Aws::String>
  PutLogAlarmRequest& AddOKActions(OKActionsT&& value) {
    m_oKActionsHasBeenSet = true;
    m_oKActions.emplace_back(std::forward<OKActionsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The actions to execute when this alarm transitions to the <code>ALARM</code>
   * state from any other state. Each action is specified as an Amazon Resource Name
   * (ARN).</p> <p>Valid Values:</p> <p> <b>Amazon SNS actions:</b> </p> <p>
   * <code>arn:aws:sns:<i>region</i>:<i>account-id</i>:<i>sns-topic-name</i> </code>
   * </p> <p> <b>Lambda actions:</b> </p> <ul> <li> <p>Invoke the latest version of a
   * Lambda function:
   * <code>arn:aws:lambda:<i>region</i>:<i>account-id</i>:function:<i>function-name</i>
   * </code> </p> </li> <li> <p>Invoke a specific version of a Lambda function:
   * <code>arn:aws:lambda:<i>region</i>:<i>account-id</i>:function:<i>function-name</i>:<i>version-number</i>
   * </code> </p> </li> <li> <p>Invoke a function by using an alias Lambda function:
   * <code>arn:aws:lambda:<i>region</i>:<i>account-id</i>:function:<i>function-name</i>:<i>alias-name</i>
   * </code> </p> </li> </ul> <p> <b>Systems Manager actions:</b> </p> <p>
   * <code>arn:aws:ssm:<i>region</i>:<i>account-id</i>:opsitem:<i>severity</i>
   * </code> </p>
   */
  inline const Aws::Vector<Aws::String>& GetAlarmActions() const { return m_alarmActions; }
  inline bool AlarmActionsHasBeenSet() const { return m_alarmActionsHasBeenSet; }
  template <typename AlarmActionsT = Aws::Vector<Aws::String>>
  void SetAlarmActions(AlarmActionsT&& value) {
    m_alarmActionsHasBeenSet = true;
    m_alarmActions = std::forward<AlarmActionsT>(value);
  }
  template <typename AlarmActionsT = Aws::Vector<Aws::String>>
  PutLogAlarmRequest& WithAlarmActions(AlarmActionsT&& value) {
    SetAlarmActions(std::forward<AlarmActionsT>(value));
    return *this;
  }
  template <typename AlarmActionsT = Aws::String>
  PutLogAlarmRequest& AddAlarmActions(AlarmActionsT&& value) {
    m_alarmActionsHasBeenSet = true;
    m_alarmActions.emplace_back(std::forward<AlarmActionsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The actions to execute when this alarm transitions to the
   * <code>INSUFFICIENT_DATA</code> state from any other state. Each action is
   * specified as an Amazon Resource Name (ARN).</p> <p>Valid Values:</p> <p>
   * <b>Amazon SNS actions:</b> </p> <p>
   * <code>arn:aws:sns:<i>region</i>:<i>account-id</i>:<i>sns-topic-name</i> </code>
   * </p> <p> <b>Lambda actions:</b> </p> <ul> <li> <p>Invoke the latest version of a
   * Lambda function:
   * <code>arn:aws:lambda:<i>region</i>:<i>account-id</i>:function:<i>function-name</i>
   * </code> </p> </li> <li> <p>Invoke a specific version of a Lambda function:
   * <code>arn:aws:lambda:<i>region</i>:<i>account-id</i>:function:<i>function-name</i>:<i>version-number</i>
   * </code> </p> </li> <li> <p>Invoke a function by using an alias Lambda function:
   * <code>arn:aws:lambda:<i>region</i>:<i>account-id</i>:function:<i>function-name</i>:<i>alias-name</i>
   * </code> </p> </li> </ul>
   */
  inline const Aws::Vector<Aws::String>& GetInsufficientDataActions() const { return m_insufficientDataActions; }
  inline bool InsufficientDataActionsHasBeenSet() const { return m_insufficientDataActionsHasBeenSet; }
  template <typename InsufficientDataActionsT = Aws::Vector<Aws::String>>
  void SetInsufficientDataActions(InsufficientDataActionsT&& value) {
    m_insufficientDataActionsHasBeenSet = true;
    m_insufficientDataActions = std::forward<InsufficientDataActionsT>(value);
  }
  template <typename InsufficientDataActionsT = Aws::Vector<Aws::String>>
  PutLogAlarmRequest& WithInsufficientDataActions(InsufficientDataActionsT&& value) {
    SetInsufficientDataActions(std::forward<InsufficientDataActionsT>(value));
    return *this;
  }
  template <typename InsufficientDataActionsT = Aws::String>
  PutLogAlarmRequest& AddInsufficientDataActions(InsufficientDataActionsT&& value) {
    m_insufficientDataActionsHasBeenSet = true;
    m_insufficientDataActions.emplace_back(std::forward<InsufficientDataActionsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of most recent scheduled query results to evaluate against the
   * threshold (the N in M-of-N evaluation). Valid range is 1 through 100.</p>
   */
  inline int GetQueryResultsToEvaluate() const { return m_queryResultsToEvaluate; }
  inline bool QueryResultsToEvaluateHasBeenSet() const { return m_queryResultsToEvaluateHasBeenSet; }
  inline void SetQueryResultsToEvaluate(int value) {
    m_queryResultsToEvaluateHasBeenSet = true;
    m_queryResultsToEvaluate = value;
  }
  inline PutLogAlarmRequest& WithQueryResultsToEvaluate(int value) {
    SetQueryResultsToEvaluate(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of query results, out of the most recent
   * <code>QueryResultsToEvaluate</code> results, that must breach the threshold to
   * trigger the alarm to transition to <code>ALARM</code> (the M in M-of-N
   * evaluation). Must be less than or equal to
   * <code>QueryResultsToEvaluate</code>.</p>
   */
  inline int GetQueryResultsToAlarm() const { return m_queryResultsToAlarm; }
  inline bool QueryResultsToAlarmHasBeenSet() const { return m_queryResultsToAlarmHasBeenSet; }
  inline void SetQueryResultsToAlarm(int value) {
    m_queryResultsToAlarmHasBeenSet = true;
    m_queryResultsToAlarm = value;
  }
  inline PutLogAlarmRequest& WithQueryResultsToAlarm(int value) {
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
  inline PutLogAlarmRequest& WithThreshold(double value) {
    SetThreshold(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The arithmetic operation to use when comparing the aggregated query result
   * and the threshold. The aggregated query result is used as the first operand.
   * Valid values are <code>GreaterThanThreshold</code>,
   * <code>GreaterThanOrEqualToThreshold</code>, <code>LessThanThreshold</code>, and
   * <code>LessThanOrEqualToThreshold</code>.</p>
   */
  inline ComparisonOperator GetComparisonOperator() const { return m_comparisonOperator; }
  inline bool ComparisonOperatorHasBeenSet() const { return m_comparisonOperatorHasBeenSet; }
  inline void SetComparisonOperator(ComparisonOperator value) {
    m_comparisonOperatorHasBeenSet = true;
    m_comparisonOperator = value;
  }
  inline PutLogAlarmRequest& WithComparisonOperator(ComparisonOperator value) {
    SetComparisonOperator(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Sets how this alarm is to handle missing data points. Valid values are
   * <code>breaching</code>, <code>notBreaching</code>, <code>ignore</code>, and
   * <code>missing</code>. If this parameter is omitted, the default behavior of
   * <code>missing</code> is used.</p>
   */
  inline const Aws::String& GetTreatMissingData() const { return m_treatMissingData; }
  inline bool TreatMissingDataHasBeenSet() const { return m_treatMissingDataHasBeenSet; }
  template <typename TreatMissingDataT = Aws::String>
  void SetTreatMissingData(TreatMissingDataT&& value) {
    m_treatMissingDataHasBeenSet = true;
    m_treatMissingData = std::forward<TreatMissingDataT>(value);
  }
  template <typename TreatMissingDataT = Aws::String>
  PutLogAlarmRequest& WithTreatMissingData(TreatMissingDataT&& value) {
    SetTreatMissingData(std::forward<TreatMissingDataT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of key-value pairs to associate with the alarm. You can use tags to
   * categorize and manage your alarms.</p>
   */
  inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
  inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
  template <typename TagsT = Aws::Vector<Tag>>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Aws::Vector<Tag>>
  PutLogAlarmRequest& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsT = Tag>
  PutLogAlarmRequest& AddTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace_back(std::forward<TagsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_alarmName;

  Aws::String m_alarmDescription;

  ScheduledQueryConfiguration m_scheduledQueryConfiguration;

  int m_actionLogLineCount{0};

  Aws::String m_actionLogLineRoleArn;

  bool m_actionsEnabled{false};

  Aws::Vector<Aws::String> m_oKActions;

  Aws::Vector<Aws::String> m_alarmActions;

  Aws::Vector<Aws::String> m_insufficientDataActions;

  int m_queryResultsToEvaluate{0};

  int m_queryResultsToAlarm{0};

  double m_threshold{0.0};

  ComparisonOperator m_comparisonOperator{ComparisonOperator::NOT_SET};

  Aws::String m_treatMissingData;

  Aws::Vector<Tag> m_tags;
  bool m_alarmNameHasBeenSet = false;
  bool m_alarmDescriptionHasBeenSet = false;
  bool m_scheduledQueryConfigurationHasBeenSet = false;
  bool m_actionLogLineCountHasBeenSet = false;
  bool m_actionLogLineRoleArnHasBeenSet = false;
  bool m_actionsEnabledHasBeenSet = false;
  bool m_oKActionsHasBeenSet = false;
  bool m_alarmActionsHasBeenSet = false;
  bool m_insufficientDataActionsHasBeenSet = false;
  bool m_queryResultsToEvaluateHasBeenSet = false;
  bool m_queryResultsToAlarmHasBeenSet = false;
  bool m_thresholdHasBeenSet = false;
  bool m_comparisonOperatorHasBeenSet = false;
  bool m_treatMissingDataHasBeenSet = false;
  bool m_tagsHasBeenSet = false;
};

}  // namespace Model
}  // namespace CloudWatch
}  // namespace Aws
