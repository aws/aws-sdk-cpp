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
    AWS_SSOOIDC_API RegisterClientRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "RegisterClient"; }

    AWS_SSOOIDC_API Aws::String SerializePayload() const override;


    /**
     * <p>The friendly name of the client.</p>
     */
    inline const Aws::String& GetClientName() const{ return m_clientName; }

    /**
     * <p>The friendly name of the client.</p>
     */
    inline bool ClientNameHasBeenSet() const { return m_clientNameHasBeenSet; }

    /**
     * <p>The friendly name of the client.</p>
     */
    inline void SetClientName(const Aws::String& value) { m_clientNameHasBeenSet = true; m_clientName = value; }

    /**
     * <p>The friendly name of the client.</p>
     */
    inline void SetClientName(Aws::String&& value) { m_clientNameHasBeenSet = true; m_clientName = std::move(value); }

    /**
     * <p>The friendly name of the client.</p>
     */
    inline void SetClientName(const char* value) { m_clientNameHasBeenSet = true; m_clientName.assign(value); }

    /**
     * <p>The friendly name of the client.</p>
     */
    inline RegisterClientRequest& WithClientName(const Aws::String& value) { SetClientName(value); return *this;}

    /**
     * <p>The friendly name of the client.</p>
     */
    inline RegisterClientRequest& WithClientName(Aws::String&& value) { SetClientName(std::move(value)); return *this;}

    /**
     * <p>The friendly name of the client.</p>
     */
    inline RegisterClientRequest& WithClientName(const char* value) { SetClientName(value); return *this;}


    /**
     * <p>The type of client. The service supports only <code>public</code> as a client
     * type. Anything other than public will be rejected by the service.</p>
     */
    inline const Aws::String& GetClientType() const{ return m_clientType; }

    /**
     * <p>The type of client. The service supports only <code>public</code> as a client
     * type. Anything other than public will be rejected by the service.</p>
     */
    inline bool ClientTypeHasBeenSet() const { return m_clientTypeHasBeenSet; }

    /**
     * <p>The type of client. The service supports only <code>public</code> as a client
     * type. Anything other than public will be rejected by the service.</p>
     */
    inline void SetClientType(const Aws::String& value) { m_clientTypeHasBeenSet = true; m_clientType = value; }

    /**
     * <p>The type of client. The service supports only <code>public</code> as a client
     * type. Anything other than public will be rejected by the service.</p>
     */
    inline void SetClientType(Aws::String&& value) { m_clientTypeHasBeenSet = true; m_clientType = std::move(value); }

    /**
     * <p>The type of client. The service supports only <code>public</code> as a client
     * type. Anything other than public will be rejected by the service.</p>
     */
    inline void SetClientType(const char* value) { m_clientTypeHasBeenSet = true; m_clientType.assign(value); }

    /**
     * <p>The type of client. The service supports only <code>public</code> as a client
     * type. Anything other than public will be rejected by the service.</p>
     */
    inline RegisterClientRequest& WithClientType(const Aws::String& value) { SetClientType(value); return *this;}

    /**
     * <p>The type of client. The service supports only <code>public</code> as a client
     * type. Anything other than public will be rejected by the service.</p>
     */
    inline RegisterClientRequest& WithClientType(Aws::String&& value) { SetClientType(std::move(value)); return *this;}

    /**
     * <p>The type of client. The service supports only <code>public</code> as a client
     * type. Anything other than public will be rejected by the service.</p>
     */
    inline RegisterClientRequest& WithClientType(const char* value) { SetClientType(value); return *this;}


    /**
     * <p>The list of scopes that are defined by the client. Upon authorization, this
     * list is used to restrict permissions when granting an access token.</p>
     */
    inline const Aws::Vector<Aws::String>& GetScopes() const{ return m_scopes; }

    /**
     * <p>The list of scopes that are defined by the client. Upon authorization, this
     * list is used to restrict permissions when granting an access token.</p>
     */
    inline bool ScopesHasBeenSet() const { return m_scopesHasBeenSet; }

    /**
     * <p>The list of scopes that are defined by the client. Upon authorization, this
     * list is used to restrict permissions when granting an access token.</p>
     */
    inline void SetScopes(const Aws::Vector<Aws::String>& value) { m_scopesHasBeenSet = true; m_scopes = value; }

    /**
     * <p>The list of scopes that are defined by the client. Upon authorization, this
     * list is used to restrict permissions when granting an access token.</p>
     */
    inline void SetScopes(Aws::Vector<Aws::String>&& value) { m_scopesHasBeenSet = true; m_scopes = std::move(value); }

    /**
     * <p>The list of scopes that are defined by the client. Upon authorization, this
     * list is used to restrict permissions when granting an access token.</p>
     */
    inline RegisterClientRequest& WithScopes(const Aws::Vector<Aws::String>& value) { SetScopes(value); return *this;}

    /**
     * <p>The list of scopes that are defined by the client. Upon authorization, this
     * list is used to restrict permissions when granting an access token.</p>
     */
    inline RegisterClientRequest& WithScopes(Aws::Vector<Aws::String>&& value) { SetScopes(std::move(value)); return *this;}

    /**
     * <p>The list of scopes that are defined by the client. Upon authorization, this
     * list is used to restrict permissions when granting an access token.</p>
     */
    inline RegisterClientRequest& AddScopes(const Aws::String& value) { m_scopesHasBeenSet = true; m_scopes.push_back(value); return *this; }

    /**
     * <p>The list of scopes that are defined by the client. Upon authorization, this
     * list is used to restrict permissions when granting an access token.</p>
     */
    inline RegisterClientRequest& AddScopes(Aws::String&& value) { m_scopesHasBeenSet = true; m_scopes.push_back(std::move(value)); return *this; }

    /**
     * <p>The list of scopes that are defined by the client. Upon authorization, this
     * list is used to restrict permissions when granting an access token.</p>
     */
    inline RegisterClientRequest& AddScopes(const char* value) { m_scopesHasBeenSet = true; m_scopes.push_back(value); return *this; }


    /**
     * <p>The list of redirect URI that are defined by the client. At completion of
     * authorization, this list is used to restrict what locations the user agent can
     * be redirected back to.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRedirectUris() const{ return m_redirectUris; }

    /**
     * <p>The list of redirect URI that are defined by the client. At completion of
     * authorization, this list is used to restrict what locations the user agent can
     * be redirected back to.</p>
     */
    inline bool RedirectUrisHasBeenSet() const { return m_redirectUrisHasBeenSet; }

    /**
     * <p>The list of redirect URI that are defined by the client. At completion of
     * authorization, this list is used to restrict what locations the user agent can
     * be redirected back to.</p>
     */
    inline void SetRedirectUris(const Aws::Vector<Aws::String>& value) { m_redirectUrisHasBeenSet = true; m_redirectUris = value; }

    /**
     * <p>The list of redirect URI that are defined by the client. At completion of
     * authorization, this list is used to restrict what locations the user agent can
     * be redirected back to.</p>
     */
    inline void SetRedirectUris(Aws::Vector<Aws::String>&& value) { m_redirectUrisHasBeenSet = true; m_redirectUris = std::move(value); }

    /**
     * <p>The list of redirect URI that are defined by the client. At completion of
     * authorization, this list is used to restrict what locations the user agent can
     * be redirected back to.</p>
     */
    inline RegisterClientRequest& WithRedirectUris(const Aws::Vector<Aws::String>& value) { SetRedirectUris(value); return *this;}

    /**
     * <p>The list of redirect URI that are defined by the client. At completion of
     * authorization, this list is used to restrict what locations the user agent can
     * be redirected back to.</p>
     */
    inline RegisterClientRequest& WithRedirectUris(Aws::Vector<Aws::String>&& value) { SetRedirectUris(std::move(value)); return *this;}

    /**
     * <p>The list of redirect URI that are defined by the client. At completion of
     * authorization, this list is used to restrict what locations the user agent can
     * be redirected back to.</p>
     */
    inline RegisterClientRequest& AddRedirectUris(const Aws::String& value) { m_redirectUrisHasBeenSet = true; m_redirectUris.push_back(value); return *this; }

    /**
     * <p>The list of redirect URI that are defined by the client. At completion of
     * authorization, this list is used to restrict what locations the user agent can
     * be redirected back to.</p>
     */
    inline RegisterClientRequest& AddRedirectUris(Aws::String&& value) { m_redirectUrisHasBeenSet = true; m_redirectUris.push_back(std::move(value)); return *this; }

    /**
     * <p>The list of redirect URI that are defined by the client. At completion of
     * authorization, this list is used to restrict what locations the user agent can
     * be redirected back to.</p>
     */
    inline RegisterClientRequest& AddRedirectUris(const char* value) { m_redirectUrisHasBeenSet = true; m_redirectUris.push_back(value); return *this; }


    /**
     * <p>The list of OAuth 2.0 grant types that are defined by the client. This list
     * is used to restrict the token granting flows available to the client.</p>
     */
    inline const Aws::Vector<Aws::String>& GetGrantTypes() const{ return m_grantTypes; }

    /**
     * <p>The list of OAuth 2.0 grant types that are defined by the client. This list
     * is used to restrict the token granting flows available to the client.</p>
     */
    inline bool GrantTypesHasBeenSet() const { return m_grantTypesHasBeenSet; }

    /**
     * <p>The list of OAuth 2.0 grant types that are defined by the client. This list
     * is used to restrict the token granting flows available to the client.</p>
     */
    inline void SetGrantTypes(const Aws::Vector<Aws::String>& value) { m_grantTypesHasBeenSet = true; m_grantTypes = value; }

    /**
     * <p>The list of OAuth 2.0 grant types that are defined by the client. This list
     * is used to restrict the token granting flows available to the client.</p>
     */
    inline void SetGrantTypes(Aws::Vector<Aws::String>&& value) { m_grantTypesHasBeenSet = true; m_grantTypes = std::move(value); }

    /**
     * <p>The list of OAuth 2.0 grant types that are defined by the client. This list
     * is used to restrict the token granting flows available to the client.</p>
     */
    inline RegisterClientRequest& WithGrantTypes(const Aws::Vector<Aws::String>& value) { SetGrantTypes(value); return *this;}

    /**
     * <p>The list of OAuth 2.0 grant types that are defined by the client. This list
     * is used to restrict the token granting flows available to the client.</p>
     */
    inline RegisterClientRequest& WithGrantTypes(Aws::Vector<Aws::String>&& value) { SetGrantTypes(std::move(value)); return *this;}

    /**
     * <p>The list of OAuth 2.0 grant types that are defined by the client. This list
     * is used to restrict the token granting flows available to the client.</p>
     */
    inline RegisterClientRequest& AddGrantTypes(const Aws::String& value) { m_grantTypesHasBeenSet = true; m_grantTypes.push_back(value); return *this; }

    /**
     * <p>The list of OAuth 2.0 grant types that are defined by the client. This list
     * is used to restrict the token granting flows available to the client.</p>
     */
    inline RegisterClientRequest& AddGrantTypes(Aws::String&& value) { m_grantTypesHasBeenSet = true; m_grantTypes.push_back(std::move(value)); return *this; }

    /**
     * <p>The list of OAuth 2.0 grant types that are defined by the client. This list
     * is used to restrict the token granting flows available to the client.</p>
     */
    inline RegisterClientRequest& AddGrantTypes(const char* value) { m_grantTypesHasBeenSet = true; m_grantTypes.push_back(value); return *this; }


    /**
     * <p>The IAM Identity Center Issuer URL associated with an instance of IAM
     * Identity Center. This value is needed for user access to resources through the
     * client.</p>
     */
    inline const Aws::String& GetIssuerUrl() const{ return m_issuerUrl; }

    /**
     * <p>The IAM Identity Center Issuer URL associated with an instance of IAM
     * Identity Center. This value is needed for user access to resources through the
     * client.</p>
     */
    inline bool IssuerUrlHasBeenSet() const { return m_issuerUrlHasBeenSet; }

    /**
     * <p>The IAM Identity Center Issuer URL associated with an instance of IAM
     * Identity Center. This value is needed for user access to resources through the
     * client.</p>
     */
    inline void SetIssuerUrl(const Aws::String& value) { m_issuerUrlHasBeenSet = true; m_issuerUrl = value; }

    /**
     * <p>The IAM Identity Center Issuer URL associated with an instance of IAM
     * Identity Center. This value is needed for user access to resources through the
     * client.</p>
     */
    inline void SetIssuerUrl(Aws::String&& value) { m_issuerUrlHasBeenSet = true; m_issuerUrl = std::move(value); }

    /**
     * <p>The IAM Identity Center Issuer URL associated with an instance of IAM
     * Identity Center. This value is needed for user access to resources through the
     * client.</p>
     */
    inline void SetIssuerUrl(const char* value) { m_issuerUrlHasBeenSet = true; m_issuerUrl.assign(value); }

    /**
     * <p>The IAM Identity Center Issuer URL associated with an instance of IAM
     * Identity Center. This value is needed for user access to resources through the
     * client.</p>
     */
    inline RegisterClientRequest& WithIssuerUrl(const Aws::String& value) { SetIssuerUrl(value); return *this;}

    /**
     * <p>The IAM Identity Center Issuer URL associated with an instance of IAM
     * Identity Center. This value is needed for user access to resources through the
     * client.</p>
     */
    inline RegisterClientRequest& WithIssuerUrl(Aws::String&& value) { SetIssuerUrl(std::move(value)); return *this;}

    /**
     * <p>The IAM Identity Center Issuer URL associated with an instance of IAM
     * Identity Center. This value is needed for user access to resources through the
     * client.</p>
     */
    inline RegisterClientRequest& WithIssuerUrl(const char* value) { SetIssuerUrl(value); return *this;}


    /**
     * <p>This IAM Identity Center application ARN is used to define
     * administrator-managed configuration for public client access to resources. At
     * authorization, the scopes, grants, and redirect URI available to this client
     * will be restricted by this application resource.</p>
     */
    inline const Aws::String& GetEntitledApplicationArn() const{ return m_entitledApplicationArn; }

    /**
     * <p>This IAM Identity Center application ARN is used to define
     * administrator-managed configuration for public client access to resources. At
     * authorization, the scopes, grants, and redirect URI available to this client
     * will be restricted by this application resource.</p>
     */
    inline bool EntitledApplicationArnHasBeenSet() const { return m_entitledApplicationArnHasBeenSet; }

    /**
     * <p>This IAM Identity Center application ARN is used to define
     * administrator-managed configuration for public client access to resources. At
     * authorization, the scopes, grants, and redirect URI available to this client
     * will be restricted by this application resource.</p>
     */
    inline void SetEntitledApplicationArn(const Aws::String& value) { m_entitledApplicationArnHasBeenSet = true; m_entitledApplicationArn = value; }

    /**
     * <p>This IAM Identity Center application ARN is used to define
     * administrator-managed configuration for public client access to resources. At
     * authorization, the scopes, grants, and redirect URI available to this client
     * will be restricted by this application resource.</p>
     */
    inline void SetEntitledApplicationArn(Aws::String&& value) { m_entitledApplicationArnHasBeenSet = true; m_entitledApplicationArn = std::move(value); }

    /**
     * <p>This IAM Identity Center application ARN is used to define
     * administrator-managed configuration for public client access to resources. At
     * authorization, the scopes, grants, and redirect URI available to this client
     * will be restricted by this application resource.</p>
     */
    inline void SetEntitledApplicationArn(const char* value) { m_entitledApplicationArnHasBeenSet = true; m_entitledApplicationArn.assign(value); }

    /**
     * <p>This IAM Identity Center application ARN is used to define
     * administrator-managed configuration for public client access to resources. At
     * authorization, the scopes, grants, and redirect URI available to this client
     * will be restricted by this application resource.</p>
     */
    inline RegisterClientRequest& WithEntitledApplicationArn(const Aws::String& value) { SetEntitledApplicationArn(value); return *this;}

    /**
     * <p>This IAM Identity Center application ARN is used to define
     * administrator-managed configuration for public client access to resources. At
     * authorization, the scopes, grants, and redirect URI available to this client
     * will be restricted by this application resource.</p>
     */
    inline RegisterClientRequest& WithEntitledApplicationArn(Aws::String&& value) { SetEntitledApplicationArn(std::move(value)); return *this;}

    /**
     * <p>This IAM Identity Center application ARN is used to define
     * administrator-managed configuration for public client access to resources. At
     * authorization, the scopes, grants, and redirect URI available to this client
     * will be restricted by this application resource.</p>
     */
    inline RegisterClientRequest& WithEntitledApplicationArn(const char* value) { SetEntitledApplicationArn(value); return *this;}

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
