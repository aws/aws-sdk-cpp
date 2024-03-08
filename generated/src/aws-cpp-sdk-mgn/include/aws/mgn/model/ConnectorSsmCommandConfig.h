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
   * <p>Connector SSM command config.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mgn-2020-02-26/ConnectorSsmCommandConfig">AWS
   * API Reference</a></p>
   */
  class ConnectorSsmCommandConfig
  {
  public:
    AWS_MGN_API ConnectorSsmCommandConfig();
    AWS_MGN_API ConnectorSsmCommandConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_MGN_API ConnectorSsmCommandConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MGN_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Connector SSM command config CloudWatch log group name.</p>
     */
    inline const Aws::String& GetCloudWatchLogGroupName() const{ return m_cloudWatchLogGroupName; }

    /**
     * <p>Connector SSM command config CloudWatch log group name.</p>
     */
    inline bool CloudWatchLogGroupNameHasBeenSet() const { return m_cloudWatchLogGroupNameHasBeenSet; }

    /**
     * <p>Connector SSM command config CloudWatch log group name.</p>
     */
    inline void SetCloudWatchLogGroupName(const Aws::String& value) { m_cloudWatchLogGroupNameHasBeenSet = true; m_cloudWatchLogGroupName = value; }

    /**
     * <p>Connector SSM command config CloudWatch log group name.</p>
     */
    inline void SetCloudWatchLogGroupName(Aws::String&& value) { m_cloudWatchLogGroupNameHasBeenSet = true; m_cloudWatchLogGroupName = std::move(value); }

    /**
     * <p>Connector SSM command config CloudWatch log group name.</p>
     */
    inline void SetCloudWatchLogGroupName(const char* value) { m_cloudWatchLogGroupNameHasBeenSet = true; m_cloudWatchLogGroupName.assign(value); }

    /**
     * <p>Connector SSM command config CloudWatch log group name.</p>
     */
    inline ConnectorSsmCommandConfig& WithCloudWatchLogGroupName(const Aws::String& value) { SetCloudWatchLogGroupName(value); return *this;}

    /**
     * <p>Connector SSM command config CloudWatch log group name.</p>
     */
    inline ConnectorSsmCommandConfig& WithCloudWatchLogGroupName(Aws::String&& value) { SetCloudWatchLogGroupName(std::move(value)); return *this;}

    /**
     * <p>Connector SSM command config CloudWatch log group name.</p>
     */
    inline ConnectorSsmCommandConfig& WithCloudWatchLogGroupName(const char* value) { SetCloudWatchLogGroupName(value); return *this;}


    /**
     * <p>Connector SSM command config CloudWatch output enabled.</p>
     */
    inline bool GetCloudWatchOutputEnabled() const{ return m_cloudWatchOutputEnabled; }

    /**
     * <p>Connector SSM command config CloudWatch output enabled.</p>
     */
    inline bool CloudWatchOutputEnabledHasBeenSet() const { return m_cloudWatchOutputEnabledHasBeenSet; }

    /**
     * <p>Connector SSM command config CloudWatch output enabled.</p>
     */
    inline void SetCloudWatchOutputEnabled(bool value) { m_cloudWatchOutputEnabledHasBeenSet = true; m_cloudWatchOutputEnabled = value; }

    /**
     * <p>Connector SSM command config CloudWatch output enabled.</p>
     */
    inline ConnectorSsmCommandConfig& WithCloudWatchOutputEnabled(bool value) { SetCloudWatchOutputEnabled(value); return *this;}


    /**
     * <p>Connector SSM command config output S3 bucket name.</p>
     */
    inline const Aws::String& GetOutputS3BucketName() const{ return m_outputS3BucketName; }

    /**
     * <p>Connector SSM command config output S3 bucket name.</p>
     */
    inline bool OutputS3BucketNameHasBeenSet() const { return m_outputS3BucketNameHasBeenSet; }

    /**
     * <p>Connector SSM command config output S3 bucket name.</p>
     */
    inline void SetOutputS3BucketName(const Aws::String& value) { m_outputS3BucketNameHasBeenSet = true; m_outputS3BucketName = value; }

    /**
     * <p>Connector SSM command config output S3 bucket name.</p>
     */
    inline void SetOutputS3BucketName(Aws::String&& value) { m_outputS3BucketNameHasBeenSet = true; m_outputS3BucketName = std::move(value); }

    /**
     * <p>Connector SSM command config output S3 bucket name.</p>
     */
    inline void SetOutputS3BucketName(const char* value) { m_outputS3BucketNameHasBeenSet = true; m_outputS3BucketName.assign(value); }

    /**
     * <p>Connector SSM command config output S3 bucket name.</p>
     */
    inline ConnectorSsmCommandConfig& WithOutputS3BucketName(const Aws::String& value) { SetOutputS3BucketName(value); return *this;}

    /**
     * <p>Connector SSM command config output S3 bucket name.</p>
     */
    inline ConnectorSsmCommandConfig& WithOutputS3BucketName(Aws::String&& value) { SetOutputS3BucketName(std::move(value)); return *this;}

    /**
     * <p>Connector SSM command config output S3 bucket name.</p>
     */
    inline ConnectorSsmCommandConfig& WithOutputS3BucketName(const char* value) { SetOutputS3BucketName(value); return *this;}


    /**
     * <p>Connector SSM command config S3 output enabled.</p>
     */
    inline bool GetS3OutputEnabled() const{ return m_s3OutputEnabled; }

    /**
     * <p>Connector SSM command config S3 output enabled.</p>
     */
    inline bool S3OutputEnabledHasBeenSet() const { return m_s3OutputEnabledHasBeenSet; }

    /**
     * <p>Connector SSM command config S3 output enabled.</p>
     */
    inline void SetS3OutputEnabled(bool value) { m_s3OutputEnabledHasBeenSet = true; m_s3OutputEnabled = value; }

    /**
     * <p>Connector SSM command config S3 output enabled.</p>
     */
    inline ConnectorSsmCommandConfig& WithS3OutputEnabled(bool value) { SetS3OutputEnabled(value); return *this;}

  private:

    Aws::String m_cloudWatchLogGroupName;
    bool m_cloudWatchLogGroupNameHasBeenSet = false;

    bool m_cloudWatchOutputEnabled;
    bool m_cloudWatchOutputEnabledHasBeenSet = false;

    Aws::String m_outputS3BucketName;
    bool m_outputS3BucketNameHasBeenSet = false;

    bool m_s3OutputEnabled;
    bool m_s3OutputEnabledHasBeenSet = false;
  };

} // namespace Model
} // namespace mgn
} // namespace Aws
