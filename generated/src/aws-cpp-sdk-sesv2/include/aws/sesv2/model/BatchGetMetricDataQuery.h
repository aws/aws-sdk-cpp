/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sesv2/SESV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sesv2/model/MetricNamespace.h>
#include <aws/sesv2/model/Metric.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/DateTime.h>
#include <aws/sesv2/model/MetricDimensionName.h>
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
namespace SESV2
{
namespace Model
{

  /**
   * <p>Represents a single metric data query to include in a batch.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/BatchGetMetricDataQuery">AWS
   * API Reference</a></p>
   */
  class BatchGetMetricDataQuery
  {
  public:
    AWS_SESV2_API BatchGetMetricDataQuery() = default;
    AWS_SESV2_API BatchGetMetricDataQuery(Aws::Utils::Json::JsonView jsonValue);
    AWS_SESV2_API BatchGetMetricDataQuery& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SESV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The query identifier.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    BatchGetMetricDataQuery& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The query namespace - e.g. <code>VDM</code> </p>
     */
    inline MetricNamespace GetNamespace() const { return m_namespace; }
    inline bool NamespaceHasBeenSet() const { return m_namespaceHasBeenSet; }
    inline void SetNamespace(MetricNamespace value) { m_namespaceHasBeenSet = true; m_namespace = value; }
    inline BatchGetMetricDataQuery& WithNamespace(MetricNamespace value) { SetNamespace(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The queried metric. This can be one of the following:</p> <ul> <li> <p>
     * <code>SEND</code> – Emails sent eligible for tracking in the VDM dashboard. This
     * excludes emails sent to the mailbox simulator and emails addressed to more than
     * one recipient.</p> </li> <li> <p> <code>COMPLAINT</code> – Complaints received
     * for your account. This excludes complaints from the mailbox simulator, those
     * originating from your account-level suppression list (if enabled), and those for
     * emails addressed to more than one recipient</p> </li> <li> <p>
     * <code>PERMANENT_BOUNCE</code> – Permanent bounces - i.e. feedback received for
     * emails sent to non-existent mailboxes. Excludes bounces from the mailbox
     * simulator, those originating from your account-level suppression list (if
     * enabled), and those for emails addressed to more than one recipient.</p> </li>
     * <li> <p> <code>TRANSIENT_BOUNCE</code> – Transient bounces - i.e. feedback
     * received for delivery failures excluding issues with non-existent mailboxes.
     * Excludes bounces from the mailbox simulator, and those for emails addressed to
     * more than one recipient.</p> </li> <li> <p> <code>OPEN</code> – Unique open
     * events for emails including open trackers. Excludes opens for emails addressed
     * to more than one recipient.</p> </li> <li> <p> <code>CLICK</code> – Unique click
     * events for emails including wrapped links. Excludes clicks for emails addressed
     * to more than one recipient.</p> </li> <li> <p> <code>DELIVERY</code> –
     * Successful deliveries for email sending attempts. Excludes deliveries to the
     * mailbox simulator and for emails addressed to more than one recipient.</p> </li>
     * <li> <p> <code>DELIVERY_OPEN</code> – Successful deliveries for email sending
     * attempts. Excludes deliveries to the mailbox simulator, for emails addressed to
     * more than one recipient, and emails without open trackers.</p> </li> <li> <p>
     * <code>DELIVERY_CLICK</code> – Successful deliveries for email sending attempts.
     * Excludes deliveries to the mailbox simulator, for emails addressed to more than
     * one recipient, and emails without click trackers.</p> </li> <li> <p>
     * <code>DELIVERY_COMPLAINT</code> – Successful deliveries for email sending
     * attempts. Excludes deliveries to the mailbox simulator, for emails addressed to
     * more than one recipient, and emails addressed to recipients hosted by ISPs with
     * which Amazon SES does not have a feedback loop agreement.</p> </li> </ul>
     */
    inline Metric GetMetric() const { return m_metric; }
    inline bool MetricHasBeenSet() const { return m_metricHasBeenSet; }
    inline void SetMetric(Metric value) { m_metricHasBeenSet = true; m_metric = value; }
    inline BatchGetMetricDataQuery& WithMetric(Metric value) { SetMetric(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that contains mapping between <code>MetricDimensionName</code> and
     * <code>MetricDimensionValue</code> to filter metrics by.</p>
     */
    inline const Aws::Map<MetricDimensionName, Aws::String>& GetDimensions() const { return m_dimensions; }
    inline bool DimensionsHasBeenSet() const { return m_dimensionsHasBeenSet; }
    template<typename DimensionsT = Aws::Map<MetricDimensionName, Aws::String>>
    void SetDimensions(DimensionsT&& value) { m_dimensionsHasBeenSet = true; m_dimensions = std::forward<DimensionsT>(value); }
    template<typename DimensionsT = Aws::Map<MetricDimensionName, Aws::String>>
    BatchGetMetricDataQuery& WithDimensions(DimensionsT&& value) { SetDimensions(std::forward<DimensionsT>(value)); return *this;}
    inline BatchGetMetricDataQuery& AddDimensions(MetricDimensionName key, Aws::String value) {
      m_dimensionsHasBeenSet = true; m_dimensions.emplace(key, value); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>Represents the start date for the query interval.</p>
     */
    inline const Aws::Utils::DateTime& GetStartDate() const { return m_startDate; }
    inline bool StartDateHasBeenSet() const { return m_startDateHasBeenSet; }
    template<typename StartDateT = Aws::Utils::DateTime>
    void SetStartDate(StartDateT&& value) { m_startDateHasBeenSet = true; m_startDate = std::forward<StartDateT>(value); }
    template<typename StartDateT = Aws::Utils::DateTime>
    BatchGetMetricDataQuery& WithStartDate(StartDateT&& value) { SetStartDate(std::forward<StartDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Represents the end date for the query interval.</p>
     */
    inline const Aws::Utils::DateTime& GetEndDate() const { return m_endDate; }
    inline bool EndDateHasBeenSet() const { return m_endDateHasBeenSet; }
    template<typename EndDateT = Aws::Utils::DateTime>
    void SetEndDate(EndDateT&& value) { m_endDateHasBeenSet = true; m_endDate = std::forward<EndDateT>(value); }
    template<typename EndDateT = Aws::Utils::DateTime>
    BatchGetMetricDataQuery& WithEndDate(EndDateT&& value) { SetEndDate(std::forward<EndDateT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    MetricNamespace m_namespace{MetricNamespace::NOT_SET};
    bool m_namespaceHasBeenSet = false;

    Metric m_metric{Metric::NOT_SET};
    bool m_metricHasBeenSet = false;

    Aws::Map<MetricDimensionName, Aws::String> m_dimensions;
    bool m_dimensionsHasBeenSet = false;

    Aws::Utils::DateTime m_startDate{};
    bool m_startDateHasBeenSet = false;

    Aws::Utils::DateTime m_endDate{};
    bool m_endDateHasBeenSet = false;
  };

} // namespace Model
} // namespace SESV2
} // namespace Aws
