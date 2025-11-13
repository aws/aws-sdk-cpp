/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker/SageMaker_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace SageMaker {
namespace Model {

/**
 * <p>Defines the mapping between an in-app role and the AWS IAM Identity Center
 * group patterns that should be assigned to that role within the SageMaker Partner
 * AI App.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/RoleGroupAssignment">AWS
 * API Reference</a></p>
 */
class RoleGroupAssignment {
 public:
  AWS_SAGEMAKER_API RoleGroupAssignment() = default;
  AWS_SAGEMAKER_API RoleGroupAssignment(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKER_API RoleGroupAssignment& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The name of the in-app role within the SageMaker Partner AI App. The specific
   * roles available depend on the app type and version.</p>
   */
  inline const Aws::String& GetRoleName() const { return m_roleName; }
  inline bool RoleNameHasBeenSet() const { return m_roleNameHasBeenSet; }
  template <typename RoleNameT = Aws::String>
  void SetRoleName(RoleNameT&& value) {
    m_roleNameHasBeenSet = true;
    m_roleName = std::forward<RoleNameT>(value);
  }
  template <typename RoleNameT = Aws::String>
  RoleGroupAssignment& WithRoleName(RoleNameT&& value) {
    SetRoleName(std::forward<RoleNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of AWS IAM Identity Center group patterns that should be assigned to
   * the specified role. Group patterns support wildcard matching using
   * <code>*</code>.</p>
   */
  inline const Aws::Vector<Aws::String>& GetGroupPatterns() const { return m_groupPatterns; }
  inline bool GroupPatternsHasBeenSet() const { return m_groupPatternsHasBeenSet; }
  template <typename GroupPatternsT = Aws::Vector<Aws::String>>
  void SetGroupPatterns(GroupPatternsT&& value) {
    m_groupPatternsHasBeenSet = true;
    m_groupPatterns = std::forward<GroupPatternsT>(value);
  }
  template <typename GroupPatternsT = Aws::Vector<Aws::String>>
  RoleGroupAssignment& WithGroupPatterns(GroupPatternsT&& value) {
    SetGroupPatterns(std::forward<GroupPatternsT>(value));
    return *this;
  }
  template <typename GroupPatternsT = Aws::String>
  RoleGroupAssignment& AddGroupPatterns(GroupPatternsT&& value) {
    m_groupPatternsHasBeenSet = true;
    m_groupPatterns.emplace_back(std::forward<GroupPatternsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_roleName;
  bool m_roleNameHasBeenSet = false;

  Aws::Vector<Aws::String> m_groupPatterns;
  bool m_groupPatternsHasBeenSet = false;
};

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
