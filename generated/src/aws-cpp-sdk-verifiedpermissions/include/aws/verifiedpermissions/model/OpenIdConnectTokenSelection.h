/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/verifiedpermissions/VerifiedPermissions_EXPORTS.h>
#include <aws/verifiedpermissions/model/OpenIdConnectAccessTokenConfiguration.h>
#include <aws/verifiedpermissions/model/OpenIdConnectIdentityTokenConfiguration.h>
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
   * href="https://docs.aws.amazon.com/verifiedpermissions/latest/apireference/API_OpenIdConnectConfiguration.html">OpenIdConnectConfiguration</a>
   * structure, which is a parameter of <a
   * href="https://docs.aws.amazon.com/verifiedpermissions/latest/apireference/API_CreateIdentitySource.html">CreateIdentitySource</a>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/verifiedpermissions-2021-12-01/OpenIdConnectTokenSelection">AWS
   * API Reference</a></p>
   */
  class OpenIdConnectTokenSelection
  {
  public:
    AWS_VERIFIEDPERMISSIONS_API OpenIdConnectTokenSelection();
    AWS_VERIFIEDPERMISSIONS_API OpenIdConnectTokenSelection(Aws::Utils::Json::JsonView jsonValue);
    AWS_VERIFIEDPERMISSIONS_API OpenIdConnectTokenSelection& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_VERIFIEDPERMISSIONS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The OIDC configuration for processing access tokens. Contains allowed
     * audience claims, for example <code>https://auth.example.com</code>, and the
     * claim that you want to map to the principal, for example <code>sub</code>.</p>
     */
    inline const OpenIdConnectAccessTokenConfiguration& GetAccessTokenOnly() const{ return m_accessTokenOnly; }
    inline bool AccessTokenOnlyHasBeenSet() const { return m_accessTokenOnlyHasBeenSet; }
    inline void SetAccessTokenOnly(const OpenIdConnectAccessTokenConfiguration& value) { m_accessTokenOnlyHasBeenSet = true; m_accessTokenOnly = value; }
    inline void SetAccessTokenOnly(OpenIdConnectAccessTokenConfiguration&& value) { m_accessTokenOnlyHasBeenSet = true; m_accessTokenOnly = std::move(value); }
    inline OpenIdConnectTokenSelection& WithAccessTokenOnly(const OpenIdConnectAccessTokenConfiguration& value) { SetAccessTokenOnly(value); return *this;}
    inline OpenIdConnectTokenSelection& WithAccessTokenOnly(OpenIdConnectAccessTokenConfiguration&& value) { SetAccessTokenOnly(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The OIDC configuration for processing identity (ID) tokens. Contains allowed
     * client ID claims, for example <code>1example23456789</code>, and the claim that
     * you want to map to the principal, for example <code>sub</code>.</p>
     */
    inline const OpenIdConnectIdentityTokenConfiguration& GetIdentityTokenOnly() const{ return m_identityTokenOnly; }
    inline bool IdentityTokenOnlyHasBeenSet() const { return m_identityTokenOnlyHasBeenSet; }
    inline void SetIdentityTokenOnly(const OpenIdConnectIdentityTokenConfiguration& value) { m_identityTokenOnlyHasBeenSet = true; m_identityTokenOnly = value; }
    inline void SetIdentityTokenOnly(OpenIdConnectIdentityTokenConfiguration&& value) { m_identityTokenOnlyHasBeenSet = true; m_identityTokenOnly = std::move(value); }
    inline OpenIdConnectTokenSelection& WithIdentityTokenOnly(const OpenIdConnectIdentityTokenConfiguration& value) { SetIdentityTokenOnly(value); return *this;}
    inline OpenIdConnectTokenSelection& WithIdentityTokenOnly(OpenIdConnectIdentityTokenConfiguration&& value) { SetIdentityTokenOnly(std::move(value)); return *this;}
    ///@}
  private:

    OpenIdConnectAccessTokenConfiguration m_accessTokenOnly;
    bool m_accessTokenOnlyHasBeenSet = false;

    OpenIdConnectIdentityTokenConfiguration m_identityTokenOnly;
    bool m_identityTokenOnlyHasBeenSet = false;
  };

} // namespace Model
} // namespace VerifiedPermissions
} // namespace Aws
