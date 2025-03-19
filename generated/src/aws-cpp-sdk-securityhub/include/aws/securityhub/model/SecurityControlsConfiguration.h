/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securityhub/model/SecurityControlCustomParameter.h>
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
   * <p> An object that defines which security controls are enabled in an Security
   * Hub configuration policy. The enablement status of a control is aligned across
   * all of the enabled standards in an account. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/SecurityControlsConfiguration">AWS
   * API Reference</a></p>
   */
  class SecurityControlsConfiguration
  {
  public:
    AWS_SECURITYHUB_API SecurityControlsConfiguration() = default;
    AWS_SECURITYHUB_API SecurityControlsConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API SecurityControlsConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> A list of security controls that are enabled in the configuration policy.
     * Security Hub disables all other controls (including newly released controls)
     * other than the listed controls. </p>
     */
    inline const Aws::Vector<Aws::String>& GetEnabledSecurityControlIdentifiers() const { return m_enabledSecurityControlIdentifiers; }
    inline bool EnabledSecurityControlIdentifiersHasBeenSet() const { return m_enabledSecurityControlIdentifiersHasBeenSet; }
    template<typename EnabledSecurityControlIdentifiersT = Aws::Vector<Aws::String>>
    void SetEnabledSecurityControlIdentifiers(EnabledSecurityControlIdentifiersT&& value) { m_enabledSecurityControlIdentifiersHasBeenSet = true; m_enabledSecurityControlIdentifiers = std::forward<EnabledSecurityControlIdentifiersT>(value); }
    template<typename EnabledSecurityControlIdentifiersT = Aws::Vector<Aws::String>>
    SecurityControlsConfiguration& WithEnabledSecurityControlIdentifiers(EnabledSecurityControlIdentifiersT&& value) { SetEnabledSecurityControlIdentifiers(std::forward<EnabledSecurityControlIdentifiersT>(value)); return *this;}
    template<typename EnabledSecurityControlIdentifiersT = Aws::String>
    SecurityControlsConfiguration& AddEnabledSecurityControlIdentifiers(EnabledSecurityControlIdentifiersT&& value) { m_enabledSecurityControlIdentifiersHasBeenSet = true; m_enabledSecurityControlIdentifiers.emplace_back(std::forward<EnabledSecurityControlIdentifiersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> A list of security controls that are disabled in the configuration policy.
     * Security Hub enables all other controls (including newly released controls)
     * other than the listed controls. </p>
     */
    inline const Aws::Vector<Aws::String>& GetDisabledSecurityControlIdentifiers() const { return m_disabledSecurityControlIdentifiers; }
    inline bool DisabledSecurityControlIdentifiersHasBeenSet() const { return m_disabledSecurityControlIdentifiersHasBeenSet; }
    template<typename DisabledSecurityControlIdentifiersT = Aws::Vector<Aws::String>>
    void SetDisabledSecurityControlIdentifiers(DisabledSecurityControlIdentifiersT&& value) { m_disabledSecurityControlIdentifiersHasBeenSet = true; m_disabledSecurityControlIdentifiers = std::forward<DisabledSecurityControlIdentifiersT>(value); }
    template<typename DisabledSecurityControlIdentifiersT = Aws::Vector<Aws::String>>
    SecurityControlsConfiguration& WithDisabledSecurityControlIdentifiers(DisabledSecurityControlIdentifiersT&& value) { SetDisabledSecurityControlIdentifiers(std::forward<DisabledSecurityControlIdentifiersT>(value)); return *this;}
    template<typename DisabledSecurityControlIdentifiersT = Aws::String>
    SecurityControlsConfiguration& AddDisabledSecurityControlIdentifiers(DisabledSecurityControlIdentifiersT&& value) { m_disabledSecurityControlIdentifiersHasBeenSet = true; m_disabledSecurityControlIdentifiers.emplace_back(std::forward<DisabledSecurityControlIdentifiersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> A list of security controls and control parameter values that are included
     * in a configuration policy. </p>
     */
    inline const Aws::Vector<SecurityControlCustomParameter>& GetSecurityControlCustomParameters() const { return m_securityControlCustomParameters; }
    inline bool SecurityControlCustomParametersHasBeenSet() const { return m_securityControlCustomParametersHasBeenSet; }
    template<typename SecurityControlCustomParametersT = Aws::Vector<SecurityControlCustomParameter>>
    void SetSecurityControlCustomParameters(SecurityControlCustomParametersT&& value) { m_securityControlCustomParametersHasBeenSet = true; m_securityControlCustomParameters = std::forward<SecurityControlCustomParametersT>(value); }
    template<typename SecurityControlCustomParametersT = Aws::Vector<SecurityControlCustomParameter>>
    SecurityControlsConfiguration& WithSecurityControlCustomParameters(SecurityControlCustomParametersT&& value) { SetSecurityControlCustomParameters(std::forward<SecurityControlCustomParametersT>(value)); return *this;}
    template<typename SecurityControlCustomParametersT = SecurityControlCustomParameter>
    SecurityControlsConfiguration& AddSecurityControlCustomParameters(SecurityControlCustomParametersT&& value) { m_securityControlCustomParametersHasBeenSet = true; m_securityControlCustomParameters.emplace_back(std::forward<SecurityControlCustomParametersT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<Aws::String> m_enabledSecurityControlIdentifiers;
    bool m_enabledSecurityControlIdentifiersHasBeenSet = false;

    Aws::Vector<Aws::String> m_disabledSecurityControlIdentifiers;
    bool m_disabledSecurityControlIdentifiersHasBeenSet = false;

    Aws::Vector<SecurityControlCustomParameter> m_securityControlCustomParameters;
    bool m_securityControlCustomParametersHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
