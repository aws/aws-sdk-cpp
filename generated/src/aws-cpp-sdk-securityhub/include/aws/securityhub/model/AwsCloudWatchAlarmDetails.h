/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securityhub/model/AwsCloudWatchAlarmDimensionsDetails.h>
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
namespace SecurityHub
{
namespace Model
{

  /**
   * <p>Specifies an alarm and associates it with the specified metric or metric math
   * expression. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsCloudWatchAlarmDetails">AWS
   * API Reference</a></p>
   */
  class AwsCloudWatchAlarmDetails
  {
  public:
    AWS_SECURITYHUB_API AwsCloudWatchAlarmDetails();
    AWS_SECURITYHUB_API AwsCloudWatchAlarmDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsCloudWatchAlarmDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Indicates whether actions should be executed during any changes to the alarm
     * state. </p>
     */
    inline bool GetActionsEnabled() const{ return m_actionsEnabled; }
    inline bool ActionsEnabledHasBeenSet() const { return m_actionsEnabledHasBeenSet; }
    inline void SetActionsEnabled(bool value) { m_actionsEnabledHasBeenSet = true; m_actionsEnabled = value; }
    inline AwsCloudWatchAlarmDetails& WithActionsEnabled(bool value) { SetActionsEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of actions, specified as Amazon Resource Names (ARNs) to execute
     * when this alarm transitions into an <code>ALARM</code> state from any other
     * state. </p>
     */
    inline const Aws::Vector<Aws::String>& GetAlarmActions() const{ return m_alarmActions; }
    inline bool AlarmActionsHasBeenSet() const { return m_alarmActionsHasBeenSet; }
    inline void SetAlarmActions(const Aws::Vector<Aws::String>& value) { m_alarmActionsHasBeenSet = true; m_alarmActions = value; }
    inline void SetAlarmActions(Aws::Vector<Aws::String>&& value) { m_alarmActionsHasBeenSet = true; m_alarmActions = std::move(value); }
    inline AwsCloudWatchAlarmDetails& WithAlarmActions(const Aws::Vector<Aws::String>& value) { SetAlarmActions(value); return *this;}
    inline AwsCloudWatchAlarmDetails& WithAlarmActions(Aws::Vector<Aws::String>&& value) { SetAlarmActions(std::move(value)); return *this;}
    inline AwsCloudWatchAlarmDetails& AddAlarmActions(const Aws::String& value) { m_alarmActionsHasBeenSet = true; m_alarmActions.push_back(value); return *this; }
    inline AwsCloudWatchAlarmDetails& AddAlarmActions(Aws::String&& value) { m_alarmActionsHasBeenSet = true; m_alarmActions.push_back(std::move(value)); return *this; }
    inline AwsCloudWatchAlarmDetails& AddAlarmActions(const char* value) { m_alarmActionsHasBeenSet = true; m_alarmActions.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The ARN of the alarm. </p>
     */
    inline const Aws::String& GetAlarmArn() const{ return m_alarmArn; }
    inline bool AlarmArnHasBeenSet() const { return m_alarmArnHasBeenSet; }
    inline void SetAlarmArn(const Aws::String& value) { m_alarmArnHasBeenSet = true; m_alarmArn = value; }
    inline void SetAlarmArn(Aws::String&& value) { m_alarmArnHasBeenSet = true; m_alarmArn = std::move(value); }
    inline void SetAlarmArn(const char* value) { m_alarmArnHasBeenSet = true; m_alarmArn.assign(value); }
    inline AwsCloudWatchAlarmDetails& WithAlarmArn(const Aws::String& value) { SetAlarmArn(value); return *this;}
    inline AwsCloudWatchAlarmDetails& WithAlarmArn(Aws::String&& value) { SetAlarmArn(std::move(value)); return *this;}
    inline AwsCloudWatchAlarmDetails& WithAlarmArn(const char* value) { SetAlarmArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time stamp of the last update to the alarm configuration. </p>
     */
    inline const Aws::String& GetAlarmConfigurationUpdatedTimestamp() const{ return m_alarmConfigurationUpdatedTimestamp; }
    inline bool AlarmConfigurationUpdatedTimestampHasBeenSet() const { return m_alarmConfigurationUpdatedTimestampHasBeenSet; }
    inline void SetAlarmConfigurationUpdatedTimestamp(const Aws::String& value) { m_alarmConfigurationUpdatedTimestampHasBeenSet = true; m_alarmConfigurationUpdatedTimestamp = value; }
    inline void SetAlarmConfigurationUpdatedTimestamp(Aws::String&& value) { m_alarmConfigurationUpdatedTimestampHasBeenSet = true; m_alarmConfigurationUpdatedTimestamp = std::move(value); }
    inline void SetAlarmConfigurationUpdatedTimestamp(const char* value) { m_alarmConfigurationUpdatedTimestampHasBeenSet = true; m_alarmConfigurationUpdatedTimestamp.assign(value); }
    inline AwsCloudWatchAlarmDetails& WithAlarmConfigurationUpdatedTimestamp(const Aws::String& value) { SetAlarmConfigurationUpdatedTimestamp(value); return *this;}
    inline AwsCloudWatchAlarmDetails& WithAlarmConfigurationUpdatedTimestamp(Aws::String&& value) { SetAlarmConfigurationUpdatedTimestamp(std::move(value)); return *this;}
    inline AwsCloudWatchAlarmDetails& WithAlarmConfigurationUpdatedTimestamp(const char* value) { SetAlarmConfigurationUpdatedTimestamp(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the alarm. </p>
     */
    inline const Aws::String& GetAlarmDescription() const{ return m_alarmDescription; }
    inline bool AlarmDescriptionHasBeenSet() const { return m_alarmDescriptionHasBeenSet; }
    inline void SetAlarmDescription(const Aws::String& value) { m_alarmDescriptionHasBeenSet = true; m_alarmDescription = value; }
    inline void SetAlarmDescription(Aws::String&& value) { m_alarmDescriptionHasBeenSet = true; m_alarmDescription = std::move(value); }
    inline void SetAlarmDescription(const char* value) { m_alarmDescriptionHasBeenSet = true; m_alarmDescription.assign(value); }
    inline AwsCloudWatchAlarmDetails& WithAlarmDescription(const Aws::String& value) { SetAlarmDescription(value); return *this;}
    inline AwsCloudWatchAlarmDetails& WithAlarmDescription(Aws::String&& value) { SetAlarmDescription(std::move(value)); return *this;}
    inline AwsCloudWatchAlarmDetails& WithAlarmDescription(const char* value) { SetAlarmDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the alarm. If you don't specify a name, CloudFront generates a
     * unique physical ID and uses that ID for the alarm name. </p>
     */
    inline const Aws::String& GetAlarmName() const{ return m_alarmName; }
    inline bool AlarmNameHasBeenSet() const { return m_alarmNameHasBeenSet; }
    inline void SetAlarmName(const Aws::String& value) { m_alarmNameHasBeenSet = true; m_alarmName = value; }
    inline void SetAlarmName(Aws::String&& value) { m_alarmNameHasBeenSet = true; m_alarmName = std::move(value); }
    inline void SetAlarmName(const char* value) { m_alarmNameHasBeenSet = true; m_alarmName.assign(value); }
    inline AwsCloudWatchAlarmDetails& WithAlarmName(const Aws::String& value) { SetAlarmName(value); return *this;}
    inline AwsCloudWatchAlarmDetails& WithAlarmName(Aws::String&& value) { SetAlarmName(std::move(value)); return *this;}
    inline AwsCloudWatchAlarmDetails& WithAlarmName(const char* value) { SetAlarmName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The arithmetic operation to use when comparing the specified statistic and
     * threshold. The specified statistic value is used as the first operand. </p>
     */
    inline const Aws::String& GetComparisonOperator() const{ return m_comparisonOperator; }
    inline bool ComparisonOperatorHasBeenSet() const { return m_comparisonOperatorHasBeenSet; }
    inline void SetComparisonOperator(const Aws::String& value) { m_comparisonOperatorHasBeenSet = true; m_comparisonOperator = value; }
    inline void SetComparisonOperator(Aws::String&& value) { m_comparisonOperatorHasBeenSet = true; m_comparisonOperator = std::move(value); }
    inline void SetComparisonOperator(const char* value) { m_comparisonOperatorHasBeenSet = true; m_comparisonOperator.assign(value); }
    inline AwsCloudWatchAlarmDetails& WithComparisonOperator(const Aws::String& value) { SetComparisonOperator(value); return *this;}
    inline AwsCloudWatchAlarmDetails& WithComparisonOperator(Aws::String&& value) { SetComparisonOperator(std::move(value)); return *this;}
    inline AwsCloudWatchAlarmDetails& WithComparisonOperator(const char* value) { SetComparisonOperator(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of datapoints that must be breaching to trigger the alarm. </p>
     */
    inline int GetDatapointsToAlarm() const{ return m_datapointsToAlarm; }
    inline bool DatapointsToAlarmHasBeenSet() const { return m_datapointsToAlarmHasBeenSet; }
    inline void SetDatapointsToAlarm(int value) { m_datapointsToAlarmHasBeenSet = true; m_datapointsToAlarm = value; }
    inline AwsCloudWatchAlarmDetails& WithDatapointsToAlarm(int value) { SetDatapointsToAlarm(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The dimensions for the metric associated with the alarm. </p>
     */
    inline const Aws::Vector<AwsCloudWatchAlarmDimensionsDetails>& GetDimensions() const{ return m_dimensions; }
    inline bool DimensionsHasBeenSet() const { return m_dimensionsHasBeenSet; }
    inline void SetDimensions(const Aws::Vector<AwsCloudWatchAlarmDimensionsDetails>& value) { m_dimensionsHasBeenSet = true; m_dimensions = value; }
    inline void SetDimensions(Aws::Vector<AwsCloudWatchAlarmDimensionsDetails>&& value) { m_dimensionsHasBeenSet = true; m_dimensions = std::move(value); }
    inline AwsCloudWatchAlarmDetails& WithDimensions(const Aws::Vector<AwsCloudWatchAlarmDimensionsDetails>& value) { SetDimensions(value); return *this;}
    inline AwsCloudWatchAlarmDetails& WithDimensions(Aws::Vector<AwsCloudWatchAlarmDimensionsDetails>&& value) { SetDimensions(std::move(value)); return *this;}
    inline AwsCloudWatchAlarmDetails& AddDimensions(const AwsCloudWatchAlarmDimensionsDetails& value) { m_dimensionsHasBeenSet = true; m_dimensions.push_back(value); return *this; }
    inline AwsCloudWatchAlarmDetails& AddDimensions(AwsCloudWatchAlarmDimensionsDetails&& value) { m_dimensionsHasBeenSet = true; m_dimensions.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Used only for alarms based on percentiles. If <code>ignore</code>, the alarm
     * state does not change during periods with too few data points to be
     * statistically significant. If <code>evaluate</code> or this parameter is not
     * used, the alarm is always evaluated and possibly changes state no matter how
     * many data points are available. </p>
     */
    inline const Aws::String& GetEvaluateLowSampleCountPercentile() const{ return m_evaluateLowSampleCountPercentile; }
    inline bool EvaluateLowSampleCountPercentileHasBeenSet() const { return m_evaluateLowSampleCountPercentileHasBeenSet; }
    inline void SetEvaluateLowSampleCountPercentile(const Aws::String& value) { m_evaluateLowSampleCountPercentileHasBeenSet = true; m_evaluateLowSampleCountPercentile = value; }
    inline void SetEvaluateLowSampleCountPercentile(Aws::String&& value) { m_evaluateLowSampleCountPercentileHasBeenSet = true; m_evaluateLowSampleCountPercentile = std::move(value); }
    inline void SetEvaluateLowSampleCountPercentile(const char* value) { m_evaluateLowSampleCountPercentileHasBeenSet = true; m_evaluateLowSampleCountPercentile.assign(value); }
    inline AwsCloudWatchAlarmDetails& WithEvaluateLowSampleCountPercentile(const Aws::String& value) { SetEvaluateLowSampleCountPercentile(value); return *this;}
    inline AwsCloudWatchAlarmDetails& WithEvaluateLowSampleCountPercentile(Aws::String&& value) { SetEvaluateLowSampleCountPercentile(std::move(value)); return *this;}
    inline AwsCloudWatchAlarmDetails& WithEvaluateLowSampleCountPercentile(const char* value) { SetEvaluateLowSampleCountPercentile(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of periods over which data is compared to the specified threshold.
     * </p>
     */
    inline int GetEvaluationPeriods() const{ return m_evaluationPeriods; }
    inline bool EvaluationPeriodsHasBeenSet() const { return m_evaluationPeriodsHasBeenSet; }
    inline void SetEvaluationPeriods(int value) { m_evaluationPeriodsHasBeenSet = true; m_evaluationPeriods = value; }
    inline AwsCloudWatchAlarmDetails& WithEvaluationPeriods(int value) { SetEvaluationPeriods(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The percentile statistic for the metric associated with the alarm. </p>
     */
    inline const Aws::String& GetExtendedStatistic() const{ return m_extendedStatistic; }
    inline bool ExtendedStatisticHasBeenSet() const { return m_extendedStatisticHasBeenSet; }
    inline void SetExtendedStatistic(const Aws::String& value) { m_extendedStatisticHasBeenSet = true; m_extendedStatistic = value; }
    inline void SetExtendedStatistic(Aws::String&& value) { m_extendedStatisticHasBeenSet = true; m_extendedStatistic = std::move(value); }
    inline void SetExtendedStatistic(const char* value) { m_extendedStatisticHasBeenSet = true; m_extendedStatistic.assign(value); }
    inline AwsCloudWatchAlarmDetails& WithExtendedStatistic(const Aws::String& value) { SetExtendedStatistic(value); return *this;}
    inline AwsCloudWatchAlarmDetails& WithExtendedStatistic(Aws::String&& value) { SetExtendedStatistic(std::move(value)); return *this;}
    inline AwsCloudWatchAlarmDetails& WithExtendedStatistic(const char* value) { SetExtendedStatistic(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The actions to execute when this alarm transitions to the
     * <code>INSUFFICIENT_DATA</code> state from any other state. Each action is
     * specified as an ARN. </p>
     */
    inline const Aws::Vector<Aws::String>& GetInsufficientDataActions() const{ return m_insufficientDataActions; }
    inline bool InsufficientDataActionsHasBeenSet() const { return m_insufficientDataActionsHasBeenSet; }
    inline void SetInsufficientDataActions(const Aws::Vector<Aws::String>& value) { m_insufficientDataActionsHasBeenSet = true; m_insufficientDataActions = value; }
    inline void SetInsufficientDataActions(Aws::Vector<Aws::String>&& value) { m_insufficientDataActionsHasBeenSet = true; m_insufficientDataActions = std::move(value); }
    inline AwsCloudWatchAlarmDetails& WithInsufficientDataActions(const Aws::Vector<Aws::String>& value) { SetInsufficientDataActions(value); return *this;}
    inline AwsCloudWatchAlarmDetails& WithInsufficientDataActions(Aws::Vector<Aws::String>&& value) { SetInsufficientDataActions(std::move(value)); return *this;}
    inline AwsCloudWatchAlarmDetails& AddInsufficientDataActions(const Aws::String& value) { m_insufficientDataActionsHasBeenSet = true; m_insufficientDataActions.push_back(value); return *this; }
    inline AwsCloudWatchAlarmDetails& AddInsufficientDataActions(Aws::String&& value) { m_insufficientDataActionsHasBeenSet = true; m_insufficientDataActions.push_back(std::move(value)); return *this; }
    inline AwsCloudWatchAlarmDetails& AddInsufficientDataActions(const char* value) { m_insufficientDataActionsHasBeenSet = true; m_insufficientDataActions.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The name of the metric associated with the alarm. This is required for an
     * alarm based on a metric. For an alarm based on a math expression, you use
     * <code>Metrics</code> instead and you can't specify <code>MetricName</code>. </p>
     */
    inline const Aws::String& GetMetricName() const{ return m_metricName; }
    inline bool MetricNameHasBeenSet() const { return m_metricNameHasBeenSet; }
    inline void SetMetricName(const Aws::String& value) { m_metricNameHasBeenSet = true; m_metricName = value; }
    inline void SetMetricName(Aws::String&& value) { m_metricNameHasBeenSet = true; m_metricName = std::move(value); }
    inline void SetMetricName(const char* value) { m_metricNameHasBeenSet = true; m_metricName.assign(value); }
    inline AwsCloudWatchAlarmDetails& WithMetricName(const Aws::String& value) { SetMetricName(value); return *this;}
    inline AwsCloudWatchAlarmDetails& WithMetricName(Aws::String&& value) { SetMetricName(std::move(value)); return *this;}
    inline AwsCloudWatchAlarmDetails& WithMetricName(const char* value) { SetMetricName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The namespace of the metric associated with the alarm. This is required for
     * an alarm based on a metric. For an alarm based on a math expression, you can't
     * specify <code>Namespace</code> and you use <code>Metrics</code> instead. </p>
     */
    inline const Aws::String& GetNamespace() const{ return m_namespace; }
    inline bool NamespaceHasBeenSet() const { return m_namespaceHasBeenSet; }
    inline void SetNamespace(const Aws::String& value) { m_namespaceHasBeenSet = true; m_namespace = value; }
    inline void SetNamespace(Aws::String&& value) { m_namespaceHasBeenSet = true; m_namespace = std::move(value); }
    inline void SetNamespace(const char* value) { m_namespaceHasBeenSet = true; m_namespace.assign(value); }
    inline AwsCloudWatchAlarmDetails& WithNamespace(const Aws::String& value) { SetNamespace(value); return *this;}
    inline AwsCloudWatchAlarmDetails& WithNamespace(Aws::String&& value) { SetNamespace(std::move(value)); return *this;}
    inline AwsCloudWatchAlarmDetails& WithNamespace(const char* value) { SetNamespace(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The actions to execute when this alarm transitions to the <code>OK</code>
     * state from any other state. Each action is specified as an ARN. </p>
     */
    inline const Aws::Vector<Aws::String>& GetOkActions() const{ return m_okActions; }
    inline bool OkActionsHasBeenSet() const { return m_okActionsHasBeenSet; }
    inline void SetOkActions(const Aws::Vector<Aws::String>& value) { m_okActionsHasBeenSet = true; m_okActions = value; }
    inline void SetOkActions(Aws::Vector<Aws::String>&& value) { m_okActionsHasBeenSet = true; m_okActions = std::move(value); }
    inline AwsCloudWatchAlarmDetails& WithOkActions(const Aws::Vector<Aws::String>& value) { SetOkActions(value); return *this;}
    inline AwsCloudWatchAlarmDetails& WithOkActions(Aws::Vector<Aws::String>&& value) { SetOkActions(std::move(value)); return *this;}
    inline AwsCloudWatchAlarmDetails& AddOkActions(const Aws::String& value) { m_okActionsHasBeenSet = true; m_okActions.push_back(value); return *this; }
    inline AwsCloudWatchAlarmDetails& AddOkActions(Aws::String&& value) { m_okActionsHasBeenSet = true; m_okActions.push_back(std::move(value)); return *this; }
    inline AwsCloudWatchAlarmDetails& AddOkActions(const char* value) { m_okActionsHasBeenSet = true; m_okActions.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The period, in seconds, over which the statistic is applied. This is required
     * for an alarm based on a metric. </p>
     */
    inline int GetPeriod() const{ return m_period; }
    inline bool PeriodHasBeenSet() const { return m_periodHasBeenSet; }
    inline void SetPeriod(int value) { m_periodHasBeenSet = true; m_period = value; }
    inline AwsCloudWatchAlarmDetails& WithPeriod(int value) { SetPeriod(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The statistic for the metric associated with the alarm, other than
     * percentile. For percentile statistics, use <code>ExtendedStatistic</code>.</p>
     * <p>For an alarm based on a metric, you must specify either
     * <code>Statistic</code> or <code>ExtendedStatistic</code> but not both.</p>
     * <p>For an alarm based on a math expression, you can't specify
     * <code>Statistic</code>. Instead, you use <code>Metrics</code>.</p>
     */
    inline const Aws::String& GetStatistic() const{ return m_statistic; }
    inline bool StatisticHasBeenSet() const { return m_statisticHasBeenSet; }
    inline void SetStatistic(const Aws::String& value) { m_statisticHasBeenSet = true; m_statistic = value; }
    inline void SetStatistic(Aws::String&& value) { m_statisticHasBeenSet = true; m_statistic = std::move(value); }
    inline void SetStatistic(const char* value) { m_statisticHasBeenSet = true; m_statistic.assign(value); }
    inline AwsCloudWatchAlarmDetails& WithStatistic(const Aws::String& value) { SetStatistic(value); return *this;}
    inline AwsCloudWatchAlarmDetails& WithStatistic(Aws::String&& value) { SetStatistic(std::move(value)); return *this;}
    inline AwsCloudWatchAlarmDetails& WithStatistic(const char* value) { SetStatistic(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value to compare with the specified statistic. </p>
     */
    inline double GetThreshold() const{ return m_threshold; }
    inline bool ThresholdHasBeenSet() const { return m_thresholdHasBeenSet; }
    inline void SetThreshold(double value) { m_thresholdHasBeenSet = true; m_threshold = value; }
    inline AwsCloudWatchAlarmDetails& WithThreshold(double value) { SetThreshold(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>n an alarm based on an anomaly detection model, this is the ID of the
     * <code>ANOMALY_DETECTION_BAND</code> function used as the threshold for the
     * alarm. </p>
     */
    inline const Aws::String& GetThresholdMetricId() const{ return m_thresholdMetricId; }
    inline bool ThresholdMetricIdHasBeenSet() const { return m_thresholdMetricIdHasBeenSet; }
    inline void SetThresholdMetricId(const Aws::String& value) { m_thresholdMetricIdHasBeenSet = true; m_thresholdMetricId = value; }
    inline void SetThresholdMetricId(Aws::String&& value) { m_thresholdMetricIdHasBeenSet = true; m_thresholdMetricId = std::move(value); }
    inline void SetThresholdMetricId(const char* value) { m_thresholdMetricIdHasBeenSet = true; m_thresholdMetricId.assign(value); }
    inline AwsCloudWatchAlarmDetails& WithThresholdMetricId(const Aws::String& value) { SetThresholdMetricId(value); return *this;}
    inline AwsCloudWatchAlarmDetails& WithThresholdMetricId(Aws::String&& value) { SetThresholdMetricId(std::move(value)); return *this;}
    inline AwsCloudWatchAlarmDetails& WithThresholdMetricId(const char* value) { SetThresholdMetricId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Sets how this alarm is to handle missing data points. </p>
     */
    inline const Aws::String& GetTreatMissingData() const{ return m_treatMissingData; }
    inline bool TreatMissingDataHasBeenSet() const { return m_treatMissingDataHasBeenSet; }
    inline void SetTreatMissingData(const Aws::String& value) { m_treatMissingDataHasBeenSet = true; m_treatMissingData = value; }
    inline void SetTreatMissingData(Aws::String&& value) { m_treatMissingDataHasBeenSet = true; m_treatMissingData = std::move(value); }
    inline void SetTreatMissingData(const char* value) { m_treatMissingDataHasBeenSet = true; m_treatMissingData.assign(value); }
    inline AwsCloudWatchAlarmDetails& WithTreatMissingData(const Aws::String& value) { SetTreatMissingData(value); return *this;}
    inline AwsCloudWatchAlarmDetails& WithTreatMissingData(Aws::String&& value) { SetTreatMissingData(std::move(value)); return *this;}
    inline AwsCloudWatchAlarmDetails& WithTreatMissingData(const char* value) { SetTreatMissingData(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unit of the metric associated with the alarm. </p>
     */
    inline const Aws::String& GetUnit() const{ return m_unit; }
    inline bool UnitHasBeenSet() const { return m_unitHasBeenSet; }
    inline void SetUnit(const Aws::String& value) { m_unitHasBeenSet = true; m_unit = value; }
    inline void SetUnit(Aws::String&& value) { m_unitHasBeenSet = true; m_unit = std::move(value); }
    inline void SetUnit(const char* value) { m_unitHasBeenSet = true; m_unit.assign(value); }
    inline AwsCloudWatchAlarmDetails& WithUnit(const Aws::String& value) { SetUnit(value); return *this;}
    inline AwsCloudWatchAlarmDetails& WithUnit(Aws::String&& value) { SetUnit(std::move(value)); return *this;}
    inline AwsCloudWatchAlarmDetails& WithUnit(const char* value) { SetUnit(value); return *this;}
    ///@}
  private:

    bool m_actionsEnabled;
    bool m_actionsEnabledHasBeenSet = false;

    Aws::Vector<Aws::String> m_alarmActions;
    bool m_alarmActionsHasBeenSet = false;

    Aws::String m_alarmArn;
    bool m_alarmArnHasBeenSet = false;

    Aws::String m_alarmConfigurationUpdatedTimestamp;
    bool m_alarmConfigurationUpdatedTimestampHasBeenSet = false;

    Aws::String m_alarmDescription;
    bool m_alarmDescriptionHasBeenSet = false;

    Aws::String m_alarmName;
    bool m_alarmNameHasBeenSet = false;

    Aws::String m_comparisonOperator;
    bool m_comparisonOperatorHasBeenSet = false;

    int m_datapointsToAlarm;
    bool m_datapointsToAlarmHasBeenSet = false;

    Aws::Vector<AwsCloudWatchAlarmDimensionsDetails> m_dimensions;
    bool m_dimensionsHasBeenSet = false;

    Aws::String m_evaluateLowSampleCountPercentile;
    bool m_evaluateLowSampleCountPercentileHasBeenSet = false;

    int m_evaluationPeriods;
    bool m_evaluationPeriodsHasBeenSet = false;

    Aws::String m_extendedStatistic;
    bool m_extendedStatisticHasBeenSet = false;

    Aws::Vector<Aws::String> m_insufficientDataActions;
    bool m_insufficientDataActionsHasBeenSet = false;

    Aws::String m_metricName;
    bool m_metricNameHasBeenSet = false;

    Aws::String m_namespace;
    bool m_namespaceHasBeenSet = false;

    Aws::Vector<Aws::String> m_okActions;
    bool m_okActionsHasBeenSet = false;

    int m_period;
    bool m_periodHasBeenSet = false;

    Aws::String m_statistic;
    bool m_statisticHasBeenSet = false;

    double m_threshold;
    bool m_thresholdHasBeenSet = false;

    Aws::String m_thresholdMetricId;
    bool m_thresholdMetricIdHasBeenSet = false;

    Aws::String m_treatMissingData;
    bool m_treatMissingDataHasBeenSet = false;

    Aws::String m_unit;
    bool m_unitHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
