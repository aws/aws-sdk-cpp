/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/securityhub/SecurityHubRequest.h>

namespace Aws
{
namespace SecurityHub
{
namespace Model
{

  /**
   */
  class UpdateSecurityHubConfigurationRequest : public SecurityHubRequest
  {
  public:
    AWS_SECURITYHUB_API UpdateSecurityHubConfigurationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateSecurityHubConfiguration"; }

    AWS_SECURITYHUB_API Aws::String SerializePayload() const override;


    /**
     * <p>Whether to automatically enable new controls when they are added to standards
     * that are enabled.</p> <p>By default, this is set to <code>true</code>, and new
     * controls are enabled automatically. To not automatically enable new controls,
     * set this to <code>false</code>. </p>
     */
    inline bool GetAutoEnableControls() const{ return m_autoEnableControls; }

    /**
     * <p>Whether to automatically enable new controls when they are added to standards
     * that are enabled.</p> <p>By default, this is set to <code>true</code>, and new
     * controls are enabled automatically. To not automatically enable new controls,
     * set this to <code>false</code>. </p>
     */
    inline bool AutoEnableControlsHasBeenSet() const { return m_autoEnableControlsHasBeenSet; }

    /**
     * <p>Whether to automatically enable new controls when they are added to standards
     * that are enabled.</p> <p>By default, this is set to <code>true</code>, and new
     * controls are enabled automatically. To not automatically enable new controls,
     * set this to <code>false</code>. </p>
     */
    inline void SetAutoEnableControls(bool value) { m_autoEnableControlsHasBeenSet = true; m_autoEnableControls = value; }

    /**
     * <p>Whether to automatically enable new controls when they are added to standards
     * that are enabled.</p> <p>By default, this is set to <code>true</code>, and new
     * controls are enabled automatically. To not automatically enable new controls,
     * set this to <code>false</code>. </p>
     */
    inline UpdateSecurityHubConfigurationRequest& WithAutoEnableControls(bool value) { SetAutoEnableControls(value); return *this;}

  private:

    bool m_autoEnableControls;
    bool m_autoEnableControlsHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
