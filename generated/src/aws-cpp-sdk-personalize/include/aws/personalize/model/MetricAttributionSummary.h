/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/personalize/Personalize_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
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
namespace Personalize
{
namespace Model
{

  /**
   * <p>Provides a summary of the properties of a metric attribution. For a complete
   * listing, call the <a
   * href="https://docs.aws.amazon.com/personalize/latest/dg/API_DescribeMetricAttribution.html">DescribeMetricAttribution</a>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-2018-05-22/MetricAttributionSummary">AWS
   * API Reference</a></p>
   */
  class MetricAttributionSummary
  {
  public:
    AWS_PERSONALIZE_API MetricAttributionSummary();
    AWS_PERSONALIZE_API MetricAttributionSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_PERSONALIZE_API MetricAttributionSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PERSONALIZE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the metric attribution.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the metric attribution.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the metric attribution.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the metric attribution.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the metric attribution.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the metric attribution.</p>
     */
    inline MetricAttributionSummary& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the metric attribution.</p>
     */
    inline MetricAttributionSummary& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the metric attribution.</p>
     */
    inline MetricAttributionSummary& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The metric attribution's Amazon Resource Name (ARN).</p>
     */
    inline const Aws::String& GetMetricAttributionArn() const{ return m_metricAttributionArn; }

    /**
     * <p>The metric attribution's Amazon Resource Name (ARN).</p>
     */
    inline bool MetricAttributionArnHasBeenSet() const { return m_metricAttributionArnHasBeenSet; }

    /**
     * <p>The metric attribution's Amazon Resource Name (ARN).</p>
     */
    inline void SetMetricAttributionArn(const Aws::String& value) { m_metricAttributionArnHasBeenSet = true; m_metricAttributionArn = value; }

    /**
     * <p>The metric attribution's Amazon Resource Name (ARN).</p>
     */
    inline void SetMetricAttributionArn(Aws::String&& value) { m_metricAttributionArnHasBeenSet = true; m_metricAttributionArn = std::move(value); }

    /**
     * <p>The metric attribution's Amazon Resource Name (ARN).</p>
     */
    inline void SetMetricAttributionArn(const char* value) { m_metricAttributionArnHasBeenSet = true; m_metricAttributionArn.assign(value); }

    /**
     * <p>The metric attribution's Amazon Resource Name (ARN).</p>
     */
    inline MetricAttributionSummary& WithMetricAttributionArn(const Aws::String& value) { SetMetricAttributionArn(value); return *this;}

    /**
     * <p>The metric attribution's Amazon Resource Name (ARN).</p>
     */
    inline MetricAttributionSummary& WithMetricAttributionArn(Aws::String&& value) { SetMetricAttributionArn(std::move(value)); return *this;}

    /**
     * <p>The metric attribution's Amazon Resource Name (ARN).</p>
     */
    inline MetricAttributionSummary& WithMetricAttributionArn(const char* value) { SetMetricAttributionArn(value); return *this;}


    /**
     * <p>The metric attribution's status.</p>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }

    /**
     * <p>The metric attribution's status.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The metric attribution's status.</p>
     */
    inline void SetStatus(const Aws::String& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The metric attribution's status.</p>
     */
    inline void SetStatus(Aws::String&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The metric attribution's status.</p>
     */
    inline void SetStatus(const char* value) { m_statusHasBeenSet = true; m_status.assign(value); }

    /**
     * <p>The metric attribution's status.</p>
     */
    inline MetricAttributionSummary& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}

    /**
     * <p>The metric attribution's status.</p>
     */
    inline MetricAttributionSummary& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}

    /**
     * <p>The metric attribution's status.</p>
     */
    inline MetricAttributionSummary& WithStatus(const char* value) { SetStatus(value); return *this;}


    /**
     * <p>The metric attribution's creation date time.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDateTime() const{ return m_creationDateTime; }

    /**
     * <p>The metric attribution's creation date time.</p>
     */
    inline bool CreationDateTimeHasBeenSet() const { return m_creationDateTimeHasBeenSet; }

