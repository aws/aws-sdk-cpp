/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rekognition/Rekognition_EXPORTS.h>
#include <aws/rekognition/RekognitionRequest.h>
#include <aws/rekognition/model/Video.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/rekognition/model/NotificationChannel.h>
#include <aws/rekognition/model/StartSegmentDetectionFilters.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/rekognition/model/SegmentType.h>
#include <utility>

namespace Aws
{
namespace Rekognition
{
namespace Model
{

  /**
   */
  class StartSegmentDetectionRequest : public RekognitionRequest
  {
  public:
    AWS_REKOGNITION_API StartSegmentDetectionRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartSegmentDetection"; }

    AWS_REKOGNITION_API Aws::String SerializePayload() const override;

    AWS_REKOGNITION_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    
    inline const Video& GetVideo() const { return m_video; }
    inline bool VideoHasBeenSet() const { return m_videoHasBeenSet; }
    template<typename VideoT = Video>
    void SetVideo(VideoT&& value) { m_videoHasBeenSet = true; m_video = std::forward<VideoT>(value); }
    template<typename VideoT = Video>
    StartSegmentDetectionRequest& WithVideo(VideoT&& value) { SetVideo(std::forward<VideoT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Idempotent token used to identify the start request. If you use the same
     * token with multiple <code>StartSegmentDetection</code> requests, the same
     * <code>JobId</code> is returned. Use <code>ClientRequestToken</code> to prevent
     * the same job from being accidently started more than once. </p>
     */
    inline const Aws::String& GetClientRequestToken() const { return m_clientRequestToken; }
    inline bool ClientRequestTokenHasBeenSet() const { return m_clientRequestTokenHasBeenSet; }
    template<typename ClientRequestTokenT = Aws::String>
    void SetClientRequestToken(ClientRequestTokenT&& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = std::forward<ClientRequestTokenT>(value); }
    template<typename ClientRequestTokenT = Aws::String>
    StartSegmentDetectionRequest& WithClientRequestToken(ClientRequestTokenT&& value) { SetClientRequestToken(std::forward<ClientRequestTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the Amazon SNS topic to which you want Amazon Rekognition Video to
     * publish the completion status of the segment detection operation. Note that the
     * Amazon SNS topic must have a topic name that begins with
     * <i>AmazonRekognition</i> if you are using the AmazonRekognitionServiceRole
     * permissions policy to access the topic.</p>
     */
    inline const NotificationChannel& GetNotificationChannel() const { return m_notificationChannel; }
    inline bool NotificationChannelHasBeenSet() const { return m_notificationChannelHasBeenSet; }
    template<typename NotificationChannelT = NotificationChannel>
    void SetNotificationChannel(NotificationChannelT&& value) { m_notificationChannelHasBeenSet = true; m_notificationChannel = std::forward<NotificationChannelT>(value); }
    template<typename NotificationChannelT = NotificationChannel>
    StartSegmentDetectionRequest& WithNotificationChannel(NotificationChannelT&& value) { SetNotificationChannel(std::forward<NotificationChannelT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An identifier you specify that's returned in the completion notification
     * that's published to your Amazon Simple Notification Service topic. For example,
     * you can use <code>JobTag</code> to group related jobs and identify them in the
     * completion notification.</p>
     */
    inline const Aws::String& GetJobTag() const { return m_jobTag; }
    inline bool JobTagHasBeenSet() const { return m_jobTagHasBeenSet; }
    template<typename JobTagT = Aws::String>
    void SetJobTag(JobTagT&& value) { m_jobTagHasBeenSet = true; m_jobTag = std::forward<JobTagT>(value); }
    template<typename JobTagT = Aws::String>
    StartSegmentDetectionRequest& WithJobTag(JobTagT&& value) { SetJobTag(std::forward<JobTagT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Filters for technical cue or shot detection.</p>
     */
    inline const StartSegmentDetectionFilters& GetFilters() const { return m_filters; }
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }
    template<typename FiltersT = StartSegmentDetectionFilters>
    void SetFilters(FiltersT&& value) { m_filtersHasBeenSet = true; m_filters = std::forward<FiltersT>(value); }
    template<typename FiltersT = StartSegmentDetectionFilters>
    StartSegmentDetectionRequest& WithFilters(FiltersT&& value) { SetFilters(std::forward<FiltersT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of segment types to detect in the video. Valid values are
     * TECHNICAL_CUE and SHOT.</p>
     */
    inline const Aws::Vector<SegmentType>& GetSegmentTypes() const { return m_segmentTypes; }
    inline bool SegmentTypesHasBeenSet() const { return m_segmentTypesHasBeenSet; }
    template<typename SegmentTypesT = Aws::Vector<SegmentType>>
    void SetSegmentTypes(SegmentTypesT&& value) { m_segmentTypesHasBeenSet = true; m_segmentTypes = std::forward<SegmentTypesT>(value); }
    template<typename SegmentTypesT = Aws::Vector<SegmentType>>
    StartSegmentDetectionRequest& WithSegmentTypes(SegmentTypesT&& value) { SetSegmentTypes(std::forward<SegmentTypesT>(value)); return *this;}
    inline StartSegmentDetectionRequest& AddSegmentTypes(SegmentType value) { m_segmentTypesHasBeenSet = true; m_segmentTypes.push_back(value); return *this; }
    ///@}
  private:

    Video m_video;
    bool m_videoHasBeenSet = false;

    Aws::String m_clientRequestToken;
    bool m_clientRequestTokenHasBeenSet = false;

    NotificationChannel m_notificationChannel;
    bool m_notificationChannelHasBeenSet = false;

    Aws::String m_jobTag;
    bool m_jobTagHasBeenSet = false;

    StartSegmentDetectionFilters m_filters;
    bool m_filtersHasBeenSet = false;

    Aws::Vector<SegmentType> m_segmentTypes;
    bool m_segmentTypesHasBeenSet = false;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
