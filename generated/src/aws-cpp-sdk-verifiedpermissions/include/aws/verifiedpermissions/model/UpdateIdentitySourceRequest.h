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
    AWS_VERIFIEDPERMISSIONS_API UpdateIdentitySourceRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateIdentitySource"; }

    AWS_VERIFIEDPERMISSIONS_API Aws::String SerializePayload() const override;

    AWS_VERIFIEDPERMISSIONS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>Specifies the ID of the policy store that contains the identity source that
     * you want to update.</p>
     */
    inline const Aws::String& GetPolicyStoreId() const { return m_policyStoreId; }
    inline bool PolicyStoreIdHasBeenSet() const { return m_policyStoreIdHasBeenSet; }
    template<typename PolicyStoreIdT = Aws::String>
    void SetPolicyStoreId(PolicyStoreIdT&& value) { m_policyStoreIdHasBeenSet = true; m_policyStoreId = std::forward<PolicyStoreIdT>(value); }
    template<typename PolicyStoreIdT = Aws::String>
    UpdateIdentitySourceRequest& WithPolicyStoreId(PolicyStoreIdT&& value) { SetPolicyStoreId(std::forward<PolicyStoreIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the ID of the identity source that you want to update.</p>
     */
    inline const Aws::String& GetIdentitySourceId() const { return m_identitySourceId; }
    inline bool IdentitySourceIdHasBeenSet() const { return m_identitySourceIdHasBeenSet; }
    template<typename IdentitySourceIdT = Aws::String>
    void SetIdentitySourceId(IdentitySourceIdT&& value) { m_identitySourceIdHasBeenSet = true; m_identitySourceId = std::forward<IdentitySourceIdT>(value); }
    template<typename IdentitySourceIdT = Aws::String>
    UpdateIdentitySourceRequest& WithIdentitySourceId(IdentitySourceIdT&& value) { SetIdentitySourceId(std::forward<IdentitySourceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the details required to communicate with the identity provider
     * (IdP) associated with this identity source.</p>
     */
    inline const UpdateConfiguration& GetUpdateConfiguration() const { return m_updateConfiguration; }
    inline bool UpdateConfigurationHasBeenSet() const { return m_updateConfigurationHasBeenSet; }
    template<typename UpdateConfigurationT = UpdateConfiguration>
    void SetUpdateConfiguration(UpdateConfigurationT&& value) { m_updateConfigurationHasBeenSet = true; m_updateConfiguration = std::forward<UpdateConfigurationT>(value); }
    template<typename UpdateConfigurationT = UpdateConfiguration>
    UpdateIdentitySourceRequest& WithUpdateConfiguration(UpdateConfigurationT&& value) { SetUpdateConfiguration(std::forward<UpdateConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the data type of principals generated for identities authenticated
     * by the identity source.</p>
     */
    inline const Aws::String& GetPrincipalEntityType() const { return m_principalEntityType; }
    inline bool PrincipalEntityTypeHasBeenSet() const { return m_principalEntityTypeHasBeenSet; }
    template<typename PrincipalEntityTypeT = Aws::String>
    void SetPrincipalEntityType(PrincipalEntityTypeT&& value) { m_principalEntityTypeHasBeenSet = true; m_principalEntityType = std::forward<PrincipalEntityTypeT>(value); }
    template<typename PrincipalEntityTypeT = Aws::String>
    UpdateIdentitySourceRequest& WithPrincipalEntityType(PrincipalEntityTypeT&& value) { SetPrincipalEntityType(std::forward<PrincipalEntityTypeT>(value)); return *this;}
    ///@}
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
