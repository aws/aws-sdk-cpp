﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/verifiedpermissions/VerifiedPermissions_EXPORTS.h>
#include <aws/verifiedpermissions/model/OpenIdConnectAccessTokenConfigurationDetail.h>
#include <aws/verifiedpermissions/model/OpenIdConnectIdentityTokenConfigurationDetail.h>
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
   * href="https://docs.aws.amazon.com/verifiedpermissions/latest/apireference/API_OpenIdConnectConfigurationDetail.html">OpenIdConnectConfigurationDetail</a>
   * structure, which is a parameter of <a
   * href="https://docs.aws.amazon.com/verifiedpermissions/latest/apireference/API_GetIdentitySource.html">GetIdentitySource</a>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/verifiedpermissions-2021-12-01/OpenIdConnectTokenSelectionDetail">AWS
   * API Reference</a></p>
   */
  class OpenIdConnectTokenSelectionDetail
  {
  public:
    AWS_VERIFIEDPERMISSIONS_API OpenIdConnectTokenSelectionDetail();
    AWS_VERIFIEDPERMISSIONS_API OpenIdConnectTokenSelectionDetail(Aws::Utils::Json::JsonView jsonValue);
    AWS_VERIFIEDPERMISSIONS_API OpenIdConnectTokenSelectionDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_VERIFIEDPERMISSIONS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The OIDC configuration for processing access tokens. Contains allowed
     * audience claims, for example <code>https://auth.example.com</code>, and the
     * claim that you want to map to the principal, for example <code>sub</code>.</p>
     */
    inline const OpenIdConnectAccessTokenConfigurationDetail& GetAccessTokenOnly() const{ return m_accessTokenOnly; }
    inline bool AccessTokenOnlyHasBeenSet() const { return m_accessTokenOnlyHasBeenSet; }
    inline void SetAccessTokenOnly(const OpenIdConnectAccessTokenConfigurationDetail& value) { m_accessTokenOnlyHasBeenSet = true; m_accessTokenOnly = value; }
    inline void SetAccessTokenOnly(OpenIdConnectAccessTokenConfigurationDetail&& value) { m_accessTokenOnlyHasBeenSet = true; m_accessTokenOnly = std::move(value); }
    inline OpenIdConnectTokenSelectionDetail& WithAccessTokenOnly(const OpenIdConnectAccessTokenConfigurationDetail& value) { SetAccessTokenOnly(value); return *this;}
    inline OpenIdConnectTokenSelectionDetail& WithAccessTokenOnly(OpenIdConnectAccessTokenConfigurationDetail&& value) { SetAccessTokenOnly(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The OIDC configuration for processing identity (ID) tokens. Contains allowed
     * client ID claims, for example <code>1example23456789</code>, and the claim that
     * you want to map to the principal, for example <code>sub</code>.</p>
     */
    inline const OpenIdConnectIdentityTokenConfigurationDetail& GetIdentityTokenOnly() const{ return m_identityTokenOnly; }
    inline bool IdentityTokenOnlyHasBeenSet() const { return m_identityTokenOnlyHasBeenSet; }
    inline void SetIdentityTokenOnly(const OpenIdConnectIdentityTokenConfigurationDetail& value) { m_identityTokenOnlyHasBeenSet = true; m_identityTokenOnly = value; }
    inline void SetIdentityTokenOnly(OpenIdConnectIdentityTokenConfigurationDetail&& value) { m_identityTokenOnlyHasBeenSet = true; m_identityTokenOnly = std::move(value); }
    inline OpenIdConnectTokenSelectionDetail& WithIdentityTokenOnly(const OpenIdConnectIdentityTokenConfigurationDetail& value) { SetIdentityTokenOnly(value); return *this;}
    inline OpenIdConnectTokenSelectionDetail& WithIdentityTokenOnly(OpenIdConnectIdentityTokenConfigurationDetail&& value) { SetIdentityTokenOnly(std::move(value)); return *this;}
    ///@}
  private:

    OpenIdConnectAccessTokenConfigurationDetail m_accessTokenOnly;
    bool m_accessTokenOnlyHasBeenSet = false;

    OpenIdConnectIdentityTokenConfigurationDetail m_identityTokenOnly;
    bool m_identityTokenOnlyHasBeenSet = false;
  };

} // namespace Model
} // namespace VerifiedPermissions
} // namespace Aws
