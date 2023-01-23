/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rekognition/Rekognition_EXPORTS.h>
#include <aws/rekognition/model/S3Object.h>
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
   * <p>Video file stored in an Amazon S3 bucket. Amazon Rekognition video start
   * operations such as <a>StartLabelDetection</a> use <code>Video</code> to specify
   * a video for analysis. The supported file formats are .mp4, .mov and
   * .avi.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/Video">AWS
   * API Reference</a></p>
   */
  class Video
  {
  public:
    AWS_REKOGNITION_API Video();
    AWS_REKOGNITION_API Video(Aws::Utils::Json::JsonView jsonValue);
    AWS_REKOGNITION_API Video& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_REKOGNITION_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon S3 bucket name and file name for the video.</p>
     */
    inline const S3Object& GetS3Object() const{ return m_s3Object; }

    /**
     * <p>The Amazon S3 bucket name and file name for the video.</p>
     */
    inline bool S3ObjectHasBeenSet() const { return m_s3ObjectHasBeenSet; }

    /**
     * <p>The Amazon S3 bucket name and file name for the video.</p>
     */
    inline void SetS3Object(const S3Object& value) { m_s3ObjectHasBeenSet = true; m_s3Object = value; }

    /**
     * <p>The Amazon S3 bucket name and file name for the video.</p>
     */
    inline void SetS3Object(S3Object&& value) { m_s3ObjectHasBeenSet = true; m_s3Object = std::move(value); }

    /**
     * <p>The Amazon S3 bucket name and file name for the video.</p>
     */
    inline Video& WithS3Object(const S3Object& value) { SetS3Object(value); return *this;}

    /**
     * <p>The Amazon S3 bucket name and file name for the video.</p>
     */
    inline Video& WithS3Object(S3Object&& value) { SetS3Object(std::move(value)); return *this;}

  private:

    S3Object m_s3Object;
    bool m_s3ObjectHasBeenSet = false;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
