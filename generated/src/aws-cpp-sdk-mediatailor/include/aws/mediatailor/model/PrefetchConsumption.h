/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediatailor/MediaTailor_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
#include <aws/mediatailor/model/AvailMatchingCriteria.h>
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
namespace MediaTailor
{
namespace Model
{

  /**
   * <p>A complex type that contains settings that determine how and when that
   * MediaTailor places prefetched ads into upcoming ad breaks.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediatailor-2018-04-23/PrefetchConsumption">AWS
   * API Reference</a></p>
   */
  class PrefetchConsumption
  {
  public:
    AWS_MEDIATAILOR_API PrefetchConsumption();
    AWS_MEDIATAILOR_API PrefetchConsumption(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIATAILOR_API PrefetchConsumption& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIATAILOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>If you only want MediaTailor to insert prefetched ads into avails (ad breaks)
     * that match specific dynamic variables, such as <code>scte.event_id</code>, set
     * the avail matching criteria.</p>
     */
    inline const Aws::Vector<AvailMatchingCriteria>& GetAvailMatchingCriteria() const{ return m_availMatchingCriteria; }

    /**
     * <p>If you only want MediaTailor to insert prefetched ads into avails (ad breaks)
     * that match specific dynamic variables, such as <code>scte.event_id</code>, set
     * the avail matching criteria.</p>
     */
    inline bool AvailMatchingCriteriaHasBeenSet() const { return m_availMatchingCriteriaHasBeenSet; }

    /**
     * <p>If you only want MediaTailor to insert prefetched ads into avails (ad breaks)
     * that match specific dynamic variables, such as <code>scte.event_id</code>, set
     * the avail matching criteria.</p>
     */
    inline void SetAvailMatchingCriteria(const Aws::Vector<AvailMatchingCriteria>& value) { m_availMatchingCriteriaHasBeenSet = true; m_availMatchingCriteria = value; }

    /**
     * <p>If you only want MediaTailor to insert prefetched ads into avails (ad breaks)
     * that match specific dynamic variables, such as <code>scte.event_id</code>, set
     * the avail matching criteria.</p>
     */
    inline void SetAvailMatchingCriteria(Aws::Vector<AvailMatchingCriteria>&& value) { m_availMatchingCriteriaHasBeenSet = true; m_availMatchingCriteria = std::move(value); }

    /**
     * <p>If you only want MediaTailor to insert prefetched ads into avails (ad breaks)
     * that match specific dynamic variables, such as <code>scte.event_id</code>, set
     * the avail matching criteria.</p>
     */
    inline PrefetchConsumption& WithAvailMatchingCriteria(const Aws::Vector<AvailMatchingCriteria>& value) { SetAvailMatchingCriteria(value); return *this;}

    /**
     * <p>If you only want MediaTailor to insert prefetched ads into avails (ad breaks)
     * that match specific dynamic variables, such as <code>scte.event_id</code>, set
     * the avail matching criteria.</p>
     */
    inline PrefetchConsumption& WithAvailMatchingCriteria(Aws::Vector<AvailMatchingCriteria>&& value) { SetAvailMatchingCriteria(std::move(value)); return *this;}

    /**
     * <p>If you only want MediaTailor to insert prefetched ads into avails (ad breaks)
     * that match specific dynamic variables, such as <code>scte.event_id</code>, set
     * the avail matching criteria.</p>
     */
    inline PrefetchConsumption& AddAvailMatchingCriteria(const AvailMatchingCriteria& value) { m_availMatchingCriteriaHasBeenSet = true; m_availMatchingCriteria.push_back(value); return *this; }

    /**
     * <p>If you only want MediaTailor to insert prefetched ads into avails (ad breaks)
     * that match specific dynamic variables, such as <code>scte.event_id</code>, set
     * the avail matching criteria.</p>
     */
    inline PrefetchConsumption& AddAvailMatchingCriteria(AvailMatchingCriteria&& value) { m_availMatchingCriteriaHasBeenSet = true; m_availMatchingCriteria.push_back(std::move(value)); return *this; }


    /**
     * <p>The time when MediaTailor no longer considers the prefetched ads for use in
     * an ad break. MediaTailor automatically deletes prefetch schedules no less than
     * seven days after the end time. If you'd like to manually delete the prefetch
     * schedule, you can call <code>DeletePrefetchSchedule</code>.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const{ return m_endTime; }

    /**
     * <p>The time when MediaTailor no longer considers the prefetched ads for use in
     * an ad break. MediaTailor automatically deletes prefetch schedules no less than
     * seven days after the end time. If you'd like to manually delete the prefetch
     * schedule, you can call <code>DeletePrefetchSchedule</code>.</p>
     */
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }

