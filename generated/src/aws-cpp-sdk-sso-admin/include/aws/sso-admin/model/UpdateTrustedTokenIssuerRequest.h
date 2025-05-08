/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sso-admin/SSOAdmin_EXPORTS.h>
#include <aws/sso-admin/SSOAdminRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sso-admin/model/TrustedTokenIssuerUpdateConfiguration.h>
#include <utility>

namespace Aws
{
namespace SSOAdmin
{
namespace Model
{

  /**
   */
  class UpdateTrustedTokenIssuerRequest : public SSOAdminRequest
  {
  public:
    AWS_SSOADMIN_API UpdateTrustedTokenIssuerRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateTrustedTokenIssuer"; }

    AWS_SSOADMIN_API Aws::String SerializePayload() const override;

    AWS_SSOADMIN_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>Specifies the ARN of the trusted token issuer configuration that you want to
     * update.</p>
     */
    inline const Aws::String& GetTrustedTokenIssuerArn() const { return m_trustedTokenIssuerArn; }
    inline bool TrustedTokenIssuerArnHasBeenSet() const { return m_trustedTokenIssuerArnHasBeenSet; }
    template<typename TrustedTokenIssuerArnT = Aws::String>
    void SetTrustedTokenIssuerArn(TrustedTokenIssuerArnT&& value) { m_trustedTokenIssuerArnHasBeenSet = true; m_trustedTokenIssuerArn = std::forward<TrustedTokenIssuerArnT>(value); }
    template<typename TrustedTokenIssuerArnT = Aws::String>
    UpdateTrustedTokenIssuerRequest& WithTrustedTokenIssuerArn(TrustedTokenIssuerArnT&& value) { SetTrustedTokenIssuerArn(std::forward<TrustedTokenIssuerArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the updated name to be applied to the trusted token issuer
     * configuration.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    UpdateTrustedTokenIssuerRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies a structure with settings to apply to the specified trusted token
     * issuer. The settings that you can provide are determined by the type of the
     * trusted token issuer that you are updating.</p>
     */
    inline const TrustedTokenIssuerUpdateConfiguration& GetTrustedTokenIssuerConfiguration() const { return m_trustedTokenIssuerConfiguration; }
    inline bool TrustedTokenIssuerConfigurationHasBeenSet() const { return m_trustedTokenIssuerConfigurationHasBeenSet; }
    template<typename TrustedTokenIssuerConfigurationT = TrustedTokenIssuerUpdateConfiguration>
    void SetTrustedTokenIssuerConfiguration(TrustedTokenIssuerConfigurationT&& value) { m_trustedTokenIssuerConfigurationHasBeenSet = true; m_trustedTokenIssuerConfiguration = std::forward<TrustedTokenIssuerConfigurationT>(value); }
    template<typename TrustedTokenIssuerConfigurationT = TrustedTokenIssuerUpdateConfiguration>
    UpdateTrustedTokenIssuerRequest& WithTrustedTokenIssuerConfiguration(TrustedTokenIssuerConfigurationT&& value) { SetTrustedTokenIssuerConfiguration(std::forward<TrustedTokenIssuerConfigurationT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_trustedTokenIssuerArn;
    bool m_trustedTokenIssuerArnHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    TrustedTokenIssuerUpdateConfiguration m_trustedTokenIssuerConfiguration;
    bool m_trustedTokenIssuerConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace SSOAdmin
} // namespace Aws
