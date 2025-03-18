/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/verifiedpermissions/VerifiedPermissions_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
   * <p>The configuration of an OpenID Connect (OIDC) identity source for handling
   * identity (ID) token claims. Contains the claim that you want to identify as the
   * principal in an authorization request, and the values of the <code>aud</code>
   * claim, or audiences, that you want to accept.</p> <p>This data type is part of a
   * <a
   * href="https://docs.aws.amazon.com/verifiedpermissions/latest/apireference/API_UpdateOpenIdConnectTokenSelection.html">UpdateOpenIdConnectTokenSelection</a>
   * structure, which is a parameter to <a
   * href="https://docs.aws.amazon.com/verifiedpermissions/latest/apireference/API_UpdateIdentitySource.html">UpdateIdentitySource</a>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/verifiedpermissions-2021-12-01/UpdateOpenIdConnectIdentityTokenConfiguration">AWS
   * API Reference</a></p>
   */
  class UpdateOpenIdConnectIdentityTokenConfiguration
  {
  public:
    AWS_VERIFIEDPERMISSIONS_API UpdateOpenIdConnectIdentityTokenConfiguration() = default;
    AWS_VERIFIEDPERMISSIONS_API UpdateOpenIdConnectIdentityTokenConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_VERIFIEDPERMISSIONS_API UpdateOpenIdConnectIdentityTokenConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_VERIFIEDPERMISSIONS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The claim that determines the principal in OIDC access tokens. For example,
     * <code>sub</code>.</p>
     */
    inline const Aws::String& GetPrincipalIdClaim() const { return m_principalIdClaim; }
    inline bool PrincipalIdClaimHasBeenSet() const { return m_principalIdClaimHasBeenSet; }
    template<typename PrincipalIdClaimT = Aws::String>
    void SetPrincipalIdClaim(PrincipalIdClaimT&& value) { m_principalIdClaimHasBeenSet = true; m_principalIdClaim = std::forward<PrincipalIdClaimT>(value); }
    template<typename PrincipalIdClaimT = Aws::String>
    UpdateOpenIdConnectIdentityTokenConfiguration& WithPrincipalIdClaim(PrincipalIdClaimT&& value) { SetPrincipalIdClaim(std::forward<PrincipalIdClaimT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID token audience, or client ID, claim values that you want to accept in
     * your policy store from an OIDC identity provider. For example,
     * <code>1example23456789, 2example10111213</code>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetClientIds() const { return m_clientIds; }
    inline bool ClientIdsHasBeenSet() const { return m_clientIdsHasBeenSet; }
    template<typename ClientIdsT = Aws::Vector<Aws::String>>
    void SetClientIds(ClientIdsT&& value) { m_clientIdsHasBeenSet = true; m_clientIds = std::forward<ClientIdsT>(value); }
    template<typename ClientIdsT = Aws::Vector<Aws::String>>
    UpdateOpenIdConnectIdentityTokenConfiguration& WithClientIds(ClientIdsT&& value) { SetClientIds(std::forward<ClientIdsT>(value)); return *this;}
    template<typename ClientIdsT = Aws::String>
    UpdateOpenIdConnectIdentityTokenConfiguration& AddClientIds(ClientIdsT&& value) { m_clientIdsHasBeenSet = true; m_clientIds.emplace_back(std::forward<ClientIdsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_principalIdClaim;
    bool m_principalIdClaimHasBeenSet = false;

    Aws::Vector<Aws::String> m_clientIds;
    bool m_clientIdsHasBeenSet = false;
  };

} // namespace Model
} // namespace VerifiedPermissions
} // namespace Aws
