/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rekognition/Rekognition_EXPORTS.h>
#include <aws/rekognition/model/KinesisDataStream.h>
#include <aws/rekognition/model/S3Destination.h>
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
   * <p>Information about the Amazon Kinesis Data Streams stream to which a Amazon
   * Rekognition Video stream processor streams the results of a video analysis. For
   * more information, see CreateStreamProcessor in the Amazon Rekognition Developer
   * Guide.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/StreamProcessorOutput">AWS
   * API Reference</a></p>
   */
  class StreamProcessorOutput
  {
  public:
    AWS_REKOGNITION_API StreamProcessorOutput();
    AWS_REKOGNITION_API StreamProcessorOutput(Aws::Utils::Json::JsonView jsonValue);
    AWS_REKOGNITION_API StreamProcessorOutput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_REKOGNITION_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Kinesis Data Streams stream to which the Amazon Rekognition stream
     * processor streams the analysis results.</p>
     */
    inline const KinesisDataStream& GetKinesisDataStream() const{ return m_kinesisDataStream; }

    /**
     * <p>The Amazon Kinesis Data Streams stream to which the Amazon Rekognition stream
     * processor streams the analysis results.</p>
     */
    inline bool KinesisDataStreamHasBeenSet() const { return m_kinesisDataStreamHasBeenSet; }

    /**
     * <p>The Amazon Kinesis Data Streams stream to which the Amazon Rekognition stream
     * processor streams the analysis results.</p>
     */
    inline void SetKinesisDataStream(const KinesisDataStream& value) { m_kinesisDataStreamHasBeenSet = true; m_kinesisDataStream = value; }

    /**
     * <p>The Amazon Kinesis Data Streams stream to which the Amazon Rekognition stream
     * processor streams the analysis results.</p>
     */
    inline void SetKinesisDataStream(KinesisDataStream&& value) { m_kinesisDataStreamHasBeenSet = true; m_kinesisDataStream = std::move(value); }

    /**
     * <p>The Amazon Kinesis Data Streams stream to which the Amazon Rekognition stream
     * processor streams the analysis results.</p>
     */
    inline StreamProcessorOutput& WithKinesisDataStream(const KinesisDataStream& value) { SetKinesisDataStream(value); return *this;}

    /**
     * <p>The Amazon Kinesis Data Streams stream to which the Amazon Rekognition stream
     * processor streams the analysis results.</p>
     */
    inline StreamProcessorOutput& WithKinesisDataStream(KinesisDataStream&& value) { SetKinesisDataStream(std::move(value)); return *this;}


    /**
     * <p> The Amazon S3 bucket location to which Amazon Rekognition publishes the
     * detailed inference results of a video analysis operation. </p>
     */
    inline const S3Destination& GetS3Destination() const{ return m_s3Destination; }

    /**
     * <p> The Amazon S3 bucket location to which Amazon Rekognition publishes the
     * detailed inference results of a video analysis operation. </p>
     */
    inline bool S3DestinationHasBeenSet() const { return m_s3DestinationHasBeenSet; }

    /**
     * <p> The Amazon S3 bucket location to which Amazon Rekognition publishes the
     * detailed inference results of a video analysis operation. </p>
     */
    inline void SetS3Destination(const S3Destination& value) { m_s3DestinationHasBeenSet = true; m_s3Destination = value; }

    /**
     * <p> The Amazon S3 bucket location to which Amazon Rekognition publishes the
     * detailed inference results of a video analysis operation. </p>
     */
    inline void SetS3Destination(S3Destination&& value) { m_s3DestinationHasBeenSet = true; m_s3Destination = std::move(value); }

    /**
     * <p> The Amazon S3 bucket location to which Amazon Rekognition publishes the
     * detailed inference results of a video analysis operation. </p>
     */
    inline StreamProcessorOutput& WithS3Destination(const S3Destination& value) { SetS3Destination(value); return *this;}

    /**
     * <p> The Amazon S3 bucket location to which Amazon Rekognition publishes the
     * detailed inference results of a video analysis operation. </p>
     */
    inline StreamProcessorOutput& WithS3Destination(S3Destination&& value) { SetS3Destination(std::move(value)); return *this;}

  private:

    KinesisDataStream m_kinesisDataStream;
    bool m_kinesisDataStreamHasBeenSet = false;

    S3Destination m_s3Destination;
    bool m_s3DestinationHasBeenSet = false;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
