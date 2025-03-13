/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediatailor/MediaTailor_EXPORTS.h>
#include <aws/mediatailor/MediaTailorRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace MediaTailor
{
namespace Model
{

  /**
   */
  class GetChannelScheduleRequest : public MediaTailorRequest
  {
  public:
    AWS_MEDIATAILOR_API GetChannelScheduleRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetChannelSchedule"; }

    AWS_MEDIATAILOR_API Aws::String SerializePayload() const override;

    AWS_MEDIATAILOR_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>The name of the channel associated with this Channel Schedule.</p>
     */
    inline const Aws::String& GetChannelName() const { return m_channelName; }
    inline bool ChannelNameHasBeenSet() const { return m_channelNameHasBeenSet; }
    template<typename ChannelNameT = Aws::String>
    void SetChannelName(ChannelNameT&& value) { m_channelNameHasBeenSet = true; m_channelName = std::forward<ChannelNameT>(value); }
    template<typename ChannelNameT = Aws::String>
    GetChannelScheduleRequest& WithChannelName(ChannelNameT&& value) { SetChannelName(std::forward<ChannelNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The duration in minutes of the channel schedule.</p>
     */
    inline const Aws::String& GetDurationMinutes() const { return m_durationMinutes; }
    inline bool DurationMinutesHasBeenSet() const { return m_durationMinutesHasBeenSet; }
    template<typename DurationMinutesT = Aws::String>
    void SetDurationMinutes(DurationMinutesT&& value) { m_durationMinutesHasBeenSet = true; m_durationMinutes = std::forward<DurationMinutesT>(value); }
    template<typename DurationMinutesT = Aws::String>
    GetChannelScheduleRequest& WithDurationMinutes(DurationMinutesT&& value) { SetDurationMinutes(std::forward<DurationMinutesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of channel schedules that you want MediaTailor to return
     * in response to the current request. If there are more than
     * <code>MaxResults</code> channel schedules, use the value of
     * <code>NextToken</code> in the response to get the next page of results.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline GetChannelScheduleRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>(Optional) If the playback configuration has more than
     * <code>MaxResults</code> channel schedules, use <code>NextToken</code> to get the
     * second and subsequent pages of results.</p> <p>For the first
     * <code>GetChannelScheduleRequest</code> request, omit this value.</p> <p>For the
     * second and subsequent requests, get the value of <code>NextToken</code> from the
     * previous response and specify that value for <code>NextToken</code> in the
     * request.</p> <p>If the previous response didn't include a <code>NextToken</code>
     * element, there are no more channel schedules to get.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    GetChannelScheduleRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The single audience for GetChannelScheduleRequest.</p>
     */
    inline const Aws::String& GetAudience() const { return m_audience; }
    inline bool AudienceHasBeenSet() const { return m_audienceHasBeenSet; }
    template<typename AudienceT = Aws::String>
    void SetAudience(AudienceT&& value) { m_audienceHasBeenSet = true; m_audience = std::forward<AudienceT>(value); }
    template<typename AudienceT = Aws::String>
    GetChannelScheduleRequest& WithAudience(AudienceT&& value) { SetAudience(std::forward<AudienceT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_channelName;
    bool m_channelNameHasBeenSet = false;

    Aws::String m_durationMinutes;
    bool m_durationMinutesHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_audience;
    bool m_audienceHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaTailor
} // namespace Aws
