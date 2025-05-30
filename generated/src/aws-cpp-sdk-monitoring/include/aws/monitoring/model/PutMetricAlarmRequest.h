﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/monitoring/CloudWatch_EXPORTS.h>
#include <aws/monitoring/CloudWatchRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/monitoring/model/Statistic.h>
#include <aws/monitoring/model/StandardUnit.h>
#include <aws/monitoring/model/ComparisonOperator.h>
#include <aws/monitoring/model/Dimension.h>
#include <aws/monitoring/model/MetricDataQuery.h>
#include <aws/monitoring/model/Tag.h>
#include <utility>

namespace Aws
{
namespace CloudWatch
{
namespace Model
{

  /**
   */
  class PutMetricAlarmRequest : public CloudWatchRequest
  {
  public:
    AWS_CLOUDWATCH_API PutMetricAlarmRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutMetricAlarm"; }

    AWS_CLOUDWATCH_API Aws::String SerializePayload() const override;

  protected:
    AWS_CLOUDWATCH_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The name for the alarm. This name must be unique within the Region.</p>
     * <p>The name must contain only UTF-8 characters, and can't contain ASCII control
     * characters</p>
     */
    inline const Aws::String& GetAlarmName() const { return m_alarmName; }
    inline bool AlarmNameHasBeenSet() const { return m_alarmNameHasBeenSet; }
    template<typename AlarmNameT = Aws::String>
    void SetAlarmName(AlarmNameT&& value) { m_alarmNameHasBeenSet = true; m_alarmName = std::forward<AlarmNameT>(value); }
    template<typename AlarmNameT = Aws::String>
    PutMetricAlarmRequest& WithAlarmName(AlarmNameT&& value) { SetAlarmName(std::forward<AlarmNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description for the alarm.</p>
     */
    inline const Aws::String& GetAlarmDescription() const { return m_alarmDescription; }
    inline bool AlarmDescriptionHasBeenSet() const { return m_alarmDescriptionHasBeenSet; }
    template<typename AlarmDescriptionT = Aws::String>
    void SetAlarmDescription(AlarmDescriptionT&& value) { m_alarmDescriptionHasBeenSet = true; m_alarmDescription = std::forward<AlarmDescriptionT>(value); }
    template<typename AlarmDescriptionT = Aws::String>
    PutMetricAlarmRequest& WithAlarmDescription(AlarmDescriptionT&& value) { SetAlarmDescription(std::forward<AlarmDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether actions should be executed during any changes to the alarm
     * state. The default is <code>TRUE</code>.</p>
     */
    inline bool GetActionsEnabled() const { return m_actionsEnabled; }
    inline bool ActionsEnabledHasBeenSet() const { return m_actionsEnabledHasBeenSet; }
    inline void SetActionsEnabled(bool value) { m_actionsEnabledHasBeenSet = true; m_actionsEnabled = value; }
    inline PutMetricAlarmRequest& WithActionsEnabled(bool value) { SetActionsEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The actions to execute when this alarm transitions to an <code>OK</code>
     * state from any other state. Each action is specified as an Amazon Resource Name
     * (ARN). Valid values:</p> <p> <b>EC2 actions:</b> </p> <ul> <li> <p>
     * <code>arn:aws:automate:<i>region</i>:ec2:stop</code> </p> </li> <li> <p>
     * <code>arn:aws:automate:<i>region</i>:ec2:terminate</code> </p> </li> <li> <p>
     * <code>arn:aws:automate:<i>region</i>:ec2:reboot</code> </p> </li> <li> <p>
     * <code>arn:aws:automate:<i>region</i>:ec2:recover</code> </p> </li> <li> <p>
     * <code>arn:aws:swf:<i>region</i>:<i>account-id</i>:action/actions/AWS_EC2.InstanceId.Stop/1.0</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:swf:<i>region</i>:<i>account-id</i>:action/actions/AWS_EC2.InstanceId.Terminate/1.0</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:swf:<i>region</i>:<i>account-id</i>:action/actions/AWS_EC2.InstanceId.Reboot/1.0</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:swf:<i>region</i>:<i>account-id</i>:action/actions/AWS_EC2.InstanceId.Recover/1.0</code>
     * </p> </li> </ul> <p> <b>Autoscaling action:</b> </p> <ul> <li> <p>
     * <code>arn:aws:autoscaling:<i>region</i>:<i>account-id</i>:scalingPolicy:<i>policy-id</i>:autoScalingGroupName/<i>group-friendly-name</i>:policyName/<i>policy-friendly-name</i>
     * </code> </p> </li> </ul> <p> <b>Lambda actions:</b> </p> <ul> <li> <p>Invoke the
     * latest version of a Lambda function:
     * <code>arn:aws:lambda:<i>region</i>:<i>account-id</i>:function:<i>function-name</i>
     * </code> </p> </li> <li> <p>Invoke a specific version of a Lambda function:
     * <code>arn:aws:lambda:<i>region</i>:<i>account-id</i>:function:<i>function-name</i>:<i>version-number</i>
     * </code> </p> </li> <li> <p>Invoke a function by using an alias Lambda function:
     * <code>arn:aws:lambda:<i>region</i>:<i>account-id</i>:function:<i>function-name</i>:<i>alias-name</i>
     * </code> </p> </li> </ul> <p> <b>SNS notification action:</b> </p> <ul> <li> <p>
     * <code>arn:aws:sns:<i>region</i>:<i>account-id</i>:<i>sns-topic-name</i> </code>
     * </p> </li> </ul> <p> <b>SSM integration actions:</b> </p> <ul> <li> <p>
     * <code>arn:aws:ssm:<i>region</i>:<i>account-id</i>:opsitem:<i>severity</i>#CATEGORY=<i>category-name</i>
     * </code> </p> </li> <li> <p>
     * <code>arn:aws:ssm-incidents::<i>account-id</i>:responseplan/<i>response-plan-name</i>
     * </code> </p> </li> </ul>
     */
    inline const Aws::Vector<Aws::String>& GetOKActions() const { return m_oKActions; }
    inline bool OKActionsHasBeenSet() const { return m_oKActionsHasBeenSet; }
    template<typename OKActionsT = Aws::Vector<Aws::String>>
    void SetOKActions(OKActionsT&& value) { m_oKActionsHasBeenSet = true; m_oKActions = std::forward<OKActionsT>(value); }
    template<typename OKActionsT = Aws::Vector<Aws::String>>
    PutMetricAlarmRequest& WithOKActions(OKActionsT&& value) { SetOKActions(std::forward<OKActionsT>(value)); return *this;}
    template<typename OKActionsT = Aws::String>
    PutMetricAlarmRequest& AddOKActions(OKActionsT&& value) { m_oKActionsHasBeenSet = true; m_oKActions.emplace_back(std::forward<OKActionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The actions to execute when this alarm transitions to the <code>ALARM</code>
     * state from any other state. Each action is specified as an Amazon Resource Name
     * (ARN). Valid values:</p> <p> <b>EC2 actions:</b> </p> <ul> <li> <p>
     * <code>arn:aws:automate:<i>region</i>:ec2:stop</code> </p> </li> <li> <p>
     * <code>arn:aws:automate:<i>region</i>:ec2:terminate</code> </p> </li> <li> <p>
     * <code>arn:aws:automate:<i>region</i>:ec2:reboot</code> </p> </li> <li> <p>
     * <code>arn:aws:automate:<i>region</i>:ec2:recover</code> </p> </li> <li> <p>
     * <code>arn:aws:swf:<i>region</i>:<i>account-id</i>:action/actions/AWS_EC2.InstanceId.Stop/1.0</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:swf:<i>region</i>:<i>account-id</i>:action/actions/AWS_EC2.InstanceId.Terminate/1.0</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:swf:<i>region</i>:<i>account-id</i>:action/actions/AWS_EC2.InstanceId.Reboot/1.0</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:swf:<i>region</i>:<i>account-id</i>:action/actions/AWS_EC2.InstanceId.Recover/1.0</code>
     * </p> </li> </ul> <p> <b>Autoscaling action:</b> </p> <ul> <li> <p>
     * <code>arn:aws:autoscaling:<i>region</i>:<i>account-id</i>:scalingPolicy:<i>policy-id</i>:autoScalingGroupName/<i>group-friendly-name</i>:policyName/<i>policy-friendly-name</i>
     * </code> </p> </li> </ul> <p> <b>Lambda actions:</b> </p> <ul> <li> <p>Invoke the
     * latest version of a Lambda function:
     * <code>arn:aws:lambda:<i>region</i>:<i>account-id</i>:function:<i>function-name</i>
     * </code> </p> </li> <li> <p>Invoke a specific version of a Lambda function:
     * <code>arn:aws:lambda:<i>region</i>:<i>account-id</i>:function:<i>function-name</i>:<i>version-number</i>
     * </code> </p> </li> <li> <p>Invoke a function by using an alias Lambda function:
     * <code>arn:aws:lambda:<i>region</i>:<i>account-id</i>:function:<i>function-name</i>:<i>alias-name</i>
     * </code> </p> </li> </ul> <p> <b>SNS notification action:</b> </p> <ul> <li> <p>
     * <code>arn:aws:sns:<i>region</i>:<i>account-id</i>:<i>sns-topic-name</i> </code>
     * </p> </li> </ul> <p> <b>SSM integration actions:</b> </p> <ul> <li> <p>
     * <code>arn:aws:ssm:<i>region</i>:<i>account-id</i>:opsitem:<i>severity</i>#CATEGORY=<i>category-name</i>
     * </code> </p> </li> <li> <p>
     * <code>arn:aws:ssm-incidents::<i>account-id</i>:responseplan/<i>response-plan-name</i>
     * </code> </p> </li> </ul> <p> <b>Start a Amazon Q Developer operational
     * investigation</b> </p> <p>
     * <code>arn:aws:aiops:<i>region</i>:<i>account-id</i>:investigation-group:<i>investigation-group-id</i>
     * </code> </p>
     */
    inline const Aws::Vector<Aws::String>& GetAlarmActions() const { return m_alarmActions; }
    inline bool AlarmActionsHasBeenSet() const { return m_alarmActionsHasBeenSet; }
    template<typename AlarmActionsT = Aws::Vector<Aws::String>>
    void SetAlarmActions(AlarmActionsT&& value) { m_alarmActionsHasBeenSet = true; m_alarmActions = std::forward<AlarmActionsT>(value); }
    template<typename AlarmActionsT = Aws::Vector<Aws::String>>
    PutMetricAlarmRequest& WithAlarmActions(AlarmActionsT&& value) { SetAlarmActions(std::forward<AlarmActionsT>(value)); return *this;}
    template<typename AlarmActionsT = Aws::String>
    PutMetricAlarmRequest& AddAlarmActions(AlarmActionsT&& value) { m_alarmActionsHasBeenSet = true; m_alarmActions.emplace_back(std::forward<AlarmActionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The actions to execute when this alarm transitions to the
     * <code>INSUFFICIENT_DATA</code> state from any other state. Each action is
     * specified as an Amazon Resource Name (ARN). Valid values:</p> <p> <b>EC2
     * actions:</b> </p> <ul> <li> <p>
     * <code>arn:aws:automate:<i>region</i>:ec2:stop</code> </p> </li> <li> <p>
     * <code>arn:aws:automate:<i>region</i>:ec2:terminate</code> </p> </li> <li> <p>
     * <code>arn:aws:automate:<i>region</i>:ec2:reboot</code> </p> </li> <li> <p>
     * <code>arn:aws:automate:<i>region</i>:ec2:recover</code> </p> </li> <li> <p>
     * <code>arn:aws:swf:<i>region</i>:<i>account-id</i>:action/actions/AWS_EC2.InstanceId.Stop/1.0</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:swf:<i>region</i>:<i>account-id</i>:action/actions/AWS_EC2.InstanceId.Terminate/1.0</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:swf:<i>region</i>:<i>account-id</i>:action/actions/AWS_EC2.InstanceId.Reboot/1.0</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:swf:<i>region</i>:<i>account-id</i>:action/actions/AWS_EC2.InstanceId.Recover/1.0</code>
     * </p> </li> </ul> <p> <b>Autoscaling action:</b> </p> <ul> <li> <p>
     * <code>arn:aws:autoscaling:<i>region</i>:<i>account-id</i>:scalingPolicy:<i>policy-id</i>:autoScalingGroupName/<i>group-friendly-name</i>:policyName/<i>policy-friendly-name</i>
     * </code> </p> </li> </ul> <p> <b>Lambda actions:</b> </p> <ul> <li> <p>Invoke the
     * latest version of a Lambda function:
     * <code>arn:aws:lambda:<i>region</i>:<i>account-id</i>:function:<i>function-name</i>
     * </code> </p> </li> <li> <p>Invoke a specific version of a Lambda function:
     * <code>arn:aws:lambda:<i>region</i>:<i>account-id</i>:function:<i>function-name</i>:<i>version-number</i>
     * </code> </p> </li> <li> <p>Invoke a function by using an alias Lambda function:
     * <code>arn:aws:lambda:<i>region</i>:<i>account-id</i>:function:<i>function-name</i>:<i>alias-name</i>
     * </code> </p> </li> </ul> <p> <b>SNS notification action:</b> </p> <ul> <li> <p>
     * <code>arn:aws:sns:<i>region</i>:<i>account-id</i>:<i>sns-topic-name</i> </code>
     * </p> </li> </ul> <p> <b>SSM integration actions:</b> </p> <ul> <li> <p>
     * <code>arn:aws:ssm:<i>region</i>:<i>account-id</i>:opsitem:<i>severity</i>#CATEGORY=<i>category-name</i>
     * </code> </p> </li> <li> <p>
     * <code>arn:aws:ssm-incidents::<i>account-id</i>:responseplan/<i>response-plan-name</i>
     * </code> </p> </li> </ul>
     */
    inline const Aws::Vector<Aws::String>& GetInsufficientDataActions() const { return m_insufficientDataActions; }
    inline bool InsufficientDataActionsHasBeenSet() const { return m_insufficientDataActionsHasBeenSet; }
    template<typename InsufficientDataActionsT = Aws::Vector<Aws::String>>
    void SetInsufficientDataActions(InsufficientDataActionsT&& value) { m_insufficientDataActionsHasBeenSet = true; m_insufficientDataActions = std::forward<InsufficientDataActionsT>(value); }
    template<typename InsufficientDataActionsT = Aws::Vector<Aws::String>>
    PutMetricAlarmRequest& WithInsufficientDataActions(InsufficientDataActionsT&& value) { SetInsufficientDataActions(std::forward<InsufficientDataActionsT>(value)); return *this;}
    template<typename InsufficientDataActionsT = Aws::String>
    PutMetricAlarmRequest& AddInsufficientDataActions(InsufficientDataActionsT&& value) { m_insufficientDataActionsHasBeenSet = true; m_insufficientDataActions.emplace_back(std::forward<InsufficientDataActionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The name for the metric associated with the alarm. For each
     * <code>PutMetricAlarm</code> operation, you must specify either
     * <code>MetricName</code> or a <code>Metrics</code> array.</p> <p>If you are
     * creating an alarm based on a math expression, you cannot specify this parameter,
     * or any of the <code>Namespace</code>, <code>Dimensions</code>,
     * <code>Period</code>, <code>Unit</code>, <code>Statistic</code>, or
     * <code>ExtendedStatistic</code> parameters. Instead, you specify all this
     * information in the <code>Metrics</code> array.</p>
     */
    inline const Aws::String& GetMetricName() const { return m_metricName; }
    inline bool MetricNameHasBeenSet() const { return m_metricNameHasBeenSet; }
    template<typename MetricNameT = Aws::String>
    void SetMetricName(MetricNameT&& value) { m_metricNameHasBeenSet = true; m_metricName = std::forward<MetricNameT>(value); }
    template<typename MetricNameT = Aws::String>
    PutMetricAlarmRequest& WithMetricName(MetricNameT&& value) { SetMetricName(std::forward<MetricNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The namespace for the metric associated specified in
     * <code>MetricName</code>.</p>
     */
    inline const Aws::String& GetNamespace() const { return m_namespace; }
    inline bool NamespaceHasBeenSet() const { return m_namespaceHasBeenSet; }
    template<typename NamespaceT = Aws::String>
    void SetNamespace(NamespaceT&& value) { m_namespaceHasBeenSet = true; m_namespace = std::forward<NamespaceT>(value); }
    template<typename NamespaceT = Aws::String>
    PutMetricAlarmRequest& WithNamespace(NamespaceT&& value) { SetNamespace(std::forward<NamespaceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The statistic for the metric specified in <code>MetricName</code>, other than
     * percentile. For percentile statistics, use <code>ExtendedStatistic</code>. When
     * you call <code>PutMetricAlarm</code> and specify a <code>MetricName</code>, you
     * must specify either <code>Statistic</code> or <code>ExtendedStatistic,</code>
     * but not both.</p>
     */
    inline Statistic GetStatistic() const { return m_statistic; }
    inline bool StatisticHasBeenSet() const { return m_statisticHasBeenSet; }
    inline void SetStatistic(Statistic value) { m_statisticHasBeenSet = true; m_statistic = value; }
    inline PutMetricAlarmRequest& WithStatistic(Statistic value) { SetStatistic(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The extended statistic for the metric specified in <code>MetricName</code>.
     * When you call <code>PutMetricAlarm</code> and specify a <code>MetricName</code>,
     * you must specify either <code>Statistic</code> or <code>ExtendedStatistic</code>
     * but not both.</p> <p>If you specify <code>ExtendedStatistic</code>, the
     * following are valid values:</p> <ul> <li> <p> <code>p90</code> </p> </li> <li>
     * <p> <code>tm90</code> </p> </li> <li> <p> <code>tc90</code> </p> </li> <li> <p>
     * <code>ts90</code> </p> </li> <li> <p> <code>wm90</code> </p> </li> <li> <p>
     * <code>IQM</code> </p> </li> <li> <p> <code>PR(<i>n</i>:<i>m</i>)</code> where n
     * and m are values of the metric</p> </li> <li> <p>
     * <code>TC(<i>X</i>%:<i>X</i>%)</code> where X is between 10 and 90 inclusive.</p>
     * </li> <li> <p> <code>TM(<i>X</i>%:<i>X</i>%)</code> where X is between 10 and 90
     * inclusive.</p> </li> <li> <p> <code>TS(<i>X</i>%:<i>X</i>%)</code> where X is
     * between 10 and 90 inclusive.</p> </li> <li> <p>
     * <code>WM(<i>X</i>%:<i>X</i>%)</code> where X is between 10 and 90 inclusive.</p>
     * </li> </ul> <p>For more information about these extended statistics, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/Statistics-definitions.html">CloudWatch
     * statistics definitions</a>.</p>
     */
    inline const Aws::String& GetExtendedStatistic() const { return m_extendedStatistic; }
    inline bool ExtendedStatisticHasBeenSet() const { return m_extendedStatisticHasBeenSet; }
    template<typename ExtendedStatisticT = Aws::String>
    void SetExtendedStatistic(ExtendedStatisticT&& value) { m_extendedStatisticHasBeenSet = true; m_extendedStatistic = std::forward<ExtendedStatisticT>(value); }
    template<typename ExtendedStatisticT = Aws::String>
    PutMetricAlarmRequest& WithExtendedStatistic(ExtendedStatisticT&& value) { SetExtendedStatistic(std::forward<ExtendedStatisticT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The dimensions for the metric specified in <code>MetricName</code>.</p>
     */
    inline const Aws::Vector<Dimension>& GetDimensions() const { return m_dimensions; }
    inline bool DimensionsHasBeenSet() const { return m_dimensionsHasBeenSet; }
    template<typename DimensionsT = Aws::Vector<Dimension>>
    void SetDimensions(DimensionsT&& value) { m_dimensionsHasBeenSet = true; m_dimensions = std::forward<DimensionsT>(value); }
    template<typename DimensionsT = Aws::Vector<Dimension>>
    PutMetricAlarmRequest& WithDimensions(DimensionsT&& value) { SetDimensions(std::forward<DimensionsT>(value)); return *this;}
    template<typename DimensionsT = Dimension>
    PutMetricAlarmRequest& AddDimensions(DimensionsT&& value) { m_dimensionsHasBeenSet = true; m_dimensions.emplace_back(std::forward<DimensionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The length, in seconds, used each time the metric specified in
     * <code>MetricName</code> is evaluated. Valid values are 10, 20, 30, and any
     * multiple of 60.</p> <p> <code>Period</code> is required for alarms based on
     * static thresholds. If you are creating an alarm based on a metric math
     * expression, you specify the period for each metric within the objects in the
     * <code>Metrics</code> array.</p> <p>Be sure to specify 10, 20, or 30 only for
     * metrics that are stored by a <code>PutMetricData</code> call with a
     * <code>StorageResolution</code> of 1. If you specify a period of 10, 20, or 30
     * for a metric that does not have sub-minute resolution, the alarm still attempts
     * to gather data at the period rate that you specify. In this case, it does not
     * receive data for the attempts that do not correspond to a one-minute data
     * resolution, and the alarm might often lapse into INSUFFICENT_DATA status.
     * Specifying 10, 20, or 30 also sets this alarm as a high-resolution alarm, which
     * has a higher charge than other alarms. For more information about pricing, see
     * <a href="https://aws.amazon.com/cloudwatch/pricing/">Amazon CloudWatch
     * Pricing</a>.</p> <p>An alarm's total current evaluation period can be no longer
     * than seven days, so <code>Period</code> multiplied by
     * <code>EvaluationPeriods</code> can't be more than 604,800 seconds. For alarms
     * with a period of less than one hour (3,600 seconds), the total evaluation period
     * can't be longer than one day (86,400 seconds).</p>
     */
    inline int GetPeriod() const { return m_period; }
    inline bool PeriodHasBeenSet() const { return m_periodHasBeenSet; }
    inline void SetPeriod(int value) { m_periodHasBeenSet = true; m_period = value; }
    inline PutMetricAlarmRequest& WithPeriod(int value) { SetPeriod(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unit of measure for the statistic. For example, the units for the Amazon
     * EC2 NetworkIn metric are Bytes because NetworkIn tracks the number of bytes that
     * an instance receives on all network interfaces. You can also specify a unit when
     * you create a custom metric. Units help provide conceptual meaning to your data.
     * Metric data points that specify a unit of measure, such as Percent, are
     * aggregated separately. If you are creating an alarm based on a metric math
     * expression, you can specify the unit for each metric (if needed) within the
     * objects in the <code>Metrics</code> array.</p> <p>If you don't specify
     * <code>Unit</code>, CloudWatch retrieves all unit types that have been published
     * for the metric and attempts to evaluate the alarm. Usually, metrics are
     * published with only one unit, so the alarm works as intended.</p> <p>However, if
     * the metric is published with multiple types of units and you don't specify a
     * unit, the alarm's behavior is not defined and it behaves unpredictably.</p>
     * <p>We recommend omitting <code>Unit</code> so that you don't inadvertently
     * specify an incorrect unit that is not published for this metric. Doing so causes
     * the alarm to be stuck in the <code>INSUFFICIENT DATA</code> state.</p>
     */
    inline StandardUnit GetUnit() const { return m_unit; }
    inline bool UnitHasBeenSet() const { return m_unitHasBeenSet; }
    inline void SetUnit(StandardUnit value) { m_unitHasBeenSet = true; m_unit = value; }
    inline PutMetricAlarmRequest& WithUnit(StandardUnit value) { SetUnit(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of periods over which data is compared to the specified threshold.
     * If you are setting an alarm that requires that a number of consecutive data
     * points be breaching to trigger the alarm, this value specifies that number. If
     * you are setting an "M out of N" alarm, this value is the N.</p>
     */
    inline int GetEvaluationPeriods() const { return m_evaluationPeriods; }
    inline bool EvaluationPeriodsHasBeenSet() const { return m_evaluationPeriodsHasBeenSet; }
    inline void SetEvaluationPeriods(int value) { m_evaluationPeriodsHasBeenSet = true; m_evaluationPeriods = value; }
    inline PutMetricAlarmRequest& WithEvaluationPeriods(int value) { SetEvaluationPeriods(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of data points that must be breaching to trigger the alarm. This
     * is used only if you are setting an "M out of N" alarm. In that case, this value
     * is the M. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/AlarmThatSendsEmail.html#alarm-evaluation">Evaluating
     * an Alarm</a> in the <i>Amazon CloudWatch User Guide</i>.</p>
     */
    inline int GetDatapointsToAlarm() const { return m_datapointsToAlarm; }
    inline bool DatapointsToAlarmHasBeenSet() const { return m_datapointsToAlarmHasBeenSet; }
    inline void SetDatapointsToAlarm(int value) { m_datapointsToAlarmHasBeenSet = true; m_datapointsToAlarm = value; }
    inline PutMetricAlarmRequest& WithDatapointsToAlarm(int value) { SetDatapointsToAlarm(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value against which the specified statistic is compared.</p> <p>This
     * parameter is required for alarms based on static thresholds, but should not be
     * used for alarms based on anomaly detection models.</p>
     */
    inline double GetThreshold() const { return m_threshold; }
    inline bool ThresholdHasBeenSet() const { return m_thresholdHasBeenSet; }
    inline void SetThreshold(double value) { m_thresholdHasBeenSet = true; m_threshold = value; }
    inline PutMetricAlarmRequest& WithThreshold(double value) { SetThreshold(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The arithmetic operation to use when comparing the specified statistic and
     * threshold. The specified statistic value is used as the first operand.</p>
     * <p>The values <code>LessThanLowerOrGreaterThanUpperThreshold</code>,
     * <code>LessThanLowerThreshold</code>, and <code>GreaterThanUpperThreshold</code>
     * are used only for alarms based on anomaly detection models.</p>
     */
    inline ComparisonOperator GetComparisonOperator() const { return m_comparisonOperator; }
    inline bool ComparisonOperatorHasBeenSet() const { return m_comparisonOperatorHasBeenSet; }
    inline void SetComparisonOperator(ComparisonOperator value) { m_comparisonOperatorHasBeenSet = true; m_comparisonOperator = value; }
    inline PutMetricAlarmRequest& WithComparisonOperator(ComparisonOperator value) { SetComparisonOperator(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Sets how this alarm is to handle missing data points. If
     * <code>TreatMissingData</code> is omitted, the default behavior of
     * <code>missing</code> is used. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/AlarmThatSendsEmail.html#alarms-and-missing-data">Configuring
     * How CloudWatch Alarms Treats Missing Data</a>.</p> <p>Valid Values:
     * <code>breaching | notBreaching | ignore | missing</code> </p>  <p>Alarms
     * that evaluate metrics in the <code>AWS/DynamoDB</code> namespace always
     * <code>ignore</code> missing data even if you choose a different option for
     * <code>TreatMissingData</code>. When an <code>AWS/DynamoDB</code> metric has
     * missing data, alarms that evaluate that metric remain in their current
     * state.</p> 
     */
    inline const Aws::String& GetTreatMissingData() const { return m_treatMissingData; }
    inline bool TreatMissingDataHasBeenSet() const { return m_treatMissingDataHasBeenSet; }
    template<typename TreatMissingDataT = Aws::String>
    void SetTreatMissingData(TreatMissingDataT&& value) { m_treatMissingDataHasBeenSet = true; m_treatMissingData = std::forward<TreatMissingDataT>(value); }
    template<typename TreatMissingDataT = Aws::String>
    PutMetricAlarmRequest& WithTreatMissingData(TreatMissingDataT&& value) { SetTreatMissingData(std::forward<TreatMissingDataT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Used only for alarms based on percentiles. If you specify
     * <code>ignore</code>, the alarm state does not change during periods with too few
     * data points to be statistically significant. If you specify
     * <code>evaluate</code> or omit this parameter, the alarm is always evaluated and
     * possibly changes state no matter how many data points are available. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/AlarmThatSendsEmail.html#percentiles-with-low-samples">Percentile-Based
     * CloudWatch Alarms and Low Data Samples</a>.</p> <p>Valid Values: <code>evaluate
     * | ignore</code> </p>
     */
    inline const Aws::String& GetEvaluateLowSampleCountPercentile() const { return m_evaluateLowSampleCountPercentile; }
    inline bool EvaluateLowSampleCountPercentileHasBeenSet() const { return m_evaluateLowSampleCountPercentileHasBeenSet; }
    template<typename EvaluateLowSampleCountPercentileT = Aws::String>
    void SetEvaluateLowSampleCountPercentile(EvaluateLowSampleCountPercentileT&& value) { m_evaluateLowSampleCountPercentileHasBeenSet = true; m_evaluateLowSampleCountPercentile = std::forward<EvaluateLowSampleCountPercentileT>(value); }
    template<typename EvaluateLowSampleCountPercentileT = Aws::String>
    PutMetricAlarmRequest& WithEvaluateLowSampleCountPercentile(EvaluateLowSampleCountPercentileT&& value) { SetEvaluateLowSampleCountPercentile(std::forward<EvaluateLowSampleCountPercentileT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of <code>MetricDataQuery</code> structures that enable you to create
     * an alarm based on the result of a metric math expression. For each
     * <code>PutMetricAlarm</code> operation, you must specify either
     * <code>MetricName</code> or a <code>Metrics</code> array.</p> <p>Each item in the
     * <code>Metrics</code> array either retrieves a metric or performs a math
     * expression.</p> <p>One item in the <code>Metrics</code> array is the expression
     * that the alarm watches. You designate this expression by setting
     * <code>ReturnData</code> to true for this object in the array. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/APIReference/API_MetricDataQuery.html">MetricDataQuery</a>.</p>
     * <p>If you use the <code>Metrics</code> parameter, you cannot include the
     * <code>Namespace</code>, <code>MetricName</code>, <code>Dimensions</code>,
     * <code>Period</code>, <code>Unit</code>, <code>Statistic</code>, or
     * <code>ExtendedStatistic</code> parameters of <code>PutMetricAlarm</code> in the
     * same operation. Instead, you retrieve the metrics you are using in your math
     * expression as part of the <code>Metrics</code> array.</p>
     */
    inline const Aws::Vector<MetricDataQuery>& GetMetrics() const { return m_metrics; }
    inline bool MetricsHasBeenSet() const { return m_metricsHasBeenSet; }
    template<typename MetricsT = Aws::Vector<MetricDataQuery>>
    void SetMetrics(MetricsT&& value) { m_metricsHasBeenSet = true; m_metrics = std::forward<MetricsT>(value); }
    template<typename MetricsT = Aws::Vector<MetricDataQuery>>
    PutMetricAlarmRequest& WithMetrics(MetricsT&& value) { SetMetrics(std::forward<MetricsT>(value)); return *this;}
    template<typename MetricsT = MetricDataQuery>
    PutMetricAlarmRequest& AddMetrics(MetricsT&& value) { m_metricsHasBeenSet = true; m_metrics.emplace_back(std::forward<MetricsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of key-value pairs to associate with the alarm. You can associate as
     * many as 50 tags with an alarm. To be able to associate tags with the alarm when
     * you create the alarm, you must have the <code>cloudwatch:TagResource</code>
     * permission.</p> <p>Tags can help you organize and categorize your resources. You
     * can also use them to scope user permissions by granting a user permission to
     * access or change only resources with certain tag values.</p> <p>If you are using
     * this operation to update an existing alarm, any tags you specify in this
     * parameter are ignored. To change the tags of an existing alarm, use <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/APIReference/API_TagResource.html">TagResource</a>
     * or <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/APIReference/API_UntagResource.html">UntagResource</a>.</p>
     * <p>To use this field to set tags for an alarm when you create it, you must be
     * signed on with both the <code>cloudwatch:PutMetricAlarm</code> and
     * <code>cloudwatch:TagResource</code> permissions.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    PutMetricAlarmRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    PutMetricAlarmRequest& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If this is an alarm based on an anomaly detection model, make this value
     * match the ID of the <code>ANOMALY_DETECTION_BAND</code> function.</p> <p>For an
     * example of how to use this parameter, see the <b>Anomaly Detection Model
     * Alarm</b> example on this page.</p> <p>If your alarm uses this parameter, it
     * cannot have Auto Scaling actions.</p>
     */
    inline const Aws::String& GetThresholdMetricId() const { return m_thresholdMetricId; }
    inline bool ThresholdMetricIdHasBeenSet() const { return m_thresholdMetricIdHasBeenSet; }
    template<typename ThresholdMetricIdT = Aws::String>
    void SetThresholdMetricId(ThresholdMetricIdT&& value) { m_thresholdMetricIdHasBeenSet = true; m_thresholdMetricId = std::forward<ThresholdMetricIdT>(value); }
    template<typename ThresholdMetricIdT = Aws::String>
    PutMetricAlarmRequest& WithThresholdMetricId(ThresholdMetricIdT&& value) { SetThresholdMetricId(std::forward<ThresholdMetricIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_alarmName;
    bool m_alarmNameHasBeenSet = false;

    Aws::String m_alarmDescription;
    bool m_alarmDescriptionHasBeenSet = false;

    bool m_actionsEnabled{false};
    bool m_actionsEnabledHasBeenSet = false;

    Aws::Vector<Aws::String> m_oKActions;
    bool m_oKActionsHasBeenSet = false;

    Aws::Vector<Aws::String> m_alarmActions;
    bool m_alarmActionsHasBeenSet = false;

    Aws::Vector<Aws::String> m_insufficientDataActions;
    bool m_insufficientDataActionsHasBeenSet = false;

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

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_thresholdMetricId;
    bool m_thresholdMetricIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatch
} // namespace Aws
