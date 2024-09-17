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
    AWS_SECURITYHUB_API SecurityControlsConfiguration();
    AWS_SECURITYHUB_API SecurityControlsConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API SecurityControlsConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> A list of security controls that are enabled in the configuration policy.
     * Security Hub disables all other controls (including newly released controls)
     * other than the listed controls. </p>
     */
    inline const Aws::Vector<Aws::String>& GetEnabledSecurityControlIdentifiers() const{ return m_enabledSecurityControlIdentifiers; }
    inline bool EnabledSecurityControlIdentifiersHasBeenSet() const { return m_enabledSecurityControlIdentifiersHasBeenSet; }
    inline void SetEnabledSecurityControlIdentifiers(const Aws::Vector<Aws::String>& value) { m_enabledSecurityControlIdentifiersHasBeenSet = true; m_enabledSecurityControlIdentifiers = value; }
    inline void SetEnabledSecurityControlIdentifiers(Aws::Vector<Aws::String>&& value) { m_enabledSecurityControlIdentifiersHasBeenSet = true; m_enabledSecurityControlIdentifiers = std::move(value); }
    inline SecurityControlsConfiguration& WithEnabledSecurityControlIdentifiers(const Aws::Vector<Aws::String>& value) { SetEnabledSecurityControlIdentifiers(value); return *this;}
    inline SecurityControlsConfiguration& WithEnabledSecurityControlIdentifiers(Aws::Vector<Aws::String>&& value) { SetEnabledSecurityControlIdentifiers(std::move(value)); return *this;}
    inline SecurityControlsConfiguration& AddEnabledSecurityControlIdentifiers(const Aws::String& value) { m_enabledSecurityControlIdentifiersHasBeenSet = true; m_enabledSecurityControlIdentifiers.push_back(value); return *this; }
    inline SecurityControlsConfiguration& AddEnabledSecurityControlIdentifiers(Aws::String&& value) { m_enabledSecurityControlIdentifiersHasBeenSet = true; m_enabledSecurityControlIdentifiers.push_back(std::move(value)); return *this; }
    inline SecurityControlsConfiguration& AddEnabledSecurityControlIdentifiers(const char* value) { m_enabledSecurityControlIdentifiersHasBeenSet = true; m_enabledSecurityControlIdentifiers.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p> A list of security controls that are disabled in the configuration policy.
     * Security Hub enables all other controls (including newly released controls)
     * other than the listed controls. </p>
     */
    inline const Aws::Vector<Aws::String>& GetDisabledSecurityControlIdentifiers() const{ return m_disabledSecurityControlIdentifiers; }
    inline bool DisabledSecurityControlIdentifiersHasBeenSet() const { return m_disabledSecurityControlIdentifiersHasBeenSet; }
    inline void SetDisabledSecurityControlIdentifiers(const Aws::Vector<Aws::String>& value) { m_disabledSecurityControlIdentifiersHasBeenSet = true; m_disabledSecurityControlIdentifiers = value; }
    inline void SetDisabledSecurityControlIdentifiers(Aws::Vector<Aws::String>&& value) { m_disabledSecurityControlIdentifiersHasBeenSet = true; m_disabledSecurityControlIdentifiers = std::move(value); }
    inline SecurityControlsConfiguration& WithDisabledSecurityControlIdentifiers(const Aws::Vector<Aws::String>& value) { SetDisabledSecurityControlIdentifiers(value); return *this;}
    inline SecurityControlsConfiguration& WithDisabledSecurityControlIdentifiers(Aws::Vector<Aws::String>&& value) { SetDisabledSecurityControlIdentifiers(std::move(value)); return *this;}
    inline SecurityControlsConfiguration& AddDisabledSecurityControlIdentifiers(const Aws::String& value) { m_disabledSecurityControlIdentifiersHasBeenSet = true; m_disabledSecurityControlIdentifiers.push_back(value); return *this; }
    inline SecurityControlsConfiguration& AddDisabledSecurityControlIdentifiers(Aws::String&& value) { m_disabledSecurityControlIdentifiersHasBeenSet = true; m_disabledSecurityControlIdentifiers.push_back(std::move(value)); return *this; }
    inline SecurityControlsConfiguration& AddDisabledSecurityControlIdentifiers(const char* value) { m_disabledSecurityControlIdentifiersHasBeenSet = true; m_disabledSecurityControlIdentifiers.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p> A list of security controls and control parameter values that are included
     * in a configuration policy. </p>
     */
    inline const Aws::Vector<SecurityControlCustomParameter>& GetSecurityControlCustomParameters() const{ return m_securityControlCustomParameters; }
    inline bool SecurityControlCustomParametersHasBeenSet() const { return m_securityControlCustomParametersHasBeenSet; }
    inline void SetSecurityControlCustomParameters(const Aws::Vector<SecurityControlCustomParameter>& value) { m_securityControlCustomParametersHasBeenSet = true; m_securityControlCustomParameters = value; }
    inline void SetSecurityControlCustomParameters(Aws::Vector<SecurityControlCustomParameter>&& value) { m_securityControlCustomParametersHasBeenSet = true; m_securityControlCustomParameters = std::move(value); }
    inline SecurityControlsConfiguration& WithSecurityControlCustomParameters(const Aws::Vector<SecurityControlCustomParameter>& value) { SetSecurityControlCustomParameters(value); return *this;}
    inline SecurityControlsConfiguration& WithSecurityControlCustomParameters(Aws::Vector<SecurityControlCustomParameter>&& value) { SetSecurityControlCustomParameters(std::move(value)); return *this;}
    inline SecurityControlsConfiguration& AddSecurityControlCustomParameters(const SecurityControlCustomParameter& value) { m_securityControlCustomParametersHasBeenSet = true; m_securityControlCustomParameters.push_back(value); return *this; }
    inline SecurityControlsConfiguration& AddSecurityControlCustomParameters(SecurityControlCustomParameter&& value) { m_securityControlCustomParametersHasBeenSet = true; m_securityControlCustomParameters.push_back(std::move(value)); return *this; }
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
