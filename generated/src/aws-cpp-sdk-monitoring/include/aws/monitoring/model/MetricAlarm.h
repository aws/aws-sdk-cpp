/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/monitoring/CloudWatch_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/monitoring/model/StateValue.h>
#include <aws/monitoring/model/Statistic.h>
#include <aws/monitoring/model/StandardUnit.h>
#include <aws/monitoring/model/ComparisonOperator.h>
#include <aws/monitoring/model/EvaluationState.h>
#include <aws/monitoring/model/Dimension.h>
#include <aws/monitoring/model/MetricDataQuery.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace CloudWatch
{
namespace Model
{

  /**
   * <p>The details about a metric alarm.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/monitoring-2010-08-01/MetricAlarm">AWS
   * API Reference</a></p>
   */
  class MetricAlarm
  {
  public:
    AWS_CLOUDWATCH_API MetricAlarm() = default;
    AWS_CLOUDWATCH_API MetricAlarm(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_CLOUDWATCH_API MetricAlarm& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_CLOUDWATCH_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_CLOUDWATCH_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The name of the alarm.</p>
     */
    inline const Aws::String& GetAlarmName() const { return m_alarmName; }
    inline bool AlarmNameHasBeenSet() const { return m_alarmNameHasBeenSet; }
    template<typename AlarmNameT = Aws::String>
    void SetAlarmName(AlarmNameT&& value) { m_alarmNameHasBeenSet = true; m_alarmName = std::forward<AlarmNameT>(value); }
    template<typename AlarmNameT = Aws::String>
    MetricAlarm& WithAlarmName(AlarmNameT&& value) { SetAlarmName(std::forward<AlarmNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the alarm.</p>
     */
    inline const Aws::String& GetAlarmArn() const { return m_alarmArn; }
    inline bool AlarmArnHasBeenSet() const { return m_alarmArnHasBeenSet; }
    template<typename AlarmArnT = Aws::String>
    void SetAlarmArn(AlarmArnT&& value) { m_alarmArnHasBeenSet = true; m_alarmArn = std::forward<AlarmArnT>(value); }
    template<typename AlarmArnT = Aws::String>
    MetricAlarm& WithAlarmArn(AlarmArnT&& value) { SetAlarmArn(std::forward<AlarmArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the alarm.</p>
     */
    inline const Aws::String& GetAlarmDescription() const { return m_alarmDescription; }
    inline bool AlarmDescriptionHasBeenSet() const { return m_alarmDescriptionHasBeenSet; }
    template<typename AlarmDescriptionT = Aws::String>
    void SetAlarmDescription(AlarmDescriptionT&& value) { m_alarmDescriptionHasBeenSet = true; m_alarmDescription = std::forward<AlarmDescriptionT>(value); }
    template<typename AlarmDescriptionT = Aws::String>
    MetricAlarm& WithAlarmDescription(AlarmDescriptionT&& value) { SetAlarmDescription(std::forward<AlarmDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time stamp of the last update to the alarm configuration.</p>
     */
    inline const Aws::Utils::DateTime& GetAlarmConfigurationUpdatedTimestamp() const { return m_alarmConfigurationUpdatedTimestamp; }
    inline bool AlarmConfigurationUpdatedTimestampHasBeenSet() const { return m_alarmConfigurationUpdatedTimestampHasBeenSet; }
    template<typename AlarmConfigurationUpdatedTimestampT = Aws::Utils::DateTime>
    void SetAlarmConfigurationUpdatedTimestamp(AlarmConfigurationUpdatedTimestampT&& value) { m_alarmConfigurationUpdatedTimestampHasBeenSet = true; m_alarmConfigurationUpdatedTimestamp = std::forward<AlarmConfigurationUpdatedTimestampT>(value); }
    template<typename AlarmConfigurationUpdatedTimestampT = Aws::Utils::DateTime>
    MetricAlarm& WithAlarmConfigurationUpdatedTimestamp(AlarmConfigurationUpdatedTimestampT&& value) { SetAlarmConfigurationUpdatedTimestamp(std::forward<AlarmConfigurationUpdatedTimestampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether actions should be executed during any changes to the alarm
     * state.</p>
     */
    inline bool GetActionsEnabled() const { return m_actionsEnabled; }
    inline bool ActionsEnabledHasBeenSet() const { return m_actionsEnabledHasBeenSet; }
    inline void SetActionsEnabled(bool value) { m_actionsEnabledHasBeenSet = true; m_actionsEnabled = value; }
    inline MetricAlarm& WithActionsEnabled(bool value) { SetActionsEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The actions to execute when this alarm transitions to the <code>OK</code>
     * state from any other state. Each action is specified as an Amazon Resource Name
     * (ARN).</p>
     */
    inline const Aws::Vector<Aws::String>& GetOKActions() const { return m_oKActions; }
    inline bool OKActionsHasBeenSet() const { return m_oKActionsHasBeenSet; }
    template<typename OKActionsT = Aws::Vector<Aws::String>>
    void SetOKActions(OKActionsT&& value) { m_oKActionsHasBeenSet = true; m_oKActions = std::forward<OKActionsT>(value); }
    template<typename OKActionsT = Aws::Vector<Aws::String>>
    MetricAlarm& WithOKActions(OKActionsT&& value) { SetOKActions(std::forward<OKActionsT>(value)); return *this;}
    template<typename OKActionsT = Aws::String>
    MetricAlarm& AddOKActions(OKActionsT&& value) { m_oKActionsHasBeenSet = true; m_oKActions.emplace_back(std::forward<OKActionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The actions to execute when this alarm transitions to the <code>ALARM</code>
     * state from any other state. Each action is specified as an Amazon Resource Name
     * (ARN).</p>
     */
    inline const Aws::Vector<Aws::String>& GetAlarmActions() const { return m_alarmActions; }
    inline bool AlarmActionsHasBeenSet() const { return m_alarmActionsHasBeenSet; }
    template<typename AlarmActionsT = Aws::Vector<Aws::String>>
    void SetAlarmActions(AlarmActionsT&& value) { m_alarmActionsHasBeenSet = true; m_alarmActions = std::forward<AlarmActionsT>(value); }
    template<typename AlarmActionsT = Aws::Vector<Aws::String>>
    MetricAlarm& WithAlarmActions(AlarmActionsT&& value) { SetAlarmActions(std::forward<AlarmActionsT>(value)); return *this;}
    template<typename AlarmActionsT = Aws::String>
    MetricAlarm& AddAlarmActions(AlarmActionsT&& value) { m_alarmActionsHasBeenSet = true; m_alarmActions.emplace_back(std::forward<AlarmActionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The actions to execute when this alarm transitions to the
     * <code>INSUFFICIENT_DATA</code> state from any other state. Each action is
     * specified as an Amazon Resource Name (ARN).</p>
     */
    inline const Aws::Vector<Aws::String>& GetInsufficientDataActions() const { return m_insufficientDataActions; }
    inline bool InsufficientDataActionsHasBeenSet() const { return m_insufficientDataActionsHasBeenSet; }
    template<typename InsufficientDataActionsT = Aws::Vector<Aws::String>>
    void SetInsufficientDataActions(InsufficientDataActionsT&& value) { m_insufficientDataActionsHasBeenSet = true; m_insufficientDataActions = std::forward<InsufficientDataActionsT>(value); }
    template<typename InsufficientDataActionsT = Aws::Vector<Aws::String>>
    MetricAlarm& WithInsufficientDataActions(InsufficientDataActionsT&& value) { SetInsufficientDataActions(std::forward<InsufficientDataActionsT>(value)); return *this;}
    template<typename InsufficientDataActionsT = Aws::String>
    MetricAlarm& AddInsufficientDataActions(InsufficientDataActionsT&& value) { m_insufficientDataActionsHasBeenSet = true; m_insufficientDataActions.emplace_back(std::forward<InsufficientDataActionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The state value for the alarm.</p>
     */
    inline StateValue GetStateValue() const { return m_stateValue; }
    inline bool StateValueHasBeenSet() const { return m_stateValueHasBeenSet; }
    inline void SetStateValue(StateValue value) { m_stateValueHasBeenSet = true; m_stateValue = value; }
    inline MetricAlarm& WithStateValue(StateValue value) { SetStateValue(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An explanation for the alarm state, in text format.</p>
     */
    inline const Aws::String& GetStateReason() const { return m_stateReason; }
    inline bool StateReasonHasBeenSet() const { return m_stateReasonHasBeenSet; }
    template<typename StateReasonT = Aws::String>
    void SetStateReason(StateReasonT&& value) { m_stateReasonHasBeenSet = true; m_stateReason = std::forward<StateReasonT>(value); }
    template<typename StateReasonT = Aws::String>
    MetricAlarm& WithStateReason(StateReasonT&& value) { SetStateReason(std::forward<StateReasonT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An explanation for the alarm state, in JSON format.</p>
     */
    inline const Aws::String& GetStateReasonData() const { return m_stateReasonData; }
    inline bool StateReasonDataHasBeenSet() const { return m_stateReasonDataHasBeenSet; }
    template<typename StateReasonDataT = Aws::String>
    void SetStateReasonData(StateReasonDataT&& value) { m_stateReasonDataHasBeenSet = true; m_stateReasonData = std::forward<StateReasonDataT>(value); }
    template<typename StateReasonDataT = Aws::String>
    MetricAlarm& WithStateReasonData(StateReasonDataT&& value) { SetStateReasonData(std::forward<StateReasonDataT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time stamp of the last update to the value of either the
     * <code>StateValue</code> or <code>EvaluationState</code> parameters.</p>
     */
    inline const Aws::Utils::DateTime& GetStateUpdatedTimestamp() const { return m_stateUpdatedTimestamp; }
    inline bool StateUpdatedTimestampHasBeenSet() const { return m_stateUpdatedTimestampHasBeenSet; }
    template<typename StateUpdatedTimestampT = Aws::Utils::DateTime>
    void SetStateUpdatedTimestamp(StateUpdatedTimestampT&& value) { m_stateUpdatedTimestampHasBeenSet = true; m_stateUpdatedTimestamp = std::forward<StateUpdatedTimestampT>(value); }
    template<typename StateUpdatedTimestampT = Aws::Utils::DateTime>
    MetricAlarm& WithStateUpdatedTimestamp(StateUpdatedTimestampT&& value) { SetStateUpdatedTimestamp(std::forward<StateUpdatedTimestampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the metric associated with the alarm, if this is an alarm based
     * on a single metric.</p>
     */
    inline const Aws::String& GetMetricName() const { return m_metricName; }
    inline bool MetricNameHasBeenSet() const { return m_metricNameHasBeenSet; }
    template<typename MetricNameT = Aws::String>
    void SetMetricName(MetricNameT&& value) { m_metricNameHasBeenSet = true; m_metricName = std::forward<MetricNameT>(value); }
    template<typename MetricNameT = Aws::String>
    MetricAlarm& WithMetricName(MetricNameT&& value) { SetMetricName(std::forward<MetricNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The namespace of the metric associated with the alarm.</p>
     */
    inline const Aws::String& GetNamespace() const { return m_namespace; }
    inline bool NamespaceHasBeenSet() const { return m_namespaceHasBeenSet; }
    template<typename NamespaceT = Aws::String>
    void SetNamespace(NamespaceT&& value) { m_namespaceHasBeenSet = true; m_namespace = std::forward<NamespaceT>(value); }
    template<typename NamespaceT = Aws::String>
    MetricAlarm& WithNamespace(NamespaceT&& value) { SetNamespace(std::forward<NamespaceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The statistic for the metric associated with the alarm, other than
     * percentile. For percentile statistics, use <code>ExtendedStatistic</code>.</p>
     */
    inline Statistic GetStatistic() const { return m_statistic; }
    inline bool StatisticHasBeenSet() const { return m_statisticHasBeenSet; }
    inline void SetStatistic(Statistic value) { m_statisticHasBeenSet = true; m_statistic = value; }
    inline MetricAlarm& WithStatistic(Statistic value) { SetStatistic(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The percentile statistic for the metric associated with the alarm. Specify a
     * value between p0.0 and p100.</p>
     */
    inline const Aws::String& GetExtendedStatistic() const { return m_extendedStatistic; }
    inline bool ExtendedStatisticHasBeenSet() const { return m_extendedStatisticHasBeenSet; }
    template<typename ExtendedStatisticT = Aws::String>
    void SetExtendedStatistic(ExtendedStatisticT&& value) { m_extendedStatisticHasBeenSet = true; m_extendedStatistic = std::forward<ExtendedStatisticT>(value); }
    template<typename ExtendedStatisticT = Aws::String>
    MetricAlarm& WithExtendedStatistic(ExtendedStatisticT&& value) { SetExtendedStatistic(std::forward<ExtendedStatisticT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The dimensions for the metric associated with the alarm.</p>
     */
    inline const Aws::Vector<Dimension>& GetDimensions() const { return m_dimensions; }
    inline bool DimensionsHasBeenSet() const { return m_dimensionsHasBeenSet; }
    template<typename DimensionsT = Aws::Vector<Dimension>>
    void SetDimensions(DimensionsT&& value) { m_dimensionsHasBeenSet = true; m_dimensions = std::forward<DimensionsT>(value); }
    template<typename DimensionsT = Aws::Vector<Dimension>>
    MetricAlarm& WithDimensions(DimensionsT&& value) { SetDimensions(std::forward<DimensionsT>(value)); return *this;}
    template<typename DimensionsT = Dimension>
    MetricAlarm& AddDimensions(DimensionsT&& value) { m_dimensionsHasBeenSet = true; m_dimensions.emplace_back(std::forward<DimensionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The period, in seconds, over which the statistic is applied.</p>
     */
    inline int GetPeriod() const { return m_period; }
    inline bool PeriodHasBeenSet() const { return m_periodHasBeenSet; }
    inline void SetPeriod(int value) { m_periodHasBeenSet = true; m_period = value; }
    inline MetricAlarm& WithPeriod(int value) { SetPeriod(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unit of the metric associated with the alarm.</p>
     */
    inline StandardUnit GetUnit() const { return m_unit; }
    inline bool UnitHasBeenSet() const { return m_unitHasBeenSet; }
    inline void SetUnit(StandardUnit value) { m_unitHasBeenSet = true; m_unit = value; }
    inline MetricAlarm& WithUnit(StandardUnit value) { SetUnit(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of periods over which data is compared to the specified
     * threshold.</p>
     */
    inline int GetEvaluationPeriods() const { return m_evaluationPeriods; }
    inline bool EvaluationPeriodsHasBeenSet() const { return m_evaluationPeriodsHasBeenSet; }
    inline void SetEvaluationPeriods(int value) { m_evaluationPeriodsHasBeenSet = true; m_evaluationPeriods = value; }
    inline MetricAlarm& WithEvaluationPeriods(int value) { SetEvaluationPeriods(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of data points that must be breaching to trigger the alarm.</p>
     */
    inline int GetDatapointsToAlarm() const { return m_datapointsToAlarm; }
    inline bool DatapointsToAlarmHasBeenSet() const { return m_datapointsToAlarmHasBeenSet; }
    inline void SetDatapointsToAlarm(int value) { m_datapointsToAlarmHasBeenSet = true; m_datapointsToAlarm = value; }
    inline MetricAlarm& WithDatapointsToAlarm(int value) { SetDatapointsToAlarm(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value to compare with the specified statistic.</p>
     */
    inline double GetThreshold() const { return m_threshold; }
    inline bool ThresholdHasBeenSet() const { return m_thresholdHasBeenSet; }
    inline void SetThreshold(double value) { m_thresholdHasBeenSet = true; m_threshold = value; }
    inline MetricAlarm& WithThreshold(double value) { SetThreshold(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The arithmetic operation to use when comparing the specified statistic and
     * threshold. The specified statistic value is used as the first operand.</p>
     */
    inline ComparisonOperator GetComparisonOperator() const { return m_comparisonOperator; }
    inline bool ComparisonOperatorHasBeenSet() const { return m_comparisonOperatorHasBeenSet; }
    inline void SetComparisonOperator(ComparisonOperator value) { m_comparisonOperatorHasBeenSet = true; m_comparisonOperator = value; }
    inline MetricAlarm& WithComparisonOperator(ComparisonOperator value) { SetComparisonOperator(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Sets how this alarm is to handle missing data points. The valid values are
     * <code>breaching</code>, <code>notBreaching</code>, <code>ignore</code>, and
     * <code>missing</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/AlarmThatSendsEmail.html#alarms-and-missing-data">Configuring
     * how CloudWatch alarms treat missing data</a>.</p> <p>If this parameter is
     * omitted, the default behavior of <code>missing</code> is used.</p>
     */
    inline const Aws::String& GetTreatMissingData() const { return m_treatMissingData; }
    inline bool TreatMissingDataHasBeenSet() const { return m_treatMissingDataHasBeenSet; }
    template<typename TreatMissingDataT = Aws::String>
    void SetTreatMissingData(TreatMissingDataT&& value) { m_treatMissingDataHasBeenSet = true; m_treatMissingData = std::forward<TreatMissingDataT>(value); }
    template<typename TreatMissingDataT = Aws::String>
    MetricAlarm& WithTreatMissingData(TreatMissingDataT&& value) { SetTreatMissingData(std::forward<TreatMissingDataT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Used only for alarms based on percentiles. If <code>ignore</code>, the alarm
     * state does not change during periods with too few data points to be
     * statistically significant. If <code>evaluate</code> or this parameter is not
     * used, the alarm is always evaluated and possibly changes state no matter how
     * many data points are available.</p>
     */
    inline const Aws::String& GetEvaluateLowSampleCountPercentile() const { return m_evaluateLowSampleCountPercentile; }
    inline bool EvaluateLowSampleCountPercentileHasBeenSet() const { return m_evaluateLowSampleCountPercentileHasBeenSet; }
    template<typename EvaluateLowSampleCountPercentileT = Aws::String>
    void SetEvaluateLowSampleCountPercentile(EvaluateLowSampleCountPercentileT&& value) { m_evaluateLowSampleCountPercentileHasBeenSet = true; m_evaluateLowSampleCountPercentile = std::forward<EvaluateLowSampleCountPercentileT>(value); }
    template<typename EvaluateLowSampleCountPercentileT = Aws::String>
    MetricAlarm& WithEvaluateLowSampleCountPercentile(EvaluateLowSampleCountPercentileT&& value) { SetEvaluateLowSampleCountPercentile(std::forward<EvaluateLowSampleCountPercentileT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of MetricDataQuery structures, used in an alarm based on a metric
     * math expression. Each structure either retrieves a metric or performs a math
     * expression. One item in the Metrics array is the math expression that the alarm
     * watches. This expression by designated by having <code>ReturnData</code> set to
     * true.</p>
     */
    inline const Aws::Vector<MetricDataQuery>& GetMetrics() const { return m_metrics; }
    inline bool MetricsHasBeenSet() const { return m_metricsHasBeenSet; }
    template<typename MetricsT = Aws::Vector<MetricDataQuery>>
    void SetMetrics(MetricsT&& value) { m_metricsHasBeenSet = true; m_metrics = std::forward<MetricsT>(value); }
    template<typename MetricsT = Aws::Vector<MetricDataQuery>>
    MetricAlarm& WithMetrics(MetricsT&& value) { SetMetrics(std::forward<MetricsT>(value)); return *this;}
    template<typename MetricsT = MetricDataQuery>
    MetricAlarm& AddMetrics(MetricsT&& value) { m_metricsHasBeenSet = true; m_metrics.emplace_back(std::forward<MetricsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>In an alarm based on an anomaly detection model, this is the ID of the
     * <code>ANOMALY_DETECTION_BAND</code> function used as the threshold for the
     * alarm.</p>
     */
    inline const Aws::String& GetThresholdMetricId() const { return m_thresholdMetricId; }
    inline bool ThresholdMetricIdHasBeenSet() const { return m_thresholdMetricIdHasBeenSet; }
    template<typename ThresholdMetricIdT = Aws::String>
    void SetThresholdMetricId(ThresholdMetricIdT&& value) { m_thresholdMetricIdHasBeenSet = true; m_thresholdMetricId = std::forward<ThresholdMetricIdT>(value); }
    template<typename ThresholdMetricIdT = Aws::String>
    MetricAlarm& WithThresholdMetricId(ThresholdMetricIdT&& value) { SetThresholdMetricId(std::forward<ThresholdMetricIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the value of this field is <code>PARTIAL_DATA</code>, the alarm is being
     * evaluated based on only partial data. This happens if the query used for the
     * alarm returns more than 10,000 metrics. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/Create_Metrics_Insights_Alarm.html">Create
     * alarms on Metrics Insights queries</a>.</p>
     */
    inline EvaluationState GetEvaluationState() const { return m_evaluationState; }
    inline bool EvaluationStateHasBeenSet() const { return m_evaluationStateHasBeenSet; }
    inline void SetEvaluationState(EvaluationState value) { m_evaluationStateHasBeenSet = true; m_evaluationState = value; }
    inline MetricAlarm& WithEvaluationState(EvaluationState value) { SetEvaluationState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that the alarm's <code>StateValue</code> most recently
     * changed.</p>
     */
    inline const Aws::Utils::DateTime& GetStateTransitionedTimestamp() const { return m_stateTransitionedTimestamp; }
    inline bool StateTransitionedTimestampHasBeenSet() const { return m_stateTransitionedTimestampHasBeenSet; }
    template<typename StateTransitionedTimestampT = Aws::Utils::DateTime>
    void SetStateTransitionedTimestamp(StateTransitionedTimestampT&& value) { m_stateTransitionedTimestampHasBeenSet = true; m_stateTransitionedTimestamp = std::forward<StateTransitionedTimestampT>(value); }
    template<typename StateTransitionedTimestampT = Aws::Utils::DateTime>
    MetricAlarm& WithStateTransitionedTimestamp(StateTransitionedTimestampT&& value) { SetStateTransitionedTimestamp(std::forward<StateTransitionedTimestampT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_alarmName;
    bool m_alarmNameHasBeenSet = false;

    Aws::String m_alarmArn;
    bool m_alarmArnHasBeenSet = false;

    Aws::String m_alarmDescription;
    bool m_alarmDescriptionHasBeenSet = false;

    Aws::Utils::DateTime m_alarmConfigurationUpdatedTimestamp{};
    bool m_alarmConfigurationUpdatedTimestampHasBeenSet = false;

    bool m_actionsEnabled{false};
    bool m_actionsEnabledHasBeenSet = false;

    Aws::Vector<Aws::String> m_oKActions;
    bool m_oKActionsHasBeenSet = false;

    Aws::Vector<Aws::String> m_alarmActions;
    bool m_alarmActionsHasBeenSet = false;

    Aws::Vector<Aws::String> m_insufficientDataActions;
    bool m_insufficientDataActionsHasBeenSet = false;

    StateValue m_stateValue{StateValue::NOT_SET};
    bool m_stateValueHasBeenSet = false;

    Aws::String m_stateReason;
    bool m_stateReasonHasBeenSet = false;

    Aws::String m_stateReasonData;
    bool m_stateReasonDataHasBeenSet = false;

    Aws::Utils::DateTime m_stateUpdatedTimestamp{};
    bool m_stateUpdatedTimestampHasBeenSet = false;

    Aws::String m_metricName;
    bool m_metricNameHasBeenSet = false;

    Aws::String m_namespace;
    bool m_namespaceHasBeenSet = false;

    Statistic m_statistic{Statistic::NOT_SET};
    bool m_statisticHasBeenSet = false;

    Aws::String m_extendedStatistic;
    bool m_extendedStatisticHasBeenSet = false;

    Aws::Vector<Dimension> m_dimensions;
    bool m_dimensionsHasBeenSet = false;

    int m_period{0};
    bool m_periodHasBeenSet = false;

    StandardUnit m_unit{StandardUnit::NOT_SET};
    bool m_unitHasBeenSet = false;

    int m_evaluationPeriods{0};
    bool m_evaluationPeriodsHasBeenSet = false;

    int m_datapointsToAlarm{0};
    bool m_datapointsToAlarmHasBeenSet = false;

    double m_threshold{0.0};
    bool m_thresholdHasBeenSet = false;

    ComparisonOperator m_comparisonOperator{ComparisonOperator::NOT_SET};
    bool m_comparisonOperatorHasBeenSet = false;

    Aws::String m_treatMissingData;
    bool m_treatMissingDataHasBeenSet = false;

    Aws::String m_evaluateLowSampleCountPercentile;
    bool m_evaluateLowSampleCountPercentileHasBeenSet = false;

    Aws::Vector<MetricDataQuery> m_metrics;
    bool m_metricsHasBeenSet = false;

    Aws::String m_thresholdMetricId;
    bool m_thresholdMetricIdHasBeenSet = false;

    EvaluationState m_evaluationState{EvaluationState::NOT_SET};
    bool m_evaluationStateHasBeenSet = false;

    Aws::Utils::DateTime m_stateTransitionedTimestamp{};
    bool m_stateTransitionedTimestampHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatch
} // namespace Aws
