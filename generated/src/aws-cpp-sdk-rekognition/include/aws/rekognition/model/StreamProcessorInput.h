/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rekognition/Rekognition_EXPORTS.h>
#include <aws/rekognition/model/KinesisVideoStream.h>
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
   * <p>Information about the source streaming video. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/StreamProcessorInput">AWS
   * API Reference</a></p>
   */
  class StreamProcessorInput
  {
  public:
    AWS_REKOGNITION_API StreamProcessorInput();
    AWS_REKOGNITION_API StreamProcessorInput(Aws::Utils::Json::JsonView jsonValue);
    AWS_REKOGNITION_API StreamProcessorInput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_REKOGNITION_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Kinesis video stream input stream for the source streaming video.</p>
     */
    inline const KinesisVideoStream& GetKinesisVideoStream() const{ return m_kinesisVideoStream; }

    /**
     * <p>The Kinesis video stream input stream for the source streaming video.</p>
     */
    inline bool KinesisVideoStreamHasBeenSet() const { return m_kinesisVideoStreamHasBeenSet; }

    /**
     * <p>The Kinesis video stream input stream for the source streaming video.</p>
     */
    inline void SetKinesisVideoStream(const KinesisVideoStream& value) { m_kinesisVideoStreamHasBeenSet = true; m_kinesisVideoStream = value; }

    /**
     * <p>The Kinesis video stream input stream for the source streaming video.</p>
     */
    inline void SetKinesisVideoStream(KinesisVideoStream&& value) { m_kinesisVideoStreamHasBeenSet = true; m_kinesisVideoStream = std::move(value); }

    /**
     * <p>The Kinesis video stream input stream for the source streaming video.</p>
     */
    inline StreamProcessorInput& WithKinesisVideoStream(const KinesisVideoStream& value) { SetKinesisVideoStream(value); return *this;}

    /**
     * <p>The Kinesis video stream input stream for the source streaming video.</p>
     */
    inline StreamProcessorInput& WithKinesisVideoStream(KinesisVideoStream&& value) { SetKinesisVideoStream(std::move(value)); return *this;}

  private:

    KinesisVideoStream m_kinesisVideoStream;
    bool m_kinesisVideoStreamHasBeenSet = false;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
