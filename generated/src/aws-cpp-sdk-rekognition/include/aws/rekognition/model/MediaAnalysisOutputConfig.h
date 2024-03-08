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
   * <p>Output configuration provided in the job creation request.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/MediaAnalysisOutputConfig">AWS
   * API Reference</a></p>
   */
  class MediaAnalysisOutputConfig
  {
  public:
    AWS_REKOGNITION_API MediaAnalysisOutputConfig();
    AWS_REKOGNITION_API MediaAnalysisOutputConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_REKOGNITION_API MediaAnalysisOutputConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_REKOGNITION_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Specifies the Amazon S3 bucket to contain the output of the media analysis
     * job.</p>
     */
    inline const Aws::String& GetS3Bucket() const{ return m_s3Bucket; }

    /**
     * <p>Specifies the Amazon S3 bucket to contain the output of the media analysis
     * job.</p>
     */
    inline bool S3BucketHasBeenSet() const { return m_s3BucketHasBeenSet; }

    /**
     * <p>Specifies the Amazon S3 bucket to contain the output of the media analysis
     * job.</p>
     */
    inline void SetS3Bucket(const Aws::String& value) { m_s3BucketHasBeenSet = true; m_s3Bucket = value; }

    /**
     * <p>Specifies the Amazon S3 bucket to contain the output of the media analysis
     * job.</p>
     */
    inline void SetS3Bucket(Aws::String&& value) { m_s3BucketHasBeenSet = true; m_s3Bucket = std::move(value); }

    /**
     * <p>Specifies the Amazon S3 bucket to contain the output of the media analysis
     * job.</p>
     */
    inline void SetS3Bucket(const char* value) { m_s3BucketHasBeenSet = true; m_s3Bucket.assign(value); }

    /**
     * <p>Specifies the Amazon S3 bucket to contain the output of the media analysis
     * job.</p>
     */
    inline MediaAnalysisOutputConfig& WithS3Bucket(const Aws::String& value) { SetS3Bucket(value); return *this;}

    /**
     * <p>Specifies the Amazon S3 bucket to contain the output of the media analysis
     * job.</p>
     */
    inline MediaAnalysisOutputConfig& WithS3Bucket(Aws::String&& value) { SetS3Bucket(std::move(value)); return *this;}

    /**
     * <p>Specifies the Amazon S3 bucket to contain the output of the media analysis
     * job.</p>
     */
    inline MediaAnalysisOutputConfig& WithS3Bucket(const char* value) { SetS3Bucket(value); return *this;}


    /**
     * <p>Specifies the Amazon S3 key prefix that comes after the name of the bucket
     * you have designated for storage.</p>
     */
    inline const Aws::String& GetS3KeyPrefix() const{ return m_s3KeyPrefix; }

    /**
     * <p>Specifies the Amazon S3 key prefix that comes after the name of the bucket
     * you have designated for storage.</p>
     */
    inline bool S3KeyPrefixHasBeenSet() const { return m_s3KeyPrefixHasBeenSet; }

    /**
     * <p>Specifies the Amazon S3 key prefix that comes after the name of the bucket
     * you have designated for storage.</p>
     */
    inline void SetS3KeyPrefix(const Aws::String& value) { m_s3KeyPrefixHasBeenSet = true; m_s3KeyPrefix = value; }

    /**
     * <p>Specifies the Amazon S3 key prefix that comes after the name of the bucket
     * you have designated for storage.</p>
     */
    inline void SetS3KeyPrefix(Aws::String&& value) { m_s3KeyPrefixHasBeenSet = true; m_s3KeyPrefix = std::move(value); }

    /**
     * <p>Specifies the Amazon S3 key prefix that comes after the name of the bucket
     * you have designated for storage.</p>
     */
    inline void SetS3KeyPrefix(const char* value) { m_s3KeyPrefixHasBeenSet = true; m_s3KeyPrefix.assign(value); }

    /**
     * <p>Specifies the Amazon S3 key prefix that comes after the name of the bucket
     * you have designated for storage.</p>
     */
    inline MediaAnalysisOutputConfig& WithS3KeyPrefix(const Aws::String& value) { SetS3KeyPrefix(value); return *this;}

    /**
     * <p>Specifies the Amazon S3 key prefix that comes after the name of the bucket
     * you have designated for storage.</p>
     */
    inline MediaAnalysisOutputConfig& WithS3KeyPrefix(Aws::String&& value) { SetS3KeyPrefix(std::move(value)); return *this;}

    /**
     * <p>Specifies the Amazon S3 key prefix that comes after the name of the bucket
     * you have designated for storage.</p>
     */
    inline MediaAnalysisOutputConfig& WithS3KeyPrefix(const char* value) { SetS3KeyPrefix(value); return *this;}

  private:

    Aws::String m_s3Bucket;
    bool m_s3BucketHasBeenSet = false;

    Aws::String m_s3KeyPrefix;
    bool m_s3KeyPrefixHasBeenSet = false;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
