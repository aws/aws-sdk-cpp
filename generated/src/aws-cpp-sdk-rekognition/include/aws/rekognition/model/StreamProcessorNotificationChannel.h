/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rekognition/Rekognition_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace Rekognition
{
namespace Model
{

  /**
   * <p>The Amazon Simple Notification Service topic to which Amazon Rekognition
   * publishes the object detection results and completion status of a video analysis
   * operation.</p> <p>Amazon Rekognition publishes a notification the first time an
   * object of interest or a person is detected in the video stream. For example, if
   * Amazon Rekognition detects a person at second 2, a pet at second 4, and a person
   * again at second 5, Amazon Rekognition sends 2 object class detected
   * notifications, one for a person at second 2 and one for a pet at second 4.</p>
   * <p>Amazon Rekognition also publishes an an end-of-session notification with a
   * summary when the stream processing session is complete.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/StreamProcessorNotificationChannel">AWS
   * API Reference</a></p>
   */
  class StreamProcessorNotificationChannel
  {
  public:
    AWS_REKOGNITION_API StreamProcessorNotificationChannel();
    AWS_REKOGNITION_API StreamProcessorNotificationChannel(Aws::Utils::Json::JsonView jsonValue);
    AWS_REKOGNITION_API StreamProcessorNotificationChannel& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_REKOGNITION_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The Amazon Resource Number (ARN) of the Amazon Amazon Simple Notification
     * Service topic to which Amazon Rekognition posts the completion status. </p>
     */
    inline const Aws::String& GetSNSTopicArn() const{ return m_sNSTopicArn; }

    /**
     * <p> The Amazon Resource Number (ARN) of the Amazon Amazon Simple Notification
     * Service topic to which Amazon Rekognition posts the completion status. </p>
     */
    inline bool SNSTopicArnHasBeenSet() const { return m_sNSTopicArnHasBeenSet; }

    /**
     * <p> The Amazon Resource Number (ARN) of the Amazon Amazon Simple Notification
     * Service topic to which Amazon Rekognition posts the completion status. </p>
     */
    inline void SetSNSTopicArn(const Aws::String& value) { m_sNSTopicArnHasBeenSet = true; m_sNSTopicArn = value; }

    /**
     * <p> The Amazon Resource Number (ARN) of the Amazon Amazon Simple Notification
     * Service topic to which Amazon Rekognition posts the completion status. </p>
     */
    inline void SetSNSTopicArn(Aws::String&& value) { m_sNSTopicArnHasBeenSet = true; m_sNSTopicArn = std::move(value); }

    /**
     * <p> The Amazon Resource Number (ARN) of the Amazon Amazon Simple Notification
     * Service topic to which Amazon Rekognition posts the completion status. </p>
     */
    inline void SetSNSTopicArn(const char* value) { m_sNSTopicArnHasBeenSet = true; m_sNSTopicArn.assign(value); }

    /**
     * <p> The Amazon Resource Number (ARN) of the Amazon Amazon Simple Notification
     * Service topic to which Amazon Rekognition posts the completion status. </p>
     */
    inline StreamProcessorNotificationChannel& WithSNSTopicArn(const Aws::String& value) { SetSNSTopicArn(value); return *this;}

    /**
     * <p> The Amazon Resource Number (ARN) of the Amazon Amazon Simple Notification
     * Service topic to which Amazon Rekognition posts the completion status. </p>
     */
    inline StreamProcessorNotificationChannel& WithSNSTopicArn(Aws::String&& value) { SetSNSTopicArn(std::move(value)); return *this;}

    /**
     * <p> The Amazon Resource Number (ARN) of the Amazon Amazon Simple Notification
     * Service topic to which Amazon Rekognition posts the completion status. </p>
     */
    inline StreamProcessorNotificationChannel& WithSNSTopicArn(const char* value) { SetSNSTopicArn(value); return *this;}

  private:

    Aws::String m_sNSTopicArn;
    bool m_sNSTopicArnHasBeenSet = false;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
