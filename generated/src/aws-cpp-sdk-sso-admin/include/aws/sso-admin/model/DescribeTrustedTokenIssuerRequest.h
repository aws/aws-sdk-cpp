/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sso-admin/SSOAdmin_EXPORTS.h>
#include <aws/sso-admin/SSOAdminRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace SSOAdmin
{
namespace Model
{

  /**
   */
  class DescribeTrustedTokenIssuerRequest : public SSOAdminRequest
  {
  public:
    AWS_SSOADMIN_API DescribeTrustedTokenIssuerRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeTrustedTokenIssuer"; }

    AWS_SSOADMIN_API Aws::String SerializePayload() const override;

    AWS_SSOADMIN_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>Specifies the ARN of the trusted token issuer configuration that you want
     * details about.</p>
     */
    inline const Aws::String& GetTrustedTokenIssuerArn() const{ return m_trustedTokenIssuerArn; }

    /**
     * <p>Specifies the ARN of the trusted token issuer configuration that you want
     * details about.</p>
     */
    inline bool TrustedTokenIssuerArnHasBeenSet() const { return m_trustedTokenIssuerArnHasBeenSet; }

    /**
     * <p>Specifies the ARN of the trusted token issuer configuration that you want
     * details about.</p>
     */
    inline void SetTrustedTokenIssuerArn(const Aws::String& value) { m_trustedTokenIssuerArnHasBeenSet = true; m_trustedTokenIssuerArn = value; }

    /**
     * <p>Specifies the ARN of the trusted token issuer configuration that you want
     * details about.</p>
     */
    inline void SetTrustedTokenIssuerArn(Aws::String&& value) { m_trustedTokenIssuerArnHasBeenSet = true; m_trustedTokenIssuerArn = std::move(value); }

    /**
     * <p>Specifies the ARN of the trusted token issuer configuration that you want
     * details about.</p>
     */
    inline void SetTrustedTokenIssuerArn(const char* value) { m_trustedTokenIssuerArnHasBeenSet = true; m_trustedTokenIssuerArn.assign(value); }

    /**
     * <p>Specifies the ARN of the trusted token issuer configuration that you want
     * details about.</p>
     */
    inline DescribeTrustedTokenIssuerRequest& WithTrustedTokenIssuerArn(const Aws::String& value) { SetTrustedTokenIssuerArn(value); return *this;}

    /**
     * <p>Specifies the ARN of the trusted token issuer configuration that you want
     * details about.</p>
     */
    inline DescribeTrustedTokenIssuerRequest& WithTrustedTokenIssuerArn(Aws::String&& value) { SetTrustedTokenIssuerArn(std::move(value)); return *this;}

    /**
     * <p>Specifies the ARN of the trusted token issuer configuration that you want
     * details about.</p>
     */
    inline DescribeTrustedTokenIssuerRequest& WithTrustedTokenIssuerArn(const char* value) { SetTrustedTokenIssuerArn(value); return *this;}

  private:

    Aws::String m_trustedTokenIssuerArn;
    bool m_trustedTokenIssuerArnHasBeenSet = false;
  };

} // namespace Model
} // namespace SSOAdmin
} // namespace Aws
