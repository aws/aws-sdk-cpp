﻿/**
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
  class StartPersonTrackingRequest : public RekognitionRequest
  {
  public:
    AWS_REKOGNITION_API StartPersonTrackingRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartPersonTracking"; }

    AWS_REKOGNITION_API Aws::String SerializePayload() const override;

    AWS_REKOGNITION_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The video in which you want to detect people. The video must be stored in an
     * Amazon S3 bucket.</p>
     */
    inline const Video& GetVideo() const{ return m_video; }
    inline bool VideoHasBeenSet() const { return m_videoHasBeenSet; }
    inline void SetVideo(const Video& value) { m_videoHasBeenSet = true; m_video = value; }
    inline void SetVideo(Video&& value) { m_videoHasBeenSet = true; m_video = std::move(value); }
    inline StartPersonTrackingRequest& WithVideo(const Video& value) { SetVideo(value); return *this;}
    inline StartPersonTrackingRequest& WithVideo(Video&& value) { SetVideo(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Idempotent token used to identify the start request. If you use the same
     * token with multiple <code>StartPersonTracking</code> requests, the same
     * <code>JobId</code> is returned. Use <code>ClientRequestToken</code> to prevent
     * the same job from being accidently started more than once. </p>
     */
    inline const Aws::String& GetClientRequestToken() const{ return m_clientRequestToken; }
    inline bool ClientRequestTokenHasBeenSet() const { return m_clientRequestTokenHasBeenSet; }
    inline void SetClientRequestToken(const Aws::String& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = value; }
    inline void SetClientRequestToken(Aws::String&& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = std::move(value); }
    inline void SetClientRequestToken(const char* value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken.assign(value); }
    inline StartPersonTrackingRequest& WithClientRequestToken(const Aws::String& value) { SetClientRequestToken(value); return *this;}
    inline StartPersonTrackingRequest& WithClientRequestToken(Aws::String&& value) { SetClientRequestToken(std::move(value)); return *this;}
    inline StartPersonTrackingRequest& WithClientRequestToken(const char* value) { SetClientRequestToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon SNS topic ARN you want Amazon Rekognition Video to publish the
     * completion status of the people detection operation to. The Amazon SNS topic
     * must have a topic name that begins with <i>AmazonRekognition</i> if you are
     * using the AmazonRekognitionServiceRole permissions policy.</p>
     */
    inline const NotificationChannel& GetNotificationChannel() const{ return m_notificationChannel; }
    inline bool NotificationChannelHasBeenSet() const { return m_notificationChannelHasBeenSet; }
    inline void SetNotificationChannel(const NotificationChannel& value) { m_notificationChannelHasBeenSet = true; m_notificationChannel = value; }
    inline void SetNotificationChannel(NotificationChannel&& value) { m_notificationChannelHasBeenSet = true; m_notificationChannel = std::move(value); }
    inline StartPersonTrackingRequest& WithNotificationChannel(const NotificationChannel& value) { SetNotificationChannel(value); return *this;}
    inline StartPersonTrackingRequest& WithNotificationChannel(NotificationChannel&& value) { SetNotificationChannel(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An identifier you specify that's returned in the completion notification
     * that's published to your Amazon Simple Notification Service topic. For example,
     * you can use <code>JobTag</code> to group related jobs and identify them in the
     * completion notification.</p>
     */
    inline const Aws::String& GetJobTag() const{ return m_jobTag; }
    inline bool JobTagHasBeenSet() const { return m_jobTagHasBeenSet; }
    inline void SetJobTag(const Aws::String& value) { m_jobTagHasBeenSet = true; m_jobTag = value; }
    inline void SetJobTag(Aws::String&& value) { m_jobTagHasBeenSet = true; m_jobTag = std::move(value); }
    inline void SetJobTag(const char* value) { m_jobTagHasBeenSet = true; m_jobTag.assign(value); }
    inline StartPersonTrackingRequest& WithJobTag(const Aws::String& value) { SetJobTag(value); return *this;}
    inline StartPersonTrackingRequest& WithJobTag(Aws::String&& value) { SetJobTag(std::move(value)); return *this;}
    inline StartPersonTrackingRequest& WithJobTag(const char* value) { SetJobTag(value); return *this;}
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
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
