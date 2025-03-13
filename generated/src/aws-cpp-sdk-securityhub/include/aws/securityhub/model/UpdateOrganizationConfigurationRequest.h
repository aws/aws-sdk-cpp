/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/securityhub/SecurityHubRequest.h>
#include <aws/securityhub/model/AutoEnableStandards.h>
#include <aws/securityhub/model/OrganizationConfiguration.h>
#include <utility>

namespace Aws
{
namespace SecurityHub
{
namespace Model
{

  /**
   */
  class UpdateOrganizationConfigurationRequest : public SecurityHubRequest
  {
  public:
    AWS_SECURITYHUB_API UpdateOrganizationConfigurationRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateOrganizationConfiguration"; }

    AWS_SECURITYHUB_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>Whether to automatically enable Security Hub in new member accounts when they
     * join the organization.</p> <p>If set to <code>true</code>, then Security Hub is
     * automatically enabled in new accounts. If set to <code>false</code>, then
     * Security Hub isn't enabled in new accounts automatically. The default value is
     * <code>false</code>.</p> <p>If the <code>ConfigurationType</code> of your
     * organization is set to <code>CENTRAL</code>, then this field is set to
     * <code>false</code> and can't be changed in the home Region and linked Regions.
     * However, in that case, the delegated administrator can create a configuration
     * policy in which Security Hub is enabled and associate the policy with new
     * organization accounts.</p>
     */
    inline bool GetAutoEnable() const { return m_autoEnable; }
    inline bool AutoEnableHasBeenSet() const { return m_autoEnableHasBeenSet; }
    inline void SetAutoEnable(bool value) { m_autoEnableHasBeenSet = true; m_autoEnable = value; }
    inline UpdateOrganizationConfigurationRequest& WithAutoEnable(bool value) { SetAutoEnable(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether to automatically enable Security Hub <a
     * href="https://docs.aws.amazon.com/securityhub/latest/userguide/securityhub-standards-enable-disable.html">default
     * standards</a> in new member accounts when they join the organization.</p> <p>The
     * default value of this parameter is equal to <code>DEFAULT</code>.</p> <p>If
     * equal to <code>DEFAULT</code>, then Security Hub default standards are
     * automatically enabled for new member accounts. If equal to <code>NONE</code>,
     * then default standards are not automatically enabled for new member
     * accounts.</p> <p>If the <code>ConfigurationType</code> of your organization is
     * set to <code>CENTRAL</code>, then this field is set to <code>NONE</code> and
     * can't be changed in the home Region and linked Regions. However, in that case,
     * the delegated administrator can create a configuration policy in which specific
     * security standards are enabled and associate the policy with new organization
     * accounts.</p>
     */
    inline AutoEnableStandards GetAutoEnableStandards() const { return m_autoEnableStandards; }
    inline bool AutoEnableStandardsHasBeenSet() const { return m_autoEnableStandardsHasBeenSet; }
    inline void SetAutoEnableStandards(AutoEnableStandards value) { m_autoEnableStandardsHasBeenSet = true; m_autoEnableStandards = value; }
    inline UpdateOrganizationConfigurationRequest& WithAutoEnableStandards(AutoEnableStandards value) { SetAutoEnableStandards(value); return *this;}
    ///@}

    ///@{
    
    inline const OrganizationConfiguration& GetOrganizationConfiguration() const { return m_organizationConfiguration; }
    inline bool OrganizationConfigurationHasBeenSet() const { return m_organizationConfigurationHasBeenSet; }
    template<typename OrganizationConfigurationT = OrganizationConfiguration>
    void SetOrganizationConfiguration(OrganizationConfigurationT&& value) { m_organizationConfigurationHasBeenSet = true; m_organizationConfiguration = std::forward<OrganizationConfigurationT>(value); }
    template<typename OrganizationConfigurationT = OrganizationConfiguration>
    UpdateOrganizationConfigurationRequest& WithOrganizationConfiguration(OrganizationConfigurationT&& value) { SetOrganizationConfiguration(std::forward<OrganizationConfigurationT>(value)); return *this;}
    ///@}
  private:

    bool m_autoEnable{false};
    bool m_autoEnableHasBeenSet = false;

    AutoEnableStandards m_autoEnableStandards{AutoEnableStandards::NOT_SET};
    bool m_autoEnableStandardsHasBeenSet = false;

    OrganizationConfiguration m_organizationConfiguration;
    bool m_organizationConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