    /**
     * <p>The metric attribution's creation date time.</p>
     */
    inline void SetCreationDateTime(const Aws::Utils::DateTime& value) { m_creationDateTimeHasBeenSet = true; m_creationDateTime = value; }

    /**
     * <p>The metric attribution's creation date time.</p>
     */
    inline void SetCreationDateTime(Aws::Utils::DateTime&& value) { m_creationDateTimeHasBeenSet = true; m_creationDateTime = std::move(value); }

    /**
     * <p>The metric attribution's creation date time.</p>
     */
    inline MetricAttributionSummary& WithCreationDateTime(const Aws::Utils::DateTime& value) { SetCreationDateTime(value); return *this;}

    /**
     * <p>The metric attribution's creation date time.</p>
     */
    inline MetricAttributionSummary& WithCreationDateTime(Aws::Utils::DateTime&& value) { SetCreationDateTime(std::move(value)); return *this;}


    /**
     * <p>The metric attribution's last updated date time.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedDateTime() const{ return m_lastUpdatedDateTime; }

    /**
     * <p>The metric attribution's last updated date time.</p>
     */
    inline bool LastUpdatedDateTimeHasBeenSet() const { return m_lastUpdatedDateTimeHasBeenSet; }

    /**
     * <p>The metric attribution's last updated date time.</p>
     */
    inline void SetLastUpdatedDateTime(const Aws::Utils::DateTime& value) { m_lastUpdatedDateTimeHasBeenSet = true; m_lastUpdatedDateTime = value; }

    /**
     * <p>The metric attribution's last updated date time.</p>
     */
    inline void SetLastUpdatedDateTime(Aws::Utils::DateTime&& value) { m_lastUpdatedDateTimeHasBeenSet = true; m_lastUpdatedDateTime = std::move(value); }

    /**
     * <p>The metric attribution's last updated date time.</p>
     */
    inline MetricAttributionSummary& WithLastUpdatedDateTime(const Aws::Utils::DateTime& value) { SetLastUpdatedDateTime(value); return *this;}

    /**
     * <p>The metric attribution's last updated date time.</p>
     */
    inline MetricAttributionSummary& WithLastUpdatedDateTime(Aws::Utils::DateTime&& value) { SetLastUpdatedDateTime(std::move(value)); return *this;}


    /**
     * <p>The metric attribution's failure reason.</p>
     */
    inline const Aws::String& GetFailureReason() const{ return m_failureReason; }

    /**
     * <p>The metric attribution's failure reason.</p>
     */
    inline bool FailureReasonHasBeenSet() const { return m_failureReasonHasBeenSet; }

    /**
     * <p>The metric attribution's failure reason.</p>
     */
    inline void SetFailureReason(const Aws::String& value) { m_failureReasonHasBeenSet = true; m_failureReason = value; }

    /**
     * <p>The metric attribution's failure reason.</p>
     */
    inline void SetFailureReason(Aws::String&& value) { m_failureReasonHasBeenSet = true; m_failureReason = std::move(value); }

    /**
     * <p>The metric attribution's failure reason.</p>
     */
    inline void SetFailureReason(const char* value) { m_failureReasonHasBeenSet = true; m_failureReason.assign(value); }

    /**
     * <p>The metric attribution's failure reason.</p>
     */
    inline MetricAttributionSummary& WithFailureReason(const Aws::String& value) { SetFailureReason(value); return *this;}

    /**
     * <p>The metric attribution's failure reason.</p>
     */
    inline MetricAttributionSummary& WithFailureReason(Aws::String&& value) { SetFailureReason(std::move(value)); return *this;}

    /**
     * <p>The metric attribution's failure reason.</p>
     */
    inline MetricAttributionSummary& WithFailureReason(const char* value) { SetFailureReason(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_metricAttributionArn;
    bool m_metricAttributionArnHasBeenSet = false;

    Aws::String m_status;
    bool m_statusHasBeenSet = false;

    Aws::Utils::DateTime m_creationDateTime;
    bool m_creationDateTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedDateTime;
    bool m_lastUpdatedDateTimeHasBeenSet = false;

    Aws::String m_failureReason;
    bool m_failureReasonHasBeenSet = false;
  };

} // namespace Model
} // namespace Personalize
} // namespace Aws
