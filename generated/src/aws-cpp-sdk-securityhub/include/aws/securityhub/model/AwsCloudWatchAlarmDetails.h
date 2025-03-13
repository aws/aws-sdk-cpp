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
    AWS_SECURITYHUB_API AwsCloudWatchAlarmDetails() = default;
    AWS_SECURITYHUB_API AwsCloudWatchAlarmDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsCloudWatchAlarmDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Indicates whether actions should be executed during any changes to the alarm
     * state. </p>
     */
    inline bool GetActionsEnabled() const { return m_actionsEnabled; }
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
    inline const Aws::Vector<Aws::String>& GetAlarmActions() const { return m_alarmActions; }
    inline bool AlarmActionsHasBeenSet() const { return m_alarmActionsHasBeenSet; }
    template<typename AlarmActionsT = Aws::Vector<Aws::String>>
    void SetAlarmActions(AlarmActionsT&& value) { m_alarmActionsHasBeenSet = true; m_alarmActions = std::forward<AlarmActionsT>(value); }
    template<typename AlarmActionsT = Aws::Vector<Aws::String>>
    AwsCloudWatchAlarmDetails& WithAlarmActions(AlarmActionsT&& value) { SetAlarmActions(std::forward<AlarmActionsT>(value)); return *this;}
    template<typename AlarmActionsT = Aws::String>
    AwsCloudWatchAlarmDetails& AddAlarmActions(AlarmActionsT&& value) { m_alarmActionsHasBeenSet = true; m_alarmActions.emplace_back(std::forward<AlarmActionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The ARN of the alarm. </p>
     */
    inline const Aws::String& GetAlarmArn() const { return m_alarmArn; }
    inline bool AlarmArnHasBeenSet() const { return m_alarmArnHasBeenSet; }
    template<typename AlarmArnT = Aws::String>
    void SetAlarmArn(AlarmArnT&& value) { m_alarmArnHasBeenSet = true; m_alarmArn = std::forward<AlarmArnT>(value); }
    template<typename AlarmArnT = Aws::String>
    AwsCloudWatchAlarmDetails& WithAlarmArn(AlarmArnT&& value) { SetAlarmArn(std::forward<AlarmArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time stamp of the last update to the alarm configuration. </p>
     */
    inline const Aws::String& GetAlarmConfigurationUpdatedTimestamp() const { return m_alarmConfigurationUpdatedTimestamp; }
    inline bool AlarmConfigurationUpdatedTimestampHasBeenSet() const { return m_alarmConfigurationUpdatedTimestampHasBeenSet; }
    template<typename AlarmConfigurationUpdatedTimestampT = Aws::String>
    void SetAlarmConfigurationUpdatedTimestamp(AlarmConfigurationUpdatedTimestampT&& value) { m_alarmConfigurationUpdatedTimestampHasBeenSet = true; m_alarmConfigurationUpdatedTimestamp = std::forward<AlarmConfigurationUpdatedTimestampT>(value); }
    template<typename AlarmConfigurationUpdatedTimestampT = Aws::String>
    AwsCloudWatchAlarmDetails& WithAlarmConfigurationUpdatedTimestamp(AlarmConfigurationUpdatedTimestampT&& value) { SetAlarmConfigurationUpdatedTimestamp(std::forward<AlarmConfigurationUpdatedTimestampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the alarm. </p>
     */
    inline const Aws::String& GetAlarmDescription() const { return m_alarmDescription; }
    inline bool AlarmDescriptionHasBeenSet() const { return m_alarmDescriptionHasBeenSet; }
    template<typename AlarmDescriptionT = Aws::String>
    void SetAlarmDescription(AlarmDescriptionT&& value) { m_alarmDescriptionHasBeenSet = true; m_alarmDescription = std::forward<AlarmDescriptionT>(value); }
    template<typename AlarmDescriptionT = Aws::String>
    AwsCloudWatchAlarmDetails& WithAlarmDescription(AlarmDescriptionT&& value) { SetAlarmDescription(std::forward<AlarmDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the alarm. If you don't specify a name, CloudFront generates a
     * unique physical ID and uses that ID for the alarm name. </p>
     */
    inline const Aws::String& GetAlarmName() const { return m_alarmName; }
    inline bool AlarmNameHasBeenSet() const { return m_alarmNameHasBeenSet; }
    template<typename AlarmNameT = Aws::String>
    void SetAlarmName(AlarmNameT&& value) { m_alarmNameHasBeenSet = true; m_alarmName = std::forward<AlarmNameT>(value); }
    template<typename AlarmNameT = Aws::String>
    AwsCloudWatchAlarmDetails& WithAlarmName(AlarmNameT&& value) { SetAlarmName(std::forward<AlarmNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The arithmetic operation to use when comparing the specified statistic and
     * threshold. The specified statistic value is used as the first operand. </p>
     */
    inline const Aws::String& GetComparisonOperator() const { return m_comparisonOperator; }
    inline bool ComparisonOperatorHasBeenSet() const { return m_comparisonOperatorHasBeenSet; }
    template<typename ComparisonOperatorT = Aws::String>
    void SetComparisonOperator(ComparisonOperatorT&& value) { m_comparisonOperatorHasBeenSet = true; m_comparisonOperator = std::forward<ComparisonOperatorT>(value); }
    template<typename ComparisonOperatorT = Aws::String>
    AwsCloudWatchAlarmDetails& WithComparisonOperator(ComparisonOperatorT&& value) { SetComparisonOperator(std::forward<ComparisonOperatorT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of datapoints that must be breaching to trigger the alarm. </p>
     */
    inline int GetDatapointsToAlarm() const { return m_datapointsToAlarm; }
    inline bool DatapointsToAlarmHasBeenSet() const { return m_datapointsToAlarmHasBeenSet; }
    inline void SetDatapointsToAlarm(int value) { m_datapointsToAlarmHasBeenSet = true; m_datapointsToAlarm = value; }
    inline AwsCloudWatchAlarmDetails& WithDatapointsToAlarm(int value) { SetDatapointsToAlarm(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The dimensions for the metric associated with the alarm. </p>
     */
    inline const Aws::Vector<AwsCloudWatchAlarmDimensionsDetails>& GetDimensions() const { return m_dimensions; }
    inline bool DimensionsHasBeenSet() const { return m_dimensionsHasBeenSet; }
    template<typename DimensionsT = Aws::Vector<AwsCloudWatchAlarmDimensionsDetails>>
    void SetDimensions(DimensionsT&& value) { m_dimensionsHasBeenSet = true; m_dimensions = std::forward<DimensionsT>(value); }
    template<typename DimensionsT = Aws::Vector<AwsCloudWatchAlarmDimensionsDetails>>
    AwsCloudWatchAlarmDetails& WithDimensions(DimensionsT&& value) { SetDimensions(std::forward<DimensionsT>(value)); return *this;}
    template<typename DimensionsT = AwsCloudWatchAlarmDimensionsDetails>
    AwsCloudWatchAlarmDetails& AddDimensions(DimensionsT&& value) { m_dimensionsHasBeenSet = true; m_dimensions.emplace_back(std::forward<DimensionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Used only for alarms based on percentiles. If <code>ignore</code>, the alarm
     * state does not change during periods with too few data points to be
     * statistically significant. If <code>evaluate</code> or this parameter is not
     * used, the alarm is always evaluated and possibly changes state no matter how
     * many data points are available. </p>
     */
    inline const Aws::String& GetEvaluateLowSampleCountPercentile() const { return m_evaluateLowSampleCountPercentile; }
    inline bool EvaluateLowSampleCountPercentileHasBeenSet() const { return m_evaluateLowSampleCountPercentileHasBeenSet; }
    template<typename EvaluateLowSampleCountPercentileT = Aws::String>
    void SetEvaluateLowSampleCountPercentile(EvaluateLowSampleCountPercentileT&& value) { m_evaluateLowSampleCountPercentileHasBeenSet = true; m_evaluateLowSampleCountPercentile = std::forward<EvaluateLowSampleCountPercentileT>(value); }
    template<typename EvaluateLowSampleCountPercentileT = Aws::String>
    AwsCloudWatchAlarmDetails& WithEvaluateLowSampleCountPercentile(EvaluateLowSampleCountPercentileT&& value) { SetEvaluateLowSampleCountPercentile(std::forward<EvaluateLowSampleCountPercentileT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of periods over which data is compared to the specified threshold.
     * </p>
     */
    inline int GetEvaluationPeriods() const { return m_evaluationPeriods; }
    inline bool EvaluationPeriodsHasBeenSet() const { return m_evaluationPeriodsHasBeenSet; }
    inline void SetEvaluationPeriods(int value) { m_evaluationPeriodsHasBeenSet = true; m_evaluationPeriods = value; }
    inline AwsCloudWatchAlarmDetails& WithEvaluationPeriods(int value) { SetEvaluationPeriods(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The percentile statistic for the metric associated with the alarm. </p>
     */
    inline const Aws::String& GetExtendedStatistic() const { return m_extendedStatistic; }
    inline bool ExtendedStatisticHasBeenSet() const { return m_extendedStatisticHasBeenSet; }
    template<typename ExtendedStatisticT = Aws::String>
    void SetExtendedStatistic(ExtendedStatisticT&& value) { m_extendedStatisticHasBeenSet = true; m_extendedStatistic = std::forward<ExtendedStatisticT>(value); }
    template<typename ExtendedStatisticT = Aws::String>
    AwsCloudWatchAlarmDetails& WithExtendedStatistic(ExtendedStatisticT&& value) { SetExtendedStatistic(std::forward<ExtendedStatisticT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The actions to execute when this alarm transitions to the
     * <code>INSUFFICIENT_DATA</code> state from any other state. Each action is
     * specified as an ARN. </p>
     */
    inline const Aws::Vector<Aws::String>& GetInsufficientDataActions() const { return m_insufficientDataActions; }
    inline bool InsufficientDataActionsHasBeenSet() const { return m_insufficientDataActionsHasBeenSet; }
    template<typename InsufficientDataActionsT = Aws::Vector<Aws::String>>
    void SetInsufficientDataActions(InsufficientDataActionsT&& value) { m_insufficientDataActionsHasBeenSet = true; m_insufficientDataActions = std::forward<InsufficientDataActionsT>(value); }
    template<typename InsufficientDataActionsT = Aws::Vector<Aws::String>>
    AwsCloudWatchAlarmDetails& WithInsufficientDataActions(InsufficientDataActionsT&& value) { SetInsufficientDataActions(std::forward<InsufficientDataActionsT>(value)); return *this;}
    template<typename InsufficientDataActionsT = Aws::String>
    AwsCloudWatchAlarmDetails& AddInsufficientDataActions(InsufficientDataActionsT&& value) { m_insufficientDataActionsHasBeenSet = true; m_insufficientDataActions.emplace_back(std::forward<InsufficientDataActionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The name of the metric associated with the alarm. This is required for an
     * alarm based on a metric. For an alarm based on a math expression, you use
     * <code>Metrics</code> instead and you can't specify <code>MetricName</code>. </p>
     */
    inline const Aws::String& GetMetricName() const { return m_metricName; }
    inline bool MetricNameHasBeenSet() const { return m_metricNameHasBeenSet; }
    template<typename MetricNameT = Aws::String>
    void SetMetricName(MetricNameT&& value) { m_metricNameHasBeenSet = true; m_metricName = std::forward<MetricNameT>(value); }
    template<typename MetricNameT = Aws::String>
    AwsCloudWatchAlarmDetails& WithMetricName(MetricNameT&& value) { SetMetricName(std::forward<MetricNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The namespace of the metric associated with the alarm. This is required for
     * an alarm based on a metric. For an alarm based on a math expression, you can't
     * specify <code>Namespace</code> and you use <code>Metrics</code> instead. </p>
     */
    inline const Aws::String& GetNamespace() const { return m_namespace; }
    inline bool NamespaceHasBeenSet() const { return m_namespaceHasBeenSet; }
    template<typename NamespaceT = Aws::String>
    void SetNamespace(NamespaceT&& value) { m_namespaceHasBeenSet = true; m_namespace = std::forward<NamespaceT>(value); }
    template<typename NamespaceT = Aws::String>
    AwsCloudWatchAlarmDetails& WithNamespace(NamespaceT&& value) { SetNamespace(std::forward<NamespaceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The actions to execute when this alarm transitions to the <code>OK</code>
     * state from any other state. Each action is specified as an ARN. </p>
     */
    inline const Aws::Vector<Aws::String>& GetOkActions() const { return m_okActions; }
    inline bool OkActionsHasBeenSet() const { return m_okActionsHasBeenSet; }
    template<typename OkActionsT = Aws::Vector<Aws::String>>
    void SetOkActions(OkActionsT&& value) { m_okActionsHasBeenSet = true; m_okActions = std::forward<OkActionsT>(value); }
    template<typename OkActionsT = Aws::Vector<Aws::String>>
    AwsCloudWatchAlarmDetails& WithOkActions(OkActionsT&& value) { SetOkActions(std::forward<OkActionsT>(value)); return *this;}
    template<typename OkActionsT = Aws::String>
    AwsCloudWatchAlarmDetails& AddOkActions(OkActionsT&& value) { m_okActionsHasBeenSet = true; m_okActions.emplace_back(std::forward<OkActionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The period, in seconds, over which the statistic is applied. This is required
     * for an alarm based on a metric. </p>
     */
    inline int GetPeriod() const { return m_period; }
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
    inline const Aws::String& GetStatistic() const { return m_statistic; }
    inline bool StatisticHasBeenSet() const { return m_statisticHasBeenSet; }
    template<typename StatisticT = Aws::String>
    void SetStatistic(StatisticT&& value) { m_statisticHasBeenSet = true; m_statistic = std::forward<StatisticT>(value); }
    template<typename StatisticT = Aws::String>
    AwsCloudWatchAlarmDetails& WithStatistic(StatisticT&& value) { SetStatistic(std::forward<StatisticT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value to compare with the specified statistic. </p>
     */
    inline double GetThreshold() const { return m_threshold; }
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
    inline const Aws::String& GetThresholdMetricId() const { return m_thresholdMetricId; }
    inline bool ThresholdMetricIdHasBeenSet() const { return m_thresholdMetricIdHasBeenSet; }
    template<typename ThresholdMetricIdT = Aws::String>
    void SetThresholdMetricId(ThresholdMetricIdT&& value) { m_thresholdMetricIdHasBeenSet = true; m_thresholdMetricId = std::forward<ThresholdMetricIdT>(value); }
    template<typename ThresholdMetricIdT = Aws::String>
    AwsCloudWatchAlarmDetails& WithThresholdMetricId(ThresholdMetricIdT&& value) { SetThresholdMetricId(std::forward<ThresholdMetricIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Sets how this alarm is to handle missing data points. </p>
     */
    inline const Aws::String& GetTreatMissingData() const { return m_treatMissingData; }
    inline bool TreatMissingDataHasBeenSet() const { return m_treatMissingDataHasBeenSet; }
    template<typename TreatMissingDataT = Aws::String>
    void SetTreatMissingData(TreatMissingDataT&& value) { m_treatMissingDataHasBeenSet = true; m_treatMissingData = std::forward<TreatMissingDataT>(value); }
    template<typename TreatMissingDataT = Aws::String>
    AwsCloudWatchAlarmDetails& WithTreatMissingData(TreatMissingDataT&& value) { SetTreatMissingData(std::forward<TreatMissingDataT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unit of the metric associated with the alarm. </p>
     */
    inline const Aws::String& GetUnit() const { return m_unit; }
    inline bool UnitHasBeenSet() const { return m_unitHasBeenSet; }
    template<typename UnitT = Aws::String>
    void SetUnit(UnitT&& value) { m_unitHasBeenSet = true; m_unit = std::forward<UnitT>(value); }
    template<typename UnitT = Aws::String>
    AwsCloudWatchAlarmDetails& WithUnit(UnitT&& value) { SetUnit(std::forward<UnitT>(value)); return *this;}
    ///@}
  private:

    bool m_actionsEnabled{false};
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

    int m_datapointsToAlarm{0};
    bool m_datapointsToAlarmHasBeenSet = false;

    Aws::Vector<AwsCloudWatchAlarmDimensionsDetails> m_dimensions;
    bool m_dimensionsHasBeenSet = false;

    Aws::String m_evaluateLowSampleCountPercentile;
    bool m_evaluateLowSampleCountPercentileHasBeenSet = false;

    int m_evaluationPeriods{0};
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

    int m_period{0};
    bool m_periodHasBeenSet = false;

    Aws::String m_statistic;
    bool m_statisticHasBeenSet = false;

    double m_threshold{0.0};
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
