/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/verifiedpermissions/VerifiedPermissionsRequest.h>
#include <aws/verifiedpermissions/VerifiedPermissions_EXPORTS.h>

#include <utility>

namespace Aws {
namespace VerifiedPermissions {
namespace Model {

/**
 */
class UpdatePolicyTemplateRequest : public VerifiedPermissionsRequest {
 public:
  AWS_VERIFIEDPERMISSIONS_API UpdatePolicyTemplateRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "UpdatePolicyTemplate"; }

  AWS_VERIFIEDPERMISSIONS_API Aws::String SerializePayload() const override;

  AWS_VERIFIEDPERMISSIONS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>Specifies the ID of the policy store that contains the policy template that
   * you want to update.</p> <p>To specify a policy store, use its ID or alias name.
   * When using an alias name, prefix it with <code>policy-store-alias/</code>. For
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
  UpdatePolicyTemplateRequest& WithPolicyStoreId(PolicyStoreIdT&& value) {
    SetPolicyStoreId(std::forward<PolicyStoreIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies the ID of the policy template that you want to update.</p> <p>You
   * can use the policy template name in place of the policy template ID. When using
   * a name, prefix it with <code>name/</code>. For example:</p> <ul> <li> <p>ID:
   * <code>PTEXAMPLEabcdefg111111</code> </p> </li> <li> <p>Name:
   * <code>name/example-policy-template</code> </p> </li> </ul>
   */
  inline const Aws::String& GetPolicyTemplateId() const { return m_policyTemplateId; }
  inline bool PolicyTemplateIdHasBeenSet() const { return m_policyTemplateIdHasBeenSet; }
  template <typename PolicyTemplateIdT = Aws::String>
  void SetPolicyTemplateId(PolicyTemplateIdT&& value) {
    m_policyTemplateIdHasBeenSet = true;
    m_policyTemplateId = std::forward<PolicyTemplateIdT>(value);
  }
  template <typename PolicyTemplateIdT = Aws::String>
  UpdatePolicyTemplateRequest& WithPolicyTemplateId(PolicyTemplateIdT&& value) {
    SetPolicyTemplateId(std::forward<PolicyTemplateIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies a new description to apply to the policy template.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  UpdatePolicyTemplateRequest& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies new statement content written in Cedar policy language to replace
   * the current body of the policy template.</p> <p>You can change only the
   * following elements of the policy body:</p> <ul> <li> <p>The <code>action</code>
   * referenced by the policy template.</p> </li> <li> <p>Any conditional clauses,
   * such as <code>when</code> or <code>unless</code> clauses.</p> </li> </ul> <p>You
   * <b>can't</b> change the following elements:</p> <ul> <li> <p>The effect
   * (<code>permit</code> or <code>forbid</code>) of the policy template.</p> </li>
   * <li> <p>The <code>principal</code> referenced by the policy template.</p> </li>
   * <li> <p>The <code>resource</code> referenced by the policy template.</p> </li>
   * </ul>
   */
  inline const Aws::String& GetStatement() const { return m_statement; }
  inline bool StatementHasBeenSet() const { return m_statementHasBeenSet; }
  template <typename StatementT = Aws::String>
  void SetStatement(StatementT&& value) {
    m_statementHasBeenSet = true;
    m_statement = std::forward<StatementT>(value);
  }
  template <typename StatementT = Aws::String>
  UpdatePolicyTemplateRequest& WithStatement(StatementT&& value) {
    SetStatement(std::forward<StatementT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies a name for the policy template that is unique among all policy
   * templates within the policy store. You can use the name in place of the policy
   * template ID in API operations that reference the policy template. The name must
   * be prefixed with <code>name/</code>.</p>  <p>If you don't include the name
   * in an update request, the existing name is unchanged. To remove a name, set it
   * to an empty string (<code>""</code>).</p>  <p>If you specify a name that
   * is already associated with another policy template in the policy store, you
   * receive a <code>ConflictException</code> error.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  UpdatePolicyTemplateRequest& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_policyStoreId;

  Aws::String m_policyTemplateId;

  Aws::String m_description;

  Aws::String m_statement;

  Aws::String m_name;
  bool m_policyStoreIdHasBeenSet = false;
  bool m_policyTemplateIdHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_statementHasBeenSet = false;
  bool m_nameHasBeenSet = false;
};

}  // namespace Model
}  // namespace VerifiedPermissions
}  // namespace Aws
