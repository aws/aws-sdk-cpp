/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces-web/WorkSpacesWeb_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/workspaces-web/model/IdentityProviderType.h>
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
namespace WorkSpacesWeb
{
namespace Model
{

  /**
   * <p>The identity provider.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-web-2020-07-08/IdentityProvider">AWS
   * API Reference</a></p>
   */
  class IdentityProvider
  {
  public:
    AWS_WORKSPACESWEB_API IdentityProvider();
    AWS_WORKSPACESWEB_API IdentityProvider(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACESWEB_API IdentityProvider& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACESWEB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ARN of the identity provider.</p>
     */
    inline const Aws::String& GetIdentityProviderArn() const{ return m_identityProviderArn; }

    /**
     * <p>The ARN of the identity provider.</p>
     */
    inline bool IdentityProviderArnHasBeenSet() const { return m_identityProviderArnHasBeenSet; }

    /**
     * <p>The ARN of the identity provider.</p>
     */
    inline void SetIdentityProviderArn(const Aws::String& value) { m_identityProviderArnHasBeenSet = true; m_identityProviderArn = value; }

    /**
     * <p>The ARN of the identity provider.</p>
     */
    inline void SetIdentityProviderArn(Aws::String&& value) { m_identityProviderArnHasBeenSet = true; m_identityProviderArn = std::move(value); }

    /**
     * <p>The ARN of the identity provider.</p>
     */
    inline void SetIdentityProviderArn(const char* value) { m_identityProviderArnHasBeenSet = true; m_identityProviderArn.assign(value); }

    /**
     * <p>The ARN of the identity provider.</p>
     */
    inline IdentityProvider& WithIdentityProviderArn(const Aws::String& value) { SetIdentityProviderArn(value); return *this;}

    /**
     * <p>The ARN of the identity provider.</p>
     */
    inline IdentityProvider& WithIdentityProviderArn(Aws::String&& value) { SetIdentityProviderArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the identity provider.</p>
     */
    inline IdentityProvider& WithIdentityProviderArn(const char* value) { SetIdentityProviderArn(value); return *this;}


    /**
     * <p>The identity provider details. The following list describes the provider
     * detail keys for each identity provider type. </p> <ul> <li> <p>For Google and
     * Login with Amazon:</p> <ul> <li> <p> <code>client_id</code> </p> </li> <li> <p>
     * <code>client_secret</code> </p> </li> <li> <p> <code>authorize_scopes</code>
     * </p> </li> </ul> </li> <li> <p>For Facebook:</p> <ul> <li> <p>
     * <code>client_id</code> </p> </li> <li> <p> <code>client_secret</code> </p> </li>
     * <li> <p> <code>authorize_scopes</code> </p> </li> <li> <p>
     * <code>api_version</code> </p> </li> </ul> </li> <li> <p>For Sign in with
     * Apple:</p> <ul> <li> <p> <code>client_id</code> </p> </li> <li> <p>
     * <code>team_id</code> </p> </li> <li> <p> <code>key_id</code> </p> </li> <li> <p>
     * <code>private_key</code> </p> </li> <li> <p> <code>authorize_scopes</code> </p>
     * </li> </ul> </li> <li> <p>For OIDC providers:</p> <ul> <li> <p>
     * <code>client_id</code> </p> </li> <li> <p> <code>client_secret</code> </p> </li>
     * <li> <p> <code>attributes_request_method</code> </p> </li> <li> <p>
     * <code>oidc_issuer</code> </p> </li> <li> <p> <code>authorize_scopes</code> </p>
     * </li> <li> <p> <code>authorize_url</code> <i>if not available from discovery URL
     * specified by oidc_issuer key</i> </p> </li> <li> <p> <code>token_url</code>
     * <i>if not available from discovery URL specified by oidc_issuer key</i> </p>
     * </li> <li> <p> <code>attributes_url</code> <i>if not available from discovery
     * URL specified by oidc_issuer key</i> </p> </li> <li> <p> <code>jwks_uri</code>
     * <i>if not available from discovery URL specified by oidc_issuer key</i> </p>
     * </li> </ul> </li> <li> <p>For SAML providers:</p> <ul> <li> <p>
     * <code>MetadataFile</code> OR <code>MetadataURL</code> </p> </li> <li> <p>
     * <code>IDPSignout</code> <i>optional</i> </p> </li> </ul> </li> </ul>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetIdentityProviderDetails() const{ return m_identityProviderDetails; }

    /**
     * <p>The identity provider details. The following list describes the provider
     * detail keys for each identity provider type. </p> <ul> <li> <p>For Google and
     * Login with Amazon:</p> <ul> <li> <p> <code>client_id</code> </p> </li> <li> <p>
     * <code>client_secret</code> </p> </li> <li> <p> <code>authorize_scopes</code>
     * </p> </li> </ul> </li> <li> <p>For Facebook:</p> <ul> <li> <p>
     * <code>client_id</code> </p> </li> <li> <p> <code>client_secret</code> </p> </li>
     * <li> <p> <code>authorize_scopes</code> </p> </li> <li> <p>
     * <code>api_version</code> </p> </li> </ul> </li> <li> <p>For Sign in with
     * Apple:</p> <ul> <li> <p> <code>client_id</code> </p> </li> <li> <p>
     * <code>team_id</code> </p> </li> <li> <p> <code>key_id</code> </p> </li> <li> <p>
     * <code>private_key</code> </p> </li> <li> <p> <code>authorize_scopes</code> </p>
     * </li> </ul> </li> <li> <p>For OIDC providers:</p> <ul> <li> <p>
     * <code>client_id</code> </p> </li> <li> <p> <code>client_secret</code> </p> </li>
     * <li> <p> <code>attributes_request_method</code> </p> </li> <li> <p>
     * <code>oidc_issuer</code> </p> </li> <li> <p> <code>authorize_scopes</code> </p>
     * </li> <li> <p> <code>authorize_url</code> <i>if not available from discovery URL
     * specified by oidc_issuer key</i> </p> </li> <li> <p> <code>token_url</code>
     * <i>if not available from discovery URL specified by oidc_issuer key</i> </p>
     * </li> <li> <p> <code>attributes_url</code> <i>if not available from discovery
     * URL specified by oidc_issuer key</i> </p> </li> <li> <p> <code>jwks_uri</code>
     * <i>if not available from discovery URL specified by oidc_issuer key</i> </p>
     * </li> </ul> </li> <li> <p>For SAML providers:</p> <ul> <li> <p>
     * <code>MetadataFile</code> OR <code>MetadataURL</code> </p> </li> <li> <p>
     * <code>IDPSignout</code> <i>optional</i> </p> </li> </ul> </li> </ul>
     */
    inline bool IdentityProviderDetailsHasBeenSet() const { return m_identityProviderDetailsHasBeenSet; }

    /**
     * <p>The identity provider details. The following list describes the provider
     * detail keys for each identity provider type. </p> <ul> <li> <p>For Google and
     * Login with Amazon:</p> <ul> <li> <p> <code>client_id</code> </p> </li> <li> <p>
     * <code>client_secret</code> </p> </li> <li> <p> <code>authorize_scopes</code>
     * </p> </li> </ul> </li> <li> <p>For Facebook:</p> <ul> <li> <p>
     * <code>client_id</code> </p> </li> <li> <p> <code>client_secret</code> </p> </li>
     * <li> <p> <code>authorize_scopes</code> </p> </li> <li> <p>
     * <code>api_version</code> </p> </li> </ul> </li> <li> <p>For Sign in with
     * Apple:</p> <ul> <li> <p> <code>client_id</code> </p> </li> <li> <p>
     * <code>team_id</code> </p> </li> <li> <p> <code>key_id</code> </p> </li> <li> <p>
     * <code>private_key</code> </p> </li> <li> <p> <code>authorize_scopes</code> </p>
     * </li> </ul> </li> <li> <p>For OIDC providers:</p> <ul> <li> <p>
     * <code>client_id</code> </p> </li> <li> <p> <code>client_secret</code> </p> </li>
     * <li> <p> <code>attributes_request_method</code> </p> </li> <li> <p>
     * <code>oidc_issuer</code> </p> </li> <li> <p> <code>authorize_scopes</code> </p>
     * </li> <li> <p> <code>authorize_url</code> <i>if not available from discovery URL
     * specified by oidc_issuer key</i> </p> </li> <li> <p> <code>token_url</code>
     * <i>if not available from discovery URL specified by oidc_issuer key</i> </p>
     * </li> <li> <p> <code>attributes_url</code> <i>if not available from discovery
     * URL specified by oidc_issuer key</i> </p> </li> <li> <p> <code>jwks_uri</code>
     * <i>if not available from discovery URL specified by oidc_issuer key</i> </p>
     * </li> </ul> </li> <li> <p>For SAML providers:</p> <ul> <li> <p>
     * <code>MetadataFile</code> OR <code>MetadataURL</code> </p> </li> <li> <p>
     * <code>IDPSignout</code> <i>optional</i> </p> </li> </ul> </li> </ul>
     */
    inline void SetIdentityProviderDetails(const Aws::Map<Aws::String, Aws::String>& value) { m_identityProviderDetailsHasBeenSet = true; m_identityProviderDetails = value; }

    /**
     * <p>The identity provider details. The following list describes the provider
     * detail keys for each identity provider type. </p> <ul> <li> <p>For Google and
     * Login with Amazon:</p> <ul> <li> <p> <code>client_id</code> </p> </li> <li> <p>
     * <code>client_secret</code> </p> </li> <li> <p> <code>authorize_scopes</code>
     * </p> </li> </ul> </li> <li> <p>For Facebook:</p> <ul> <li> <p>
     * <code>client_id</code> </p> </li> <li> <p> <code>client_secret</code> </p> </li>
     * <li> <p> <code>authorize_scopes</code> </p> </li> <li> <p>
     * <code>api_version</code> </p> </li> </ul> </li> <li> <p>For Sign in with
     * Apple:</p> <ul> <li> <p> <code>client_id</code> </p> </li> <li> <p>
     * <code>team_id</code> </p> </li> <li> <p> <code>key_id</code> </p> </li> <li> <p>
     * <code>private_key</code> </p> </li> <li> <p> <code>authorize_scopes</code> </p>
     * </li> </ul> </li> <li> <p>For OIDC providers:</p> <ul> <li> <p>
     * <code>client_id</code> </p> </li> <li> <p> <code>client_secret</code> </p> </li>
     * <li> <p> <code>attributes_request_method</code> </p> </li> <li> <p>
     * <code>oidc_issuer</code> </p> </li> <li> <p> <code>authorize_scopes</code> </p>
     * </li> <li> <p> <code>authorize_url</code> <i>if not available from discovery URL
     * specified by oidc_issuer key</i> </p> </li> <li> <p> <code>token_url</code>
     * <i>if not available from discovery URL specified by oidc_issuer key</i> </p>
     * </li> <li> <p> <code>attributes_url</code> <i>if not available from discovery
     * URL specified by oidc_issuer key</i> </p> </li> <li> <p> <code>jwks_uri</code>
     * <i>if not available from discovery URL specified by oidc_issuer key</i> </p>
     * </li> </ul> </li> <li> <p>For SAML providers:</p> <ul> <li> <p>
     * <code>MetadataFile</code> OR <code>MetadataURL</code> </p> </li> <li> <p>
     * <code>IDPSignout</code> <i>optional</i> </p> </li> </ul> </li> </ul>
     */
    inline void SetIdentityProviderDetails(Aws::Map<Aws::String, Aws::String>&& value) { m_identityProviderDetailsHasBeenSet = true; m_identityProviderDetails = std::move(value); }

    /**
     * <p>The identity provider details. The following list describes the provider
     * detail keys for each identity provider type. </p> <ul> <li> <p>For Google and
     * Login with Amazon:</p> <ul> <li> <p> <code>client_id</code> </p> </li> <li> <p>
     * <code>client_secret</code> </p> </li> <li> <p> <code>authorize_scopes</code>
     * </p> </li> </ul> </li> <li> <p>For Facebook:</p> <ul> <li> <p>
     * <code>client_id</code> </p> </li> <li> <p> <code>client_secret</code> </p> </li>
     * <li> <p> <code>authorize_scopes</code> </p> </li> <li> <p>
     * <code>api_version</code> </p> </li> </ul> </li> <li> <p>For Sign in with
     * Apple:</p> <ul> <li> <p> <code>client_id</code> </p> </li> <li> <p>
     * <code>team_id</code> </p> </li> <li> <p> <code>key_id</code> </p> </li> <li> <p>
     * <code>private_key</code> </p> </li> <li> <p> <code>authorize_scopes</code> </p>
     * </li> </ul> </li> <li> <p>For OIDC providers:</p> <ul> <li> <p>
     * <code>client_id</code> </p> </li> <li> <p> <code>client_secret</code> </p> </li>
     * <li> <p> <code>attributes_request_method</code> </p> </li> <li> <p>
     * <code>oidc_issuer</code> </p> </li> <li> <p> <code>authorize_scopes</code> </p>
     * </li> <li> <p> <code>authorize_url</code> <i>if not available from discovery URL
     * specified by oidc_issuer key</i> </p> </li> <li> <p> <code>token_url</code>
     * <i>if not available from discovery URL specified by oidc_issuer key</i> </p>
     * </li> <li> <p> <code>attributes_url</code> <i>if not available from discovery
     * URL specified by oidc_issuer key</i> </p> </li> <li> <p> <code>jwks_uri</code>
     * <i>if not available from discovery URL specified by oidc_issuer key</i> </p>
     * </li> </ul> </li> <li> <p>For SAML providers:</p> <ul> <li> <p>
     * <code>MetadataFile</code> OR <code>MetadataURL</code> </p> </li> <li> <p>
     * <code>IDPSignout</code> <i>optional</i> </p> </li> </ul> </li> </ul>
     */
    inline IdentityProvider& WithIdentityProviderDetails(const Aws::Map<Aws::String, Aws::String>& value) { SetIdentityProviderDetails(value); return *this;}

    /**
     * <p>The identity provider details. The following list describes the provider
     * detail keys for each identity provider type. </p> <ul> <li> <p>For Google and
     * Login with Amazon:</p> <ul> <li> <p> <code>client_id</code> </p> </li> <li> <p>
     * <code>client_secret</code> </p> </li> <li> <p> <code>authorize_scopes</code>
     * </p> </li> </ul> </li> <li> <p>For Facebook:</p> <ul> <li> <p>
     * <code>client_id</code> </p> </li> <li> <p> <code>client_secret</code> </p> </li>
     * <li> <p> <code>authorize_scopes</code> </p> </li> <li> <p>
     * <code>api_version</code> </p> </li> </ul> </li> <li> <p>For Sign in with
     * Apple:</p> <ul> <li> <p> <code>client_id</code> </p> </li> <li> <p>
     * <code>team_id</code> </p> </li> <li> <p> <code>key_id</code> </p> </li> <li> <p>
     * <code>private_key</code> </p> </li> <li> <p> <code>authorize_scopes</code> </p>
     * </li> </ul> </li> <li> <p>For OIDC providers:</p> <ul> <li> <p>
     * <code>client_id</code> </p> </li> <li> <p> <code>client_secret</code> </p> </li>
     * <li> <p> <code>attributes_request_method</code> </p> </li> <li> <p>
     * <code>oidc_issuer</code> </p> </li> <li> <p> <code>authorize_scopes</code> </p>
     * </li> <li> <p> <code>authorize_url</code> <i>if not available from discovery URL
     * specified by oidc_issuer key</i> </p> </li> <li> <p> <code>token_url</code>
     * <i>if not available from discovery URL specified by oidc_issuer key</i> </p>
     * </li> <li> <p> <code>attributes_url</code> <i>if not available from discovery
     * URL specified by oidc_issuer key</i> </p> </li> <li> <p> <code>jwks_uri</code>
     * <i>if not available from discovery URL specified by oidc_issuer key</i> </p>
     * </li> </ul> </li> <li> <p>For SAML providers:</p> <ul> <li> <p>
     * <code>MetadataFile</code> OR <code>MetadataURL</code> </p> </li> <li> <p>
     * <code>IDPSignout</code> <i>optional</i> </p> </li> </ul> </li> </ul>
     */
    inline IdentityProvider& WithIdentityProviderDetails(Aws::Map<Aws::String, Aws::String>&& value) { SetIdentityProviderDetails(std::move(value)); return *this;}

    /**
     * <p>The identity provider details. The following list describes the provider
     * detail keys for each identity provider type. </p> <ul> <li> <p>For Google and
     * Login with Amazon:</p> <ul> <li> <p> <code>client_id</code> </p> </li> <li> <p>
     * <code>client_secret</code> </p> </li> <li> <p> <code>authorize_scopes</code>
     * </p> </li> </ul> </li> <li> <p>For Facebook:</p> <ul> <li> <p>
     * <code>client_id</code> </p> </li> <li> <p> <code>client_secret</code> </p> </li>
     * <li> <p> <code>authorize_scopes</code> </p> </li> <li> <p>
     * <code>api_version</code> </p> </li> </ul> </li> <li> <p>For Sign in with
     * Apple:</p> <ul> <li> <p> <code>client_id</code> </p> </li> <li> <p>
     * <code>team_id</code> </p> </li> <li> <p> <code>key_id</code> </p> </li> <li> <p>
     * <code>private_key</code> </p> </li> <li> <p> <code>authorize_scopes</code> </p>
     * </li> </ul> </li> <li> <p>For OIDC providers:</p> <ul> <li> <p>
     * <code>client_id</code> </p> </li> <li> <p> <code>client_secret</code> </p> </li>
     * <li> <p> <code>attributes_request_method</code> </p> </li> <li> <p>
     * <code>oidc_issuer</code> </p> </li> <li> <p> <code>authorize_scopes</code> </p>
     * </li> <li> <p> <code>authorize_url</code> <i>if not available from discovery URL
     * specified by oidc_issuer key</i> </p> </li> <li> <p> <code>token_url</code>
     * <i>if not available from discovery URL specified by oidc_issuer key</i> </p>
     * </li> <li> <p> <code>attributes_url</code> <i>if not available from discovery
     * URL specified by oidc_issuer key</i> </p> </li> <li> <p> <code>jwks_uri</code>
     * <i>if not available from discovery URL specified by oidc_issuer key</i> </p>
     * </li> </ul> </li> <li> <p>For SAML providers:</p> <ul> <li> <p>
     * <code>MetadataFile</code> OR <code>MetadataURL</code> </p> </li> <li> <p>
     * <code>IDPSignout</code> <i>optional</i> </p> </li> </ul> </li> </ul>
     */
    inline IdentityProvider& AddIdentityProviderDetails(const Aws::String& key, const Aws::String& value) { m_identityProviderDetailsHasBeenSet = true; m_identityProviderDetails.emplace(key, value); return *this; }

    /**
     * <p>The identity provider details. The following list describes the provider
     * detail keys for each identity provider type. </p> <ul> <li> <p>For Google and
     * Login with Amazon:</p> <ul> <li> <p> <code>client_id</code> </p> </li> <li> <p>
     * <code>client_secret</code> </p> </li> <li> <p> <code>authorize_scopes</code>
     * </p> </li> </ul> </li> <li> <p>For Facebook:</p> <ul> <li> <p>
     * <code>client_id</code> </p> </li> <li> <p> <code>client_secret</code> </p> </li>
     * <li> <p> <code>authorize_scopes</code> </p> </li> <li> <p>
     * <code>api_version</code> </p> </li> </ul> </li> <li> <p>For Sign in with
     * Apple:</p> <ul> <li> <p> <code>client_id</code> </p> </li> <li> <p>
     * <code>team_id</code> </p> </li> <li> <p> <code>key_id</code> </p> </li> <li> <p>
     * <code>private_key</code> </p> </li> <li> <p> <code>authorize_scopes</code> </p>
     * </li> </ul> </li> <li> <p>For OIDC providers:</p> <ul> <li> <p>
     * <code>client_id</code> </p> </li> <li> <p> <code>client_secret</code> </p> </li>
     * <li> <p> <code>attributes_request_method</code> </p> </li> <li> <p>
     * <code>oidc_issuer</code> </p> </li> <li> <p> <code>authorize_scopes</code> </p>
     * </li> <li> <p> <code>authorize_url</code> <i>if not available from discovery URL
     * specified by oidc_issuer key</i> </p> </li> <li> <p> <code>token_url</code>
     * <i>if not available from discovery URL specified by oidc_issuer key</i> </p>
     * </li> <li> <p> <code>attributes_url</code> <i>if not available from discovery
     * URL specified by oidc_issuer key</i> </p> </li> <li> <p> <code>jwks_uri</code>
     * <i>if not available from discovery URL specified by oidc_issuer key</i> </p>
     * </li> </ul> </li> <li> <p>For SAML providers:</p> <ul> <li> <p>
     * <code>MetadataFile</code> OR <code>MetadataURL</code> </p> </li> <li> <p>
     * <code>IDPSignout</code> <i>optional</i> </p> </li> </ul> </li> </ul>
     */
    inline IdentityProvider& AddIdentityProviderDetails(Aws::String&& key, const Aws::String& value) { m_identityProviderDetailsHasBeenSet = true; m_identityProviderDetails.emplace(std::move(key), value); return *this; }

    /**
     * <p>The identity provider details. The following list describes the provider
     * detail keys for each identity provider type. </p> <ul> <li> <p>For Google and
     * Login with Amazon:</p> <ul> <li> <p> <code>client_id</code> </p> </li> <li> <p>
     * <code>client_secret</code> </p> </li> <li> <p> <code>authorize_scopes</code>
     * </p> </li> </ul> </li> <li> <p>For Facebook:</p> <ul> <li> <p>
     * <code>client_id</code> </p> </li> <li> <p> <code>client_secret</code> </p> </li>
     * <li> <p> <code>authorize_scopes</code> </p> </li> <li> <p>
     * <code>api_version</code> </p> </li> </ul> </li> <li> <p>For Sign in with
     * Apple:</p> <ul> <li> <p> <code>client_id</code> </p> </li> <li> <p>
     * <code>team_id</code> </p> </li> <li> <p> <code>key_id</code> </p> </li> <li> <p>
     * <code>private_key</code> </p> </li> <li> <p> <code>authorize_scopes</code> </p>
     * </li> </ul> </li> <li> <p>For OIDC providers:</p> <ul> <li> <p>
     * <code>client_id</code> </p> </li> <li> <p> <code>client_secret</code> </p> </li>
     * <li> <p> <code>attributes_request_method</code> </p> </li> <li> <p>
     * <code>oidc_issuer</code> </p> </li> <li> <p> <code>authorize_scopes</code> </p>
     * </li> <li> <p> <code>authorize_url</code> <i>if not available from discovery URL
     * specified by oidc_issuer key</i> </p> </li> <li> <p> <code>token_url</code>
     * <i>if not available from discovery URL specified by oidc_issuer key</i> </p>
     * </li> <li> <p> <code>attributes_url</code> <i>if not available from discovery
     * URL specified by oidc_issuer key</i> </p> </li> <li> <p> <code>jwks_uri</code>
     * <i>if not available from discovery URL specified by oidc_issuer key</i> </p>
     * </li> </ul> </li> <li> <p>For SAML providers:</p> <ul> <li> <p>
     * <code>MetadataFile</code> OR <code>MetadataURL</code> </p> </li> <li> <p>
     * <code>IDPSignout</code> <i>optional</i> </p> </li> </ul> </li> </ul>
     */
    inline IdentityProvider& AddIdentityProviderDetails(const Aws::String& key, Aws::String&& value) { m_identityProviderDetailsHasBeenSet = true; m_identityProviderDetails.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The identity provider details. The following list describes the provider
     * detail keys for each identity provider type. </p> <ul> <li> <p>For Google and
     * Login with Amazon:</p> <ul> <li> <p> <code>client_id</code> </p> </li> <li> <p>
     * <code>client_secret</code> </p> </li> <li> <p> <code>authorize_scopes</code>
     * </p> </li> </ul> </li> <li> <p>For Facebook:</p> <ul> <li> <p>
     * <code>client_id</code> </p> </li> <li> <p> <code>client_secret</code> </p> </li>
     * <li> <p> <code>authorize_scopes</code> </p> </li> <li> <p>
     * <code>api_version</code> </p> </li> </ul> </li> <li> <p>For Sign in with
     * Apple:</p> <ul> <li> <p> <code>client_id</code> </p> </li> <li> <p>
     * <code>team_id</code> </p> </li> <li> <p> <code>key_id</code> </p> </li> <li> <p>
     * <code>private_key</code> </p> </li> <li> <p> <code>authorize_scopes</code> </p>
     * </li> </ul> </li> <li> <p>For OIDC providers:</p> <ul> <li> <p>
     * <code>client_id</code> </p> </li> <li> <p> <code>client_secret</code> </p> </li>
     * <li> <p> <code>attributes_request_method</code> </p> </li> <li> <p>
     * <code>oidc_issuer</code> </p> </li> <li> <p> <code>authorize_scopes</code> </p>
     * </li> <li> <p> <code>authorize_url</code> <i>if not available from discovery URL
     * specified by oidc_issuer key</i> </p> </li> <li> <p> <code>token_url</code>
     * <i>if not available from discovery URL specified by oidc_issuer key</i> </p>
     * </li> <li> <p> <code>attributes_url</code> <i>if not available from discovery
     * URL specified by oidc_issuer key</i> </p> </li> <li> <p> <code>jwks_uri</code>
     * <i>if not available from discovery URL specified by oidc_issuer key</i> </p>
     * </li> </ul> </li> <li> <p>For SAML providers:</p> <ul> <li> <p>
     * <code>MetadataFile</code> OR <code>MetadataURL</code> </p> </li> <li> <p>
     * <code>IDPSignout</code> <i>optional</i> </p> </li> </ul> </li> </ul>
     */
    inline IdentityProvider& AddIdentityProviderDetails(Aws::String&& key, Aws::String&& value) { m_identityProviderDetailsHasBeenSet = true; m_identityProviderDetails.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The identity provider details. The following list describes the provider
     * detail keys for each identity provider type. </p> <ul> <li> <p>For Google and
     * Login with Amazon:</p> <ul> <li> <p> <code>client_id</code> </p> </li> <li> <p>
     * <code>client_secret</code> </p> </li> <li> <p> <code>authorize_scopes</code>
     * </p> </li> </ul> </li> <li> <p>For Facebook:</p> <ul> <li> <p>
     * <code>client_id</code> </p> </li> <li> <p> <code>client_secret</code> </p> </li>
     * <li> <p> <code>authorize_scopes</code> </p> </li> <li> <p>
     * <code>api_version</code> </p> </li> </ul> </li> <li> <p>For Sign in with
     * Apple:</p> <ul> <li> <p> <code>client_id</code> </p> </li> <li> <p>
     * <code>team_id</code> </p> </li> <li> <p> <code>key_id</code> </p> </li> <li> <p>
     * <code>private_key</code> </p> </li> <li> <p> <code>authorize_scopes</code> </p>
     * </li> </ul> </li> <li> <p>For OIDC providers:</p> <ul> <li> <p>
     * <code>client_id</code> </p> </li> <li> <p> <code>client_secret</code> </p> </li>
     * <li> <p> <code>attributes_request_method</code> </p> </li> <li> <p>
     * <code>oidc_issuer</code> </p> </li> <li> <p> <code>authorize_scopes</code> </p>
     * </li> <li> <p> <code>authorize_url</code> <i>if not available from discovery URL
     * specified by oidc_issuer key</i> </p> </li> <li> <p> <code>token_url</code>
     * <i>if not available from discovery URL specified by oidc_issuer key</i> </p>
     * </li> <li> <p> <code>attributes_url</code> <i>if not available from discovery
     * URL specified by oidc_issuer key</i> </p> </li> <li> <p> <code>jwks_uri</code>
     * <i>if not available from discovery URL specified by oidc_issuer key</i> </p>
     * </li> </ul> </li> <li> <p>For SAML providers:</p> <ul> <li> <p>
     * <code>MetadataFile</code> OR <code>MetadataURL</code> </p> </li> <li> <p>
     * <code>IDPSignout</code> <i>optional</i> </p> </li> </ul> </li> </ul>
     */
    inline IdentityProvider& AddIdentityProviderDetails(const char* key, Aws::String&& value) { m_identityProviderDetailsHasBeenSet = true; m_identityProviderDetails.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The identity provider details. The following list describes the provider
     * detail keys for each identity provider type. </p> <ul> <li> <p>For Google and
     * Login with Amazon:</p> <ul> <li> <p> <code>client_id</code> </p> </li> <li> <p>
     * <code>client_secret</code> </p> </li> <li> <p> <code>authorize_scopes</code>
     * </p> </li> </ul> </li> <li> <p>For Facebook:</p> <ul> <li> <p>
     * <code>client_id</code> </p> </li> <li> <p> <code>client_secret</code> </p> </li>
     * <li> <p> <code>authorize_scopes</code> </p> </li> <li> <p>
     * <code>api_version</code> </p> </li> </ul> </li> <li> <p>For Sign in with
     * Apple:</p> <ul> <li> <p> <code>client_id</code> </p> </li> <li> <p>
     * <code>team_id</code> </p> </li> <li> <p> <code>key_id</code> </p> </li> <li> <p>
     * <code>private_key</code> </p> </li> <li> <p> <code>authorize_scopes</code> </p>
     * </li> </ul> </li> <li> <p>For OIDC providers:</p> <ul> <li> <p>
     * <code>client_id</code> </p> </li> <li> <p> <code>client_secret</code> </p> </li>
     * <li> <p> <code>attributes_request_method</code> </p> </li> <li> <p>
     * <code>oidc_issuer</code> </p> </li> <li> <p> <code>authorize_scopes</code> </p>
     * </li> <li> <p> <code>authorize_url</code> <i>if not available from discovery URL
     * specified by oidc_issuer key</i> </p> </li> <li> <p> <code>token_url</code>
     * <i>if not available from discovery URL specified by oidc_issuer key</i> </p>
     * </li> <li> <p> <code>attributes_url</code> <i>if not available from discovery
     * URL specified by oidc_issuer key</i> </p> </li> <li> <p> <code>jwks_uri</code>
     * <i>if not available from discovery URL specified by oidc_issuer key</i> </p>
     * </li> </ul> </li> <li> <p>For SAML providers:</p> <ul> <li> <p>
     * <code>MetadataFile</code> OR <code>MetadataURL</code> </p> </li> <li> <p>
     * <code>IDPSignout</code> <i>optional</i> </p> </li> </ul> </li> </ul>
     */
    inline IdentityProvider& AddIdentityProviderDetails(Aws::String&& key, const char* value) { m_identityProviderDetailsHasBeenSet = true; m_identityProviderDetails.emplace(std::move(key), value); return *this; }

    /**
     * <p>The identity provider details. The following list describes the provider
     * detail keys for each identity provider type. </p> <ul> <li> <p>For Google and
     * Login with Amazon:</p> <ul> <li> <p> <code>client_id</code> </p> </li> <li> <p>
     * <code>client_secret</code> </p> </li> <li> <p> <code>authorize_scopes</code>
     * </p> </li> </ul> </li> <li> <p>For Facebook:</p> <ul> <li> <p>
     * <code>client_id</code> </p> </li> <li> <p> <code>client_secret</code> </p> </li>
     * <li> <p> <code>authorize_scopes</code> </p> </li> <li> <p>
     * <code>api_version</code> </p> </li> </ul> </li> <li> <p>For Sign in with
     * Apple:</p> <ul> <li> <p> <code>client_id</code> </p> </li> <li> <p>
     * <code>team_id</code> </p> </li> <li> <p> <code>key_id</code> </p> </li> <li> <p>
     * <code>private_key</code> </p> </li> <li> <p> <code>authorize_scopes</code> </p>
     * </li> </ul> </li> <li> <p>For OIDC providers:</p> <ul> <li> <p>
     * <code>client_id</code> </p> </li> <li> <p> <code>client_secret</code> </p> </li>
     * <li> <p> <code>attributes_request_method</code> </p> </li> <li> <p>
     * <code>oidc_issuer</code> </p> </li> <li> <p> <code>authorize_scopes</code> </p>
     * </li> <li> <p> <code>authorize_url</code> <i>if not available from discovery URL
     * specified by oidc_issuer key</i> </p> </li> <li> <p> <code>token_url</code>
     * <i>if not available from discovery URL specified by oidc_issuer key</i> </p>
     * </li> <li> <p> <code>attributes_url</code> <i>if not available from discovery
     * URL specified by oidc_issuer key</i> </p> </li> <li> <p> <code>jwks_uri</code>
     * <i>if not available from discovery URL specified by oidc_issuer key</i> </p>
     * </li> </ul> </li> <li> <p>For SAML providers:</p> <ul> <li> <p>
     * <code>MetadataFile</code> OR <code>MetadataURL</code> </p> </li> <li> <p>
     * <code>IDPSignout</code> <i>optional</i> </p> </li> </ul> </li> </ul>
     */
    inline IdentityProvider& AddIdentityProviderDetails(const char* key, const char* value) { m_identityProviderDetailsHasBeenSet = true; m_identityProviderDetails.emplace(key, value); return *this; }


    /**
     * <p>The identity provider name.</p>
     */
    inline const Aws::String& GetIdentityProviderName() const{ return m_identityProviderName; }

    /**
     * <p>The identity provider name.</p>
     */
    inline bool IdentityProviderNameHasBeenSet() const { return m_identityProviderNameHasBeenSet; }

    /**
     * <p>The identity provider name.</p>
     */
    inline void SetIdentityProviderName(const Aws::String& value) { m_identityProviderNameHasBeenSet = true; m_identityProviderName = value; }

    /**
     * <p>The identity provider name.</p>
     */
    inline void SetIdentityProviderName(Aws::String&& value) { m_identityProviderNameHasBeenSet = true; m_identityProviderName = std::move(value); }

    /**
     * <p>The identity provider name.</p>
     */
    inline void SetIdentityProviderName(const char* value) { m_identityProviderNameHasBeenSet = true; m_identityProviderName.assign(value); }

    /**
     * <p>The identity provider name.</p>
     */
    inline IdentityProvider& WithIdentityProviderName(const Aws::String& value) { SetIdentityProviderName(value); return *this;}

    /**
     * <p>The identity provider name.</p>
     */
    inline IdentityProvider& WithIdentityProviderName(Aws::String&& value) { SetIdentityProviderName(std::move(value)); return *this;}

    /**
     * <p>The identity provider name.</p>
     */
    inline IdentityProvider& WithIdentityProviderName(const char* value) { SetIdentityProviderName(value); return *this;}


    /**
     * <p>The identity provider type.</p>
     */
    inline const IdentityProviderType& GetIdentityProviderType() const{ return m_identityProviderType; }

    /**
     * <p>The identity provider type.</p>
     */
    inline bool IdentityProviderTypeHasBeenSet() const { return m_identityProviderTypeHasBeenSet; }

    /**
     * <p>The identity provider type.</p>
     */
    inline void SetIdentityProviderType(const IdentityProviderType& value) { m_identityProviderTypeHasBeenSet = true; m_identityProviderType = value; }

    /**
     * <p>The identity provider type.</p>
     */
    inline void SetIdentityProviderType(IdentityProviderType&& value) { m_identityProviderTypeHasBeenSet = true; m_identityProviderType = std::move(value); }

    /**
     * <p>The identity provider type.</p>
     */
    inline IdentityProvider& WithIdentityProviderType(const IdentityProviderType& value) { SetIdentityProviderType(value); return *this;}

    /**
     * <p>The identity provider type.</p>
     */
    inline IdentityProvider& WithIdentityProviderType(IdentityProviderType&& value) { SetIdentityProviderType(std::move(value)); return *this;}

  private:

    Aws::String m_identityProviderArn;
    bool m_identityProviderArnHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_identityProviderDetails;
    bool m_identityProviderDetailsHasBeenSet = false;

    Aws::String m_identityProviderName;
    bool m_identityProviderNameHasBeenSet = false;

    IdentityProviderType m_identityProviderType;
    bool m_identityProviderTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkSpacesWeb
} // namespace Aws
