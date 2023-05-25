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
   * <p> The Amazon S3 bucket location to which Amazon Rekognition publishes the
   * detailed inference results of a video analysis operation. These results include
   * the name of the stream processor resource, the session ID of the stream
   * processing session, and labeled timestamps and bounding boxes for detected
   * labels. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/S3Destination">AWS
   * API Reference</a></p>
   */
  class S3Destination
  {
  public:
    AWS_REKOGNITION_API S3Destination();
    AWS_REKOGNITION_API S3Destination(Aws::Utils::Json::JsonView jsonValue);
    AWS_REKOGNITION_API S3Destination& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_REKOGNITION_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The name of the Amazon S3 bucket you want to associate with the streaming
     * video project. You must be the owner of the Amazon S3 bucket. </p>
     */
    inline const Aws::String& GetBucket() const{ return m_bucket; }

    /**
     * <p> The name of the Amazon S3 bucket you want to associate with the streaming
     * video project. You must be the owner of the Amazon S3 bucket. </p>
     */
    inline bool BucketHasBeenSet() const { return m_bucketHasBeenSet; }

    /**
     * <p> The name of the Amazon S3 bucket you want to associate with the streaming
     * video project. You must be the owner of the Amazon S3 bucket. </p>
     */
    inline void SetBucket(const Aws::String& value) { m_bucketHasBeenSet = true; m_bucket = value; }

    /**
     * <p> The name of the Amazon S3 bucket you want to associate with the streaming
     * video project. You must be the owner of the Amazon S3 bucket. </p>
     */
    inline void SetBucket(Aws::String&& value) { m_bucketHasBeenSet = true; m_bucket = std::move(value); }

    /**
     * <p> The name of the Amazon S3 bucket you want to associate with the streaming
     * video project. You must be the owner of the Amazon S3 bucket. </p>
     */
    inline void SetBucket(const char* value) { m_bucketHasBeenSet = true; m_bucket.assign(value); }

    /**
     * <p> The name of the Amazon S3 bucket you want to associate with the streaming
     * video project. You must be the owner of the Amazon S3 bucket. </p>
     */
    inline S3Destination& WithBucket(const Aws::String& value) { SetBucket(value); return *this;}

    /**
     * <p> The name of the Amazon S3 bucket you want to associate with the streaming
     * video project. You must be the owner of the Amazon S3 bucket. </p>
     */
    inline S3Destination& WithBucket(Aws::String&& value) { SetBucket(std::move(value)); return *this;}

    /**
     * <p> The name of the Amazon S3 bucket you want to associate with the streaming
     * video project. You must be the owner of the Amazon S3 bucket. </p>
     */
    inline S3Destination& WithBucket(const char* value) { SetBucket(value); return *this;}


    /**
     * <p> The prefix value of the location within the bucket that you want the
     * information to be published to. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/using-prefixes.html">Using
     * prefixes</a>. </p>
     */
    inline const Aws::String& GetKeyPrefix() const{ return m_keyPrefix; }

    /**
     * <p> The prefix value of the location within the bucket that you want the
     * information to be published to. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/using-prefixes.html">Using
     * prefixes</a>. </p>
     */
    inline bool KeyPrefixHasBeenSet() const { return m_keyPrefixHasBeenSet; }

    /**
     * <p> The prefix value of the location within the bucket that you want the
     * information to be published to. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/using-prefixes.html">Using
     * prefixes</a>. </p>
     */
    inline void SetKeyPrefix(const Aws::String& value) { m_keyPrefixHasBeenSet = true; m_keyPrefix = value; }

    /**
     * <p> The prefix value of the location within the bucket that you want the
     * information to be published to. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/using-prefixes.html">Using
     * prefixes</a>. </p>
     */
    inline void SetKeyPrefix(Aws::String&& value) { m_keyPrefixHasBeenSet = true; m_keyPrefix = std::move(value); }

    /**
     * <p> The prefix value of the location within the bucket that you want the
     * information to be published to. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/using-prefixes.html">Using
     * prefixes</a>. </p>
     */
    inline void SetKeyPrefix(const char* value) { m_keyPrefixHasBeenSet = true; m_keyPrefix.assign(value); }

    /**
     * <p> The prefix value of the location within the bucket that you want the
     * information to be published to. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/using-prefixes.html">Using
     * prefixes</a>. </p>
     */
    inline S3Destination& WithKeyPrefix(const Aws::String& value) { SetKeyPrefix(value); return *this;}

    /**
     * <p> The prefix value of the location within the bucket that you want the
     * information to be published to. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/using-prefixes.html">Using
     * prefixes</a>. </p>
     */
    inline S3Destination& WithKeyPrefix(Aws::String&& value) { SetKeyPrefix(std::move(value)); return *this;}

    /**
     * <p> The prefix value of the location within the bucket that you want the
     * information to be published to. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/using-prefixes.html">Using
     * prefixes</a>. </p>
     */
    inline S3Destination& WithKeyPrefix(const char* value) { SetKeyPrefix(value); return *this;}

  private:

    Aws::String m_bucket;
    bool m_bucketHasBeenSet = false;

    Aws::String m_keyPrefix;
    bool m_keyPrefixHasBeenSet = false;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
