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
#include <aws/rekognition/model/StartTextDetectionFilters.h>
#include <utility>

namespace Aws
{
namespace Rekognition
{
namespace Model
{

  /**
   */
  class StartTextDetectionRequest : public RekognitionRequest
  {
  public:
    AWS_REKOGNITION_API StartTextDetectionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartTextDetection"; }

    AWS_REKOGNITION_API Aws::String SerializePayload() const override;

    AWS_REKOGNITION_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    
    inline const Video& GetVideo() const{ return m_video; }

    
    inline bool VideoHasBeenSet() const { return m_videoHasBeenSet; }

    
    inline void SetVideo(const Video& value) { m_videoHasBeenSet = true; m_video = value; }

    
    inline void SetVideo(Video&& value) { m_videoHasBeenSet = true; m_video = std::move(value); }

    
    inline StartTextDetectionRequest& WithVideo(const Video& value) { SetVideo(value); return *this;}

    
    inline StartTextDetectionRequest& WithVideo(Video&& value) { SetVideo(std::move(value)); return *this;}


    /**
     * <p>Idempotent token used to identify the start request. If you use the same
     * token with multiple <code>StartTextDetection</code> requests, the same
     * <code>JobId</code> is returned. Use <code>ClientRequestToken</code> to prevent
     * the same job from being accidentaly started more than once.</p>
     */
    inline const Aws::String& GetClientRequestToken() const{ return m_clientRequestToken; }

    /**
     * <p>Idempotent token used to identify the start request. If you use the same
     * token with multiple <code>StartTextDetection</code> requests, the same
     * <code>JobId</code> is returned. Use <code>ClientRequestToken</code> to prevent
     * the same job from being accidentaly started more than once.</p>
     */
    inline bool ClientRequestTokenHasBeenSet() const { return m_clientRequestTokenHasBeenSet; }

    /**
     * <p>Idempotent token used to identify the start request. If you use the same
     * token with multiple <code>StartTextDetection</code> requests, the same
     * <code>JobId</code> is returned. Use <code>ClientRequestToken</code> to prevent
     * the same job from being accidentaly started more than once.</p>
     */
    inline void SetClientRequestToken(const Aws::String& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = value; }

    /**
     * <p>Idempotent token used to identify the start request. If you use the same
     * token with multiple <code>StartTextDetection</code> requests, the same
     * <code>JobId</code> is returned. Use <code>ClientRequestToken</code> to prevent
     * the same job from being accidentaly started more than once.</p>
     */
    inline void SetClientRequestToken(Aws::String&& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = std::move(value); }

    /**
     * <p>Idempotent token used to identify the start request. If you use the same
     * token with multiple <code>StartTextDetection</code> requests, the same
     * <code>JobId</code> is returned. Use <code>ClientRequestToken</code> to prevent
     * the same job from being accidentaly started more than once.</p>
     */
    inline void SetClientRequestToken(const char* value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken.assign(value); }

    /**
     * <p>Idempotent token used to identify the start request. If you use the same
     * token with multiple <code>StartTextDetection</code> requests, the same
     * <code>JobId</code> is returned. Use <code>ClientRequestToken</code> to prevent
     * the same job from being accidentaly started more than once.</p>
     */
    inline StartTextDetectionRequest& WithClientRequestToken(const Aws::String& value) { SetClientRequestToken(value); return *this;}

    /**
     * <p>Idempotent token used to identify the start request. If you use the same
     * token with multiple <code>StartTextDetection</code> requests, the same
     * <code>JobId</code> is returned. Use <code>ClientRequestToken</code> to prevent
     * the same job from being accidentaly started more than once.</p>
     */
    inline StartTextDetectionRequest& WithClientRequestToken(Aws::String&& value) { SetClientRequestToken(std::move(value)); return *this;}

    /**
     * <p>Idempotent token used to identify the start request. If you use the same
     * token with multiple <code>StartTextDetection</code> requests, the same
     * <code>JobId</code> is returned. Use <code>ClientRequestToken</code> to prevent
     * the same job from being accidentaly started more than once.</p>
     */
    inline StartTextDetectionRequest& WithClientRequestToken(const char* value) { SetClientRequestToken(value); return *this;}


    
    inline const NotificationChannel& GetNotificationChannel() const{ return m_notificationChannel; }

    
    inline bool NotificationChannelHasBeenSet() const { return m_notificationChannelHasBeenSet; }

    
    inline void SetNotificationChannel(const NotificationChannel& value) { m_notificationChannelHasBeenSet = true; m_notificationChannel = value; }

    
    inline void SetNotificationChannel(NotificationChannel&& value) { m_notificationChannelHasBeenSet = true; m_notificationChannel = std::move(value); }

    
    inline StartTextDetectionRequest& WithNotificationChannel(const NotificationChannel& value) { SetNotificationChannel(value); return *this;}

    
    inline StartTextDetectionRequest& WithNotificationChannel(NotificationChannel&& value) { SetNotificationChannel(std::move(value)); return *this;}


