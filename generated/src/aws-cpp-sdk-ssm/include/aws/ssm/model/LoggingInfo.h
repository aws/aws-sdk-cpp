/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
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
namespace SSM
{
namespace Model
{

  /**
   * <p>Information about an Amazon Simple Storage Service (Amazon S3) bucket to
   * write managed node-level logs to.</p>  <p> <code>LoggingInfo</code> has
   * been deprecated. To specify an Amazon Simple Storage Service (Amazon S3) bucket
   * to contain logs, instead use the <code>OutputS3BucketName</code> and
   * <code>OutputS3KeyPrefix</code> options in the
   * <code>TaskInvocationParameters</code> structure. For information about how
   * Amazon Web Services Systems Manager handles these options for the supported
   * maintenance window task types, see
   * <a>MaintenanceWindowTaskInvocationParameters</a>.</p> <p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/LoggingInfo">AWS API
   * Reference</a></p>
   */
  class LoggingInfo
  {
  public:
    AWS_SSM_API LoggingInfo();
    AWS_SSM_API LoggingInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API LoggingInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of an S3 bucket where execution logs are stored.</p>
     */
    inline const Aws::String& GetS3BucketName() const{ return m_s3BucketName; }
    inline bool S3BucketNameHasBeenSet() const { return m_s3BucketNameHasBeenSet; }
    inline void SetS3BucketName(const Aws::String& value) { m_s3BucketNameHasBeenSet = true; m_s3BucketName = value; }
    inline void SetS3BucketName(Aws::String&& value) { m_s3BucketNameHasBeenSet = true; m_s3BucketName = std::move(value); }
    inline void SetS3BucketName(const char* value) { m_s3BucketNameHasBeenSet = true; m_s3BucketName.assign(value); }
    inline LoggingInfo& WithS3BucketName(const Aws::String& value) { SetS3BucketName(value); return *this;}
    inline LoggingInfo& WithS3BucketName(Aws::String&& value) { SetS3BucketName(std::move(value)); return *this;}
    inline LoggingInfo& WithS3BucketName(const char* value) { SetS3BucketName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>(Optional) The S3 bucket subfolder. </p>
     */
    inline const Aws::String& GetS3KeyPrefix() const{ return m_s3KeyPrefix; }
    inline bool S3KeyPrefixHasBeenSet() const { return m_s3KeyPrefixHasBeenSet; }
    inline void SetS3KeyPrefix(const Aws::String& value) { m_s3KeyPrefixHasBeenSet = true; m_s3KeyPrefix = value; }
    inline void SetS3KeyPrefix(Aws::String&& value) { m_s3KeyPrefixHasBeenSet = true; m_s3KeyPrefix = std::move(value); }
    inline void SetS3KeyPrefix(const char* value) { m_s3KeyPrefixHasBeenSet = true; m_s3KeyPrefix.assign(value); }
    inline LoggingInfo& WithS3KeyPrefix(const Aws::String& value) { SetS3KeyPrefix(value); return *this;}
    inline LoggingInfo& WithS3KeyPrefix(Aws::String&& value) { SetS3KeyPrefix(std::move(value)); return *this;}
    inline LoggingInfo& WithS3KeyPrefix(const char* value) { SetS3KeyPrefix(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services Region where the S3 bucket is located.</p>
     */
    inline const Aws::String& GetS3Region() const{ return m_s3Region; }
    inline bool S3RegionHasBeenSet() const { return m_s3RegionHasBeenSet; }
    inline void SetS3Region(const Aws::String& value) { m_s3RegionHasBeenSet = true; m_s3Region = value; }
    inline void SetS3Region(Aws::String&& value) { m_s3RegionHasBeenSet = true; m_s3Region = std::move(value); }
    inline void SetS3Region(const char* value) { m_s3RegionHasBeenSet = true; m_s3Region.assign(value); }
    inline LoggingInfo& WithS3Region(const Aws::String& value) { SetS3Region(value); return *this;}
    inline LoggingInfo& WithS3Region(Aws::String&& value) { SetS3Region(std::move(value)); return *this;}
    inline LoggingInfo& WithS3Region(const char* value) { SetS3Region(value); return *this;}
    ///@}
  private:

    Aws::String m_s3BucketName;
    bool m_s3BucketNameHasBeenSet = false;

    Aws::String m_s3KeyPrefix;
    bool m_s3KeyPrefixHasBeenSet = false;

    Aws::String m_s3Region;
    bool m_s3RegionHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
