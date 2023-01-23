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
   * <p>Kinesis video stream stream that provides the source streaming video for a
   * Amazon Rekognition Video stream processor. For more information, see
   * CreateStreamProcessor in the Amazon Rekognition Developer Guide.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/KinesisVideoStream">AWS
   * API Reference</a></p>
   */
  class KinesisVideoStream
  {
  public:
    AWS_REKOGNITION_API KinesisVideoStream();
    AWS_REKOGNITION_API KinesisVideoStream(Aws::Utils::Json::JsonView jsonValue);
    AWS_REKOGNITION_API KinesisVideoStream& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_REKOGNITION_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>ARN of the Kinesis video stream stream that streams the source video.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>ARN of the Kinesis video stream stream that streams the source video.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>ARN of the Kinesis video stream stream that streams the source video.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>ARN of the Kinesis video stream stream that streams the source video.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>ARN of the Kinesis video stream stream that streams the source video.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>ARN of the Kinesis video stream stream that streams the source video.</p>
     */
    inline KinesisVideoStream& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>ARN of the Kinesis video stream stream that streams the source video.</p>
     */
    inline KinesisVideoStream& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>ARN of the Kinesis video stream stream that streams the source video.</p>
     */
    inline KinesisVideoStream& WithArn(const char* value) { SetArn(value); return *this;}

  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
