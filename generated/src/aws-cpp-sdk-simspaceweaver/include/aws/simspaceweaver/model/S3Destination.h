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
   * <p>An Amazon S3 bucket and optional folder (object key prefix) where SimSpace
   * Weaver creates a file.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/simspaceweaver-2022-10-28/S3Destination">AWS
   * API Reference</a></p>
   */
  class S3Destination
  {
  public:
    AWS_SIMSPACEWEAVER_API S3Destination();
    AWS_SIMSPACEWEAVER_API S3Destination(Aws::Utils::Json::JsonView jsonValue);
    AWS_SIMSPACEWEAVER_API S3Destination& operator=(Aws::Utils::Json::JsonView jsonValue);
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
    inline S3Destination& WithBucketName(const Aws::String& value) { SetBucketName(value); return *this;}

    /**
     * <p>The name of an Amazon S3 bucket. For more information about buckets, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/creating-buckets-s3.html">Creating,
     * configuring, and working with Amazon S3 buckets</a> in the <i>Amazon Simple
     * Storage Service User Guide</i>.</p>
     */
    inline S3Destination& WithBucketName(Aws::String&& value) { SetBucketName(std::move(value)); return *this;}

    /**
     * <p>The name of an Amazon S3 bucket. For more information about buckets, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/creating-buckets-s3.html">Creating,
     * configuring, and working with Amazon S3 buckets</a> in the <i>Amazon Simple
     * Storage Service User Guide</i>.</p>
     */
    inline S3Destination& WithBucketName(const char* value) { SetBucketName(value); return *this;}


    /**
     * <p>A string prefix for an Amazon S3 object key. It's usually a folder name. For
     * more information about folders in Amazon S3, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/using-folders.html">Organizing
     * objects in the Amazon S3 console using folders</a> in the <i>Amazon Simple
     * Storage Service User Guide</i>.</p>
     */
    inline const Aws::String& GetObjectKeyPrefix() const{ return m_objectKeyPrefix; }

    /**
     * <p>A string prefix for an Amazon S3 object key. It's usually a folder name. For
     * more information about folders in Amazon S3, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/using-folders.html">Organizing
     * objects in the Amazon S3 console using folders</a> in the <i>Amazon Simple
     * Storage Service User Guide</i>.</p>
     */
    inline bool ObjectKeyPrefixHasBeenSet() const { return m_objectKeyPrefixHasBeenSet; }

    /**
     * <p>A string prefix for an Amazon S3 object key. It's usually a folder name. For
     * more information about folders in Amazon S3, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/using-folders.html">Organizing
     * objects in the Amazon S3 console using folders</a> in the <i>Amazon Simple
     * Storage Service User Guide</i>.</p>
     */
    inline void SetObjectKeyPrefix(const Aws::String& value) { m_objectKeyPrefixHasBeenSet = true; m_objectKeyPrefix = value; }

    /**
     * <p>A string prefix for an Amazon S3 object key. It's usually a folder name. For
     * more information about folders in Amazon S3, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/using-folders.html">Organizing
     * objects in the Amazon S3 console using folders</a> in the <i>Amazon Simple
     * Storage Service User Guide</i>.</p>
     */
    inline void SetObjectKeyPrefix(Aws::String&& value) { m_objectKeyPrefixHasBeenSet = true; m_objectKeyPrefix = std::move(value); }

    /**
     * <p>A string prefix for an Amazon S3 object key. It's usually a folder name. For
     * more information about folders in Amazon S3, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/using-folders.html">Organizing
     * objects in the Amazon S3 console using folders</a> in the <i>Amazon Simple
     * Storage Service User Guide</i>.</p>
     */
    inline void SetObjectKeyPrefix(const char* value) { m_objectKeyPrefixHasBeenSet = true; m_objectKeyPrefix.assign(value); }

    /**
     * <p>A string prefix for an Amazon S3 object key. It's usually a folder name. For
     * more information about folders in Amazon S3, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/using-folders.html">Organizing
     * objects in the Amazon S3 console using folders</a> in the <i>Amazon Simple
     * Storage Service User Guide</i>.</p>
     */
    inline S3Destination& WithObjectKeyPrefix(const Aws::String& value) { SetObjectKeyPrefix(value); return *this;}

    /**
     * <p>A string prefix for an Amazon S3 object key. It's usually a folder name. For
     * more information about folders in Amazon S3, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/using-folders.html">Organizing
     * objects in the Amazon S3 console using folders</a> in the <i>Amazon Simple
     * Storage Service User Guide</i>.</p>
     */
    inline S3Destination& WithObjectKeyPrefix(Aws::String&& value) { SetObjectKeyPrefix(std::move(value)); return *this;}

    /**
     * <p>A string prefix for an Amazon S3 object key. It's usually a folder name. For
     * more information about folders in Amazon S3, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/using-folders.html">Organizing
     * objects in the Amazon S3 console using folders</a> in the <i>Amazon Simple
     * Storage Service User Guide</i>.</p>
     */
    inline S3Destination& WithObjectKeyPrefix(const char* value) { SetObjectKeyPrefix(value); return *this;}

  private:

    Aws::String m_bucketName;
    bool m_bucketNameHasBeenSet = false;

    Aws::String m_objectKeyPrefix;
    bool m_objectKeyPrefixHasBeenSet = false;
  };

} // namespace Model
} // namespace SimSpaceWeaver
} // namespace Aws
