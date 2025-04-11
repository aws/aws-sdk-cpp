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
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace VerifiedPermissions
{
namespace Model
{

  /**
   */
  class CreatePolicyStoreRequest : public VerifiedPermissionsRequest
  {
  public:
    AWS_VERIFIEDPERMISSIONS_API CreatePolicyStoreRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreatePolicyStore"; }

    AWS_VERIFIEDPERMISSIONS_API Aws::String SerializePayload() const override;

    AWS_VERIFIEDPERMISSIONS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>Specifies a unique, case-sensitive ID that you provide to ensure the
     * idempotency of the request. This lets you safely retry the request without
     * accidentally performing the same operation a second time. Passing the same value
     * to a later call to an operation requires that you also pass the same value for
     * all other parameters. We recommend that you use a <a
     * href="https://wikipedia.org/wiki/Universally_unique_identifier">UUID type of
     * value.</a>.</p> <p>If you don't provide this value, then Amazon Web Services
     * generates a random one for you.</p> <p>If you retry the operation with the same
     * <code>ClientToken</code>, but with different parameters, the retry fails with an
     * <code>ConflictException</code> error.</p> <p>Verified Permissions recognizes a
     * <code>ClientToken</code> for eight hours. After eight hours, the next request
     * with the same parameters performs the operation again regardless of the value of
     * <code>ClientToken</code>.</p>
     */
    inline const Aws::String& GetClientToken() const { return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    template<typename ClientTokenT = Aws::String>
    void SetClientToken(ClientTokenT&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::forward<ClientTokenT>(value); }
    template<typename ClientTokenT = Aws::String>
    CreatePolicyStoreRequest& WithClientToken(ClientTokenT&& value) { SetClientToken(std::forward<ClientTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the validation setting for this policy store.</p> <p>Currently, the
     * only valid and required value is <code>Mode</code>.</p>  <p>We
     * recommend that you turn on <code>STRICT</code> mode only after you define a
     * schema. If a schema doesn't exist, then <code>STRICT</code> mode causes any
     * policy to fail validation, and Verified Permissions rejects the policy. You can
     * turn off validation by using the <a
     * href="https://docs.aws.amazon.com/verifiedpermissions/latest/apireference/API_UpdatePolicyStore">UpdatePolicyStore</a>.
     * Then, when you have a schema defined, use <a
     * href="https://docs.aws.amazon.com/verifiedpermissions/latest/apireference/API_UpdatePolicyStore">UpdatePolicyStore</a>
     * again to turn validation back on.</p> 
     */
    inline const ValidationSettings& GetValidationSettings() const { return m_validationSettings; }
    inline bool ValidationSettingsHasBeenSet() const { return m_validationSettingsHasBeenSet; }
    template<typename ValidationSettingsT = ValidationSettings>
    void SetValidationSettings(ValidationSettingsT&& value) { m_validationSettingsHasBeenSet = true; m_validationSettings = std::forward<ValidationSettingsT>(value); }
    template<typename ValidationSettingsT = ValidationSettings>
    CreatePolicyStoreRequest& WithValidationSettings(ValidationSettingsT&& value) { SetValidationSettings(std::forward<ValidationSettingsT>(value)); return *this;}
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
    CreatePolicyStoreRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether the policy store can be deleted. If enabled, the policy
     * store can't be deleted.</p> <p>The default state is <code>DISABLED</code>.</p>
     */
    inline DeletionProtection GetDeletionProtection() const { return m_deletionProtection; }
    inline bool DeletionProtectionHasBeenSet() const { return m_deletionProtectionHasBeenSet; }
    inline void SetDeletionProtection(DeletionProtection value) { m_deletionProtectionHasBeenSet = true; m_deletionProtection = value; }
    inline CreatePolicyStoreRequest& WithDeletionProtection(DeletionProtection value) { SetDeletionProtection(value); return *this;}
    ///@}
  private:

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    ValidationSettings m_validationSettings;
    bool m_validationSettingsHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    DeletionProtection m_deletionProtection{DeletionProtection::NOT_SET};
    bool m_deletionProtectionHasBeenSet = false;
  };

} // namespace Model
} // namespace VerifiedPermissions
} // namespace Aws
