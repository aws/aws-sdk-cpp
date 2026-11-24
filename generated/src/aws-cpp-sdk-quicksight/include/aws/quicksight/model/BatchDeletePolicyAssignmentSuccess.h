/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/QuickSight_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace QuickSight {
namespace Model {

/**
 * <p>A principal that no longer has the policy after a
 * <code>BatchDeletePolicyAssignmentByPolicy</code> request, including a principal
 * that didn't have the policy.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/BatchDeletePolicyAssignmentSuccess">AWS
 * API Reference</a></p>
 */
class BatchDeletePolicyAssignmentSuccess {
 public:
  AWS_QUICKSIGHT_API BatchDeletePolicyAssignmentSuccess() = default;
  AWS_QUICKSIGHT_API BatchDeletePolicyAssignmentSuccess(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API BatchDeletePolicyAssignmentSuccess& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The ARN of the principal.</p>
   */
  inline const Aws::String& GetPrincipalArn() const { return m_principalArn; }
  inline bool PrincipalArnHasBeenSet() const { return m_principalArnHasBeenSet; }
  template <typename PrincipalArnT = Aws::String>
  void SetPrincipalArn(PrincipalArnT&& value) {
    m_principalArnHasBeenSet = true;
    m_principalArn = std::forward<PrincipalArnT>(value);
  }
  template <typename PrincipalArnT = Aws::String>
  BatchDeletePolicyAssignmentSuccess& WithPrincipalArn(PrincipalArnT&& value) {
    SetPrincipalArn(std::forward<PrincipalArnT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_principalArn;
  bool m_principalArnHasBeenSet = false;
};

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
