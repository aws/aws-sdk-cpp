/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/securityhub/model/OrganizationConfigurationConfigurationType.h>
#include <aws/securityhub/model/OrganizationConfigurationStatus.h>
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
namespace SecurityHub
{
namespace Model
{

  /**
   * <p> Provides information about the way an organization is configured in Security
   * Hub. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/OrganizationConfiguration">AWS
   * API Reference</a></p>
   */
  class OrganizationConfiguration
  {
  public:
    AWS_SECURITYHUB_API OrganizationConfiguration() = default;
    AWS_SECURITYHUB_API OrganizationConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API OrganizationConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> Indicates whether the organization uses local or central configuration. </p>
     * <p>If you use local configuration, the Security Hub delegated administrator can
     * set <code>AutoEnable</code> to <code>true</code> and
     * <code>AutoEnableStandards</code> to <code>DEFAULT</code>. This automatically
     * enables Security Hub and default security standards in new organization
     * accounts. These new account settings must be set separately in each Amazon Web
     * Services Region, and settings may be different in each Region. </p> <p> If you
     * use central configuration, the delegated administrator can create configuration
     * policies. Configuration policies can be used to configure Security Hub, security
     * standards, and security controls in multiple accounts and Regions. If you want
     * new organization accounts to use a specific configuration, you can create a
     * configuration policy and associate it with the root or specific organizational
     * units (OUs). New accounts will inherit the policy from the root or their
     * assigned OU. </p>
     */
    inline OrganizationConfigurationConfigurationType GetConfigurationType() const { return m_configurationType; }
    inline bool ConfigurationTypeHasBeenSet() const { return m_configurationTypeHasBeenSet; }
    inline void SetConfigurationType(OrganizationConfigurationConfigurationType value) { m_configurationTypeHasBeenSet = true; m_configurationType = value; }
    inline OrganizationConfiguration& WithConfigurationType(OrganizationConfigurationConfigurationType value) { SetConfigurationType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Describes whether central configuration could be enabled as the
     * <code>ConfigurationType</code> for the organization. If your
     * <code>ConfigurationType</code> is local configuration, then the value of
     * <code>Status</code> is always <code>ENABLED</code>. </p>
     */
    inline OrganizationConfigurationStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(OrganizationConfigurationStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline OrganizationConfiguration& WithStatus(OrganizationConfigurationStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Provides an explanation if the value of <code>Status</code> is equal to
     * <code>FAILED</code> when <code>ConfigurationType</code> is equal to
     * <code>CENTRAL</code>. </p>
     */
    inline const Aws::String& GetStatusMessage() const { return m_statusMessage; }
    inline bool StatusMessageHasBeenSet() const { return m_statusMessageHasBeenSet; }
    template<typename StatusMessageT = Aws::String>
    void SetStatusMessage(StatusMessageT&& value) { m_statusMessageHasBeenSet = true; m_statusMessage = std::forward<StatusMessageT>(value); }
    template<typename StatusMessageT = Aws::String>
    OrganizationConfiguration& WithStatusMessage(StatusMessageT&& value) { SetStatusMessage(std::forward<StatusMessageT>(value)); return *this;}
    ///@}
  private:

    OrganizationConfigurationConfigurationType m_configurationType{OrganizationConfigurationConfigurationType::NOT_SET};
    bool m_configurationTypeHasBeenSet = false;

    OrganizationConfigurationStatus m_status{OrganizationConfigurationStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_statusMessage;
    bool m_statusMessageHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
