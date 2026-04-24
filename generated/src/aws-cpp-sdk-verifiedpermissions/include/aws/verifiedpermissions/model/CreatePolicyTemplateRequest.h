/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/UUID.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/verifiedpermissions/VerifiedPermissionsRequest.h>
#include <aws/verifiedpermissions/VerifiedPermissions_EXPORTS.h>

#include <utility>

namespace Aws {
namespace VerifiedPermissions {
namespace Model {

/**
 */
class CreatePolicyTemplateRequest : public VerifiedPermissionsRequest {
 public:
  AWS_VERIFIEDPERMISSIONS_API CreatePolicyTemplateRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "CreatePolicyTemplate"; }

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
  template <typename ClientTokenT = Aws::String>
  void SetClientToken(ClientTokenT&& value) {
    m_clientTokenHasBeenSet = true;
    m_clientToken = std::forward<ClientTokenT>(value);
  }
  template <typename ClientTokenT = Aws::String>
  CreatePolicyTemplateRequest& WithClientToken(ClientTokenT&& value) {
    SetClientToken(std::forward<ClientTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the policy store in which to create the policy template.</p> <p>To
   * specify a policy store, use its ID or alias name. When using an alias name,
   * prefix it with <code>policy-store-alias/</code>. For example:</p> <ul> <li>
   * <p>ID: <code>PSEXAMPLEabcdefg111111</code> </p> </li> <li> <p>Alias name:
   * <code>policy-store-alias/example-policy-store</code> </p> </li> </ul> <p>To view
   * aliases, use <a
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
  CreatePolicyTemplateRequest& WithPolicyStoreId(PolicyStoreIdT&& value) {
    SetPolicyStoreId(std::forward<PolicyStoreIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies a description for the policy template.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  CreatePolicyTemplateRequest& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies the content that you want to use for the new policy template,
   * written in the Cedar policy language.</p>
   */
  inline const Aws::String& GetStatement() const { return m_statement; }
  inline bool StatementHasBeenSet() const { return m_statementHasBeenSet; }
  template <typename StatementT = Aws::String>
  void SetStatement(StatementT&& value) {
    m_statementHasBeenSet = true;
    m_statement = std::forward<StatementT>(value);
  }
  template <typename StatementT = Aws::String>
  CreatePolicyTemplateRequest& WithStatement(StatementT&& value) {
    SetStatement(std::forward<StatementT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies a name for the policy template that is unique among all policy
   * templates within the policy store. You can use the name in place of the policy
   * template ID in API operations that reference the policy template. The name must
   * be prefixed with <code>name/</code>.</p> <p>If you specify a name that is
   * already associated with another policy template in the policy store, you receive
   * a <code>ConflictException</code> error.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  CreatePolicyTemplateRequest& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};

  Aws::String m_policyStoreId;

  Aws::String m_description;

  Aws::String m_statement;

  Aws::String m_name;
  bool m_clientTokenHasBeenSet = true;
  bool m_policyStoreIdHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_statementHasBeenSet = false;
  bool m_nameHasBeenSet = false;
};

}  // namespace Model
}  // namespace VerifiedPermissions
}  // namespace Aws
