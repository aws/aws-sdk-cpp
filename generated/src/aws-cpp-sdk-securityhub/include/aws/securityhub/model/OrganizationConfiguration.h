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
    AWS_SECURITYHUB_API OrganizationConfiguration();
    AWS_SECURITYHUB_API OrganizationConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API OrganizationConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


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
    inline const OrganizationConfigurationConfigurationType& GetConfigurationType() const{ return m_configurationType; }

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
    inline bool ConfigurationTypeHasBeenSet() const { return m_configurationTypeHasBeenSet; }

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
    inline void SetConfigurationType(const OrganizationConfigurationConfigurationType& value) { m_configurationTypeHasBeenSet = true; m_configurationType = value; }

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
    inline void SetConfigurationType(OrganizationConfigurationConfigurationType&& value) { m_configurationTypeHasBeenSet = true; m_configurationType = std::move(value); }

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
    inline OrganizationConfiguration& WithConfigurationType(const OrganizationConfigurationConfigurationType& value) { SetConfigurationType(value); return *this;}

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
    inline OrganizationConfiguration& WithConfigurationType(OrganizationConfigurationConfigurationType&& value) { SetConfigurationType(std::move(value)); return *this;}


    /**
     * <p> Describes whether central configuration could be enabled as the
     * <code>ConfigurationType</code> for the organization. If your
     * <code>ConfigurationType</code> is local configuration, then the value of
     * <code>Status</code> is always <code>ENABLED</code>. </p>
     */
    inline const OrganizationConfigurationStatus& GetStatus() const{ return m_status; }

    /**
     * <p> Describes whether central configuration could be enabled as the
     * <code>ConfigurationType</code> for the organization. If your
     * <code>ConfigurationType</code> is local configuration, then the value of
     * <code>Status</code> is always <code>ENABLED</code>. </p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p> Describes whether central configuration could be enabled as the
     * <code>ConfigurationType</code> for the organization. If your
     * <code>ConfigurationType</code> is local configuration, then the value of
     * <code>Status</code> is always <code>ENABLED</code>. </p>
     */
    inline void SetStatus(const OrganizationConfigurationStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p> Describes whether central configuration could be enabled as the
     * <code>ConfigurationType</code> for the organization. If your
     * <code>ConfigurationType</code> is local configuration, then the value of
     * <code>Status</code> is always <code>ENABLED</code>. </p>
     */
    inline void SetStatus(OrganizationConfigurationStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p> Describes whether central configuration could be enabled as the
     * <code>ConfigurationType</code> for the organization. If your
     * <code>ConfigurationType</code> is local configuration, then the value of
     * <code>Status</code> is always <code>ENABLED</code>. </p>
     */
    inline OrganizationConfiguration& WithStatus(const OrganizationConfigurationStatus& value) { SetStatus(value); return *this;}

    /**
     * <p> Describes whether central configuration could be enabled as the
     * <code>ConfigurationType</code> for the organization. If your
     * <code>ConfigurationType</code> is local configuration, then the value of
     * <code>Status</code> is always <code>ENABLED</code>. </p>
     */
    inline OrganizationConfiguration& WithStatus(OrganizationConfigurationStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p> Provides an explanation if the value of <code>Status</code> is equal to
     * <code>FAILED</code> when <code>ConfigurationType</code> is equal to
     * <code>CENTRAL</code>. </p>
     */
    inline const Aws::String& GetStatusMessage() const{ return m_statusMessage; }

    /**
     * <p> Provides an explanation if the value of <code>Status</code> is equal to
     * <code>FAILED</code> when <code>ConfigurationType</code> is equal to
     * <code>CENTRAL</code>. </p>
     */
    inline bool StatusMessageHasBeenSet() const { return m_statusMessageHasBeenSet; }

    /**
     * <p> Provides an explanation if the value of <code>Status</code> is equal to
     * <code>FAILED</code> when <code>ConfigurationType</code> is equal to
     * <code>CENTRAL</code>. </p>
     */
    inline void SetStatusMessage(const Aws::String& value) { m_statusMessageHasBeenSet = true; m_statusMessage = value; }

    /**
     * <p> Provides an explanation if the value of <code>Status</code> is equal to
     * <code>FAILED</code> when <code>ConfigurationType</code> is equal to
     * <code>CENTRAL</code>. </p>
     */
    inline void SetStatusMessage(Aws::String&& value) { m_statusMessageHasBeenSet = true; m_statusMessage = std::move(value); }

    /**
     * <p> Provides an explanation if the value of <code>Status</code> is equal to
     * <code>FAILED</code> when <code>ConfigurationType</code> is equal to
     * <code>CENTRAL</code>. </p>
     */
    inline void SetStatusMessage(const char* value) { m_statusMessageHasBeenSet = true; m_statusMessage.assign(value); }

    /**
     * <p> Provides an explanation if the value of <code>Status</code> is equal to
     * <code>FAILED</code> when <code>ConfigurationType</code> is equal to
     * <code>CENTRAL</code>. </p>
     */
    inline OrganizationConfiguration& WithStatusMessage(const Aws::String& value) { SetStatusMessage(value); return *this;}

    /**
     * <p> Provides an explanation if the value of <code>Status</code> is equal to
     * <code>FAILED</code> when <code>ConfigurationType</code> is equal to
     * <code>CENTRAL</code>. </p>
     */
    inline OrganizationConfiguration& WithStatusMessage(Aws::String&& value) { SetStatusMessage(std::move(value)); return *this;}

    /**
     * <p> Provides an explanation if the value of <code>Status</code> is equal to
     * <code>FAILED</code> when <code>ConfigurationType</code> is equal to
     * <code>CENTRAL</code>. </p>
     */
    inline OrganizationConfiguration& WithStatusMessage(const char* value) { SetStatusMessage(value); return *this;}

  private:

    OrganizationConfigurationConfigurationType m_configurationType;
    bool m_configurationTypeHasBeenSet = false;

    OrganizationConfigurationStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_statusMessage;
    bool m_statusMessageHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
