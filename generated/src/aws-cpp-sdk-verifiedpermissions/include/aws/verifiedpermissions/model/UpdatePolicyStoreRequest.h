/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/verifiedpermissions/VerifiedPermissions_EXPORTS.h>
#include <aws/verifiedpermissions/VerifiedPermissionsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/verifiedpermissions/model/ValidationSettings.h>
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
    AWS_VERIFIEDPERMISSIONS_API UpdatePolicyStoreRequest();

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
    inline const Aws::String& GetPolicyStoreId() const{ return m_policyStoreId; }
    inline bool PolicyStoreIdHasBeenSet() const { return m_policyStoreIdHasBeenSet; }
    inline void SetPolicyStoreId(const Aws::String& value) { m_policyStoreIdHasBeenSet = true; m_policyStoreId = value; }
    inline void SetPolicyStoreId(Aws::String&& value) { m_policyStoreIdHasBeenSet = true; m_policyStoreId = std::move(value); }
    inline void SetPolicyStoreId(const char* value) { m_policyStoreIdHasBeenSet = true; m_policyStoreId.assign(value); }
    inline UpdatePolicyStoreRequest& WithPolicyStoreId(const Aws::String& value) { SetPolicyStoreId(value); return *this;}
    inline UpdatePolicyStoreRequest& WithPolicyStoreId(Aws::String&& value) { SetPolicyStoreId(std::move(value)); return *this;}
    inline UpdatePolicyStoreRequest& WithPolicyStoreId(const char* value) { SetPolicyStoreId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A structure that defines the validation settings that want to enable for the
     * policy store.</p>
     */
    inline const ValidationSettings& GetValidationSettings() const{ return m_validationSettings; }
    inline bool ValidationSettingsHasBeenSet() const { return m_validationSettingsHasBeenSet; }
    inline void SetValidationSettings(const ValidationSettings& value) { m_validationSettingsHasBeenSet = true; m_validationSettings = value; }
    inline void SetValidationSettings(ValidationSettings&& value) { m_validationSettingsHasBeenSet = true; m_validationSettings = std::move(value); }
    inline UpdatePolicyStoreRequest& WithValidationSettings(const ValidationSettings& value) { SetValidationSettings(value); return *this;}
    inline UpdatePolicyStoreRequest& WithValidationSettings(ValidationSettings&& value) { SetValidationSettings(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Descriptive text that you can provide to help with identification of the
     * current policy store.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline UpdatePolicyStoreRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline UpdatePolicyStoreRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline UpdatePolicyStoreRequest& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}
  private:

    Aws::String m_policyStoreId;
    bool m_policyStoreIdHasBeenSet = false;

    ValidationSettings m_validationSettings;
    bool m_validationSettingsHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;
  };

} // namespace Model
} // namespace VerifiedPermissions
} // namespace Aws
