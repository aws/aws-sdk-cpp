/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/securityhub/SecurityHubRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace SecurityHub
{
namespace Model
{

  /**
   */
  class ConnectorRegistrationsV2Request : public SecurityHubRequest
  {
  public:
    AWS_SECURITYHUB_API ConnectorRegistrationsV2Request() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ConnectorRegistrationsV2"; }

    AWS_SECURITYHUB_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The authCode retrieved from authUrl to complete the OAuth 2.0 authorization
     * code flow.</p>
     */
    inline const Aws::String& GetAuthCode() const { return m_authCode; }
    inline bool AuthCodeHasBeenSet() const { return m_authCodeHasBeenSet; }
    template<typename AuthCodeT = Aws::String>
    void SetAuthCode(AuthCodeT&& value) { m_authCodeHasBeenSet = true; m_authCode = std::forward<AuthCodeT>(value); }
    template<typename AuthCodeT = Aws::String>
    ConnectorRegistrationsV2Request& WithAuthCode(AuthCodeT&& value) { SetAuthCode(std::forward<AuthCodeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The authState retrieved from authUrl to complete the OAuth 2.0 authorization
     * code flow.</p>
     */
    inline const Aws::String& GetAuthState() const { return m_authState; }
    inline bool AuthStateHasBeenSet() const { return m_authStateHasBeenSet; }
    template<typename AuthStateT = Aws::String>
    void SetAuthState(AuthStateT&& value) { m_authStateHasBeenSet = true; m_authState = std::forward<AuthStateT>(value); }
    template<typename AuthStateT = Aws::String>
    ConnectorRegistrationsV2Request& WithAuthState(AuthStateT&& value) { SetAuthState(std::forward<AuthStateT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_authCode;
    bool m_authCodeHasBeenSet = false;

    Aws::String m_authState;
    bool m_authStateHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
