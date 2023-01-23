/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearch/OpenSearchService_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/opensearch/model/Duration.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace OpenSearchService
{
namespace Model
{

  /**
   * <p>The Auto-Tune maintenance schedule. For more information, see <a
   * href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/auto-tune.html">Auto-Tune
   * for Amazon OpenSearch Service</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/AutoTuneMaintenanceSchedule">AWS
   * API Reference</a></p>
   */
  class AutoTuneMaintenanceSchedule
  {
  public:
    AWS_OPENSEARCHSERVICE_API AutoTuneMaintenanceSchedule();
    AWS_OPENSEARCHSERVICE_API AutoTuneMaintenanceSchedule(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVICE_API AutoTuneMaintenanceSchedule& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Epoch timestamp at which the Auto-Tune maintenance schedule starts.</p>
     */
    inline const Aws::Utils::DateTime& GetStartAt() const{ return m_startAt; }

    /**
     * <p>The Epoch timestamp at which the Auto-Tune maintenance schedule starts.</p>
     */
    inline bool StartAtHasBeenSet() const { return m_startAtHasBeenSet; }

    /**
     * <p>The Epoch timestamp at which the Auto-Tune maintenance schedule starts.</p>
     */
    inline void SetStartAt(const Aws::Utils::DateTime& value) { m_startAtHasBeenSet = true; m_startAt = value; }

    /**
     * <p>The Epoch timestamp at which the Auto-Tune maintenance schedule starts.</p>
     */
    inline void SetStartAt(Aws::Utils::DateTime&& value) { m_startAtHasBeenSet = true; m_startAt = std::move(value); }

    /**
     * <p>The Epoch timestamp at which the Auto-Tune maintenance schedule starts.</p>
     */
    inline AutoTuneMaintenanceSchedule& WithStartAt(const Aws::Utils::DateTime& value) { SetStartAt(value); return *this;}

    /**
     * <p>The Epoch timestamp at which the Auto-Tune maintenance schedule starts.</p>
     */
    inline AutoTuneMaintenanceSchedule& WithStartAt(Aws::Utils::DateTime&& value) { SetStartAt(std::move(value)); return *this;}


    /**
     * <p>The duration of the maintenance schedule. For example, <code>"Duration":
     * {"Value": 2, "Unit": "HOURS"}</code>.</p>
     */
    inline const Duration& GetDuration() const{ return m_duration; }

    /**
     * <p>The duration of the maintenance schedule. For example, <code>"Duration":
     * {"Value": 2, "Unit": "HOURS"}</code>.</p>
     */
    inline bool DurationHasBeenSet() const { return m_durationHasBeenSet; }

    /**
     * <p>The duration of the maintenance schedule. For example, <code>"Duration":
     * {"Value": 2, "Unit": "HOURS"}</code>.</p>
     */
    inline void SetDuration(const Duration& value) { m_durationHasBeenSet = true; m_duration = value; }

    /**
     * <p>The duration of the maintenance schedule. For example, <code>"Duration":
     * {"Value": 2, "Unit": "HOURS"}</code>.</p>
     */
    inline void SetDuration(Duration&& value) { m_durationHasBeenSet = true; m_duration = std::move(value); }

    /**
     * <p>The duration of the maintenance schedule. For example, <code>"Duration":
     * {"Value": 2, "Unit": "HOURS"}</code>.</p>
     */
    inline AutoTuneMaintenanceSchedule& WithDuration(const Duration& value) { SetDuration(value); return *this;}

    /**
     * <p>The duration of the maintenance schedule. For example, <code>"Duration":
     * {"Value": 2, "Unit": "HOURS"}</code>.</p>
     */
    inline AutoTuneMaintenanceSchedule& WithDuration(Duration&& value) { SetDuration(std::move(value)); return *this;}


    /**
     * <p>A cron expression for a recurring maintenance schedule during which Auto-Tune
     * can deploy changes.</p>
     */
    inline const Aws::String& GetCronExpressionForRecurrence() const{ return m_cronExpressionForRecurrence; }

    /**
     * <p>A cron expression for a recurring maintenance schedule during which Auto-Tune
     * can deploy changes.</p>
     */
    inline bool CronExpressionForRecurrenceHasBeenSet() const { return m_cronExpressionForRecurrenceHasBeenSet; }

    /**
     * <p>A cron expression for a recurring maintenance schedule during which Auto-Tune
     * can deploy changes.</p>
     */
    inline void SetCronExpressionForRecurrence(const Aws::String& value) { m_cronExpressionForRecurrenceHasBeenSet = true; m_cronExpressionForRecurrence = value; }

    /**
     * <p>A cron expression for a recurring maintenance schedule during which Auto-Tune
     * can deploy changes.</p>
     */
    inline void SetCronExpressionForRecurrence(Aws::String&& value) { m_cronExpressionForRecurrenceHasBeenSet = true; m_cronExpressionForRecurrence = std::move(value); }

    /**
     * <p>A cron expression for a recurring maintenance schedule during which Auto-Tune
     * can deploy changes.</p>
     */
    inline void SetCronExpressionForRecurrence(const char* value) { m_cronExpressionForRecurrenceHasBeenSet = true; m_cronExpressionForRecurrence.assign(value); }

    /**
     * <p>A cron expression for a recurring maintenance schedule during which Auto-Tune
     * can deploy changes.</p>
     */
    inline AutoTuneMaintenanceSchedule& WithCronExpressionForRecurrence(const Aws::String& value) { SetCronExpressionForRecurrence(value); return *this;}

    /**
     * <p>A cron expression for a recurring maintenance schedule during which Auto-Tune
     * can deploy changes.</p>
     */
    inline AutoTuneMaintenanceSchedule& WithCronExpressionForRecurrence(Aws::String&& value) { SetCronExpressionForRecurrence(std::move(value)); return *this;}

    /**
     * <p>A cron expression for a recurring maintenance schedule during which Auto-Tune
     * can deploy changes.</p>
     */
    inline AutoTuneMaintenanceSchedule& WithCronExpressionForRecurrence(const char* value) { SetCronExpressionForRecurrence(value); return *this;}

  private:

    Aws::Utils::DateTime m_startAt;
    bool m_startAtHasBeenSet = false;

    Duration m_duration;
    bool m_durationHasBeenSet = false;

    Aws::String m_cronExpressionForRecurrence;
    bool m_cronExpressionForRecurrenceHasBeenSet = false;
  };

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
