/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediatailor/MediaTailor_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediatailor/model/PrefetchConsumption.h>
#include <aws/mediatailor/model/PrefetchRetrieval.h>
#include <aws/mediatailor/model/RecurringPrefetchConfiguration.h>
#include <aws/mediatailor/model/PrefetchScheduleType.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace MediaTailor
{
namespace Model
{
  class CreatePrefetchScheduleResult
  {
  public:
    AWS_MEDIATAILOR_API CreatePrefetchScheduleResult() = default;
    AWS_MEDIATAILOR_API CreatePrefetchScheduleResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MEDIATAILOR_API CreatePrefetchScheduleResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ARN to assign to the prefetch schedule.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    CreatePrefetchScheduleResult& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration settings for how and when MediaTailor consumes prefetched
     * ads from the ad decision server for single prefetch schedules. Each consumption
     * configuration contains an end time and an optional start time that define the
     * <i>consumption window</i>. Prefetch schedules automatically expire no earlier
     * than seven days after the end time.</p>
     */
    inline const PrefetchConsumption& GetConsumption() const { return m_consumption; }
    template<typename ConsumptionT = PrefetchConsumption>
    void SetConsumption(ConsumptionT&& value) { m_consumptionHasBeenSet = true; m_consumption = std::forward<ConsumptionT>(value); }
    template<typename ConsumptionT = PrefetchConsumption>
    CreatePrefetchScheduleResult& WithConsumption(ConsumptionT&& value) { SetConsumption(std::forward<ConsumptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name to assign to the prefetch schedule.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    CreatePrefetchScheduleResult& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name to assign to the playback configuration.</p>
     */
    inline const Aws::String& GetPlaybackConfigurationName() const { return m_playbackConfigurationName; }
    template<typename PlaybackConfigurationNameT = Aws::String>
    void SetPlaybackConfigurationName(PlaybackConfigurationNameT&& value) { m_playbackConfigurationNameHasBeenSet = true; m_playbackConfigurationName = std::forward<PlaybackConfigurationNameT>(value); }
    template<typename PlaybackConfigurationNameT = Aws::String>
    CreatePrefetchScheduleResult& WithPlaybackConfigurationName(PlaybackConfigurationNameT&& value) { SetPlaybackConfigurationName(std::forward<PlaybackConfigurationNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration settings for retrieval of prefetched ads from the ad
     * decision server. Only one set of prefetched ads will be retrieved and
     * subsequently consumed for each ad break.</p>
     */
    inline const PrefetchRetrieval& GetRetrieval() const { return m_retrieval; }
    template<typename RetrievalT = PrefetchRetrieval>
    void SetRetrieval(RetrievalT&& value) { m_retrievalHasBeenSet = true; m_retrieval = std::forward<RetrievalT>(value); }
    template<typename RetrievalT = PrefetchRetrieval>
    CreatePrefetchScheduleResult& WithRetrieval(RetrievalT&& value) { SetRetrieval(std::forward<RetrievalT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration that defines how MediaTailor performs recurring prefetch.
     * </p>
     */
    inline const RecurringPrefetchConfiguration& GetRecurringPrefetchConfiguration() const { return m_recurringPrefetchConfiguration; }
    template<typename RecurringPrefetchConfigurationT = RecurringPrefetchConfiguration>
    void SetRecurringPrefetchConfiguration(RecurringPrefetchConfigurationT&& value) { m_recurringPrefetchConfigurationHasBeenSet = true; m_recurringPrefetchConfiguration = std::forward<RecurringPrefetchConfigurationT>(value); }
    template<typename RecurringPrefetchConfigurationT = RecurringPrefetchConfiguration>
    CreatePrefetchScheduleResult& WithRecurringPrefetchConfiguration(RecurringPrefetchConfigurationT&& value) { SetRecurringPrefetchConfiguration(std::forward<RecurringPrefetchConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The frequency that MediaTailor creates prefetch schedules.
     * <code>SINGLE</code> indicates that this schedule applies to one ad break.
     * <code>RECURRING</code> indicates that MediaTailor automatically creates a
     * schedule for each ad avail in a live event.</p>
     */
    inline PrefetchScheduleType GetScheduleType() const { return m_scheduleType; }
    inline void SetScheduleType(PrefetchScheduleType value) { m_scheduleTypeHasBeenSet = true; m_scheduleType = value; }
    inline CreatePrefetchScheduleResult& WithScheduleType(PrefetchScheduleType value) { SetScheduleType(value); return *this;}
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
    template<typename StreamIdT = Aws::String>
    void SetStreamId(StreamIdT&& value) { m_streamIdHasBeenSet = true; m_streamId = std::forward<StreamIdT>(value); }
    template<typename StreamIdT = Aws::String>
    CreatePrefetchScheduleResult& WithStreamId(StreamIdT&& value) { SetStreamId(std::forward<StreamIdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreatePrefetchScheduleResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
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

    RecurringPrefetchConfiguration m_recurringPrefetchConfiguration;
    bool m_recurringPrefetchConfigurationHasBeenSet = false;

    PrefetchScheduleType m_scheduleType{PrefetchScheduleType::NOT_SET};
    bool m_scheduleTypeHasBeenSet = false;

    Aws::String m_streamId;
    bool m_streamIdHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaTailor
} // namespace Aws
