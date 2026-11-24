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
 * <p>A principal that a <code>BatchPutPolicyAssignmentByPolicy</code> request
 * assigned the policy to.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/BatchPutPolicyAssignmentSuccess">AWS
 * API Reference</a></p>
 */
class BatchPutPolicyAssignmentSuccess {
 public:
  AWS_QUICKSIGHT_API BatchPutPolicyAssignmentSuccess() = default;
  AWS_QUICKSIGHT_API BatchPutPolicyAssignmentSuccess(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API BatchPutPolicyAssignmentSuccess& operator=(Aws::Utils::Json::JsonView jsonValue);
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
  BatchPutPolicyAssignmentSuccess& WithPrincipalArn(PrincipalArnT&& value) {
    SetPrincipalArn(std::forward<PrincipalArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ARN of the policy that this assignment replaced. This value is absent if
   * the principal had no policy of this type before the request.</p>
   */
  inline const Aws::String& GetReplacedPolicyArn() const { return m_replacedPolicyArn; }
  inline bool ReplacedPolicyArnHasBeenSet() const { return m_replacedPolicyArnHasBeenSet; }
  template <typename ReplacedPolicyArnT = Aws::String>
  void SetReplacedPolicyArn(ReplacedPolicyArnT&& value) {
    m_replacedPolicyArnHasBeenSet = true;
    m_replacedPolicyArn = std::forward<ReplacedPolicyArnT>(value);
  }
  template <typename ReplacedPolicyArnT = Aws::String>
  BatchPutPolicyAssignmentSuccess& WithReplacedPolicyArn(ReplacedPolicyArnT&& value) {
    SetReplacedPolicyArn(std::forward<ReplacedPolicyArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The revision of the assignment after this request.</p>
   */
  inline long long GetRevision() const { return m_revision; }
  inline bool RevisionHasBeenSet() const { return m_revisionHasBeenSet; }
  inline void SetRevision(long long value) {
    m_revisionHasBeenSet = true;
    m_revision = value;
  }
  inline BatchPutPolicyAssignmentSuccess& WithRevision(long long value) {
    SetRevision(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_principalArn;

  Aws::String m_replacedPolicyArn;

  long long m_revision{0};
  bool m_principalArnHasBeenSet = false;
  bool m_replacedPolicyArnHasBeenSet = false;
  bool m_revisionHasBeenSet = false;
};

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
