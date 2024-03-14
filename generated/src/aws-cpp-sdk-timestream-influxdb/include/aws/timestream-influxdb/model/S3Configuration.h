/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/timestream-influxdb/TimestreamInfluxDB_EXPORTS.h>
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
namespace TimestreamInfluxDB
{
namespace Model
{

  /**
   * <p>Configuration for S3 bucket log delivery.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/timestream-influxdb-2023-01-27/S3Configuration">AWS
   * API Reference</a></p>
   */
  class S3Configuration
  {
  public:
    AWS_TIMESTREAMINFLUXDB_API S3Configuration();
    AWS_TIMESTREAMINFLUXDB_API S3Configuration(Aws::Utils::Json::JsonView jsonValue);
    AWS_TIMESTREAMINFLUXDB_API S3Configuration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TIMESTREAMINFLUXDB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the S3 bucket to deliver logs to.</p>
     */
    inline const Aws::String& GetBucketName() const{ return m_bucketName; }

    /**
     * <p>The name of the S3 bucket to deliver logs to.</p>
     */
    inline bool BucketNameHasBeenSet() const { return m_bucketNameHasBeenSet; }

    /**
     * <p>The name of the S3 bucket to deliver logs to.</p>
     */
    inline void SetBucketName(const Aws::String& value) { m_bucketNameHasBeenSet = true; m_bucketName = value; }

    /**
     * <p>The name of the S3 bucket to deliver logs to.</p>
     */
    inline void SetBucketName(Aws::String&& value) { m_bucketNameHasBeenSet = true; m_bucketName = std::move(value); }

    /**
     * <p>The name of the S3 bucket to deliver logs to.</p>
     */
    inline void SetBucketName(const char* value) { m_bucketNameHasBeenSet = true; m_bucketName.assign(value); }

    /**
     * <p>The name of the S3 bucket to deliver logs to.</p>
     */
    inline S3Configuration& WithBucketName(const Aws::String& value) { SetBucketName(value); return *this;}

    /**
     * <p>The name of the S3 bucket to deliver logs to.</p>
     */
    inline S3Configuration& WithBucketName(Aws::String&& value) { SetBucketName(std::move(value)); return *this;}

    /**
     * <p>The name of the S3 bucket to deliver logs to.</p>
     */
    inline S3Configuration& WithBucketName(const char* value) { SetBucketName(value); return *this;}


    /**
     * <p>Indicates whether log delivery to the S3 bucket is enabled.</p>
     */
    inline bool GetEnabled() const{ return m_enabled; }

    /**
     * <p>Indicates whether log delivery to the S3 bucket is enabled.</p>
     */
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }

    /**
     * <p>Indicates whether log delivery to the S3 bucket is enabled.</p>
     */
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }

    /**
     * <p>Indicates whether log delivery to the S3 bucket is enabled.</p>
     */
    inline S3Configuration& WithEnabled(bool value) { SetEnabled(value); return *this;}

  private:

    Aws::String m_bucketName;
    bool m_bucketNameHasBeenSet = false;

    bool m_enabled;
    bool m_enabledHasBeenSet = false;
  };

} // namespace Model
} // namespace TimestreamInfluxDB
} // namespace Aws
