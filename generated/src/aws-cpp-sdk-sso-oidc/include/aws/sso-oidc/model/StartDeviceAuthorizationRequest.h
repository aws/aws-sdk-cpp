/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sso-oidc/SSOOIDC_EXPORTS.h>
#include <aws/sso-oidc/SSOOIDCRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace SSOOIDC
{
namespace Model
{

  /**
   */
  class StartDeviceAuthorizationRequest : public SSOOIDCRequest
  {
  public:
    AWS_SSOOIDC_API StartDeviceAuthorizationRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartDeviceAuthorization"; }

    AWS_SSOOIDC_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The unique identifier string for the client that is registered with IAM
     * Identity Center. This value should come from the persisted result of the
     * <a>RegisterClient</a> API operation.</p>
     */
    inline const Aws::String& GetClientId() const { return m_clientId; }
    inline bool ClientIdHasBeenSet() const { return m_clientIdHasBeenSet; }
    template<typename ClientIdT = Aws::String>
    void SetClientId(ClientIdT&& value) { m_clientIdHasBeenSet = true; m_clientId = std::forward<ClientIdT>(value); }
    template<typename ClientIdT = Aws::String>
    StartDeviceAuthorizationRequest& WithClientId(ClientIdT&& value) { SetClientId(std::forward<ClientIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A secret string that is generated for the client. This value should come from
     * the persisted result of the <a>RegisterClient</a> API operation.</p>
     */
    inline const Aws::String& GetClientSecret() const { return m_clientSecret; }
    inline bool ClientSecretHasBeenSet() const { return m_clientSecretHasBeenSet; }
    template<typename ClientSecretT = Aws::String>
    void SetClientSecret(ClientSecretT&& value) { m_clientSecretHasBeenSet = true; m_clientSecret = std::forward<ClientSecretT>(value); }
    template<typename ClientSecretT = Aws::String>
    StartDeviceAuthorizationRequest& WithClientSecret(ClientSecretT&& value) { SetClientSecret(std::forward<ClientSecretT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The URL for the Amazon Web Services access portal. For more information, see
     * <a
     * href="https://docs.aws.amazon.com/singlesignon/latest/userguide/using-the-portal.html">Using
     * the Amazon Web Services access portal</a> in the <i>IAM Identity Center User
     * Guide</i>.</p>
     */
    inline const Aws::String& GetStartUrl() const { return m_startUrl; }
    inline bool StartUrlHasBeenSet() const { return m_startUrlHasBeenSet; }
    template<typename StartUrlT = Aws::String>
    void SetStartUrl(StartUrlT&& value) { m_startUrlHasBeenSet = true; m_startUrl = std::forward<StartUrlT>(value); }
    template<typename StartUrlT = Aws::String>
    StartDeviceAuthorizationRequest& WithStartUrl(StartUrlT&& value) { SetStartUrl(std::forward<StartUrlT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_clientId;
    bool m_clientIdHasBeenSet = false;

    Aws::String m_clientSecret;
    bool m_clientSecretHasBeenSet = false;

    Aws::String m_startUrl;
    bool m_startUrlHasBeenSet = false;
  };

} // namespace Model
} // namespace SSOOIDC
} // namespace Aws
