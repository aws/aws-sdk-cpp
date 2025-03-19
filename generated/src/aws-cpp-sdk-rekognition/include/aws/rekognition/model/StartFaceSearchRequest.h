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
#include <utility>

namespace Aws
{
namespace Rekognition
{
namespace Model
{

  /**
   */
  class StartFaceSearchRequest : public RekognitionRequest
  {
  public:
    AWS_REKOGNITION_API StartFaceSearchRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartFaceSearch"; }

    AWS_REKOGNITION_API Aws::String SerializePayload() const override;

    AWS_REKOGNITION_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The video you want to search. The video must be stored in an Amazon S3
     * bucket. </p>
     */
    inline const Video& GetVideo() const { return m_video; }
    inline bool VideoHasBeenSet() const { return m_videoHasBeenSet; }
    template<typename VideoT = Video>
    void SetVideo(VideoT&& value) { m_videoHasBeenSet = true; m_video = std::forward<VideoT>(value); }
    template<typename VideoT = Video>
    StartFaceSearchRequest& WithVideo(VideoT&& value) { SetVideo(std::forward<VideoT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Idempotent token used to identify the start request. If you use the same
     * token with multiple <code>StartFaceSearch</code> requests, the same
     * <code>JobId</code> is returned. Use <code>ClientRequestToken</code> to prevent
     * the same job from being accidently started more than once. </p>
     */
    inline const Aws::String& GetClientRequestToken() const { return m_clientRequestToken; }
    inline bool ClientRequestTokenHasBeenSet() const { return m_clientRequestTokenHasBeenSet; }
    template<typename ClientRequestTokenT = Aws::String>
    void SetClientRequestToken(ClientRequestTokenT&& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = std::forward<ClientRequestTokenT>(value); }
    template<typename ClientRequestTokenT = Aws::String>
    StartFaceSearchRequest& WithClientRequestToken(ClientRequestTokenT&& value) { SetClientRequestToken(std::forward<ClientRequestTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The minimum confidence in the person match to return. For example, don't
     * return any matches where confidence in matches is less than 70%. The default
     * value is 80%.</p>
     */
    inline double GetFaceMatchThreshold() const { return m_faceMatchThreshold; }
    inline bool FaceMatchThresholdHasBeenSet() const { return m_faceMatchThresholdHasBeenSet; }
    inline void SetFaceMatchThreshold(double value) { m_faceMatchThresholdHasBeenSet = true; m_faceMatchThreshold = value; }
    inline StartFaceSearchRequest& WithFaceMatchThreshold(double value) { SetFaceMatchThreshold(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>ID of the collection that contains the faces you want to search for.</p>
     */
    inline const Aws::String& GetCollectionId() const { return m_collectionId; }
    inline bool CollectionIdHasBeenSet() const { return m_collectionIdHasBeenSet; }
    template<typename CollectionIdT = Aws::String>
    void SetCollectionId(CollectionIdT&& value) { m_collectionIdHasBeenSet = true; m_collectionId = std::forward<CollectionIdT>(value); }
    template<typename CollectionIdT = Aws::String>
    StartFaceSearchRequest& WithCollectionId(CollectionIdT&& value) { SetCollectionId(std::forward<CollectionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the Amazon SNS topic to which you want Amazon Rekognition Video to
     * publish the completion status of the search. The Amazon SNS topic must have a
     * topic name that begins with <i>AmazonRekognition</i> if you are using the
     * AmazonRekognitionServiceRole permissions policy to access the topic.</p>
     */
    inline const NotificationChannel& GetNotificationChannel() const { return m_notificationChannel; }
    inline bool NotificationChannelHasBeenSet() const { return m_notificationChannelHasBeenSet; }
    template<typename NotificationChannelT = NotificationChannel>
    void SetNotificationChannel(NotificationChannelT&& value) { m_notificationChannelHasBeenSet = true; m_notificationChannel = std::forward<NotificationChannelT>(value); }
    template<typename NotificationChannelT = NotificationChannel>
    StartFaceSearchRequest& WithNotificationChannel(NotificationChannelT&& value) { SetNotificationChannel(std::forward<NotificationChannelT>(value)); return *this;}
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
    StartFaceSearchRequest& WithJobTag(JobTagT&& value) { SetJobTag(std::forward<JobTagT>(value)); return *this;}
    ///@}
  private:

    Video m_video;
    bool m_videoHasBeenSet = false;

    Aws::String m_clientRequestToken;
    bool m_clientRequestTokenHasBeenSet = false;

    double m_faceMatchThreshold{0.0};
    bool m_faceMatchThresholdHasBeenSet = false;

    Aws::String m_collectionId;
    bool m_collectionIdHasBeenSet = false;

    NotificationChannel m_notificationChannel;
    bool m_notificationChannelHasBeenSet = false;

    Aws::String m_jobTag;
    bool m_jobTagHasBeenSet = false;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
