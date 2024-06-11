﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/verifiedpermissions/VerifiedPermissions_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>The claim in OIDC identity provider tokens that indicates a user's group
   * membership, and the entity type that you want to map it to. For example, this
   * object can map the contents of a <code>groups</code> claim to
   * <code>MyCorp::UserGroup</code>.</p> <p>This data type is part of a <a
   * href="https://docs.aws.amazon.com/verifiedpermissions/latest/apireference/API_OpenIdConnectConfigurationItem.html">OpenIdConnectConfigurationItem</a>
   * structure, which is a parameter of <a
   * href="https://docs.aws.amazon.com/verifiedpermissions/latest/apireference/API_ListIdentitySources.html">ListIdentitySourcea</a>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/verifiedpermissions-2021-12-01/OpenIdConnectGroupConfigurationItem">AWS
   * API Reference</a></p>
   */
  class OpenIdConnectGroupConfigurationItem
  {
  public:
    AWS_VERIFIEDPERMISSIONS_API OpenIdConnectGroupConfigurationItem();
    AWS_VERIFIEDPERMISSIONS_API OpenIdConnectGroupConfigurationItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_VERIFIEDPERMISSIONS_API OpenIdConnectGroupConfigurationItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_VERIFIEDPERMISSIONS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The token claim that you want Verified Permissions to interpret as group
     * membership. For example, <code>groups</code>.</p>
     */
    inline const Aws::String& GetGroupClaim() const{ return m_groupClaim; }
    inline bool GroupClaimHasBeenSet() const { return m_groupClaimHasBeenSet; }
    inline void SetGroupClaim(const Aws::String& value) { m_groupClaimHasBeenSet = true; m_groupClaim = value; }
    inline void SetGroupClaim(Aws::String&& value) { m_groupClaimHasBeenSet = true; m_groupClaim = std::move(value); }
    inline void SetGroupClaim(const char* value) { m_groupClaimHasBeenSet = true; m_groupClaim.assign(value); }
    inline OpenIdConnectGroupConfigurationItem& WithGroupClaim(const Aws::String& value) { SetGroupClaim(value); return *this;}
    inline OpenIdConnectGroupConfigurationItem& WithGroupClaim(Aws::String&& value) { SetGroupClaim(std::move(value)); return *this;}
    inline OpenIdConnectGroupConfigurationItem& WithGroupClaim(const char* value) { SetGroupClaim(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The policy store entity type that you want to map your users' group claim to.
     * For example, <code>MyCorp::UserGroup</code>. A group entity type is an entity
     * that can have a user entity type as a member.</p>
     */
    inline const Aws::String& GetGroupEntityType() const{ return m_groupEntityType; }
    inline bool GroupEntityTypeHasBeenSet() const { return m_groupEntityTypeHasBeenSet; }
    inline void SetGroupEntityType(const Aws::String& value) { m_groupEntityTypeHasBeenSet = true; m_groupEntityType = value; }
    inline void SetGroupEntityType(Aws::String&& value) { m_groupEntityTypeHasBeenSet = true; m_groupEntityType = std::move(value); }
    inline void SetGroupEntityType(const char* value) { m_groupEntityTypeHasBeenSet = true; m_groupEntityType.assign(value); }
    inline OpenIdConnectGroupConfigurationItem& WithGroupEntityType(const Aws::String& value) { SetGroupEntityType(value); return *this;}
    inline OpenIdConnectGroupConfigurationItem& WithGroupEntityType(Aws::String&& value) { SetGroupEntityType(std::move(value)); return *this;}
    inline OpenIdConnectGroupConfigurationItem& WithGroupEntityType(const char* value) { SetGroupEntityType(value); return *this;}
    ///@}
  private:

    Aws::String m_groupClaim;
    bool m_groupClaimHasBeenSet = false;

    Aws::String m_groupEntityType;
    bool m_groupEntityTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace VerifiedPermissions
} // namespace Aws
