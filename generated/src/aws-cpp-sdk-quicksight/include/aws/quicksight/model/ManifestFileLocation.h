/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
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
namespace QuickSight
{
namespace Model
{

  /**
   * <p>Amazon S3 manifest file location.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/ManifestFileLocation">AWS
   * API Reference</a></p>
   */
  class ManifestFileLocation
  {
  public:
    AWS_QUICKSIGHT_API ManifestFileLocation();
    AWS_QUICKSIGHT_API ManifestFileLocation(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API ManifestFileLocation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Amazon S3 bucket.</p>
     */
    inline const Aws::String& GetBucket() const{ return m_bucket; }

    /**
     * <p>Amazon S3 bucket.</p>
     */
    inline bool BucketHasBeenSet() const { return m_bucketHasBeenSet; }

    /**
     * <p>Amazon S3 bucket.</p>
     */
    inline void SetBucket(const Aws::String& value) { m_bucketHasBeenSet = true; m_bucket = value; }

    /**
     * <p>Amazon S3 bucket.</p>
     */
    inline void SetBucket(Aws::String&& value) { m_bucketHasBeenSet = true; m_bucket = std::move(value); }

    /**
     * <p>Amazon S3 bucket.</p>
     */
    inline void SetBucket(const char* value) { m_bucketHasBeenSet = true; m_bucket.assign(value); }

    /**
     * <p>Amazon S3 bucket.</p>
     */
    inline ManifestFileLocation& WithBucket(const Aws::String& value) { SetBucket(value); return *this;}

    /**
     * <p>Amazon S3 bucket.</p>
     */
    inline ManifestFileLocation& WithBucket(Aws::String&& value) { SetBucket(std::move(value)); return *this;}

    /**
     * <p>Amazon S3 bucket.</p>
     */
    inline ManifestFileLocation& WithBucket(const char* value) { SetBucket(value); return *this;}


    /**
     * <p>Amazon S3 key that identifies an object.</p>
     */
    inline const Aws::String& GetKey() const{ return m_key; }

    /**
     * <p>Amazon S3 key that identifies an object.</p>
     */
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }

    /**
     * <p>Amazon S3 key that identifies an object.</p>
     */
    inline void SetKey(const Aws::String& value) { m_keyHasBeenSet = true; m_key = value; }

    /**
     * <p>Amazon S3 key that identifies an object.</p>
     */
    inline void SetKey(Aws::String&& value) { m_keyHasBeenSet = true; m_key = std::move(value); }

    /**
     * <p>Amazon S3 key that identifies an object.</p>
     */
    inline void SetKey(const char* value) { m_keyHasBeenSet = true; m_key.assign(value); }

    /**
     * <p>Amazon S3 key that identifies an object.</p>
     */
    inline ManifestFileLocation& WithKey(const Aws::String& value) { SetKey(value); return *this;}

    /**
     * <p>Amazon S3 key that identifies an object.</p>
     */
    inline ManifestFileLocation& WithKey(Aws::String&& value) { SetKey(std::move(value)); return *this;}

    /**
     * <p>Amazon S3 key that identifies an object.</p>
     */
    inline ManifestFileLocation& WithKey(const char* value) { SetKey(value); return *this;}

  private:

    Aws::String m_bucket;
    bool m_bucketHasBeenSet = false;

    Aws::String m_key;
    bool m_keyHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
