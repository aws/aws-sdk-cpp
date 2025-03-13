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
  class DeleteTrustedTokenIssuerRequest : public SSOAdminRequest
  {
  public:
    AWS_SSOADMIN_API DeleteTrustedTokenIssuerRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteTrustedTokenIssuer"; }

    AWS_SSOADMIN_API Aws::String SerializePayload() const override;

    AWS_SSOADMIN_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>Specifies the ARN of the trusted token issuer configuration to delete.</p>
     */
    inline const Aws::String& GetTrustedTokenIssuerArn() const { return m_trustedTokenIssuerArn; }
    inline bool TrustedTokenIssuerArnHasBeenSet() const { return m_trustedTokenIssuerArnHasBeenSet; }
    template<typename TrustedTokenIssuerArnT = Aws::String>
    void SetTrustedTokenIssuerArn(TrustedTokenIssuerArnT&& value) { m_trustedTokenIssuerArnHasBeenSet = true; m_trustedTokenIssuerArn = std::forward<TrustedTokenIssuerArnT>(value); }
    template<typename TrustedTokenIssuerArnT = Aws::String>
    DeleteTrustedTokenIssuerRequest& WithTrustedTokenIssuerArn(TrustedTokenIssuerArnT&& value) { SetTrustedTokenIssuerArn(std::forward<TrustedTokenIssuerArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_trustedTokenIssuerArn;
    bool m_trustedTokenIssuerArnHasBeenSet = false;
  };

} // namespace Model
} // namespace SSOAdmin
} // namespace Aws
