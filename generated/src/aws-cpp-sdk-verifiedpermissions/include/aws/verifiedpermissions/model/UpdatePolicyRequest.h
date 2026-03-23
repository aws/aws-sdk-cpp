/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/verifiedpermissions/VerifiedPermissionsRequest.h>
#include <aws/verifiedpermissions/VerifiedPermissions_EXPORTS.h>
#include <aws/verifiedpermissions/model/UpdatePolicyDefinition.h>

#include <utility>

namespace Aws {
namespace VerifiedPermissions {
namespace Model {

/**
 */
class UpdatePolicyRequest : public VerifiedPermissionsRequest {
 public:
  AWS_VERIFIEDPERMISSIONS_API UpdatePolicyRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "UpdatePolicy"; }

  AWS_VERIFIEDPERMISSIONS_API Aws::String SerializePayload() const override;

  AWS_VERIFIEDPERMISSIONS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>Specifies the ID of the policy store that contains the policy that you want
   * to update.</p> <p>To specify a policy store, use its ID or alias name. When
   * using an alias name, prefix it with <code>policy-store-alias/</code>. For
   * example:</p> <ul> <li> <p>ID: <code>PSEXAMPLEabcdefg111111</code> </p> </li>
   * <li> <p>Alias name: <code>policy-store-alias/example-policy-store</code> </p>
   * </li> </ul> <p>To view aliases, use <a
   * href="https://docs.aws.amazon.com/verifiedpermissions/latest/apireference/API_ListPolicyStoreAliases.html">ListPolicyStoreAliases</a>.</p>
   */
  inline const Aws::String& GetPolicyStoreId() const { return m_policyStoreId; }
  inline bool PolicyStoreIdHasBeenSet() const { return m_policyStoreIdHasBeenSet; }
  template <typename PolicyStoreIdT = Aws::String>
  void SetPolicyStoreId(PolicyStoreIdT&& value) {
    m_policyStoreIdHasBeenSet = true;
    m_policyStoreId = std::forward<PolicyStoreIdT>(value);
  }
  template <typename PolicyStoreIdT = Aws::String>
  UpdatePolicyRequest& WithPolicyStoreId(PolicyStoreIdT&& value) {
    SetPolicyStoreId(std::forward<PolicyStoreIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies the ID of the policy that you want to update. To find this value,
   * you can use <a
   * href="https://docs.aws.amazon.com/verifiedpermissions/latest/apireference/API_ListPolicies.html">ListPolicies</a>.</p>
   * <p>You can use the policy name in place of the policy ID. When using a name,
   * prefix it with <code>name/</code>. For example:</p> <ul> <li> <p>ID:
   * <code>SPEXAMPLEabcdefg111111</code> </p> </li> <li> <p>Name:
   * <code>name/example-policy</code> </p> </li> </ul>
   */
  inline const Aws::String& GetPolicyId() const { return m_policyId; }
  inline bool PolicyIdHasBeenSet() const { return m_policyIdHasBeenSet; }
  template <typename PolicyIdT = Aws::String>
  void SetPolicyId(PolicyIdT&& value) {
    m_policyIdHasBeenSet = true;
    m_policyId = std::forward<PolicyIdT>(value);
  }
  template <typename PolicyIdT = Aws::String>
  UpdatePolicyRequest& WithPolicyId(PolicyIdT&& value) {
    SetPolicyId(std::forward<PolicyIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies the updated policy content that you want to replace on the
   * specified policy. The content must be valid Cedar policy language text.</p>
   * <p>If you don't specify this parameter, the existing policy definition remains
   * unchanged.</p> <p>You can change only the following elements from the policy
   * definition:</p> <ul> <li> <p>The <code>action</code> referenced by the
   * policy.</p> </li> <li> <p>Any conditional clauses, such as <code>when</code> or
   * <code>unless</code> clauses.</p> </li> </ul> <p>You <b>can't</b> change the
   * following elements:</p> <ul> <li> <p>Changing from <code>static</code> to
   * <code>templateLinked</code>.</p> </li> <li> <p>Changing the effect of the policy
   * from <code>permit</code> or <code>forbid</code>.</p> </li> <li> <p>The
   * <code>principal</code> referenced by the policy.</p> </li> <li> <p>The
   * <code>resource</code> referenced by the policy.</p> </li> </ul>
   */
  inline const UpdatePolicyDefinition& GetDefinition() const { return m_definition; }
  inline bool DefinitionHasBeenSet() const { return m_definitionHasBeenSet; }
  template <typename DefinitionT = UpdatePolicyDefinition>
  void SetDefinition(DefinitionT&& value) {
    m_definitionHasBeenSet = true;
    m_definition = std::forward<DefinitionT>(value);
  }
  template <typename DefinitionT = UpdatePolicyDefinition>
  UpdatePolicyRequest& WithDefinition(DefinitionT&& value) {
    SetDefinition(std::forward<DefinitionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies a name for the policy that is unique among all policies within the
   * policy store. You can use the name in place of the policy ID in API operations
   * that reference the policy. The name must be prefixed with
   * <code>name/</code>.</p>  <p>If you don't include the name in an update
   * request, the existing name is unchanged. To remove a name, set it to an empty
   * string (<code>""</code>).</p>  <p>If you specify a name that is already
   * associated with another policy in the policy store, you receive a
   * <code>ConflictException</code> error.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  UpdatePolicyRequest& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_policyStoreId;

  Aws::String m_policyId;

  UpdatePolicyDefinition m_definition;

  Aws::String m_name;
  bool m_policyStoreIdHasBeenSet = false;
  bool m_policyIdHasBeenSet = false;
  bool m_definitionHasBeenSet = false;
  bool m_nameHasBeenSet = false;
};

}  // namespace Model
}  // namespace VerifiedPermissions
}  // namespace Aws
