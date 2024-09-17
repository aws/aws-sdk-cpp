/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/verifiedpermissions/VerifiedPermissions_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/verifiedpermissions/model/OpenIdConnectGroupConfigurationItem.h>
#include <aws/verifiedpermissions/model/OpenIdConnectTokenSelectionItem.h>
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
namespace VerifiedPermissions
{
namespace Model
{

  /**
   * <p>Contains configuration details of an OpenID Connect (OIDC) identity provider,
   * or identity source, that Verified Permissions can use to generate entities from
   * authenticated identities. It specifies the issuer URL, token type that you want
   * to use, and policy store entity details.</p> <p>This data type is part of a <a
   * href="https://docs.aws.amazon.com/verifiedpermissions/latest/apireference/API_ConfigurationDetail.html">ConfigurationItem</a>
   * structure, which is a parameter to <a
   * href="https://docs.aws.amazon.com/verifiedpermissions/latest/apireference/API_ListIdentitySources.html">ListIdentitySources</a>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/verifiedpermissions-2021-12-01/OpenIdConnectConfigurationItem">AWS
   * API Reference</a></p>
   */
  class OpenIdConnectConfigurationItem
  {
  public:
    AWS_VERIFIEDPERMISSIONS_API OpenIdConnectConfigurationItem();
    AWS_VERIFIEDPERMISSIONS_API OpenIdConnectConfigurationItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_VERIFIEDPERMISSIONS_API OpenIdConnectConfigurationItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_VERIFIEDPERMISSIONS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The issuer URL of an OIDC identity provider. This URL must have an OIDC
     * discovery endpoint at the path
     * <code>.well-known/openid-configuration</code>.</p>
     */
    inline const Aws::String& GetIssuer() const{ return m_issuer; }
    inline bool IssuerHasBeenSet() const { return m_issuerHasBeenSet; }
    inline void SetIssuer(const Aws::String& value) { m_issuerHasBeenSet = true; m_issuer = value; }
    inline void SetIssuer(Aws::String&& value) { m_issuerHasBeenSet = true; m_issuer = std::move(value); }
    inline void SetIssuer(const char* value) { m_issuerHasBeenSet = true; m_issuer.assign(value); }
    inline OpenIdConnectConfigurationItem& WithIssuer(const Aws::String& value) { SetIssuer(value); return *this;}
    inline OpenIdConnectConfigurationItem& WithIssuer(Aws::String&& value) { SetIssuer(std::move(value)); return *this;}
    inline OpenIdConnectConfigurationItem& WithIssuer(const char* value) { SetIssuer(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A descriptive string that you want to prefix to user entities from your OIDC
     * identity provider. For example, if you set an <code>entityIdPrefix</code> of
     * <code>MyOIDCProvider</code>, you can reference principals in your policies in
     * the format <code>MyCorp::User::MyOIDCProvider|Carlos</code>.</p>
     */
    inline const Aws::String& GetEntityIdPrefix() const{ return m_entityIdPrefix; }
    inline bool EntityIdPrefixHasBeenSet() const { return m_entityIdPrefixHasBeenSet; }
    inline void SetEntityIdPrefix(const Aws::String& value) { m_entityIdPrefixHasBeenSet = true; m_entityIdPrefix = value; }
    inline void SetEntityIdPrefix(Aws::String&& value) { m_entityIdPrefixHasBeenSet = true; m_entityIdPrefix = std::move(value); }
    inline void SetEntityIdPrefix(const char* value) { m_entityIdPrefixHasBeenSet = true; m_entityIdPrefix.assign(value); }
    inline OpenIdConnectConfigurationItem& WithEntityIdPrefix(const Aws::String& value) { SetEntityIdPrefix(value); return *this;}
    inline OpenIdConnectConfigurationItem& WithEntityIdPrefix(Aws::String&& value) { SetEntityIdPrefix(std::move(value)); return *this;}
    inline OpenIdConnectConfigurationItem& WithEntityIdPrefix(const char* value) { SetEntityIdPrefix(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The claim in OIDC identity provider tokens that indicates a user's group
     * membership, and the entity type that you want to map it to. For example, this
     * object can map the contents of a <code>groups</code> claim to
     * <code>MyCorp::UserGroup</code>.</p>
     */
    inline const OpenIdConnectGroupConfigurationItem& GetGroupConfiguration() const{ return m_groupConfiguration; }
    inline bool GroupConfigurationHasBeenSet() const { return m_groupConfigurationHasBeenSet; }
    inline void SetGroupConfiguration(const OpenIdConnectGroupConfigurationItem& value) { m_groupConfigurationHasBeenSet = true; m_groupConfiguration = value; }
    inline void SetGroupConfiguration(OpenIdConnectGroupConfigurationItem&& value) { m_groupConfigurationHasBeenSet = true; m_groupConfiguration = std::move(value); }
    inline OpenIdConnectConfigurationItem& WithGroupConfiguration(const OpenIdConnectGroupConfigurationItem& value) { SetGroupConfiguration(value); return *this;}
    inline OpenIdConnectConfigurationItem& WithGroupConfiguration(OpenIdConnectGroupConfigurationItem&& value) { SetGroupConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The token type that you want to process from your OIDC identity provider.
     * Your policy store can process either identity (ID) or access tokens from a given
     * OIDC identity source.</p>
     */
    inline const OpenIdConnectTokenSelectionItem& GetTokenSelection() const{ return m_tokenSelection; }
    inline bool TokenSelectionHasBeenSet() const { return m_tokenSelectionHasBeenSet; }
    inline void SetTokenSelection(const OpenIdConnectTokenSelectionItem& value) { m_tokenSelectionHasBeenSet = true; m_tokenSelection = value; }
    inline void SetTokenSelection(OpenIdConnectTokenSelectionItem&& value) { m_tokenSelectionHasBeenSet = true; m_tokenSelection = std::move(value); }
    inline OpenIdConnectConfigurationItem& WithTokenSelection(const OpenIdConnectTokenSelectionItem& value) { SetTokenSelection(value); return *this;}
    inline OpenIdConnectConfigurationItem& WithTokenSelection(OpenIdConnectTokenSelectionItem&& value) { SetTokenSelection(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_issuer;
    bool m_issuerHasBeenSet = false;

    Aws::String m_entityIdPrefix;
    bool m_entityIdPrefixHasBeenSet = false;

    OpenIdConnectGroupConfigurationItem m_groupConfiguration;
    bool m_groupConfigurationHasBeenSet = false;

    OpenIdConnectTokenSelectionItem m_tokenSelection;
    bool m_tokenSelectionHasBeenSet = false;
  };

} // namespace Model
} // namespace VerifiedPermissions
} // namespace Aws
