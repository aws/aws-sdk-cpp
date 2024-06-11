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
    AWS_MEDIATAILOR_API CreatePrefetchScheduleRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreatePrefetchSchedule"; }

    AWS_MEDIATAILOR_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The configuration settings for MediaTailor's <i>consumption</i> of the
     * prefetched ads from the ad decision server. Each consumption configuration
     * contains an end time and an optional start time that define the <i>consumption
     * window</i>. Prefetch schedules automatically expire no earlier than seven days
     * after the end time.</p>
     */
    inline const PrefetchConsumption& GetConsumption() const{ return m_consumption; }
    inline bool ConsumptionHasBeenSet() const { return m_consumptionHasBeenSet; }
    inline void SetConsumption(const PrefetchConsumption& value) { m_consumptionHasBeenSet = true; m_consumption = value; }
    inline void SetConsumption(PrefetchConsumption&& value) { m_consumptionHasBeenSet = true; m_consumption = std::move(value); }
    inline CreatePrefetchScheduleRequest& WithConsumption(const PrefetchConsumption& value) { SetConsumption(value); return *this;}
    inline CreatePrefetchScheduleRequest& WithConsumption(PrefetchConsumption&& value) { SetConsumption(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name to assign to the schedule request.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline CreatePrefetchScheduleRequest& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline CreatePrefetchScheduleRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline CreatePrefetchScheduleRequest& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name to assign to the playback configuration.</p>
     */
    inline const Aws::String& GetPlaybackConfigurationName() const{ return m_playbackConfigurationName; }
    inline bool PlaybackConfigurationNameHasBeenSet() const { return m_playbackConfigurationNameHasBeenSet; }
    inline void SetPlaybackConfigurationName(const Aws::String& value) { m_playbackConfigurationNameHasBeenSet = true; m_playbackConfigurationName = value; }
    inline void SetPlaybackConfigurationName(Aws::String&& value) { m_playbackConfigurationNameHasBeenSet = true; m_playbackConfigurationName = std::move(value); }
    inline void SetPlaybackConfigurationName(const char* value) { m_playbackConfigurationNameHasBeenSet = true; m_playbackConfigurationName.assign(value); }
    inline CreatePrefetchScheduleRequest& WithPlaybackConfigurationName(const Aws::String& value) { SetPlaybackConfigurationName(value); return *this;}
    inline CreatePrefetchScheduleRequest& WithPlaybackConfigurationName(Aws::String&& value) { SetPlaybackConfigurationName(std::move(value)); return *this;}
    inline CreatePrefetchScheduleRequest& WithPlaybackConfigurationName(const char* value) { SetPlaybackConfigurationName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration settings for retrieval of prefetched ads from the ad
     * decision server. Only one set of prefetched ads will be retrieved and
     * subsequently consumed for each ad break.</p>
     */
    inline const PrefetchRetrieval& GetRetrieval() const{ return m_retrieval; }
    inline bool RetrievalHasBeenSet() const { return m_retrievalHasBeenSet; }
    inline void SetRetrieval(const PrefetchRetrieval& value) { m_retrievalHasBeenSet = true; m_retrieval = value; }
    inline void SetRetrieval(PrefetchRetrieval&& value) { m_retrievalHasBeenSet = true; m_retrieval = std::move(value); }
    inline CreatePrefetchScheduleRequest& WithRetrieval(const PrefetchRetrieval& value) { SetRetrieval(value); return *this;}
    inline CreatePrefetchScheduleRequest& WithRetrieval(PrefetchRetrieval&& value) { SetRetrieval(std::move(value)); return *this;}
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
    inline const Aws::String& GetStreamId() const{ return m_streamId; }
    inline bool StreamIdHasBeenSet() const { return m_streamIdHasBeenSet; }
    inline void SetStreamId(const Aws::String& value) { m_streamIdHasBeenSet = true; m_streamId = value; }
    inline void SetStreamId(Aws::String&& value) { m_streamIdHasBeenSet = true; m_streamId = std::move(value); }
    inline void SetStreamId(const char* value) { m_streamIdHasBeenSet = true; m_streamId.assign(value); }
    inline CreatePrefetchScheduleRequest& WithStreamId(const Aws::String& value) { SetStreamId(value); return *this;}
    inline CreatePrefetchScheduleRequest& WithStreamId(Aws::String&& value) { SetStreamId(std::move(value)); return *this;}
    inline CreatePrefetchScheduleRequest& WithStreamId(const char* value) { SetStreamId(value); return *this;}
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

    Aws::String m_streamId;
    bool m_streamIdHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaTailor
} // namespace Aws
