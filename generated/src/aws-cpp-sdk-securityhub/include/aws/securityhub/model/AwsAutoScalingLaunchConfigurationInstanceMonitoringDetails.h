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
   * <p>Information about the type of monitoring for instances in the
   * group.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsAutoScalingLaunchConfigurationInstanceMonitoringDetails">AWS
   * API Reference</a></p>
   */
  class AwsAutoScalingLaunchConfigurationInstanceMonitoringDetails
  {
  public:
    AWS_SECURITYHUB_API AwsAutoScalingLaunchConfigurationInstanceMonitoringDetails();
    AWS_SECURITYHUB_API AwsAutoScalingLaunchConfigurationInstanceMonitoringDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsAutoScalingLaunchConfigurationInstanceMonitoringDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>If set to <code>true</code>, then instances in the group launch with detailed
     * monitoring.</p> <p>If set to <code>false</code>, then instances in the group
     * launch with basic monitoring.</p>
     */
    inline bool GetEnabled() const{ return m_enabled; }

    /**
     * <p>If set to <code>true</code>, then instances in the group launch with detailed
     * monitoring.</p> <p>If set to <code>false</code>, then instances in the group
     * launch with basic monitoring.</p>
     */
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }

    /**
     * <p>If set to <code>true</code>, then instances in the group launch with detailed
     * monitoring.</p> <p>If set to <code>false</code>, then instances in the group
     * launch with basic monitoring.</p>
     */
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }

    /**
     * <p>If set to <code>true</code>, then instances in the group launch with detailed
     * monitoring.</p> <p>If set to <code>false</code>, then instances in the group
     * launch with basic monitoring.</p>
     */
    inline AwsAutoScalingLaunchConfigurationInstanceMonitoringDetails& WithEnabled(bool value) { SetEnabled(value); return *this;}

  private:

    bool m_enabled;
    bool m_enabledHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
