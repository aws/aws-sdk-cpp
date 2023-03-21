/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mgn/Mgn_EXPORTS.h>
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
namespace mgn
{
namespace Model
{

  /**
   * <p>S3 bucket source.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mgn-2020-02-26/S3BucketSource">AWS
   * API Reference</a></p>
   */
  class S3BucketSource
  {
  public:
    AWS_MGN_API S3BucketSource();
    AWS_MGN_API S3BucketSource(Aws::Utils::Json::JsonView jsonValue);
    AWS_MGN_API S3BucketSource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MGN_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>S3 bucket source s3 bucket.</p>
     */
    inline const Aws::String& GetS3Bucket() const{ return m_s3Bucket; }

    /**
     * <p>S3 bucket source s3 bucket.</p>
     */
    inline bool S3BucketHasBeenSet() const { return m_s3BucketHasBeenSet; }

    /**
     * <p>S3 bucket source s3 bucket.</p>
     */
    inline void SetS3Bucket(const Aws::String& value) { m_s3BucketHasBeenSet = true; m_s3Bucket = value; }

    /**
     * <p>S3 bucket source s3 bucket.</p>
     */
    inline void SetS3Bucket(Aws::String&& value) { m_s3BucketHasBeenSet = true; m_s3Bucket = std::move(value); }

    /**
     * <p>S3 bucket source s3 bucket.</p>
     */
    inline void SetS3Bucket(const char* value) { m_s3BucketHasBeenSet = true; m_s3Bucket.assign(value); }

    /**
     * <p>S3 bucket source s3 bucket.</p>
     */
    inline S3BucketSource& WithS3Bucket(const Aws::String& value) { SetS3Bucket(value); return *this;}

    /**
     * <p>S3 bucket source s3 bucket.</p>
     */
    inline S3BucketSource& WithS3Bucket(Aws::String&& value) { SetS3Bucket(std::move(value)); return *this;}

    /**
     * <p>S3 bucket source s3 bucket.</p>
     */
    inline S3BucketSource& WithS3Bucket(const char* value) { SetS3Bucket(value); return *this;}


    /**
     * <p>S3 bucket source s3 bucket owner.</p>
     */
    inline const Aws::String& GetS3BucketOwner() const{ return m_s3BucketOwner; }

    /**
     * <p>S3 bucket source s3 bucket owner.</p>
     */
    inline bool S3BucketOwnerHasBeenSet() const { return m_s3BucketOwnerHasBeenSet; }

    /**
     * <p>S3 bucket source s3 bucket owner.</p>
     */
    inline void SetS3BucketOwner(const Aws::String& value) { m_s3BucketOwnerHasBeenSet = true; m_s3BucketOwner = value; }

    /**
     * <p>S3 bucket source s3 bucket owner.</p>
     */
    inline void SetS3BucketOwner(Aws::String&& value) { m_s3BucketOwnerHasBeenSet = true; m_s3BucketOwner = std::move(value); }

    /**
     * <p>S3 bucket source s3 bucket owner.</p>
     */
    inline void SetS3BucketOwner(const char* value) { m_s3BucketOwnerHasBeenSet = true; m_s3BucketOwner.assign(value); }

    /**
     * <p>S3 bucket source s3 bucket owner.</p>
     */
    inline S3BucketSource& WithS3BucketOwner(const Aws::String& value) { SetS3BucketOwner(value); return *this;}

    /**
     * <p>S3 bucket source s3 bucket owner.</p>
     */
    inline S3BucketSource& WithS3BucketOwner(Aws::String&& value) { SetS3BucketOwner(std::move(value)); return *this;}

    /**
     * <p>S3 bucket source s3 bucket owner.</p>
     */
    inline S3BucketSource& WithS3BucketOwner(const char* value) { SetS3BucketOwner(value); return *this;}


    /**
     * <p>S3 bucket source s3 key.</p>
     */
    inline const Aws::String& GetS3Key() const{ return m_s3Key; }

    /**
     * <p>S3 bucket source s3 key.</p>
     */
    inline bool S3KeyHasBeenSet() const { return m_s3KeyHasBeenSet; }

    /**
     * <p>S3 bucket source s3 key.</p>
     */
    inline void SetS3Key(const Aws::String& value) { m_s3KeyHasBeenSet = true; m_s3Key = value; }

    /**
     * <p>S3 bucket source s3 key.</p>
     */
    inline void SetS3Key(Aws::String&& value) { m_s3KeyHasBeenSet = true; m_s3Key = std::move(value); }

    /**
     * <p>S3 bucket source s3 key.</p>
     */
    inline void SetS3Key(const char* value) { m_s3KeyHasBeenSet = true; m_s3Key.assign(value); }

    /**
     * <p>S3 bucket source s3 key.</p>
     */
    inline S3BucketSource& WithS3Key(const Aws::String& value) { SetS3Key(value); return *this;}

    /**
     * <p>S3 bucket source s3 key.</p>
     */
    inline S3BucketSource& WithS3Key(Aws::String&& value) { SetS3Key(std::move(value)); return *this;}

    /**
     * <p>S3 bucket source s3 key.</p>
     */
    inline S3BucketSource& WithS3Key(const char* value) { SetS3Key(value); return *this;}

  private:

    Aws::String m_s3Bucket;
    bool m_s3BucketHasBeenSet = false;

    Aws::String m_s3BucketOwner;
    bool m_s3BucketOwnerHasBeenSet = false;

    Aws::String m_s3Key;
    bool m_s3KeyHasBeenSet = false;
  };

} // namespace Model
} // namespace mgn
} // namespace Aws
