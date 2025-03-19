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
    AWS_REKOGNITION_API StreamProcessorOutput() = default;
    AWS_REKOGNITION_API StreamProcessorOutput(Aws::Utils::Json::JsonView jsonValue);
    AWS_REKOGNITION_API StreamProcessorOutput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_REKOGNITION_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Kinesis Data Streams stream to which the Amazon Rekognition stream
     * processor streams the analysis results.</p>
     */
    inline const KinesisDataStream& GetKinesisDataStream() const { return m_kinesisDataStream; }
    inline bool KinesisDataStreamHasBeenSet() const { return m_kinesisDataStreamHasBeenSet; }
    template<typename KinesisDataStreamT = KinesisDataStream>
    void SetKinesisDataStream(KinesisDataStreamT&& value) { m_kinesisDataStreamHasBeenSet = true; m_kinesisDataStream = std::forward<KinesisDataStreamT>(value); }
    template<typename KinesisDataStreamT = KinesisDataStream>
    StreamProcessorOutput& WithKinesisDataStream(KinesisDataStreamT&& value) { SetKinesisDataStream(std::forward<KinesisDataStreamT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The Amazon S3 bucket location to which Amazon Rekognition publishes the
     * detailed inference results of a video analysis operation. </p>
     */
    inline const S3Destination& GetS3Destination() const { return m_s3Destination; }
    inline bool S3DestinationHasBeenSet() const { return m_s3DestinationHasBeenSet; }
    template<typename S3DestinationT = S3Destination>
    void SetS3Destination(S3DestinationT&& value) { m_s3DestinationHasBeenSet = true; m_s3Destination = std::forward<S3DestinationT>(value); }
    template<typename S3DestinationT = S3Destination>
    StreamProcessorOutput& WithS3Destination(S3DestinationT&& value) { SetS3Destination(std::forward<S3DestinationT>(value)); return *this;}
    ///@}
  private:

    KinesisDataStream m_kinesisDataStream;
    bool m_kinesisDataStreamHasBeenSet = false;

    S3Destination m_s3Destination;
    bool m_s3DestinationHasBeenSet = false;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
