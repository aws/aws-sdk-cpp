/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/verifiedpermissions/VerifiedPermissions_EXPORTS.h>
#include <aws/verifiedpermissions/model/UpdateOpenIdConnectAccessTokenConfiguration.h>
#include <aws/verifiedpermissions/model/UpdateOpenIdConnectIdentityTokenConfiguration.h>
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
   * href="https://docs.aws.amazon.com/verifiedpermissions/latest/apireference/API_UpdateOpenIdConnectConfiguration.html">UpdateOpenIdConnectConfiguration</a>
   * structure, which is a parameter to <a
   * href="https://docs.aws.amazon.com/verifiedpermissions/latest/apireference/API_UpdateIdentitySource.html">UpdateIdentitySource</a>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/verifiedpermissions-2021-12-01/UpdateOpenIdConnectTokenSelection">AWS
   * API Reference</a></p>
   */
  class UpdateOpenIdConnectTokenSelection
  {
  public:
    AWS_VERIFIEDPERMISSIONS_API UpdateOpenIdConnectTokenSelection() = default;
    AWS_VERIFIEDPERMISSIONS_API UpdateOpenIdConnectTokenSelection(Aws::Utils::Json::JsonView jsonValue);
    AWS_VERIFIEDPERMISSIONS_API UpdateOpenIdConnectTokenSelection& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_VERIFIEDPERMISSIONS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The OIDC configuration for processing access tokens. Contains allowed
     * audience claims, for example <code>https://auth.example.com</code>, and the
     * claim that you want to map to the principal, for example <code>sub</code>.</p>
     */
    inline const UpdateOpenIdConnectAccessTokenConfiguration& GetAccessTokenOnly() const { return m_accessTokenOnly; }
    inline bool AccessTokenOnlyHasBeenSet() const { return m_accessTokenOnlyHasBeenSet; }
    template<typename AccessTokenOnlyT = UpdateOpenIdConnectAccessTokenConfiguration>
    void SetAccessTokenOnly(AccessTokenOnlyT&& value) { m_accessTokenOnlyHasBeenSet = true; m_accessTokenOnly = std::forward<AccessTokenOnlyT>(value); }
    template<typename AccessTokenOnlyT = UpdateOpenIdConnectAccessTokenConfiguration>
    UpdateOpenIdConnectTokenSelection& WithAccessTokenOnly(AccessTokenOnlyT&& value) { SetAccessTokenOnly(std::forward<AccessTokenOnlyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The OIDC configuration for processing identity (ID) tokens. Contains allowed
     * client ID claims, for example <code>1example23456789</code>, and the claim that
     * you want to map to the principal, for example <code>sub</code>.</p>
     */
    inline const UpdateOpenIdConnectIdentityTokenConfiguration& GetIdentityTokenOnly() const { return m_identityTokenOnly; }
    inline bool IdentityTokenOnlyHasBeenSet() const { return m_identityTokenOnlyHasBeenSet; }
    template<typename IdentityTokenOnlyT = UpdateOpenIdConnectIdentityTokenConfiguration>
    void SetIdentityTokenOnly(IdentityTokenOnlyT&& value) { m_identityTokenOnlyHasBeenSet = true; m_identityTokenOnly = std::forward<IdentityTokenOnlyT>(value); }
    template<typename IdentityTokenOnlyT = UpdateOpenIdConnectIdentityTokenConfiguration>
    UpdateOpenIdConnectTokenSelection& WithIdentityTokenOnly(IdentityTokenOnlyT&& value) { SetIdentityTokenOnly(std::forward<IdentityTokenOnlyT>(value)); return *this;}
    ///@}
  private:

    UpdateOpenIdConnectAccessTokenConfiguration m_accessTokenOnly;
    bool m_accessTokenOnlyHasBeenSet = false;

    UpdateOpenIdConnectIdentityTokenConfiguration m_identityTokenOnly;
    bool m_identityTokenOnlyHasBeenSet = false;
  };

} // namespace Model
} // namespace VerifiedPermissions
} // namespace Aws
