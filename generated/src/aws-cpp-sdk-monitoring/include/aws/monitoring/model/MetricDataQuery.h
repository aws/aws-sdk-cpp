/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/monitoring/CloudWatch_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/monitoring/model/MetricStat.h>
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
   * <p>This structure is used in both <code>GetMetricData</code> and
   * <code>PutMetricAlarm</code>. The supported use of this structure is different
   * for those two operations.</p> <p>When used in <code>GetMetricData</code>, it
   * indicates the metric data to return, and whether this call is just retrieving a
   * batch set of data for one metric, or is performing a Metrics Insights query or a
   * math expression. A single <code>GetMetricData</code> call can include up to 500
   * <code>MetricDataQuery</code> structures.</p> <p>When used in
   * <code>PutMetricAlarm</code>, it enables you to create an alarm based on a metric
   * math expression. Each <code>MetricDataQuery</code> in the array specifies either
   * a metric to retrieve, or a math expression to be performed on retrieved metrics.
   * A single <code>PutMetricAlarm</code> call can include up to 20
   * <code>MetricDataQuery</code> structures in the array. The 20 structures can
   * include as many as 10 structures that contain a <code>MetricStat</code>
   * parameter to retrieve a metric, and as many as 10 structures that contain the
   * <code>Expression</code> parameter to perform a math expression. Of those
   * <code>Expression</code> structures, one must have <code>true</code> as the value
   * for <code>ReturnData</code>. The result of this expression is the value the
   * alarm watches.</p> <p>Any expression used in a <code>PutMetricAlarm</code>
   * operation must return a single time series. For more information, see <a
   * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/using-metric-math.html#metric-math-syntax">Metric
   * Math Syntax and Functions</a> in the <i>Amazon CloudWatch User Guide</i>.</p>
   * <p>Some of the parameters of this structure also have different uses whether you
   * are using this structure in a <code>GetMetricData</code> operation or a
   * <code>PutMetricAlarm</code> operation. These differences are explained in the
   * following parameter list.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/monitoring-2010-08-01/MetricDataQuery">AWS
   * API Reference</a></p>
   */
  class MetricDataQuery
  {
  public:
    AWS_CLOUDWATCH_API MetricDataQuery() = default;
    AWS_CLOUDWATCH_API MetricDataQuery(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_CLOUDWATCH_API MetricDataQuery& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_CLOUDWATCH_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_CLOUDWATCH_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>A short name used to tie this object to the results in the response. This
     * name must be unique within a single call to <code>GetMetricData</code>. If you
     * are performing math expressions on this set of data, this name represents that
     * data and can serve as a variable in the mathematical expression. The valid
     * characters are letters, numbers, and underscore. The first character must be a
     * lowercase letter.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    MetricDataQuery& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The metric to be returned, along with statistics, period, and units. Use this
     * parameter only if this object is retrieving a metric and not performing a math
     * expression on returned data.</p> <p>Within one MetricDataQuery object, you must
     * specify either <code>Expression</code> or <code>MetricStat</code> but not
     * both.</p>
     */
    inline const MetricStat& GetMetricStat() const { return m_metricStat; }
    inline bool MetricStatHasBeenSet() const { return m_metricStatHasBeenSet; }
    template<typename MetricStatT = MetricStat>
    void SetMetricStat(MetricStatT&& value) { m_metricStatHasBeenSet = true; m_metricStat = std::forward<MetricStatT>(value); }
    template<typename MetricStatT = MetricStat>
    MetricDataQuery& WithMetricStat(MetricStatT&& value) { SetMetricStat(std::forward<MetricStatT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>This field can contain either a Metrics Insights query, or a metric math
     * expression to be performed on the returned data. For more information about
     * Metrics Insights queries, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/cloudwatch-metrics-insights-querylanguage">Metrics
     * Insights query components and syntax</a> in the <i>Amazon CloudWatch User
     * Guide</i>.</p> <p>A math expression can use the <code>Id</code> of the other
     * metrics or queries to refer to those metrics, and can also use the
     * <code>Id</code> of other expressions to use the result of those expressions. For
     * more information about metric math expressions, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/using-metric-math.html#metric-math-syntax">Metric
     * Math Syntax and Functions</a> in the <i>Amazon CloudWatch User Guide</i>.</p>
     * <p>Within each MetricDataQuery object, you must specify either
     * <code>Expression</code> or <code>MetricStat</code> but not both.</p>
     */
    inline const Aws::String& GetExpression() const { return m_expression; }
    inline bool ExpressionHasBeenSet() const { return m_expressionHasBeenSet; }
    template<typename ExpressionT = Aws::String>
    void SetExpression(ExpressionT&& value) { m_expressionHasBeenSet = true; m_expression = std::forward<ExpressionT>(value); }
    template<typename ExpressionT = Aws::String>
    MetricDataQuery& WithExpression(ExpressionT&& value) { SetExpression(std::forward<ExpressionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A human-readable label for this metric or expression. This is especially
     * useful if this is an expression, so that you know what the value represents. If
     * the metric or expression is shown in a CloudWatch dashboard widget, the label is
     * shown. If Label is omitted, CloudWatch generates a default.</p> <p>You can put
     * dynamic expressions into a label, so that it is more descriptive. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/graph-dynamic-labels.html">Using
     * Dynamic Labels</a>.</p>
     */
    inline const Aws::String& GetLabel() const { return m_label; }
    inline bool LabelHasBeenSet() const { return m_labelHasBeenSet; }
    template<typename LabelT = Aws::String>
    void SetLabel(LabelT&& value) { m_labelHasBeenSet = true; m_label = std::forward<LabelT>(value); }
    template<typename LabelT = Aws::String>
    MetricDataQuery& WithLabel(LabelT&& value) { SetLabel(std::forward<LabelT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>When used in <code>GetMetricData</code>, this option indicates whether to
     * return the timestamps and raw data values of this metric. If you are performing
     * this call just to do math expressions and do not also need the raw data
     * returned, you can specify <code>false</code>. If you omit this, the default of
     * <code>true</code> is used.</p> <p>When used in <code>PutMetricAlarm</code>,
     * specify <code>true</code> for the one expression result to use as the alarm. For
     * all other metrics and expressions in the same <code>PutMetricAlarm</code>
     * operation, specify <code>ReturnData</code> as False.</p>
     */
    inline bool GetReturnData() const { return m_returnData; }
    inline bool ReturnDataHasBeenSet() const { return m_returnDataHasBeenSet; }
    inline void SetReturnData(bool value) { m_returnDataHasBeenSet = true; m_returnData = value; }
    inline MetricDataQuery& WithReturnData(bool value) { SetReturnData(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The granularity, in seconds, of the returned data points. For metrics with
     * regular resolution, a period can be as short as one minute (60 seconds) and must
     * be a multiple of 60. For high-resolution metrics that are collected at intervals
     * of less than one minute, the period can be 1, 5, 10, 20, 30, 60, or any multiple
     * of 60. High-resolution metrics are those metrics stored by a
     * <code>PutMetricData</code> operation that includes a <code>StorageResolution of
     * 1 second</code>.</p>
     */
    inline int GetPeriod() const { return m_period; }
    inline bool PeriodHasBeenSet() const { return m_periodHasBeenSet; }
    inline void SetPeriod(int value) { m_periodHasBeenSet = true; m_period = value; }
    inline MetricDataQuery& WithPeriod(int value) { SetPeriod(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the account where the metrics are located.</p> <p>If you are
     * performing a <code>GetMetricData</code> operation in a monitoring account, use
     * this to specify which account to retrieve this metric from.</p> <p>If you are
     * performing a <code>PutMetricAlarm</code> operation, use this to specify which
     * account contains the metric that the alarm is watching.</p>
     */
    inline const Aws::String& GetAccountId() const { return m_accountId; }
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }
    template<typename AccountIdT = Aws::String>
    void SetAccountId(AccountIdT&& value) { m_accountIdHasBeenSet = true; m_accountId = std::forward<AccountIdT>(value); }
    template<typename AccountIdT = Aws::String>
    MetricDataQuery& WithAccountId(AccountIdT&& value) { SetAccountId(std::forward<AccountIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    MetricStat m_metricStat;
    bool m_metricStatHasBeenSet = false;

    Aws::String m_expression;
    bool m_expressionHasBeenSet = false;

    Aws::String m_label;
    bool m_labelHasBeenSet = false;

    bool m_returnData{false};
    bool m_returnDataHasBeenSet = false;

    int m_period{0};
    bool m_periodHasBeenSet = false;

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatch
} // namespace Aws
