/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediatailor/MediaTailor_EXPORTS.h>
#include <aws/mediatailor/MediaTailorRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediatailor/model/ListPrefetchScheduleType.h>
#include <utility>

namespace Aws
{
namespace MediaTailor
{
namespace Model
{

  /**
   */
  class ListPrefetchSchedulesRequest : public MediaTailorRequest
  {
  public:
    AWS_MEDIATAILOR_API ListPrefetchSchedulesRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListPrefetchSchedules"; }

    AWS_MEDIATAILOR_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The maximum number of prefetch schedules that you want MediaTailor to return
     * in response to the current request. If there are more than
     * <code>MaxResults</code> prefetch schedules, use the value of
     * <code>NextToken</code> in the response to get the next page of results.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListPrefetchSchedulesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>(Optional) If the playback configuration has more than
     * <code>MaxResults</code> prefetch schedules, use <code>NextToken</code> to get
     * the second and subsequent pages of results.</p> <p> For the first
     * <code>ListPrefetchSchedulesRequest</code> request, omit this value.</p> <p> For
     * the second and subsequent requests, get the value of <code>NextToken</code> from
     * the previous response and specify that value for <code>NextToken</code> in the
     * request.</p> <p> If the previous response didn't include a
     * <code>NextToken</code> element, there are no more prefetch schedules to get.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListPrefetchSchedulesRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Retrieves the prefetch schedule(s) for a specific playback configuration.</p>
     */
    inline const Aws::String& GetPlaybackConfigurationName() const { return m_playbackConfigurationName; }
    inline bool PlaybackConfigurationNameHasBeenSet() const { return m_playbackConfigurationNameHasBeenSet; }
    template<typename PlaybackConfigurationNameT = Aws::String>
    void SetPlaybackConfigurationName(PlaybackConfigurationNameT&& value) { m_playbackConfigurationNameHasBeenSet = true; m_playbackConfigurationName = std::forward<PlaybackConfigurationNameT>(value); }
    template<typename PlaybackConfigurationNameT = Aws::String>
    ListPrefetchSchedulesRequest& WithPlaybackConfigurationName(PlaybackConfigurationNameT&& value) { SetPlaybackConfigurationName(std::forward<PlaybackConfigurationNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of prefetch schedules that you want to list. <code>SINGLE</code>
     * indicates that you want to list the configured single prefetch schedules.
     * <code>RECURRING</code> indicates that you want to list the configured recurring
     * prefetch schedules. <code>ALL</code> indicates that you want to list all
     * configured prefetch schedules.</p>
     */
    inline ListPrefetchScheduleType GetScheduleType() const { return m_scheduleType; }
    inline bool ScheduleTypeHasBeenSet() const { return m_scheduleTypeHasBeenSet; }
    inline void SetScheduleType(ListPrefetchScheduleType value) { m_scheduleTypeHasBeenSet = true; m_scheduleType = value; }
    inline ListPrefetchSchedulesRequest& WithScheduleType(ListPrefetchScheduleType value) { SetScheduleType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An optional filtering parameter whereby MediaTailor filters the prefetch
     * schedules to include only specific streams.</p>
     */
    inline const Aws::String& GetStreamId() const { return m_streamId; }
    inline bool StreamIdHasBeenSet() const { return m_streamIdHasBeenSet; }
    template<typename StreamIdT = Aws::String>
    void SetStreamId(StreamIdT&& value) { m_streamIdHasBeenSet = true; m_streamId = std::forward<StreamIdT>(value); }
    template<typename StreamIdT = Aws::String>
    ListPrefetchSchedulesRequest& WithStreamId(StreamIdT&& value) { SetStreamId(std::forward<StreamIdT>(value)); return *this;}
    ///@}
  private:

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_playbackConfigurationName;
    bool m_playbackConfigurationNameHasBeenSet = false;

    ListPrefetchScheduleType m_scheduleType{ListPrefetchScheduleType::NOT_SET};
    bool m_scheduleTypeHasBeenSet = false;

    Aws::String m_streamId;
    bool m_streamIdHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaTailor
} // namespace Aws
