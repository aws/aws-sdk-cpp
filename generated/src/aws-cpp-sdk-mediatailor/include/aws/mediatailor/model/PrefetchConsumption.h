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
   * <p>For single prefetch, describes how and when that MediaTailor places
   * prefetched ads into upcoming ad breaks.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediatailor-2018-04-23/PrefetchConsumption">AWS
   * API Reference</a></p>
   */
  class PrefetchConsumption
  {
  public:
    AWS_MEDIATAILOR_API PrefetchConsumption() = default;
    AWS_MEDIATAILOR_API PrefetchConsumption(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIATAILOR_API PrefetchConsumption& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIATAILOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>If you only want MediaTailor to insert prefetched ads into avails (ad breaks)
     * that match specific dynamic variables, such as <code>scte.event_id</code>, set
     * the avail matching criteria.</p>
     */
    inline const Aws::Vector<AvailMatchingCriteria>& GetAvailMatchingCriteria() const { return m_availMatchingCriteria; }
    inline bool AvailMatchingCriteriaHasBeenSet() const { return m_availMatchingCriteriaHasBeenSet; }
    template<typename AvailMatchingCriteriaT = Aws::Vector<AvailMatchingCriteria>>
    void SetAvailMatchingCriteria(AvailMatchingCriteriaT&& value) { m_availMatchingCriteriaHasBeenSet = true; m_availMatchingCriteria = std::forward<AvailMatchingCriteriaT>(value); }
    template<typename AvailMatchingCriteriaT = Aws::Vector<AvailMatchingCriteria>>
    PrefetchConsumption& WithAvailMatchingCriteria(AvailMatchingCriteriaT&& value) { SetAvailMatchingCriteria(std::forward<AvailMatchingCriteriaT>(value)); return *this;}
    template<typename AvailMatchingCriteriaT = AvailMatchingCriteria>
    PrefetchConsumption& AddAvailMatchingCriteria(AvailMatchingCriteriaT&& value) { m_availMatchingCriteriaHasBeenSet = true; m_availMatchingCriteria.emplace_back(std::forward<AvailMatchingCriteriaT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The time when MediaTailor no longer considers the prefetched ads for use in
     * an ad break. MediaTailor automatically deletes prefetch schedules no less than
     * seven days after the end time. If you'd like to manually delete the prefetch
     * schedule, you can call <code>DeletePrefetchSchedule</code>.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const { return m_endTime; }
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }
    template<typename EndTimeT = Aws::Utils::DateTime>
    void SetEndTime(EndTimeT&& value) { m_endTimeHasBeenSet = true; m_endTime = std::forward<EndTimeT>(value); }
    template<typename EndTimeT = Aws::Utils::DateTime>
    PrefetchConsumption& WithEndTime(EndTimeT&& value) { SetEndTime(std::forward<EndTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when prefetched ads are considered for use in an ad break. If you
     * don't specify <code>StartTime</code>, the prefetched ads are available after
     * MediaTailor retrieves them from the ad decision server.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const { return m_startTime; }
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
    template<typename StartTimeT = Aws::Utils::DateTime>
    void SetStartTime(StartTimeT&& value) { m_startTimeHasBeenSet = true; m_startTime = std::forward<StartTimeT>(value); }
    template<typename StartTimeT = Aws::Utils::DateTime>
    PrefetchConsumption& WithStartTime(StartTimeT&& value) { SetStartTime(std::forward<StartTimeT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<AvailMatchingCriteria> m_availMatchingCriteria;
    bool m_availMatchingCriteriaHasBeenSet = false;

    Aws::Utils::DateTime m_endTime{};
    bool m_endTimeHasBeenSet = false;

    Aws::Utils::DateTime m_startTime{};
    bool m_startTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaTailor
} // namespace Aws
