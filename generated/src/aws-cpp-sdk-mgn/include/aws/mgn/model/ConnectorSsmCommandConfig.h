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
    AWS_MGN_API ConnectorSsmCommandConfig() = default;
    AWS_MGN_API ConnectorSsmCommandConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_MGN_API ConnectorSsmCommandConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MGN_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Connector SSM command config CloudWatch log group name.</p>
     */
    inline const Aws::String& GetCloudWatchLogGroupName() const { return m_cloudWatchLogGroupName; }
    inline bool CloudWatchLogGroupNameHasBeenSet() const { return m_cloudWatchLogGroupNameHasBeenSet; }
    template<typename CloudWatchLogGroupNameT = Aws::String>
    void SetCloudWatchLogGroupName(CloudWatchLogGroupNameT&& value) { m_cloudWatchLogGroupNameHasBeenSet = true; m_cloudWatchLogGroupName = std::forward<CloudWatchLogGroupNameT>(value); }
    template<typename CloudWatchLogGroupNameT = Aws::String>
    ConnectorSsmCommandConfig& WithCloudWatchLogGroupName(CloudWatchLogGroupNameT&& value) { SetCloudWatchLogGroupName(std::forward<CloudWatchLogGroupNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Connector SSM command config CloudWatch output enabled.</p>
     */
    inline bool GetCloudWatchOutputEnabled() const { return m_cloudWatchOutputEnabled; }
    inline bool CloudWatchOutputEnabledHasBeenSet() const { return m_cloudWatchOutputEnabledHasBeenSet; }
    inline void SetCloudWatchOutputEnabled(bool value) { m_cloudWatchOutputEnabledHasBeenSet = true; m_cloudWatchOutputEnabled = value; }
    inline ConnectorSsmCommandConfig& WithCloudWatchOutputEnabled(bool value) { SetCloudWatchOutputEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Connector SSM command config output S3 bucket name.</p>
     */
    inline const Aws::String& GetOutputS3BucketName() const { return m_outputS3BucketName; }
    inline bool OutputS3BucketNameHasBeenSet() const { return m_outputS3BucketNameHasBeenSet; }
    template<typename OutputS3BucketNameT = Aws::String>
    void SetOutputS3BucketName(OutputS3BucketNameT&& value) { m_outputS3BucketNameHasBeenSet = true; m_outputS3BucketName = std::forward<OutputS3BucketNameT>(value); }
    template<typename OutputS3BucketNameT = Aws::String>
    ConnectorSsmCommandConfig& WithOutputS3BucketName(OutputS3BucketNameT&& value) { SetOutputS3BucketName(std::forward<OutputS3BucketNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Connector SSM command config S3 output enabled.</p>
     */
    inline bool GetS3OutputEnabled() const { return m_s3OutputEnabled; }
    inline bool S3OutputEnabledHasBeenSet() const { return m_s3OutputEnabledHasBeenSet; }
    inline void SetS3OutputEnabled(bool value) { m_s3OutputEnabledHasBeenSet = true; m_s3OutputEnabled = value; }
    inline ConnectorSsmCommandConfig& WithS3OutputEnabled(bool value) { SetS3OutputEnabled(value); return *this;}
    ///@}
  private:

    Aws::String m_cloudWatchLogGroupName;
    bool m_cloudWatchLogGroupNameHasBeenSet = false;

    bool m_cloudWatchOutputEnabled{false};
    bool m_cloudWatchOutputEnabledHasBeenSet = false;

    Aws::String m_outputS3BucketName;
    bool m_outputS3BucketNameHasBeenSet = false;

    bool m_s3OutputEnabled{false};
    bool m_s3OutputEnabledHasBeenSet = false;
  };

} // namespace Model
} // namespace mgn
} // namespace Aws
