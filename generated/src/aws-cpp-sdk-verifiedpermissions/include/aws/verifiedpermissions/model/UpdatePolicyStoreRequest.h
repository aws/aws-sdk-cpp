/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/verifiedpermissions/VerifiedPermissions_EXPORTS.h>
#include <aws/verifiedpermissions/VerifiedPermissionsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/verifiedpermissions/model/ValidationSettings.h>
#include <aws/verifiedpermissions/model/DeletionProtection.h>
#include <utility>

namespace Aws
{
namespace VerifiedPermissions
{
namespace Model
{

  /**
   */
  class UpdatePolicyStoreRequest : public VerifiedPermissionsRequest
  {
  public:
    AWS_VERIFIEDPERMISSIONS_API UpdatePolicyStoreRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdatePolicyStore"; }

    AWS_VERIFIEDPERMISSIONS_API Aws::String SerializePayload() const override;

    AWS_VERIFIEDPERMISSIONS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>Specifies the ID of the policy store that you want to update</p>
     */
    inline const Aws::String& GetPolicyStoreId() const { return m_policyStoreId; }
    inline bool PolicyStoreIdHasBeenSet() const { return m_policyStoreIdHasBeenSet; }
    template<typename PolicyStoreIdT = Aws::String>
    void SetPolicyStoreId(PolicyStoreIdT&& value) { m_policyStoreIdHasBeenSet = true; m_policyStoreId = std::forward<PolicyStoreIdT>(value); }
    template<typename PolicyStoreIdT = Aws::String>
    UpdatePolicyStoreRequest& WithPolicyStoreId(PolicyStoreIdT&& value) { SetPolicyStoreId(std::forward<PolicyStoreIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A structure that defines the validation settings that want to enable for the
     * policy store.</p>
     */
    inline const ValidationSettings& GetValidationSettings() const { return m_validationSettings; }
    inline bool ValidationSettingsHasBeenSet() const { return m_validationSettingsHasBeenSet; }
    template<typename ValidationSettingsT = ValidationSettings>
    void SetValidationSettings(ValidationSettingsT&& value) { m_validationSettingsHasBeenSet = true; m_validationSettings = std::forward<ValidationSettingsT>(value); }
    template<typename ValidationSettingsT = ValidationSettings>
    UpdatePolicyStoreRequest& WithValidationSettings(ValidationSettingsT&& value) { SetValidationSettings(std::forward<ValidationSettingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether the policy store can be deleted. If enabled, the policy
     * store can't be deleted.</p> <p>When you call <code>UpdatePolicyStore</code>,
     * this parameter is unchanged unless explicitly included in the call.</p>
     */
    inline DeletionProtection GetDeletionProtection() const { return m_deletionProtection; }
    inline bool DeletionProtectionHasBeenSet() const { return m_deletionProtectionHasBeenSet; }
    inline void SetDeletionProtection(DeletionProtection value) { m_deletionProtectionHasBeenSet = true; m_deletionProtection = value; }
    inline UpdatePolicyStoreRequest& WithDeletionProtection(DeletionProtection value) { SetDeletionProtection(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Descriptive text that you can provide to help with identification of the
     * current policy store.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    UpdatePolicyStoreRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_policyStoreId;
    bool m_policyStoreIdHasBeenSet = false;

    ValidationSettings m_validationSettings;
    bool m_validationSettingsHasBeenSet = false;

    DeletionProtection m_deletionProtection{DeletionProtection::NOT_SET};
    bool m_deletionProtectionHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;
  };

} // namespace Model
} // namespace VerifiedPermissions
} // namespace Aws
