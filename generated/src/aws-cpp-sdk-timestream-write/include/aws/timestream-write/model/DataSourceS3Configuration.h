/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/timestream-write/TimestreamWrite_EXPORTS.h>
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
namespace TimestreamWrite
{
namespace Model
{

  /**
   * <p> </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/timestream-write-2018-11-01/DataSourceS3Configuration">AWS
   * API Reference</a></p>
   */
  class DataSourceS3Configuration
  {
  public:
    AWS_TIMESTREAMWRITE_API DataSourceS3Configuration();
    AWS_TIMESTREAMWRITE_API DataSourceS3Configuration(Aws::Utils::Json::JsonView jsonValue);
    AWS_TIMESTREAMWRITE_API DataSourceS3Configuration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TIMESTREAMWRITE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The bucket name of the customer S3 bucket.</p>
     */
    inline const Aws::String& GetBucketName() const{ return m_bucketName; }

    /**
     * <p>The bucket name of the customer S3 bucket.</p>
     */
    inline bool BucketNameHasBeenSet() const { return m_bucketNameHasBeenSet; }

    /**
     * <p>The bucket name of the customer S3 bucket.</p>
     */
    inline void SetBucketName(const Aws::String& value) { m_bucketNameHasBeenSet = true; m_bucketName = value; }

    /**
     * <p>The bucket name of the customer S3 bucket.</p>
     */
    inline void SetBucketName(Aws::String&& value) { m_bucketNameHasBeenSet = true; m_bucketName = std::move(value); }

    /**
     * <p>The bucket name of the customer S3 bucket.</p>
     */
    inline void SetBucketName(const char* value) { m_bucketNameHasBeenSet = true; m_bucketName.assign(value); }

    /**
     * <p>The bucket name of the customer S3 bucket.</p>
     */
    inline DataSourceS3Configuration& WithBucketName(const Aws::String& value) { SetBucketName(value); return *this;}

    /**
     * <p>The bucket name of the customer S3 bucket.</p>
     */
    inline DataSourceS3Configuration& WithBucketName(Aws::String&& value) { SetBucketName(std::move(value)); return *this;}

    /**
     * <p>The bucket name of the customer S3 bucket.</p>
     */
    inline DataSourceS3Configuration& WithBucketName(const char* value) { SetBucketName(value); return *this;}


    /**
     * <p> </p>
     */
    inline const Aws::String& GetObjectKeyPrefix() const{ return m_objectKeyPrefix; }

    /**
     * <p> </p>
     */
    inline bool ObjectKeyPrefixHasBeenSet() const { return m_objectKeyPrefixHasBeenSet; }

    /**
     * <p> </p>
     */
    inline void SetObjectKeyPrefix(const Aws::String& value) { m_objectKeyPrefixHasBeenSet = true; m_objectKeyPrefix = value; }

    /**
     * <p> </p>
     */
    inline void SetObjectKeyPrefix(Aws::String&& value) { m_objectKeyPrefixHasBeenSet = true; m_objectKeyPrefix = std::move(value); }

    /**
     * <p> </p>
     */
    inline void SetObjectKeyPrefix(const char* value) { m_objectKeyPrefixHasBeenSet = true; m_objectKeyPrefix.assign(value); }

    /**
     * <p> </p>
     */
    inline DataSourceS3Configuration& WithObjectKeyPrefix(const Aws::String& value) { SetObjectKeyPrefix(value); return *this;}

    /**
     * <p> </p>
     */
    inline DataSourceS3Configuration& WithObjectKeyPrefix(Aws::String&& value) { SetObjectKeyPrefix(std::move(value)); return *this;}

    /**
     * <p> </p>
     */
    inline DataSourceS3Configuration& WithObjectKeyPrefix(const char* value) { SetObjectKeyPrefix(value); return *this;}

  private:

    Aws::String m_bucketName;
    bool m_bucketNameHasBeenSet = false;

    Aws::String m_objectKeyPrefix;
    bool m_objectKeyPrefixHasBeenSet = false;
  };

} // namespace Model
} // namespace TimestreamWrite
} // namespace Aws
