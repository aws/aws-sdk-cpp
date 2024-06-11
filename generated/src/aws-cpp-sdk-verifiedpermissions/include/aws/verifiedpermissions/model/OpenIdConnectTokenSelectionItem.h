﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/verifiedpermissions/VerifiedPermissions_EXPORTS.h>
#include <aws/verifiedpermissions/model/OpenIdConnectAccessTokenConfigurationItem.h>
#include <aws/verifiedpermissions/model/OpenIdConnectIdentityTokenConfigurationItem.h>
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
   * <p>The token type that you want to process from your OIDC identity provider.
   * Your policy store can process either identity (ID) or access tokens from a given
   * OIDC identity source.</p> <p>This data type is part of a <a
   * href="https://docs.aws.amazon.com/verifiedpermissions/latest/apireference/API_OpenIdConnectConfigurationItem.html">OpenIdConnectConfigurationItem</a>
   * structure, which is a parameter of <a
   * href="http://amazonaws.com/verifiedpermissions/latest/apireference/API_ListIdentitySources.html">ListIdentitySources</a>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/verifiedpermissions-2021-12-01/OpenIdConnectTokenSelectionItem">AWS
   * API Reference</a></p>
   */
  class OpenIdConnectTokenSelectionItem
  {
  public:
    AWS_VERIFIEDPERMISSIONS_API OpenIdConnectTokenSelectionItem();
    AWS_VERIFIEDPERMISSIONS_API OpenIdConnectTokenSelectionItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_VERIFIEDPERMISSIONS_API OpenIdConnectTokenSelectionItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_VERIFIEDPERMISSIONS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The OIDC configuration for processing access tokens. Contains allowed
     * audience claims, for example <code>https://auth.example.com</code>, and the
     * claim that you want to map to the principal, for example <code>sub</code>.</p>
     */
    inline const OpenIdConnectAccessTokenConfigurationItem& GetAccessTokenOnly() const{ return m_accessTokenOnly; }
    inline bool AccessTokenOnlyHasBeenSet() const { return m_accessTokenOnlyHasBeenSet; }
    inline void SetAccessTokenOnly(const OpenIdConnectAccessTokenConfigurationItem& value) { m_accessTokenOnlyHasBeenSet = true; m_accessTokenOnly = value; }
    inline void SetAccessTokenOnly(OpenIdConnectAccessTokenConfigurationItem&& value) { m_accessTokenOnlyHasBeenSet = true; m_accessTokenOnly = std::move(value); }
    inline OpenIdConnectTokenSelectionItem& WithAccessTokenOnly(const OpenIdConnectAccessTokenConfigurationItem& value) { SetAccessTokenOnly(value); return *this;}
    inline OpenIdConnectTokenSelectionItem& WithAccessTokenOnly(OpenIdConnectAccessTokenConfigurationItem&& value) { SetAccessTokenOnly(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The OIDC configuration for processing identity (ID) tokens. Contains allowed
     * client ID claims, for example <code>1example23456789</code>, and the claim that
     * you want to map to the principal, for example <code>sub</code>.</p>
     */
    inline const OpenIdConnectIdentityTokenConfigurationItem& GetIdentityTokenOnly() const{ return m_identityTokenOnly; }
    inline bool IdentityTokenOnlyHasBeenSet() const { return m_identityTokenOnlyHasBeenSet; }
    inline void SetIdentityTokenOnly(const OpenIdConnectIdentityTokenConfigurationItem& value) { m_identityTokenOnlyHasBeenSet = true; m_identityTokenOnly = value; }
    inline void SetIdentityTokenOnly(OpenIdConnectIdentityTokenConfigurationItem&& value) { m_identityTokenOnlyHasBeenSet = true; m_identityTokenOnly = std::move(value); }
    inline OpenIdConnectTokenSelectionItem& WithIdentityTokenOnly(const OpenIdConnectIdentityTokenConfigurationItem& value) { SetIdentityTokenOnly(value); return *this;}
    inline OpenIdConnectTokenSelectionItem& WithIdentityTokenOnly(OpenIdConnectIdentityTokenConfigurationItem&& value) { SetIdentityTokenOnly(std::move(value)); return *this;}
    ///@}
  private:

    OpenIdConnectAccessTokenConfigurationItem m_accessTokenOnly;
    bool m_accessTokenOnlyHasBeenSet = false;

    OpenIdConnectIdentityTokenConfigurationItem m_identityTokenOnly;
    bool m_identityTokenOnlyHasBeenSet = false;
  };

} // namespace Model
} // namespace VerifiedPermissions
} // namespace Aws
