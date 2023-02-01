/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/securityhub/model/AwsS3BucketNotificationConfigurationDetail.h>
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
namespace SecurityHub
{
namespace Model
{

  /**
   * <p>The notification configuration for the S3 bucket.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsS3BucketNotificationConfiguration">AWS
   * API Reference</a></p>
   */
  class AwsS3BucketNotificationConfiguration
  {
  public:
    AWS_SECURITYHUB_API AwsS3BucketNotificationConfiguration();
    AWS_SECURITYHUB_API AwsS3BucketNotificationConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsS3BucketNotificationConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Configurations for S3 bucket notifications.</p>
     */
    inline const Aws::Vector<AwsS3BucketNotificationConfigurationDetail>& GetConfigurations() const{ return m_configurations; }

    /**
     * <p>Configurations for S3 bucket notifications.</p>
     */
    inline bool ConfigurationsHasBeenSet() const { return m_configurationsHasBeenSet; }

    /**
     * <p>Configurations for S3 bucket notifications.</p>
     */
    inline void SetConfigurations(const Aws::Vector<AwsS3BucketNotificationConfigurationDetail>& value) { m_configurationsHasBeenSet = true; m_configurations = value; }

    /**
     * <p>Configurations for S3 bucket notifications.</p>
     */
    inline void SetConfigurations(Aws::Vector<AwsS3BucketNotificationConfigurationDetail>&& value) { m_configurationsHasBeenSet = true; m_configurations = std::move(value); }

    /**
     * <p>Configurations for S3 bucket notifications.</p>
     */
    inline AwsS3BucketNotificationConfiguration& WithConfigurations(const Aws::Vector<AwsS3BucketNotificationConfigurationDetail>& value) { SetConfigurations(value); return *this;}

    /**
     * <p>Configurations for S3 bucket notifications.</p>
     */
    inline AwsS3BucketNotificationConfiguration& WithConfigurations(Aws::Vector<AwsS3BucketNotificationConfigurationDetail>&& value) { SetConfigurations(std::move(value)); return *this;}

    /**
     * <p>Configurations for S3 bucket notifications.</p>
     */
    inline AwsS3BucketNotificationConfiguration& AddConfigurations(const AwsS3BucketNotificationConfigurationDetail& value) { m_configurationsHasBeenSet = true; m_configurations.push_back(value); return *this; }

    /**
     * <p>Configurations for S3 bucket notifications.</p>
     */
    inline AwsS3BucketNotificationConfiguration& AddConfigurations(AwsS3BucketNotificationConfigurationDetail&& value) { m_configurationsHasBeenSet = true; m_configurations.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<AwsS3BucketNotificationConfigurationDetail> m_configurations;
    bool m_configurationsHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
