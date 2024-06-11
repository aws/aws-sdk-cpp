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
   * access token claims. Contains the claim that you want to identify as the
   * principal in an authorization request, and the values of the <code>aud</code>
   * claim, or audiences, that you want to accept.</p> <p>This data type is part of a
   * <a
   * href="https://docs.aws.amazon.com/verifiedpermissions/latest/apireference/API_OpenIdConnectTokenSelectionItem.html">OpenIdConnectTokenSelectionItem</a>
   * structure, which is a parameter of <a
   * href="https://docs.aws.amazon.com/verifiedpermissions/latest/apireference/API_ListIdentitySources.html">ListIdentitySources</a>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/verifiedpermissions-2021-12-01/OpenIdConnectAccessTokenConfigurationItem">AWS
   * API Reference</a></p>
   */
  class OpenIdConnectAccessTokenConfigurationItem
  {
  public:
    AWS_VERIFIEDPERMISSIONS_API OpenIdConnectAccessTokenConfigurationItem();
    AWS_VERIFIEDPERMISSIONS_API OpenIdConnectAccessTokenConfigurationItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_VERIFIEDPERMISSIONS_API OpenIdConnectAccessTokenConfigurationItem& operator=(Aws::Utils::Json::JsonView jsonValue);
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
    inline OpenIdConnectAccessTokenConfigurationItem& WithPrincipalIdClaim(const Aws::String& value) { SetPrincipalIdClaim(value); return *this;}
    inline OpenIdConnectAccessTokenConfigurationItem& WithPrincipalIdClaim(Aws::String&& value) { SetPrincipalIdClaim(std::move(value)); return *this;}
    inline OpenIdConnectAccessTokenConfigurationItem& WithPrincipalIdClaim(const char* value) { SetPrincipalIdClaim(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The access token <code>aud</code> claim values that you want to accept in
     * your policy store. For example, <code>https://myapp.example.com,
     * https://myapp2.example.com</code>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAudiences() const{ return m_audiences; }
    inline bool AudiencesHasBeenSet() const { return m_audiencesHasBeenSet; }
    inline void SetAudiences(const Aws::Vector<Aws::String>& value) { m_audiencesHasBeenSet = true; m_audiences = value; }
    inline void SetAudiences(Aws::Vector<Aws::String>&& value) { m_audiencesHasBeenSet = true; m_audiences = std::move(value); }
    inline OpenIdConnectAccessTokenConfigurationItem& WithAudiences(const Aws::Vector<Aws::String>& value) { SetAudiences(value); return *this;}
    inline OpenIdConnectAccessTokenConfigurationItem& WithAudiences(Aws::Vector<Aws::String>&& value) { SetAudiences(std::move(value)); return *this;}
    inline OpenIdConnectAccessTokenConfigurationItem& AddAudiences(const Aws::String& value) { m_audiencesHasBeenSet = true; m_audiences.push_back(value); return *this; }
    inline OpenIdConnectAccessTokenConfigurationItem& AddAudiences(Aws::String&& value) { m_audiencesHasBeenSet = true; m_audiences.push_back(std::move(value)); return *this; }
    inline OpenIdConnectAccessTokenConfigurationItem& AddAudiences(const char* value) { m_audiencesHasBeenSet = true; m_audiences.push_back(value); return *this; }
    ///@}
  private:

    Aws::String m_principalIdClaim;
    bool m_principalIdClaimHasBeenSet = false;

    Aws::Vector<Aws::String> m_audiences;
    bool m_audiencesHasBeenSet = false;
  };

} // namespace Model
} // namespace VerifiedPermissions
} // namespace Aws
