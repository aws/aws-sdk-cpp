/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/verifiedpermissions/VerifiedPermissions_EXPORTS.h>
#include <aws/verifiedpermissions/VerifiedPermissionsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/verifiedpermissions/model/UpdateConfiguration.h>
#include <utility>

namespace Aws
{
namespace VerifiedPermissions
{
namespace Model
{

  /**
   */
  class UpdateIdentitySourceRequest : public VerifiedPermissionsRequest
  {
  public:
    AWS_VERIFIEDPERMISSIONS_API UpdateIdentitySourceRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateIdentitySource"; }

    AWS_VERIFIEDPERMISSIONS_API Aws::String SerializePayload() const override;

    AWS_VERIFIEDPERMISSIONS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>Specifies the ID of the policy store that contains the identity source that
     * you want to update.</p>
     */
    inline const Aws::String& GetPolicyStoreId() const{ return m_policyStoreId; }

    /**
     * <p>Specifies the ID of the policy store that contains the identity source that
     * you want to update.</p>
     */
    inline bool PolicyStoreIdHasBeenSet() const { return m_policyStoreIdHasBeenSet; }

    /**
     * <p>Specifies the ID of the policy store that contains the identity source that
     * you want to update.</p>
     */
    inline void SetPolicyStoreId(const Aws::String& value) { m_policyStoreIdHasBeenSet = true; m_policyStoreId = value; }

    /**
     * <p>Specifies the ID of the policy store that contains the identity source that
     * you want to update.</p>
     */
    inline void SetPolicyStoreId(Aws::String&& value) { m_policyStoreIdHasBeenSet = true; m_policyStoreId = std::move(value); }

    /**
     * <p>Specifies the ID of the policy store that contains the identity source that
     * you want to update.</p>
     */
    inline void SetPolicyStoreId(const char* value) { m_policyStoreIdHasBeenSet = true; m_policyStoreId.assign(value); }

    /**
     * <p>Specifies the ID of the policy store that contains the identity source that
     * you want to update.</p>
     */
    inline UpdateIdentitySourceRequest& WithPolicyStoreId(const Aws::String& value) { SetPolicyStoreId(value); return *this;}

    /**
     * <p>Specifies the ID of the policy store that contains the identity source that
     * you want to update.</p>
     */
    inline UpdateIdentitySourceRequest& WithPolicyStoreId(Aws::String&& value) { SetPolicyStoreId(std::move(value)); return *this;}

    /**
     * <p>Specifies the ID of the policy store that contains the identity source that
     * you want to update.</p>
     */
    inline UpdateIdentitySourceRequest& WithPolicyStoreId(const char* value) { SetPolicyStoreId(value); return *this;}


    /**
     * <p>Specifies the ID of the identity source that you want to update.</p>
     */
    inline const Aws::String& GetIdentitySourceId() const{ return m_identitySourceId; }

    /**
     * <p>Specifies the ID of the identity source that you want to update.</p>
     */
    inline bool IdentitySourceIdHasBeenSet() const { return m_identitySourceIdHasBeenSet; }

    /**
     * <p>Specifies the ID of the identity source that you want to update.</p>
     */
    inline void SetIdentitySourceId(const Aws::String& value) { m_identitySourceIdHasBeenSet = true; m_identitySourceId = value; }

    /**
     * <p>Specifies the ID of the identity source that you want to update.</p>
     */
    inline void SetIdentitySourceId(Aws::String&& value) { m_identitySourceIdHasBeenSet = true; m_identitySourceId = std::move(value); }

    /**
     * <p>Specifies the ID of the identity source that you want to update.</p>
     */
    inline void SetIdentitySourceId(const char* value) { m_identitySourceIdHasBeenSet = true; m_identitySourceId.assign(value); }

    /**
     * <p>Specifies the ID of the identity source that you want to update.</p>
     */
    inline UpdateIdentitySourceRequest& WithIdentitySourceId(const Aws::String& value) { SetIdentitySourceId(value); return *this;}

    /**
     * <p>Specifies the ID of the identity source that you want to update.</p>
     */
    inline UpdateIdentitySourceRequest& WithIdentitySourceId(Aws::String&& value) { SetIdentitySourceId(std::move(value)); return *this;}

    /**
     * <p>Specifies the ID of the identity source that you want to update.</p>
     */
    inline UpdateIdentitySourceRequest& WithIdentitySourceId(const char* value) { SetIdentitySourceId(value); return *this;}


    /**
     * <p>Specifies the details required to communicate with the identity provider
     * (IdP) associated with this identity source.</p>  <p>At this time, the only
     * valid member of this structure is a Amazon Cognito user pool configuration.</p>
     * <p>You must specify a <code>userPoolArn</code>, and optionally, a
     * <code>ClientId</code>.</p> 
     */
    inline const UpdateConfiguration& GetUpdateConfiguration() const{ return m_updateConfiguration; }

