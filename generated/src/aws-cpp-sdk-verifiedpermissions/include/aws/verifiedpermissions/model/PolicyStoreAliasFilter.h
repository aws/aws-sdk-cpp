/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/verifiedpermissions/VerifiedPermissions_EXPORTS.h>

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
 * <p>Contains filters for the <code>ListPolicyStoreAliases</code>
 * operation.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/verifiedpermissions-2021-12-01/PolicyStoreAliasFilter">AWS
 * API Reference</a></p>
 */
class PolicyStoreAliasFilter {
 public:
  AWS_VERIFIEDPERMISSIONS_API PolicyStoreAliasFilter() = default;
  AWS_VERIFIEDPERMISSIONS_API PolicyStoreAliasFilter(Aws::Utils::Json::JsonView jsonValue);
  AWS_VERIFIEDPERMISSIONS_API PolicyStoreAliasFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_VERIFIEDPERMISSIONS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The ID of the policy store to filter by. Only policy store aliases associated
   * with this policy store are returned.</p>
   */
  inline const Aws::String& GetPolicyStoreId() const { return m_policyStoreId; }
  inline bool PolicyStoreIdHasBeenSet() const { return m_policyStoreIdHasBeenSet; }
  template <typename PolicyStoreIdT = Aws::String>
  void SetPolicyStoreId(PolicyStoreIdT&& value) {
    m_policyStoreIdHasBeenSet = true;
    m_policyStoreId = std::forward<PolicyStoreIdT>(value);
  }
  template <typename PolicyStoreIdT = Aws::String>
  PolicyStoreAliasFilter& WithPolicyStoreId(PolicyStoreIdT&& value) {
    SetPolicyStoreId(std::forward<PolicyStoreIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_policyStoreId;
  bool m_policyStoreIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace VerifiedPermissions
}  // namespace Aws
