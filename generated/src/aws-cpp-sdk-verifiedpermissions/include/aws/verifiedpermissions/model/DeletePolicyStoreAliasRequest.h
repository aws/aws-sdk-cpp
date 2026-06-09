/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/verifiedpermissions/VerifiedPermissionsRequest.h>
#include <aws/verifiedpermissions/VerifiedPermissions_EXPORTS.h>
#include <aws/verifiedpermissions/model/DeletionMode.h>

#include <utility>

namespace Aws {
namespace VerifiedPermissions {
namespace Model {

/**
 */
class DeletePolicyStoreAliasRequest : public VerifiedPermissionsRequest {
 public:
  AWS_VERIFIEDPERMISSIONS_API DeletePolicyStoreAliasRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "DeletePolicyStoreAlias"; }

  AWS_VERIFIEDPERMISSIONS_API Aws::String SerializePayload() const override;

  AWS_VERIFIEDPERMISSIONS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>Specifies the name of the policy store alias that you want to delete.</p>
   *  <p>The alias name must always be prefixed with
   * <code>policy-store-alias/</code>.</p>
   */
  inline const Aws::String& GetAliasName() const { return m_aliasName; }
  inline bool AliasNameHasBeenSet() const { return m_aliasNameHasBeenSet; }
  template <typename AliasNameT = Aws::String>
  void SetAliasName(AliasNameT&& value) {
    m_aliasNameHasBeenSet = true;
    m_aliasName = std::forward<AliasNameT>(value);
  }
  template <typename AliasNameT = Aws::String>
  DeletePolicyStoreAliasRequest& WithAliasName(AliasNameT&& value) {
    SetAliasName(std::forward<AliasNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies the deletion mode for the policy store alias. The valid values
   * are:</p> <ul> <li> <p> <b>SoftDelete</b> – The policy store alias enters the
   * <code>PendingDeletion</code> state. This is the default behavior when no
   * <code>deletionMode</code> is specified.</p> </li> <li> <p> <b>HardDelete</b> –
   * The policy store alias is immediately deleted, bypassing the
   * <code>PendingDeletion</code> state.</p> </li> </ul>
   */
  inline DeletionMode GetDeletionMode() const { return m_deletionMode; }
  inline bool DeletionModeHasBeenSet() const { return m_deletionModeHasBeenSet; }
  inline void SetDeletionMode(DeletionMode value) {
    m_deletionModeHasBeenSet = true;
    m_deletionMode = value;
  }
  inline DeletePolicyStoreAliasRequest& WithDeletionMode(DeletionMode value) {
    SetDeletionMode(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_aliasName;

  DeletionMode m_deletionMode{DeletionMode::NOT_SET};
  bool m_aliasNameHasBeenSet = false;
  bool m_deletionModeHasBeenSet = false;
};

}  // namespace Model
}  // namespace VerifiedPermissions
}  // namespace Aws