    /**
     * <p>An identifier returned in the completion status published by your Amazon
     * Simple Notification Service topic. For example, you can use <code>JobTag</code>
     * to group related jobs and identify them in the completion notification.</p>
     */
    inline const Aws::String& GetJobTag() const{ return m_jobTag; }

    /**
     * <p>An identifier returned in the completion status published by your Amazon
     * Simple Notification Service topic. For example, you can use <code>JobTag</code>
     * to group related jobs and identify them in the completion notification.</p>
     */
    inline bool JobTagHasBeenSet() const { return m_jobTagHasBeenSet; }

    /**
     * <p>An identifier returned in the completion status published by your Amazon
     * Simple Notification Service topic. For example, you can use <code>JobTag</code>
     * to group related jobs and identify them in the completion notification.</p>
     */
    inline void SetJobTag(const Aws::String& value) { m_jobTagHasBeenSet = true; m_jobTag = value; }

    /**
     * <p>An identifier returned in the completion status published by your Amazon
     * Simple Notification Service topic. For example, you can use <code>JobTag</code>
     * to group related jobs and identify them in the completion notification.</p>
     */
    inline void SetJobTag(Aws::String&& value) { m_jobTagHasBeenSet = true; m_jobTag = std::move(value); }

    /**
     * <p>An identifier returned in the completion status published by your Amazon
     * Simple Notification Service topic. For example, you can use <code>JobTag</code>
     * to group related jobs and identify them in the completion notification.</p>
     */
    inline void SetJobTag(const char* value) { m_jobTagHasBeenSet = true; m_jobTag.assign(value); }

    /**
     * <p>An identifier returned in the completion status published by your Amazon
     * Simple Notification Service topic. For example, you can use <code>JobTag</code>
     * to group related jobs and identify them in the completion notification.</p>
     */
    inline StartTextDetectionRequest& WithJobTag(const Aws::String& value) { SetJobTag(value); return *this;}

    /**
     * <p>An identifier returned in the completion status published by your Amazon
     * Simple Notification Service topic. For example, you can use <code>JobTag</code>
     * to group related jobs and identify them in the completion notification.</p>
     */
    inline StartTextDetectionRequest& WithJobTag(Aws::String&& value) { SetJobTag(std::move(value)); return *this;}

    /**
     * <p>An identifier returned in the completion status published by your Amazon
     * Simple Notification Service topic. For example, you can use <code>JobTag</code>
     * to group related jobs and identify them in the completion notification.</p>
     */
    inline StartTextDetectionRequest& WithJobTag(const char* value) { SetJobTag(value); return *this;}


    /**
     * <p>Optional parameters that let you set criteria the text must meet to be
     * included in your response.</p>
     */
    inline const StartTextDetectionFilters& GetFilters() const{ return m_filters; }

    /**
     * <p>Optional parameters that let you set criteria the text must meet to be
     * included in your response.</p>
     */
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }

    /**
     * <p>Optional parameters that let you set criteria the text must meet to be
     * included in your response.</p>
     */
    inline void SetFilters(const StartTextDetectionFilters& value) { m_filtersHasBeenSet = true; m_filters = value; }

    /**
     * <p>Optional parameters that let you set criteria the text must meet to be
     * included in your response.</p>
     */
    inline void SetFilters(StartTextDetectionFilters&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }

    /**
     * <p>Optional parameters that let you set criteria the text must meet to be
     * included in your response.</p>
     */
    inline StartTextDetectionRequest& WithFilters(const StartTextDetectionFilters& value) { SetFilters(value); return *this;}

    /**
     * <p>Optional parameters that let you set criteria the text must meet to be
     * included in your response.</p>
     */
    inline StartTextDetectionRequest& WithFilters(StartTextDetectionFilters&& value) { SetFilters(std::move(value)); return *this;}

  private:

    Video m_video;
    bool m_videoHasBeenSet = false;

    Aws::String m_clientRequestToken;
    bool m_clientRequestTokenHasBeenSet = false;

    NotificationChannel m_notificationChannel;
    bool m_notificationChannelHasBeenSet = false;

    Aws::String m_jobTag;
    bool m_jobTagHasBeenSet = false;

    StartTextDetectionFilters m_filters;
    bool m_filtersHasBeenSet = false;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
