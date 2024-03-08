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
    AWS_SSOADMIN_API UpdateTrustedTokenIssuerRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateTrustedTokenIssuer"; }

    AWS_SSOADMIN_API Aws::String SerializePayload() const override;

    AWS_SSOADMIN_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>Specifies the updated name to be applied to the trusted token issuer
     * configuration.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>Specifies the updated name to be applied to the trusted token issuer
     * configuration.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>Specifies the updated name to be applied to the trusted token issuer
     * configuration.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>Specifies the updated name to be applied to the trusted token issuer
     * configuration.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>Specifies the updated name to be applied to the trusted token issuer
     * configuration.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>Specifies the updated name to be applied to the trusted token issuer
     * configuration.</p>
     */
    inline UpdateTrustedTokenIssuerRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>Specifies the updated name to be applied to the trusted token issuer
     * configuration.</p>
     */
    inline UpdateTrustedTokenIssuerRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>Specifies the updated name to be applied to the trusted token issuer
     * configuration.</p>
     */
    inline UpdateTrustedTokenIssuerRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>Specifies the ARN of the trusted token issuer configuration that you want to
     * update.</p>
     */
    inline const Aws::String& GetTrustedTokenIssuerArn() const{ return m_trustedTokenIssuerArn; }

    /**
     * <p>Specifies the ARN of the trusted token issuer configuration that you want to
     * update.</p>
     */
    inline bool TrustedTokenIssuerArnHasBeenSet() const { return m_trustedTokenIssuerArnHasBeenSet; }

    /**
     * <p>Specifies the ARN of the trusted token issuer configuration that you want to
     * update.</p>
     */
    inline void SetTrustedTokenIssuerArn(const Aws::String& value) { m_trustedTokenIssuerArnHasBeenSet = true; m_trustedTokenIssuerArn = value; }

    /**
     * <p>Specifies the ARN of the trusted token issuer configuration that you want to
     * update.</p>
     */
    inline void SetTrustedTokenIssuerArn(Aws::String&& value) { m_trustedTokenIssuerArnHasBeenSet = true; m_trustedTokenIssuerArn = std::move(value); }

    /**
     * <p>Specifies the ARN of the trusted token issuer configuration that you want to
     * update.</p>
     */
    inline void SetTrustedTokenIssuerArn(const char* value) { m_trustedTokenIssuerArnHasBeenSet = true; m_trustedTokenIssuerArn.assign(value); }

    /**
     * <p>Specifies the ARN of the trusted token issuer configuration that you want to
     * update.</p>
     */
    inline UpdateTrustedTokenIssuerRequest& WithTrustedTokenIssuerArn(const Aws::String& value) { SetTrustedTokenIssuerArn(value); return *this;}

    /**
     * <p>Specifies the ARN of the trusted token issuer configuration that you want to
     * update.</p>
     */
    inline UpdateTrustedTokenIssuerRequest& WithTrustedTokenIssuerArn(Aws::String&& value) { SetTrustedTokenIssuerArn(std::move(value)); return *this;}

    /**
     * <p>Specifies the ARN of the trusted token issuer configuration that you want to
     * update.</p>
     */
    inline UpdateTrustedTokenIssuerRequest& WithTrustedTokenIssuerArn(const char* value) { SetTrustedTokenIssuerArn(value); return *this;}


    /**
     * <p>Specifies a structure with settings to apply to the specified trusted token
     * issuer. The settings that you can provide are determined by the type of the
     * trusted token issuer that you are updating.</p>
     */
    inline const TrustedTokenIssuerUpdateConfiguration& GetTrustedTokenIssuerConfiguration() const{ return m_trustedTokenIssuerConfiguration; }

    /**
     * <p>Specifies a structure with settings to apply to the specified trusted token
     * issuer. The settings that you can provide are determined by the type of the
     * trusted token issuer that you are updating.</p>
     */
    inline bool TrustedTokenIssuerConfigurationHasBeenSet() const { return m_trustedTokenIssuerConfigurationHasBeenSet; }

    /**
     * <p>Specifies a structure with settings to apply to the specified trusted token
     * issuer. The settings that you can provide are determined by the type of the
     * trusted token issuer that you are updating.</p>
     */
    inline void SetTrustedTokenIssuerConfiguration(const TrustedTokenIssuerUpdateConfiguration& value) { m_trustedTokenIssuerConfigurationHasBeenSet = true; m_trustedTokenIssuerConfiguration = value; }

    /**
     * <p>Specifies a structure with settings to apply to the specified trusted token
     * issuer. The settings that you can provide are determined by the type of the
     * trusted token issuer that you are updating.</p>
     */
    inline void SetTrustedTokenIssuerConfiguration(TrustedTokenIssuerUpdateConfiguration&& value) { m_trustedTokenIssuerConfigurationHasBeenSet = true; m_trustedTokenIssuerConfiguration = std::move(value); }

    /**
     * <p>Specifies a structure with settings to apply to the specified trusted token
     * issuer. The settings that you can provide are determined by the type of the
     * trusted token issuer that you are updating.</p>
     */
    inline UpdateTrustedTokenIssuerRequest& WithTrustedTokenIssuerConfiguration(const TrustedTokenIssuerUpdateConfiguration& value) { SetTrustedTokenIssuerConfiguration(value); return *this;}

    /**
     * <p>Specifies a structure with settings to apply to the specified trusted token
     * issuer. The settings that you can provide are determined by the type of the
     * trusted token issuer that you are updating.</p>
     */
    inline UpdateTrustedTokenIssuerRequest& WithTrustedTokenIssuerConfiguration(TrustedTokenIssuerUpdateConfiguration&& value) { SetTrustedTokenIssuerConfiguration(std::move(value)); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_trustedTokenIssuerArn;
    bool m_trustedTokenIssuerArnHasBeenSet = false;

    TrustedTokenIssuerUpdateConfiguration m_trustedTokenIssuerConfiguration;
    bool m_trustedTokenIssuerConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace SSOAdmin
} // namespace Aws
