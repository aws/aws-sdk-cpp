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
   * href="https://docs.aws.amazon.com/verifiedpermissions/latest/apireference/API_OpenIdConnectTokenSelection.html">OpenIdConnectTokenSelection</a>
   * structure, which is a parameter of <a
   * href="https://docs.aws.amazon.com/verifiedpermissions/latest/apireference/API_CreateIdentitySource.html">CreateIdentitySource</a>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/verifiedpermissions-2021-12-01/OpenIdConnectIdentityTokenConfiguration">AWS
   * API Reference</a></p>
   */
  class OpenIdConnectIdentityTokenConfiguration
  {
  public:
    AWS_VERIFIEDPERMISSIONS_API OpenIdConnectIdentityTokenConfiguration();
    AWS_VERIFIEDPERMISSIONS_API OpenIdConnectIdentityTokenConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_VERIFIEDPERMISSIONS_API OpenIdConnectIdentityTokenConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_VERIFIEDPERMISSIONS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The claim that determines the principal in OIDC access tokens. For example,
     * <code>sub</code>.</p>
     */
    inline const Aws::String& GetPrincipalIdClaim() const{ return m_principalIdClaim; }
    inline bool PrincipalIdClaimHasBeenSet() const { return m_principalIdClaimHasBeenSet; }
    inline void SetPrincipalIdClaim(const Aws::String& value) { m_principalIdClaimHasBeenSet = true; m_principalIdClaim = value; }
    inline void SetPrincipalIdClaim(Aws::String&& value) { m_principalIdClaimHasBeenSet = true; m_principalIdClaim = std::move(value); }
    inline void SetPrincipalIdClaim(const char* value) { m_principalIdClaimHasBeenSet = true; m_principalIdClaim.assign(value); }
    inline OpenIdConnectIdentityTokenConfiguration& WithPrincipalIdClaim(const Aws::String& value) { SetPrincipalIdClaim(value); return *this;}
    inline OpenIdConnectIdentityTokenConfiguration& WithPrincipalIdClaim(Aws::String&& value) { SetPrincipalIdClaim(std::move(value)); return *this;}
    inline OpenIdConnectIdentityTokenConfiguration& WithPrincipalIdClaim(const char* value) { SetPrincipalIdClaim(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID token audience, or client ID, claim values that you want to accept in
     * your policy store from an OIDC identity provider. For example,
     * <code>1example23456789, 2example10111213</code>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetClientIds() const{ return m_clientIds; }
    inline bool ClientIdsHasBeenSet() const { return m_clientIdsHasBeenSet; }
    inline void SetClientIds(const Aws::Vector<Aws::String>& value) { m_clientIdsHasBeenSet = true; m_clientIds = value; }
    inline void SetClientIds(Aws::Vector<Aws::String>&& value) { m_clientIdsHasBeenSet = true; m_clientIds = std::move(value); }
    inline OpenIdConnectIdentityTokenConfiguration& WithClientIds(const Aws::Vector<Aws::String>& value) { SetClientIds(value); return *this;}
    inline OpenIdConnectIdentityTokenConfiguration& WithClientIds(Aws::Vector<Aws::String>&& value) { SetClientIds(std::move(value)); return *this;}
    inline OpenIdConnectIdentityTokenConfiguration& AddClientIds(const Aws::String& value) { m_clientIdsHasBeenSet = true; m_clientIds.push_back(value); return *this; }
    inline OpenIdConnectIdentityTokenConfiguration& AddClientIds(Aws::String&& value) { m_clientIdsHasBeenSet = true; m_clientIds.push_back(std::move(value)); return *this; }
    inline OpenIdConnectIdentityTokenConfiguration& AddClientIds(const char* value) { m_clientIdsHasBeenSet = true; m_clientIds.push_back(value); return *this; }
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