    /**
     * <p>Specifies the details required to communicate with the identity provider
     * (IdP) associated with this identity source.</p>  <p>At this time, the only
     * valid member of this structure is a Amazon Cognito user pool configuration.</p>
     * <p>You must specify a <code>userPoolArn</code>, and optionally, a
     * <code>ClientId</code>.</p> 
     */
    inline bool UpdateConfigurationHasBeenSet() const { return m_updateConfigurationHasBeenSet; }

    /**
     * <p>Specifies the details required to communicate with the identity provider
     * (IdP) associated with this identity source.</p>  <p>At this time, the only
     * valid member of this structure is a Amazon Cognito user pool configuration.</p>
     * <p>You must specify a <code>userPoolArn</code>, and optionally, a
     * <code>ClientId</code>.</p> 
     */
    inline void SetUpdateConfiguration(const UpdateConfiguration& value) { m_updateConfigurationHasBeenSet = true; m_updateConfiguration = value; }

    /**
     * <p>Specifies the details required to communicate with the identity provider
     * (IdP) associated with this identity source.</p>  <p>At this time, the only
     * valid member of this structure is a Amazon Cognito user pool configuration.</p>
     * <p>You must specify a <code>userPoolArn</code>, and optionally, a
     * <code>ClientId</code>.</p> 
     */
    inline void SetUpdateConfiguration(UpdateConfiguration&& value) { m_updateConfigurationHasBeenSet = true; m_updateConfiguration = std::move(value); }

    /**
     * <p>Specifies the details required to communicate with the identity provider
     * (IdP) associated with this identity source.</p>  <p>At this time, the only
     * valid member of this structure is a Amazon Cognito user pool configuration.</p>
     * <p>You must specify a <code>userPoolArn</code>, and optionally, a
     * <code>ClientId</code>.</p> 
     */
    inline UpdateIdentitySourceRequest& WithUpdateConfiguration(const UpdateConfiguration& value) { SetUpdateConfiguration(value); return *this;}

    /**
     * <p>Specifies the details required to communicate with the identity provider
     * (IdP) associated with this identity source.</p>  <p>At this time, the only
     * valid member of this structure is a Amazon Cognito user pool configuration.</p>
     * <p>You must specify a <code>userPoolArn</code>, and optionally, a
     * <code>ClientId</code>.</p> 
     */
    inline UpdateIdentitySourceRequest& WithUpdateConfiguration(UpdateConfiguration&& value) { SetUpdateConfiguration(std::move(value)); return *this;}


    /**
     * <p>Specifies the data type of principals generated for identities authenticated
     * by the identity source.</p>
     */
    inline const Aws::String& GetPrincipalEntityType() const{ return m_principalEntityType; }

    /**
     * <p>Specifies the data type of principals generated for identities authenticated
     * by the identity source.</p>
     */
    inline bool PrincipalEntityTypeHasBeenSet() const { return m_principalEntityTypeHasBeenSet; }

    /**
     * <p>Specifies the data type of principals generated for identities authenticated
     * by the identity source.</p>
     */
    inline void SetPrincipalEntityType(const Aws::String& value) { m_principalEntityTypeHasBeenSet = true; m_principalEntityType = value; }

    /**
     * <p>Specifies the data type of principals generated for identities authenticated
     * by the identity source.</p>
     */
    inline void SetPrincipalEntityType(Aws::String&& value) { m_principalEntityTypeHasBeenSet = true; m_principalEntityType = std::move(value); }

    /**
     * <p>Specifies the data type of principals generated for identities authenticated
     * by the identity source.</p>
     */
    inline void SetPrincipalEntityType(const char* value) { m_principalEntityTypeHasBeenSet = true; m_principalEntityType.assign(value); }

    /**
     * <p>Specifies the data type of principals generated for identities authenticated
     * by the identity source.</p>
     */
    inline UpdateIdentitySourceRequest& WithPrincipalEntityType(const Aws::String& value) { SetPrincipalEntityType(value); return *this;}

    /**
     * <p>Specifies the data type of principals generated for identities authenticated
     * by the identity source.</p>
     */
    inline UpdateIdentitySourceRequest& WithPrincipalEntityType(Aws::String&& value) { SetPrincipalEntityType(std::move(value)); return *this;}

    /**
     * <p>Specifies the data type of principals generated for identities authenticated
     * by the identity source.</p>
     */
    inline UpdateIdentitySourceRequest& WithPrincipalEntityType(const char* value) { SetPrincipalEntityType(value); return *this;}

  private:

    Aws::String m_policyStoreId;
    bool m_policyStoreIdHasBeenSet = false;

    Aws::String m_identitySourceId;
    bool m_identitySourceIdHasBeenSet = false;

    UpdateConfiguration m_updateConfiguration;
    bool m_updateConfigurationHasBeenSet = false;

    Aws::String m_principalEntityType;
    bool m_principalEntityTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace VerifiedPermissions
} // namespace Aws
