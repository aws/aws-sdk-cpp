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
   * <p> The monitoring for an Amazon EC2 instance. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsEc2LaunchTemplateDataMonitoringDetails">AWS
   * API Reference</a></p>
   */
  class AwsEc2LaunchTemplateDataMonitoringDetails
  {
  public:
    AWS_SECURITYHUB_API AwsEc2LaunchTemplateDataMonitoringDetails();
    AWS_SECURITYHUB_API AwsEc2LaunchTemplateDataMonitoringDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsEc2LaunchTemplateDataMonitoringDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> Enables detailed monitoring when <code>true</code> is specified. Otherwise,
     * basic monitoring is enabled. For more information about detailed monitoring, see
     * <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/using-cloudwatch-new.html">Enable
     * or turn off detailed monitoring for your instances</a> in the <i>Amazon EC2 User
     * Guide</i>. </p>
     */
    inline bool GetEnabled() const{ return m_enabled; }

    /**
     * <p> Enables detailed monitoring when <code>true</code> is specified. Otherwise,
     * basic monitoring is enabled. For more information about detailed monitoring, see
     * <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/using-cloudwatch-new.html">Enable
     * or turn off detailed monitoring for your instances</a> in the <i>Amazon EC2 User
     * Guide</i>. </p>
     */
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }

    /**
     * <p> Enables detailed monitoring when <code>true</code> is specified. Otherwise,
     * basic monitoring is enabled. For more information about detailed monitoring, see
     * <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/using-cloudwatch-new.html">Enable
     * or turn off detailed monitoring for your instances</a> in the <i>Amazon EC2 User
     * Guide</i>. </p>
     */
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }

    /**
     * <p> Enables detailed monitoring when <code>true</code> is specified. Otherwise,
     * basic monitoring is enabled. For more information about detailed monitoring, see
     * <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/using-cloudwatch-new.html">Enable
     * or turn off detailed monitoring for your instances</a> in the <i>Amazon EC2 User
     * Guide</i>. </p>
     */
    inline AwsEc2LaunchTemplateDataMonitoringDetails& WithEnabled(bool value) { SetEnabled(value); return *this;}

  private:

    bool m_enabled;
    bool m_enabledHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
