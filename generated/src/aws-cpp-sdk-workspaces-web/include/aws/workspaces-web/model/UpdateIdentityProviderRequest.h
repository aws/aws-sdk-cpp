/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces-web/WorkSpacesWeb_EXPORTS.h>
#include <aws/workspaces-web/WorkSpacesWebRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/workspaces-web/model/IdentityProviderType.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace WorkSpacesWeb
{
namespace Model
{

  /**
   */
  class UpdateIdentityProviderRequest : public WorkSpacesWebRequest
  {
  public:
    AWS_WORKSPACESWEB_API UpdateIdentityProviderRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateIdentityProvider"; }

    AWS_WORKSPACESWEB_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The ARN of the identity provider.</p>
     */
    inline const Aws::String& GetIdentityProviderArn() const { return m_identityProviderArn; }
    inline bool IdentityProviderArnHasBeenSet() const { return m_identityProviderArnHasBeenSet; }
    template<typename IdentityProviderArnT = Aws::String>
    void SetIdentityProviderArn(IdentityProviderArnT&& value) { m_identityProviderArnHasBeenSet = true; m_identityProviderArn = std::forward<IdentityProviderArnT>(value); }
    template<typename IdentityProviderArnT = Aws::String>
    UpdateIdentityProviderRequest& WithIdentityProviderArn(IdentityProviderArnT&& value) { SetIdentityProviderArn(std::forward<IdentityProviderArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the identity provider.</p>
     */
    inline const Aws::String& GetIdentityProviderName() const { return m_identityProviderName; }
    inline bool IdentityProviderNameHasBeenSet() const { return m_identityProviderNameHasBeenSet; }
    template<typename IdentityProviderNameT = Aws::String>
    void SetIdentityProviderName(IdentityProviderNameT&& value) { m_identityProviderNameHasBeenSet = true; m_identityProviderName = std::forward<IdentityProviderNameT>(value); }
    template<typename IdentityProviderNameT = Aws::String>
    UpdateIdentityProviderRequest& WithIdentityProviderName(IdentityProviderNameT&& value) { SetIdentityProviderName(std::forward<IdentityProviderNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the identity provider.</p>
     */
    inline IdentityProviderType GetIdentityProviderType() const { return m_identityProviderType; }
    inline bool IdentityProviderTypeHasBeenSet() const { return m_identityProviderTypeHasBeenSet; }
    inline void SetIdentityProviderType(IdentityProviderType value) { m_identityProviderTypeHasBeenSet = true; m_identityProviderType = value; }
    inline UpdateIdentityProviderRequest& WithIdentityProviderType(IdentityProviderType value) { SetIdentityProviderType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The details of the identity provider. The following list describes the
     * provider detail keys for each identity provider type. </p> <ul> <li> <p>For
     * Google and Login with Amazon:</p> <ul> <li> <p> <code>client_id</code> </p>
     * </li> <li> <p> <code>client_secret</code> </p> </li> <li> <p>
     * <code>authorize_scopes</code> </p> </li> </ul> </li> <li> <p>For Facebook:</p>
     * <ul> <li> <p> <code>client_id</code> </p> </li> <li> <p>
     * <code>client_secret</code> </p> </li> <li> <p> <code>authorize_scopes</code>
     * </p> </li> <li> <p> <code>api_version</code> </p> </li> </ul> </li> <li> <p>For
     * Sign in with Apple:</p> <ul> <li> <p> <code>client_id</code> </p> </li> <li> <p>
     * <code>team_id</code> </p> </li> <li> <p> <code>key_id</code> </p> </li> <li> <p>
     * <code>private_key</code> </p> </li> <li> <p> <code>authorize_scopes</code> </p>
     * </li> </ul> </li> <li> <p>For OIDC providers:</p> <ul> <li> <p>
     * <code>client_id</code> </p> </li> <li> <p> <code>client_secret</code> </p> </li>
     * <li> <p> <code>attributes_request_method</code> </p> </li> <li> <p>
     * <code>oidc_issuer</code> </p> </li> <li> <p> <code>authorize_scopes</code> </p>
     * </li> <li> <p> <code>authorize_url</code> <i>if not available from discovery URL
     * specified by <code>oidc_issuer</code> key</i> </p> </li> <li> <p>
     * <code>token_url</code> <i>if not available from discovery URL specified by
     * <code>oidc_issuer</code> key</i> </p> </li> <li> <p> <code>attributes_url</code>
     * <i>if not available from discovery URL specified by <code>oidc_issuer</code>
     * key</i> </p> </li> <li> <p> <code>jwks_uri</code> <i>if not available from
     * discovery URL specified by <code>oidc_issuer</code> key</i> </p> </li> </ul>
     * </li> <li> <p>For SAML providers:</p> <ul> <li> <p> <code>MetadataFile</code> OR
     * <code>MetadataURL</code> </p> </li> <li> <p> <code>IDPSignout</code> (boolean)
     * <i>optional</i> </p> </li> <li> <p> <code>IDPInit</code> (boolean)
     * <i>optional</i> </p> </li> <li> <p> <code>RequestSigningAlgorithm</code>
     * (string) <i>optional</i> - Only accepts <code>rsa-sha256</code> </p> </li> <li>
     * <p> <code>EncryptedResponses</code> (boolean) <i>optional</i> </p> </li> </ul>
     * </li> </ul>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetIdentityProviderDetails() const { return m_identityProviderDetails; }
    inline bool IdentityProviderDetailsHasBeenSet() const { return m_identityProviderDetailsHasBeenSet; }
    template<typename IdentityProviderDetailsT = Aws::Map<Aws::String, Aws::String>>
    void SetIdentityProviderDetails(IdentityProviderDetailsT&& value) { m_identityProviderDetailsHasBeenSet = true; m_identityProviderDetails = std::forward<IdentityProviderDetailsT>(value); }
    template<typename IdentityProviderDetailsT = Aws::Map<Aws::String, Aws::String>>
    UpdateIdentityProviderRequest& WithIdentityProviderDetails(IdentityProviderDetailsT&& value) { SetIdentityProviderDetails(std::forward<IdentityProviderDetailsT>(value)); return *this;}
    template<typename IdentityProviderDetailsKeyT = Aws::String, typename IdentityProviderDetailsValueT = Aws::String>
    UpdateIdentityProviderRequest& AddIdentityProviderDetails(IdentityProviderDetailsKeyT&& key, IdentityProviderDetailsValueT&& value) {
      m_identityProviderDetailsHasBeenSet = true; m_identityProviderDetails.emplace(std::forward<IdentityProviderDetailsKeyT>(key), std::forward<IdentityProviderDetailsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request. Idempotency ensures that an API request completes
     * only once. With an idempotent request, if the original request completes
     * successfully, subsequent retries with the same client token return the result
     * from the original successful request. </p> <p>If you do not specify a client
     * token, one is automatically generated by the Amazon Web Services SDK.</p>
     */
    inline const Aws::String& GetClientToken() const { return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    template<typename ClientTokenT = Aws::String>
    void SetClientToken(ClientTokenT&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::forward<ClientTokenT>(value); }
    template<typename ClientTokenT = Aws::String>
    UpdateIdentityProviderRequest& WithClientToken(ClientTokenT&& value) { SetClientToken(std::forward<ClientTokenT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_identityProviderArn;
    bool m_identityProviderArnHasBeenSet = false;

    Aws::String m_identityProviderName;
    bool m_identityProviderNameHasBeenSet = false;

    IdentityProviderType m_identityProviderType{IdentityProviderType::NOT_SET};
    bool m_identityProviderTypeHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_identityProviderDetails;
    bool m_identityProviderDetailsHasBeenSet = false;

    Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_clientTokenHasBeenSet = true;
  };

} // namespace Model
} // namespace WorkSpacesWeb
} // namespace Aws
