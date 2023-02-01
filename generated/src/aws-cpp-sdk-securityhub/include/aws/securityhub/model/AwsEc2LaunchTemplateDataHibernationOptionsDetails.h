/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>

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
   * <p> Specifies whether your Amazon EC2 instance is configured for hibernation.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsEc2LaunchTemplateDataHibernationOptionsDetails">AWS
   * API Reference</a></p>
   */
  class AwsEc2LaunchTemplateDataHibernationOptionsDetails
  {
  public:
    AWS_SECURITYHUB_API AwsEc2LaunchTemplateDataHibernationOptionsDetails();
    AWS_SECURITYHUB_API AwsEc2LaunchTemplateDataHibernationOptionsDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsEc2LaunchTemplateDataHibernationOptionsDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> If you set this parameter to <code>true</code>, the instance is enabled for
     * hibernation. </p>
     */
    inline bool GetConfigured() const{ return m_configured; }

    /**
     * <p> If you set this parameter to <code>true</code>, the instance is enabled for
     * hibernation. </p>
     */
    inline bool ConfiguredHasBeenSet() const { return m_configuredHasBeenSet; }

    /**
     * <p> If you set this parameter to <code>true</code>, the instance is enabled for
     * hibernation. </p>
     */
    inline void SetConfigured(bool value) { m_configuredHasBeenSet = true; m_configured = value; }

    /**
     * <p> If you set this parameter to <code>true</code>, the instance is enabled for
     * hibernation. </p>
     */
    inline AwsEc2LaunchTemplateDataHibernationOptionsDetails& WithConfigured(bool value) { SetConfigured(value); return *this;}

  private:

    bool m_configured;
    bool m_configuredHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
