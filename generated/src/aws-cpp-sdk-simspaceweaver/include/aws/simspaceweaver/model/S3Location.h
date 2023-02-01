/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/simspaceweaver/SimSpaceWeaver_EXPORTS.h>
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
namespace SimSpaceWeaver
{
namespace Model
{

  /**
   * <p>A location in Amazon Simple Storage Service (Amazon S3) where SimSpace Weaver
   * stores simulation data, such as your app zip files and schema file. For more
   * information about Amazon S3, see the <a
   * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/Welcome.html">
   * <i>Amazon Simple Storage Service User Guide</i> </a>.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/simspaceweaver-2022-10-28/S3Location">AWS
   * API Reference</a></p>
   */
  class S3Location
  {
  public:
    AWS_SIMSPACEWEAVER_API S3Location();
    AWS_SIMSPACEWEAVER_API S3Location(Aws::Utils::Json::JsonView jsonValue);
    AWS_SIMSPACEWEAVER_API S3Location& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SIMSPACEWEAVER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of an Amazon S3 bucket. For more information about buckets, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/creating-buckets-s3.html">Creating,
     * configuring, and working with Amazon S3 buckets</a> in the <i>Amazon Simple
     * Storage Service User Guide</i>.</p>
     */
    inline const Aws::String& GetBucketName() const{ return m_bucketName; }

    /**
     * <p>The name of an Amazon S3 bucket. For more information about buckets, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/creating-buckets-s3.html">Creating,
     * configuring, and working with Amazon S3 buckets</a> in the <i>Amazon Simple
     * Storage Service User Guide</i>.</p>
     */
    inline bool BucketNameHasBeenSet() const { return m_bucketNameHasBeenSet; }

    /**
     * <p>The name of an Amazon S3 bucket. For more information about buckets, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/creating-buckets-s3.html">Creating,
     * configuring, and working with Amazon S3 buckets</a> in the <i>Amazon Simple
     * Storage Service User Guide</i>.</p>
     */
    inline void SetBucketName(const Aws::String& value) { m_bucketNameHasBeenSet = true; m_bucketName = value; }

    /**
     * <p>The name of an Amazon S3 bucket. For more information about buckets, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/creating-buckets-s3.html">Creating,
     * configuring, and working with Amazon S3 buckets</a> in the <i>Amazon Simple
     * Storage Service User Guide</i>.</p>
     */
    inline void SetBucketName(Aws::String&& value) { m_bucketNameHasBeenSet = true; m_bucketName = std::move(value); }

    /**
     * <p>The name of an Amazon S3 bucket. For more information about buckets, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/creating-buckets-s3.html">Creating,
     * configuring, and working with Amazon S3 buckets</a> in the <i>Amazon Simple
     * Storage Service User Guide</i>.</p>
     */
    inline void SetBucketName(const char* value) { m_bucketNameHasBeenSet = true; m_bucketName.assign(value); }

    /**
     * <p>The name of an Amazon S3 bucket. For more information about buckets, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/creating-buckets-s3.html">Creating,
     * configuring, and working with Amazon S3 buckets</a> in the <i>Amazon Simple
     * Storage Service User Guide</i>.</p>
     */
    inline S3Location& WithBucketName(const Aws::String& value) { SetBucketName(value); return *this;}

    /**
     * <p>The name of an Amazon S3 bucket. For more information about buckets, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/creating-buckets-s3.html">Creating,
     * configuring, and working with Amazon S3 buckets</a> in the <i>Amazon Simple
     * Storage Service User Guide</i>.</p>
     */
    inline S3Location& WithBucketName(Aws::String&& value) { SetBucketName(std::move(value)); return *this;}

    /**
     * <p>The name of an Amazon S3 bucket. For more information about buckets, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/creating-buckets-s3.html">Creating,
     * configuring, and working with Amazon S3 buckets</a> in the <i>Amazon Simple
     * Storage Service User Guide</i>.</p>
     */
    inline S3Location& WithBucketName(const char* value) { SetBucketName(value); return *this;}


    /**
     * <p>The key name of an object in Amazon S3. For more information about Amazon S3
     * objects and object keys, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/uploading-downloading-objects.html">Uploading,
     * downloading, and working with objects in Amazon S3</a> in the <i>Amazon Simple
     * Storage Service User Guide</i>.</p>
     */
    inline const Aws::String& GetObjectKey() const{ return m_objectKey; }

    /**
     * <p>The key name of an object in Amazon S3. For more information about Amazon S3
     * objects and object keys, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/uploading-downloading-objects.html">Uploading,
     * downloading, and working with objects in Amazon S3</a> in the <i>Amazon Simple
     * Storage Service User Guide</i>.</p>
     */
    inline bool ObjectKeyHasBeenSet() const { return m_objectKeyHasBeenSet; }

    /**
     * <p>The key name of an object in Amazon S3. For more information about Amazon S3
     * objects and object keys, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/uploading-downloading-objects.html">Uploading,
     * downloading, and working with objects in Amazon S3</a> in the <i>Amazon Simple
     * Storage Service User Guide</i>.</p>
     */
    inline void SetObjectKey(const Aws::String& value) { m_objectKeyHasBeenSet = true; m_objectKey = value; }

    /**
     * <p>The key name of an object in Amazon S3. For more information about Amazon S3
     * objects and object keys, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/uploading-downloading-objects.html">Uploading,
     * downloading, and working with objects in Amazon S3</a> in the <i>Amazon Simple
     * Storage Service User Guide</i>.</p>
     */
    inline void SetObjectKey(Aws::String&& value) { m_objectKeyHasBeenSet = true; m_objectKey = std::move(value); }

    /**
     * <p>The key name of an object in Amazon S3. For more information about Amazon S3
     * objects and object keys, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/uploading-downloading-objects.html">Uploading,
     * downloading, and working with objects in Amazon S3</a> in the <i>Amazon Simple
     * Storage Service User Guide</i>.</p>
     */
    inline void SetObjectKey(const char* value) { m_objectKeyHasBeenSet = true; m_objectKey.assign(value); }

    /**
     * <p>The key name of an object in Amazon S3. For more information about Amazon S3
     * objects and object keys, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/uploading-downloading-objects.html">Uploading,
     * downloading, and working with objects in Amazon S3</a> in the <i>Amazon Simple
     * Storage Service User Guide</i>.</p>
     */
    inline S3Location& WithObjectKey(const Aws::String& value) { SetObjectKey(value); return *this;}

    /**
     * <p>The key name of an object in Amazon S3. For more information about Amazon S3
     * objects and object keys, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/uploading-downloading-objects.html">Uploading,
     * downloading, and working with objects in Amazon S3</a> in the <i>Amazon Simple
     * Storage Service User Guide</i>.</p>
     */
    inline S3Location& WithObjectKey(Aws::String&& value) { SetObjectKey(std::move(value)); return *this;}

    /**
     * <p>The key name of an object in Amazon S3. For more information about Amazon S3
     * objects and object keys, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/uploading-downloading-objects.html">Uploading,
     * downloading, and working with objects in Amazon S3</a> in the <i>Amazon Simple
     * Storage Service User Guide</i>.</p>
     */
    inline S3Location& WithObjectKey(const char* value) { SetObjectKey(value); return *this;}

  private:

    Aws::String m_bucketName;
    bool m_bucketNameHasBeenSet = false;

    Aws::String m_objectKey;
    bool m_objectKeyHasBeenSet = false;
  };

} // namespace Model
} // namespace SimSpaceWeaver
} // namespace Aws
