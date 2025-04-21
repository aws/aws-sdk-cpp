/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediatailor/MediaTailor_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediatailor/model/PrefetchConsumption.h>
#include <aws/mediatailor/model/PrefetchRetrieval.h>
#include <aws/mediatailor/model/PrefetchScheduleType.h>
#include <aws/mediatailor/model/RecurringPrefetchConfiguration.h>
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
   * <p>A prefetch schedule allows you to tell MediaTailor to fetch and prepare
   * certain ads before an ad break happens. For more information about ad
   * prefetching, see <a
   * href="https://docs.aws.amazon.com/mediatailor/latest/ug/prefetching-ads.html">Using
   * ad prefetching</a> in the <i>MediaTailor User Guide</i>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediatailor-2018-04-23/PrefetchSchedule">AWS
   * API Reference</a></p>
   */
  class PrefetchSchedule
  {
  public:
    AWS_MEDIATAILOR_API PrefetchSchedule() = default;
    AWS_MEDIATAILOR_API PrefetchSchedule(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIATAILOR_API PrefetchSchedule& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIATAILOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the prefetch schedule.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    PrefetchSchedule& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Consumption settings determine how, and when, MediaTailor places the
     * prefetched ads into ad breaks for single prefetch schedules. Ad consumption
     * occurs within a span of time that you define, called a <i>consumption
     * window</i>. You can designate which ad breaks that MediaTailor fills with
     * prefetch ads by setting avail matching criteria.</p>
     */
    inline const PrefetchConsumption& GetConsumption() const { return m_consumption; }
    inline bool ConsumptionHasBeenSet() const { return m_consumptionHasBeenSet; }
    template<typename ConsumptionT = PrefetchConsumption>
    void SetConsumption(ConsumptionT&& value) { m_consumptionHasBeenSet = true; m_consumption = std::forward<ConsumptionT>(value); }
    template<typename ConsumptionT = PrefetchConsumption>
    PrefetchSchedule& WithConsumption(ConsumptionT&& value) { SetConsumption(std::forward<ConsumptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the prefetch schedule. The name must be unique among all prefetch
     * schedules that are associated with the specified playback configuration.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    PrefetchSchedule& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the playback configuration to create the prefetch schedule
     * for.</p>
     */
    inline const Aws::String& GetPlaybackConfigurationName() const { return m_playbackConfigurationName; }
    inline bool PlaybackConfigurationNameHasBeenSet() const { return m_playbackConfigurationNameHasBeenSet; }
    template<typename PlaybackConfigurationNameT = Aws::String>
    void SetPlaybackConfigurationName(PlaybackConfigurationNameT&& value) { m_playbackConfigurationNameHasBeenSet = true; m_playbackConfigurationName = std::forward<PlaybackConfigurationNameT>(value); }
    template<typename PlaybackConfigurationNameT = Aws::String>
    PrefetchSchedule& WithPlaybackConfigurationName(PlaybackConfigurationNameT&& value) { SetPlaybackConfigurationName(std::forward<PlaybackConfigurationNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A complex type that contains settings for prefetch retrieval from the ad
     * decision server (ADS).</p>
     */
    inline const PrefetchRetrieval& GetRetrieval() const { return m_retrieval; }
    inline bool RetrievalHasBeenSet() const { return m_retrievalHasBeenSet; }
    template<typename RetrievalT = PrefetchRetrieval>
    void SetRetrieval(RetrievalT&& value) { m_retrievalHasBeenSet = true; m_retrieval = std::forward<RetrievalT>(value); }
    template<typename RetrievalT = PrefetchRetrieval>
    PrefetchSchedule& WithRetrieval(RetrievalT&& value) { SetRetrieval(std::forward<RetrievalT>(value)); return *this;}
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
    inline PrefetchSchedule& WithScheduleType(PrefetchScheduleType value) { SetScheduleType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The settings that determine how and when MediaTailor prefetches ads and
     * inserts them into ad breaks.</p>
     */
    inline const RecurringPrefetchConfiguration& GetRecurringPrefetchConfiguration() const { return m_recurringPrefetchConfiguration; }
    inline bool RecurringPrefetchConfigurationHasBeenSet() const { return m_recurringPrefetchConfigurationHasBeenSet; }
    template<typename RecurringPrefetchConfigurationT = RecurringPrefetchConfiguration>
    void SetRecurringPrefetchConfiguration(RecurringPrefetchConfigurationT&& value) { m_recurringPrefetchConfigurationHasBeenSet = true; m_recurringPrefetchConfiguration = std::forward<RecurringPrefetchConfigurationT>(value); }
    template<typename RecurringPrefetchConfigurationT = RecurringPrefetchConfiguration>
    PrefetchSchedule& WithRecurringPrefetchConfiguration(RecurringPrefetchConfigurationT&& value) { SetRecurringPrefetchConfiguration(std::forward<RecurringPrefetchConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An optional stream identifier that you can specify in order to prefetch for
     * multiple streams that use the same playback configuration.</p>
     */
    inline const Aws::String& GetStreamId() const { return m_streamId; }
    inline bool StreamIdHasBeenSet() const { return m_streamIdHasBeenSet; }
    template<typename StreamIdT = Aws::String>
    void SetStreamId(StreamIdT&& value) { m_streamIdHasBeenSet = true; m_streamId = std::forward<StreamIdT>(value); }
    template<typename StreamIdT = Aws::String>
    PrefetchSchedule& WithStreamId(StreamIdT&& value) { SetStreamId(std::forward<StreamIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    PrefetchConsumption m_consumption;
    bool m_consumptionHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_playbackConfigurationName;
    bool m_playbackConfigurationNameHasBeenSet = false;

    PrefetchRetrieval m_retrieval;
    bool m_retrievalHasBeenSet = false;

    PrefetchScheduleType m_scheduleType{PrefetchScheduleType::NOT_SET};
    bool m_scheduleTypeHasBeenSet = false;

    RecurringPrefetchConfiguration m_recurringPrefetchConfiguration;
    bool m_recurringPrefetchConfigurationHasBeenSet = false;

    Aws::String m_streamId;
    bool m_streamIdHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaTailor
} // namespace Aws