    /**
     * <p>The time when MediaTailor no longer considers the prefetched ads for use in
     * an ad break. MediaTailor automatically deletes prefetch schedules no less than
     * seven days after the end time. If you'd like to manually delete the prefetch
     * schedule, you can call <code>DeletePrefetchSchedule</code>.</p>
     */
    inline void SetEndTime(const Aws::Utils::DateTime& value) { m_endTimeHasBeenSet = true; m_endTime = value; }

    /**
     * <p>The time when MediaTailor no longer considers the prefetched ads for use in
     * an ad break. MediaTailor automatically deletes prefetch schedules no less than
     * seven days after the end time. If you'd like to manually delete the prefetch
     * schedule, you can call <code>DeletePrefetchSchedule</code>.</p>
     */
    inline void SetEndTime(Aws::Utils::DateTime&& value) { m_endTimeHasBeenSet = true; m_endTime = std::move(value); }

    /**
     * <p>The time when MediaTailor no longer considers the prefetched ads for use in
     * an ad break. MediaTailor automatically deletes prefetch schedules no less than
     * seven days after the end time. If you'd like to manually delete the prefetch
     * schedule, you can call <code>DeletePrefetchSchedule</code>.</p>
     */
    inline PrefetchConsumption& WithEndTime(const Aws::Utils::DateTime& value) { SetEndTime(value); return *this;}

    /**
     * <p>The time when MediaTailor no longer considers the prefetched ads for use in
     * an ad break. MediaTailor automatically deletes prefetch schedules no less than
     * seven days after the end time. If you'd like to manually delete the prefetch
     * schedule, you can call <code>DeletePrefetchSchedule</code>.</p>
     */
    inline PrefetchConsumption& WithEndTime(Aws::Utils::DateTime&& value) { SetEndTime(std::move(value)); return *this;}


    /**
     * <p>The time when prefetched ads are considered for use in an ad break. If you
     * don't specify <code>StartTime</code>, the prefetched ads are available after
     * MediaTailor retrives them from the ad decision server.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }

    /**
     * <p>The time when prefetched ads are considered for use in an ad break. If you
     * don't specify <code>StartTime</code>, the prefetched ads are available after
     * MediaTailor retrives them from the ad decision server.</p>
     */
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }

    /**
     * <p>The time when prefetched ads are considered for use in an ad break. If you
     * don't specify <code>StartTime</code>, the prefetched ads are available after
     * MediaTailor retrives them from the ad decision server.</p>
     */
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTimeHasBeenSet = true; m_startTime = value; }

    /**
     * <p>The time when prefetched ads are considered for use in an ad break. If you
     * don't specify <code>StartTime</code>, the prefetched ads are available after
     * MediaTailor retrives them from the ad decision server.</p>
     */
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }

    /**
     * <p>The time when prefetched ads are considered for use in an ad break. If you
     * don't specify <code>StartTime</code>, the prefetched ads are available after
     * MediaTailor retrives them from the ad decision server.</p>
     */
    inline PrefetchConsumption& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}

    /**
     * <p>The time when prefetched ads are considered for use in an ad break. If you
     * don't specify <code>StartTime</code>, the prefetched ads are available after
     * MediaTailor retrives them from the ad decision server.</p>
     */
    inline PrefetchConsumption& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}

  private:

    Aws::Vector<AvailMatchingCriteria> m_availMatchingCriteria;
    bool m_availMatchingCriteriaHasBeenSet = false;

    Aws::Utils::DateTime m_endTime;
    bool m_endTimeHasBeenSet = false;

    Aws::Utils::DateTime m_startTime;
    bool m_startTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaTailor
} // namespace Aws
