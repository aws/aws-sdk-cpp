/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/verifiedpermissions/VerifiedPermissions_EXPORTS.h>
#include <aws/verifiedpermissions/model/AliasState.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace VerifiedPermissions {
namespace Model {

/**
 * <p>Contains information about a policy store alias.</p> <p>This data type is
 * used as a response parameter for the <a
 * href="https://docs.aws.amazon.com/verifiedpermissions/latest/apireference/API_ListPolicyStoreAliases.html">ListPolicyStoreAliases</a>
 * operation.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/verifiedpermissions-2021-12-01/PolicyStoreAliasItem">AWS
 * API Reference</a></p>
 */
class PolicyStoreAliasItem {
 public:
  AWS_VERIFIEDPERMISSIONS_API PolicyStoreAliasItem() = default;
  AWS_VERIFIEDPERMISSIONS_API PolicyStoreAliasItem(Aws::Utils::Json::JsonView jsonValue);
  AWS_VERIFIEDPERMISSIONS_API PolicyStoreAliasItem& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_VERIFIEDPERMISSIONS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The name of the policy store alias.</p>
   */
  inline const Aws::String& GetAliasName() const { return m_aliasName; }
  inline bool AliasNameHasBeenSet() const { return m_aliasNameHasBeenSet; }
  template <typename AliasNameT = Aws::String>
  void SetAliasName(AliasNameT&& value) {
    m_aliasNameHasBeenSet = true;
    m_aliasName = std::forward<AliasNameT>(value);
  }
  template <typename AliasNameT = Aws::String>
  PolicyStoreAliasItem& WithAliasName(AliasNameT&& value) {
    SetAliasName(std::forward<AliasNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the policy store associated with the alias.</p>
   */
  inline const Aws::String& GetPolicyStoreId() const { return m_policyStoreId; }
  inline bool PolicyStoreIdHasBeenSet() const { return m_policyStoreIdHasBeenSet; }
  template <typename PolicyStoreIdT = Aws::String>
  void SetPolicyStoreId(PolicyStoreIdT&& value) {
    m_policyStoreIdHasBeenSet = true;
    m_policyStoreId = std::forward<PolicyStoreIdT>(value);
  }
  template <typename PolicyStoreIdT = Aws::String>
  PolicyStoreAliasItem& WithPolicyStoreId(PolicyStoreIdT&& value) {
    SetPolicyStoreId(std::forward<PolicyStoreIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the policy store alias.</p>
   */
  inline const Aws::String& GetAliasArn() const { return m_aliasArn; }
  inline bool AliasArnHasBeenSet() const { return m_aliasArnHasBeenSet; }
  template <typename AliasArnT = Aws::String>
  void SetAliasArn(AliasArnT&& value) {
    m_aliasArnHasBeenSet = true;
    m_aliasArn = std::forward<AliasArnT>(value);
  }
  template <typename AliasArnT = Aws::String>
  PolicyStoreAliasItem& WithAliasArn(AliasArnT&& value) {
    SetAliasArn(std::forward<AliasArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time the policy store alias was created.</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
  inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  void SetCreatedAt(CreatedAtT&& value) {
    m_createdAtHasBeenSet = true;
    m_createdAt = std::forward<CreatedAtT>(value);
  }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  PolicyStoreAliasItem& WithCreatedAt(CreatedAtT&& value) {
    SetCreatedAt(std::forward<CreatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The state of the policy store alias. Policy Store Aliases in the Active state
   * can be used normally. When a policy store alias is deleted, it enters the
   * PendingDeletion state. Policy Store Aliases in the PendingDeletion state cannot
   * be used, and creating a policy store alias with the same alias name will
   * fail.</p>
   */
  inline AliasState GetState() const { return m_state; }
  inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
  inline void SetState(AliasState value) {
    m_stateHasBeenSet = true;
    m_state = value;
  }
  inline PolicyStoreAliasItem& WithState(AliasState value) {
    SetState(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_aliasName;

  Aws::String m_policyStoreId;

  Aws::String m_aliasArn;

  Aws::Utils::DateTime m_createdAt{};

  AliasState m_state{AliasState::NOT_SET};
  bool m_aliasNameHasBeenSet = false;
  bool m_policyStoreIdHasBeenSet = false;
  bool m_aliasArnHasBeenSet = false;
  bool m_createdAtHasBeenSet = false;
  bool m_stateHasBeenSet = false;
};

}  // namespace Model
}  // namespace VerifiedPermissions
}  // namespace Aws
