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
class GetPolicyTemplateRequest : public VerifiedPermissionsRequest {
 public:
  AWS_VERIFIEDPERMISSIONS_API GetPolicyTemplateRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "GetPolicyTemplate"; }

  AWS_VERIFIEDPERMISSIONS_API Aws::String SerializePayload() const override;

  AWS_VERIFIEDPERMISSIONS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>Specifies the ID of the policy store that contains the policy template that
   * you want information about.</p> <p>To specify a policy store, use its ID or
   * alias name. When using an alias name, prefix it with
   * <code>policy-store-alias/</code>. For example:</p> <ul> <li> <p>ID:
   * <code>PSEXAMPLEabcdefg111111</code> </p> </li> <li> <p>Alias name:
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
  GetPolicyTemplateRequest& WithPolicyStoreId(PolicyStoreIdT&& value) {
    SetPolicyStoreId(std::forward<PolicyStoreIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies the ID of the policy template that you want information about.</p>
   * <p>You can use the policy template name in place of the policy template ID. When
   * using a name, prefix it with <code>name/</code>. For example:</p> <ul> <li>
   * <p>ID: <code>PTEXAMPLEabcdefg111111</code> </p> </li> <li> <p>Name:
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
  GetPolicyTemplateRequest& WithPolicyTemplateId(PolicyTemplateIdT&& value) {
    SetPolicyTemplateId(std::forward<PolicyTemplateIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_policyStoreId;

  Aws::String m_policyTemplateId;
  bool m_policyStoreIdHasBeenSet = false;
  bool m_policyTemplateIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace VerifiedPermissions
}  // namespace Aws
