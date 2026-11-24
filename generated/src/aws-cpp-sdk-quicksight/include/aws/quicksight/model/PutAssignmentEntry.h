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
 * <p>A principal to assign a policy to in a
 * <code>BatchPutPolicyAssignmentByPolicy</code> request.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/PutAssignmentEntry">AWS
 * API Reference</a></p>
 */
class PutAssignmentEntry {
 public:
  AWS_QUICKSIGHT_API PutAssignmentEntry() = default;
  AWS_QUICKSIGHT_API PutAssignmentEntry(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API PutAssignmentEntry& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The ARN of the user, group, or account to assign the policy to.</p>
   */
  inline const Aws::String& GetPrincipalArn() const { return m_principalArn; }
  inline bool PrincipalArnHasBeenSet() const { return m_principalArnHasBeenSet; }
  template <typename PrincipalArnT = Aws::String>
  void SetPrincipalArn(PrincipalArnT&& value) {
    m_principalArnHasBeenSet = true;
    m_principalArn = std::forward<PrincipalArnT>(value);
  }
  template <typename PrincipalArnT = Aws::String>
  PutAssignmentEntry& WithPrincipalArn(PrincipalArnT&& value) {
    SetPrincipalArn(std::forward<PrincipalArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ARN of the policy that you expect the principal to have before this
   * request. If the principal has a different policy of the same type, or no policy
   * of that type, this entry fails with a <code>ConflictException</code> error code
   * and makes no change.</p>
   */
  inline const Aws::String& GetExistingPolicyArn() const { return m_existingPolicyArn; }
  inline bool ExistingPolicyArnHasBeenSet() const { return m_existingPolicyArnHasBeenSet; }
  template <typename ExistingPolicyArnT = Aws::String>
  void SetExistingPolicyArn(ExistingPolicyArnT&& value) {
    m_existingPolicyArnHasBeenSet = true;
    m_existingPolicyArn = std::forward<ExistingPolicyArnT>(value);
  }
  template <typename ExistingPolicyArnT = Aws::String>
  PutAssignmentEntry& WithExistingPolicyArn(ExistingPolicyArnT&& value) {
    SetExistingPolicyArn(std::forward<ExistingPolicyArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The revision of the assignment from your most recent read. If the assignment
   * has changed since that revision, this entry fails with a
   * <code>ConflictException</code> error code.</p>
   */
  inline long long GetRevision() const { return m_revision; }
  inline bool RevisionHasBeenSet() const { return m_revisionHasBeenSet; }
  inline void SetRevision(long long value) {
    m_revisionHasBeenSet = true;
    m_revision = value;
  }
  inline PutAssignmentEntry& WithRevision(long long value) {
    SetRevision(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_principalArn;

  Aws::String m_existingPolicyArn;

  long long m_revision{0};
  bool m_principalArnHasBeenSet = false;
  bool m_existingPolicyArnHasBeenSet = false;
  bool m_revisionHasBeenSet = false;
};

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
