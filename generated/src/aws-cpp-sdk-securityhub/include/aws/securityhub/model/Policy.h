/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/securityhub/model/SecurityHubPolicy.h>
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
   * <p> An object that defines how Security Hub is configured. It includes whether
   * Security Hub is enabled or disabled, a list of enabled security standards, a
   * list of enabled or disabled security controls, and a list of custom parameter
   * values for specified controls. If you provide a list of security controls that
   * are enabled in the configuration policy, Security Hub disables all other
   * controls (including newly released controls). If you provide a list of security
   * controls that are disabled in the configuration policy, Security Hub enables all
   * other controls (including newly released controls). </p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/Policy">AWS
   * API Reference</a></p>
   */
  class Policy
  {
  public:
    AWS_SECURITYHUB_API Policy() = default;
    AWS_SECURITYHUB_API Policy(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Policy& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The Amazon Web Services service that the configuration policy applies to.
     * </p>
     */
    inline const SecurityHubPolicy& GetSecurityHub() const { return m_securityHub; }
    inline bool SecurityHubHasBeenSet() const { return m_securityHubHasBeenSet; }
    template<typename SecurityHubT = SecurityHubPolicy>
    void SetSecurityHub(SecurityHubT&& value) { m_securityHubHasBeenSet = true; m_securityHub = std::forward<SecurityHubT>(value); }
    template<typename SecurityHubT = SecurityHubPolicy>
    Policy& WithSecurityHub(SecurityHubT&& value) { SetSecurityHub(std::forward<SecurityHubT>(value)); return *this;}
    ///@}
  private:

    SecurityHubPolicy m_securityHub;
    bool m_securityHubHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
