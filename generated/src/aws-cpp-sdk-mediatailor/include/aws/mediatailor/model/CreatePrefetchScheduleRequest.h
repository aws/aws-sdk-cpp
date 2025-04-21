/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediatailor/MediaTailor_EXPORTS.h>
#include <aws/mediatailor/MediaTailorRequest.h>
#include <aws/mediatailor/model/PrefetchConsumption.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediatailor/model/PrefetchRetrieval.h>
#include <aws/mediatailor/model/RecurringPrefetchConfiguration.h>
#include <aws/mediatailor/model/PrefetchScheduleType.h>
#include <utility>

namespace Aws
{
namespace MediaTailor
{
namespace Model
{

  /**
   */
  class CreatePrefetchScheduleRequest : public MediaTailorRequest
  {
  public:
    AWS_MEDIATAILOR_API CreatePrefetchScheduleRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreatePrefetchSchedule"; }

    AWS_MEDIATAILOR_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The configuration settings for how and when MediaTailor consumes prefetched
     * ads from the ad decision server for single prefetch schedules. Each consumption
     * configuration contains an end time and an optional start time that define the
     * <i>consumption window</i>. Prefetch schedules automatically expire no earlier
     * than seven days after the end time.</p>
     */
    inline const PrefetchConsumption& GetConsumption() const { return m_consumption; }
    inline bool ConsumptionHasBeenSet() const { return m_consumptionHasBeenSet; }
    template<typename ConsumptionT = PrefetchConsumption>
    void SetConsumption(ConsumptionT&& value) { m_consumptionHasBeenSet = true; m_consumption = std::forward<ConsumptionT>(value); }
    template<typename ConsumptionT = PrefetchConsumption>
    CreatePrefetchScheduleRequest& WithConsumption(ConsumptionT&& value) { SetConsumption(std::forward<ConsumptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name to assign to the schedule request.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    CreatePrefetchScheduleRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name to assign to the playback configuration.</p>
     */
    inline const Aws::String& GetPlaybackConfigurationName() const { return m_playbackConfigurationName; }
    inline bool PlaybackConfigurationNameHasBeenSet() const { return m_playbackConfigurationNameHasBeenSet; }
    template<typename PlaybackConfigurationNameT = Aws::String>
    void SetPlaybackConfigurationName(PlaybackConfigurationNameT&& value) { m_playbackConfigurationNameHasBeenSet = true; m_playbackConfigurationName = std::forward<PlaybackConfigurationNameT>(value); }
    template<typename PlaybackConfigurationNameT = Aws::String>
    CreatePrefetchScheduleRequest& WithPlaybackConfigurationName(PlaybackConfigurationNameT&& value) { SetPlaybackConfigurationName(std::forward<PlaybackConfigurationNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration settings for retrieval of prefetched ads from the ad
     * decision server. Only one set of prefetched ads will be retrieved and
     * subsequently consumed for each ad break.</p>
     */
    inline const PrefetchRetrieval& GetRetrieval() const { return m_retrieval; }
    inline bool RetrievalHasBeenSet() const { return m_retrievalHasBeenSet; }
    template<typename RetrievalT = PrefetchRetrieval>
    void SetRetrieval(RetrievalT&& value) { m_retrievalHasBeenSet = true; m_retrieval = std::forward<RetrievalT>(value); }
    template<typename RetrievalT = PrefetchRetrieval>
    CreatePrefetchScheduleRequest& WithRetrieval(RetrievalT&& value) { SetRetrieval(std::forward<RetrievalT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration that defines how and when MediaTailor performs ad
     * prefetching in a live event.</p>
     */
    inline const RecurringPrefetchConfiguration& GetRecurringPrefetchConfiguration() const { return m_recurringPrefetchConfiguration; }
    inline bool RecurringPrefetchConfigurationHasBeenSet() const { return m_recurringPrefetchConfigurationHasBeenSet; }
    template<typename RecurringPrefetchConfigurationT = RecurringPrefetchConfiguration>
    void SetRecurringPrefetchConfiguration(RecurringPrefetchConfigurationT&& value) { m_recurringPrefetchConfigurationHasBeenSet = true; m_recurringPrefetchConfiguration = std::forward<RecurringPrefetchConfigurationT>(value); }
    template<typename RecurringPrefetchConfigurationT = RecurringPrefetchConfiguration>
    CreatePrefetchScheduleRequest& WithRecurringPrefetchConfiguration(RecurringPrefetchConfigurationT&& value) { SetRecurringPrefetchConfiguration(std::forward<RecurringPrefetchConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The frequency that MediaTailor creates prefetch schedules.
     * <code>SINGLE</code> indicates that this schedule applies to one ad break.
     * <code>RECURRING</code> indicates that MediaTailor automatically creates a
     * schedule for each ad avail in a live event.</p> <p>For more information about
     * the prefetch types and when you might use each, see <a
     * href="https://docs.aws.amazon.com/mediatailor/latest/ug/prefetching-ads.html">Prefetching
     * ads in Elemental MediaTailor.</a> </p>
     */
    inline PrefetchScheduleType GetScheduleType() const { return m_scheduleType; }
    inline bool ScheduleTypeHasBeenSet() const { return m_scheduleTypeHasBeenSet; }
    inline void SetScheduleType(PrefetchScheduleType value) { m_scheduleTypeHasBeenSet = true; m_scheduleType = value; }
    inline CreatePrefetchScheduleRequest& WithScheduleType(PrefetchScheduleType value) { SetScheduleType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An optional stream identifier that MediaTailor uses to prefetch ads for
     * multiple streams that use the same playback configuration. If
     * <code>StreamId</code> is specified, MediaTailor returns all of the prefetch
     * schedules with an exact match on <code>StreamId</code>. If not specified,
     * MediaTailor returns all of the prefetch schedules for the playback
     * configuration, regardless of <code>StreamId</code>.</p>
     */
    inline const Aws::String& GetStreamId() const { return m_streamId; }
    inline bool StreamIdHasBeenSet() const { return m_streamIdHasBeenSet; }
    template<typename StreamIdT = Aws::String>
    void SetStreamId(StreamIdT&& value) { m_streamIdHasBeenSet = true; m_streamId = std::forward<StreamIdT>(value); }
    template<typename StreamIdT = Aws::String>
    CreatePrefetchScheduleRequest& WithStreamId(StreamIdT&& value) { SetStreamId(std::forward<StreamIdT>(value)); return *this;}
    ///@}
  private:

    PrefetchConsumption m_consumption;
    bool m_consumptionHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_playbackConfigurationName;
    bool m_playbackConfigurationNameHasBeenSet = false;

    PrefetchRetrieval m_retrieval;
    bool m_retrievalHasBeenSet = false;

    RecurringPrefetchConfiguration m_recurringPrefetchConfiguration;
    bool m_recurringPrefetchConfigurationHasBeenSet = false;

    PrefetchScheduleType m_scheduleType{PrefetchScheduleType::NOT_SET};
    bool m_scheduleTypeHasBeenSet = false;

    Aws::String m_streamId;
    bool m_streamIdHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaTailor
} // namespace Aws
