/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sso-oidc/SSOOIDC_EXPORTS.h>
#include <aws/sso-oidc/SSOOIDCRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace SSOOIDC
{
namespace Model
{

  /**
   */
  class RegisterClientRequest : public SSOOIDCRequest
  {
  public:
    AWS_SSOOIDC_API RegisterClientRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "RegisterClient"; }

    AWS_SSOOIDC_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The friendly name of the client.</p>
     */
    inline const Aws::String& GetClientName() const { return m_clientName; }
    inline bool ClientNameHasBeenSet() const { return m_clientNameHasBeenSet; }
    template<typename ClientNameT = Aws::String>
    void SetClientName(ClientNameT&& value) { m_clientNameHasBeenSet = true; m_clientName = std::forward<ClientNameT>(value); }
    template<typename ClientNameT = Aws::String>
    RegisterClientRequest& WithClientName(ClientNameT&& value) { SetClientName(std::forward<ClientNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of client. The service supports only <code>public</code> as a client
     * type. Anything other than public will be rejected by the service.</p>
     */
    inline const Aws::String& GetClientType() const { return m_clientType; }
    inline bool ClientTypeHasBeenSet() const { return m_clientTypeHasBeenSet; }
    template<typename ClientTypeT = Aws::String>
    void SetClientType(ClientTypeT&& value) { m_clientTypeHasBeenSet = true; m_clientType = std::forward<ClientTypeT>(value); }
    template<typename ClientTypeT = Aws::String>
    RegisterClientRequest& WithClientType(ClientTypeT&& value) { SetClientType(std::forward<ClientTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of scopes that are defined by the client. Upon authorization, this
     * list is used to restrict permissions when granting an access token.</p>
     */
    inline const Aws::Vector<Aws::String>& GetScopes() const { return m_scopes; }
    inline bool ScopesHasBeenSet() const { return m_scopesHasBeenSet; }
    template<typename ScopesT = Aws::Vector<Aws::String>>
    void SetScopes(ScopesT&& value) { m_scopesHasBeenSet = true; m_scopes = std::forward<ScopesT>(value); }
    template<typename ScopesT = Aws::Vector<Aws::String>>
    RegisterClientRequest& WithScopes(ScopesT&& value) { SetScopes(std::forward<ScopesT>(value)); return *this;}
    template<typename ScopesT = Aws::String>
    RegisterClientRequest& AddScopes(ScopesT&& value) { m_scopesHasBeenSet = true; m_scopes.emplace_back(std::forward<ScopesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The list of redirect URI that are defined by the client. At completion of
     * authorization, this list is used to restrict what locations the user agent can
     * be redirected back to.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRedirectUris() const { return m_redirectUris; }
    inline bool RedirectUrisHasBeenSet() const { return m_redirectUrisHasBeenSet; }
    template<typename RedirectUrisT = Aws::Vector<Aws::String>>
    void SetRedirectUris(RedirectUrisT&& value) { m_redirectUrisHasBeenSet = true; m_redirectUris = std::forward<RedirectUrisT>(value); }
    template<typename RedirectUrisT = Aws::Vector<Aws::String>>
    RegisterClientRequest& WithRedirectUris(RedirectUrisT&& value) { SetRedirectUris(std::forward<RedirectUrisT>(value)); return *this;}
    template<typename RedirectUrisT = Aws::String>
    RegisterClientRequest& AddRedirectUris(RedirectUrisT&& value) { m_redirectUrisHasBeenSet = true; m_redirectUris.emplace_back(std::forward<RedirectUrisT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The list of OAuth 2.0 grant types that are defined by the client. This list
     * is used to restrict the token granting flows available to the client. Supports
     * the following OAuth 2.0 grant types: Authorization Code, Device Code, and
     * Refresh Token. </p> <p>* Authorization Code - <code>authorization_code</code>
     * </p> <p>* Device Code -
     * <code>urn:ietf:params:oauth:grant-type:device_code</code> </p> <p>* Refresh
     * Token - <code>refresh_token</code> </p>
     */
    inline const Aws::Vector<Aws::String>& GetGrantTypes() const { return m_grantTypes; }
    inline bool GrantTypesHasBeenSet() const { return m_grantTypesHasBeenSet; }
    template<typename GrantTypesT = Aws::Vector<Aws::String>>
    void SetGrantTypes(GrantTypesT&& value) { m_grantTypesHasBeenSet = true; m_grantTypes = std::forward<GrantTypesT>(value); }
    template<typename GrantTypesT = Aws::Vector<Aws::String>>
    RegisterClientRequest& WithGrantTypes(GrantTypesT&& value) { SetGrantTypes(std::forward<GrantTypesT>(value)); return *this;}
    template<typename GrantTypesT = Aws::String>
    RegisterClientRequest& AddGrantTypes(GrantTypesT&& value) { m_grantTypesHasBeenSet = true; m_grantTypes.emplace_back(std::forward<GrantTypesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The IAM Identity Center Issuer URL associated with an instance of IAM
     * Identity Center. This value is needed for user access to resources through the
     * client.</p>
     */
    inline const Aws::String& GetIssuerUrl() const { return m_issuerUrl; }
    inline bool IssuerUrlHasBeenSet() const { return m_issuerUrlHasBeenSet; }
    template<typename IssuerUrlT = Aws::String>
    void SetIssuerUrl(IssuerUrlT&& value) { m_issuerUrlHasBeenSet = true; m_issuerUrl = std::forward<IssuerUrlT>(value); }
    template<typename IssuerUrlT = Aws::String>
    RegisterClientRequest& WithIssuerUrl(IssuerUrlT&& value) { SetIssuerUrl(std::forward<IssuerUrlT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>This IAM Identity Center application ARN is used to define
     * administrator-managed configuration for public client access to resources. At
     * authorization, the scopes, grants, and redirect URI available to this client
     * will be restricted by this application resource.</p>
     */
    inline const Aws::String& GetEntitledApplicationArn() const { return m_entitledApplicationArn; }
    inline bool EntitledApplicationArnHasBeenSet() const { return m_entitledApplicationArnHasBeenSet; }
    template<typename EntitledApplicationArnT = Aws::String>
    void SetEntitledApplicationArn(EntitledApplicationArnT&& value) { m_entitledApplicationArnHasBeenSet = true; m_entitledApplicationArn = std::forward<EntitledApplicationArnT>(value); }
    template<typename EntitledApplicationArnT = Aws::String>
    RegisterClientRequest& WithEntitledApplicationArn(EntitledApplicationArnT&& value) { SetEntitledApplicationArn(std::forward<EntitledApplicationArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_clientName;
    bool m_clientNameHasBeenSet = false;

    Aws::String m_clientType;
    bool m_clientTypeHasBeenSet = false;

    Aws::Vector<Aws::String> m_scopes;
    bool m_scopesHasBeenSet = false;

    Aws::Vector<Aws::String> m_redirectUris;
    bool m_redirectUrisHasBeenSet = false;

    Aws::Vector<Aws::String> m_grantTypes;
    bool m_grantTypesHasBeenSet = false;

    Aws::String m_issuerUrl;
    bool m_issuerUrlHasBeenSet = false;

    Aws::String m_entitledApplicationArn;
    bool m_entitledApplicationArnHasBeenSet = false;
  };

} // namespace Model
} // namespace SSOOIDC
} // namespace Aws
