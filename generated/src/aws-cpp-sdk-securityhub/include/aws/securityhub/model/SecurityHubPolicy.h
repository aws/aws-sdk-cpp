/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/securityhub/model/SecurityControlsConfiguration.h>
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
   * <p> An object that defines how Security Hub is configured. The configuration
   * policy includes whether Security Hub is enabled or disabled, a list of enabled
   * security standards, a list of enabled or disabled security controls, and a list
   * of custom parameter values for specified controls. If you provide a list of
   * security controls that are enabled in the configuration policy, Security Hub
   * disables all other controls (including newly released controls). If you provide
   * a list of security controls that are disabled in the configuration policy,
   * Security Hub enables all other controls (including newly released controls).
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/SecurityHubPolicy">AWS
   * API Reference</a></p>
   */
  class SecurityHubPolicy
  {
  public:
    AWS_SECURITYHUB_API SecurityHubPolicy();
    AWS_SECURITYHUB_API SecurityHubPolicy(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API SecurityHubPolicy& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> Indicates whether Security Hub is enabled in the policy. </p>
     */
    inline bool GetServiceEnabled() const{ return m_serviceEnabled; }
    inline bool ServiceEnabledHasBeenSet() const { return m_serviceEnabledHasBeenSet; }
    inline void SetServiceEnabled(bool value) { m_serviceEnabledHasBeenSet = true; m_serviceEnabled = value; }
    inline SecurityHubPolicy& WithServiceEnabled(bool value) { SetServiceEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> A list that defines which security standards are enabled in the
     * configuration policy. </p>
     */
    inline const Aws::Vector<Aws::String>& GetEnabledStandardIdentifiers() const{ return m_enabledStandardIdentifiers; }
    inline bool EnabledStandardIdentifiersHasBeenSet() const { return m_enabledStandardIdentifiersHasBeenSet; }
    inline void SetEnabledStandardIdentifiers(const Aws::Vector<Aws::String>& value) { m_enabledStandardIdentifiersHasBeenSet = true; m_enabledStandardIdentifiers = value; }
    inline void SetEnabledStandardIdentifiers(Aws::Vector<Aws::String>&& value) { m_enabledStandardIdentifiersHasBeenSet = true; m_enabledStandardIdentifiers = std::move(value); }
    inline SecurityHubPolicy& WithEnabledStandardIdentifiers(const Aws::Vector<Aws::String>& value) { SetEnabledStandardIdentifiers(value); return *this;}
    inline SecurityHubPolicy& WithEnabledStandardIdentifiers(Aws::Vector<Aws::String>&& value) { SetEnabledStandardIdentifiers(std::move(value)); return *this;}
    inline SecurityHubPolicy& AddEnabledStandardIdentifiers(const Aws::String& value) { m_enabledStandardIdentifiersHasBeenSet = true; m_enabledStandardIdentifiers.push_back(value); return *this; }
    inline SecurityHubPolicy& AddEnabledStandardIdentifiers(Aws::String&& value) { m_enabledStandardIdentifiersHasBeenSet = true; m_enabledStandardIdentifiers.push_back(std::move(value)); return *this; }
    inline SecurityHubPolicy& AddEnabledStandardIdentifiers(const char* value) { m_enabledStandardIdentifiersHasBeenSet = true; m_enabledStandardIdentifiers.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p> An object that defines which security controls are enabled in the
     * configuration policy. The enablement status of a control is aligned across all
     * of the enabled standards in an account. </p>
     */
    inline const SecurityControlsConfiguration& GetSecurityControlsConfiguration() const{ return m_securityControlsConfiguration; }
    inline bool SecurityControlsConfigurationHasBeenSet() const { return m_securityControlsConfigurationHasBeenSet; }
    inline void SetSecurityControlsConfiguration(const SecurityControlsConfiguration& value) { m_securityControlsConfigurationHasBeenSet = true; m_securityControlsConfiguration = value; }
    inline void SetSecurityControlsConfiguration(SecurityControlsConfiguration&& value) { m_securityControlsConfigurationHasBeenSet = true; m_securityControlsConfiguration = std::move(value); }
    inline SecurityHubPolicy& WithSecurityControlsConfiguration(const SecurityControlsConfiguration& value) { SetSecurityControlsConfiguration(value); return *this;}
    inline SecurityHubPolicy& WithSecurityControlsConfiguration(SecurityControlsConfiguration&& value) { SetSecurityControlsConfiguration(std::move(value)); return *this;}
    ///@}
  private:

    bool m_serviceEnabled;
    bool m_serviceEnabledHasBeenSet = false;

    Aws::Vector<Aws::String> m_enabledStandardIdentifiers;
    bool m_enabledStandardIdentifiersHasBeenSet = false;

    SecurityControlsConfiguration m_securityControlsConfiguration;
    bool m_securityControlsConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
