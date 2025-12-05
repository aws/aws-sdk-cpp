/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/RoleGroupAssignment.h>

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
 * <p>Configuration settings for the SageMaker Partner AI App.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/PartnerAppConfig">AWS
 * API Reference</a></p>
 */
class PartnerAppConfig {
 public:
  AWS_SAGEMAKER_API PartnerAppConfig() = default;
  AWS_SAGEMAKER_API PartnerAppConfig(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKER_API PartnerAppConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The list of users that are given admin access to the SageMaker Partner AI
   * App.</p>
   */
  inline const Aws::Vector<Aws::String>& GetAdminUsers() const { return m_adminUsers; }
  inline bool AdminUsersHasBeenSet() const { return m_adminUsersHasBeenSet; }
  template <typename AdminUsersT = Aws::Vector<Aws::String>>
  void SetAdminUsers(AdminUsersT&& value) {
    m_adminUsersHasBeenSet = true;
    m_adminUsers = std::forward<AdminUsersT>(value);
  }
  template <typename AdminUsersT = Aws::Vector<Aws::String>>
  PartnerAppConfig& WithAdminUsers(AdminUsersT&& value) {
    SetAdminUsers(std::forward<AdminUsersT>(value));
    return *this;
  }
  template <typename AdminUsersT = Aws::String>
  PartnerAppConfig& AddAdminUsers(AdminUsersT&& value) {
    m_adminUsersHasBeenSet = true;
    m_adminUsers.emplace_back(std::forward<AdminUsersT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>This is a map of required inputs for a SageMaker Partner AI App. Based on the
   * application type, the map is populated with a key and value pair that is
   * specific to the user and application.</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetArguments() const { return m_arguments; }
  inline bool ArgumentsHasBeenSet() const { return m_argumentsHasBeenSet; }
  template <typename ArgumentsT = Aws::Map<Aws::String, Aws::String>>
  void SetArguments(ArgumentsT&& value) {
    m_argumentsHasBeenSet = true;
    m_arguments = std::forward<ArgumentsT>(value);
  }
  template <typename ArgumentsT = Aws::Map<Aws::String, Aws::String>>
  PartnerAppConfig& WithArguments(ArgumentsT&& value) {
    SetArguments(std::forward<ArgumentsT>(value));
    return *this;
  }
  template <typename ArgumentsKeyT = Aws::String, typename ArgumentsValueT = Aws::String>
  PartnerAppConfig& AddArguments(ArgumentsKeyT&& key, ArgumentsValueT&& value) {
    m_argumentsHasBeenSet = true;
    m_arguments.emplace(std::forward<ArgumentsKeyT>(key), std::forward<ArgumentsValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of Amazon Web Services IAM Identity Center group patterns that can
   * access the SageMaker Partner AI App. Group names support wildcard matching using
   * <code>*</code>. An empty list indicates the app will not use Identity Center
   * group features. All groups specified in <code>RoleGroupAssignments</code> must
   * match patterns in this list.</p>
   */
  inline const Aws::Vector<Aws::String>& GetAssignedGroupPatterns() const { return m_assignedGroupPatterns; }
  inline bool AssignedGroupPatternsHasBeenSet() const { return m_assignedGroupPatternsHasBeenSet; }
  template <typename AssignedGroupPatternsT = Aws::Vector<Aws::String>>
  void SetAssignedGroupPatterns(AssignedGroupPatternsT&& value) {
    m_assignedGroupPatternsHasBeenSet = true;
    m_assignedGroupPatterns = std::forward<AssignedGroupPatternsT>(value);
  }
  template <typename AssignedGroupPatternsT = Aws::Vector<Aws::String>>
  PartnerAppConfig& WithAssignedGroupPatterns(AssignedGroupPatternsT&& value) {
    SetAssignedGroupPatterns(std::forward<AssignedGroupPatternsT>(value));
    return *this;
  }
  template <typename AssignedGroupPatternsT = Aws::String>
  PartnerAppConfig& AddAssignedGroupPatterns(AssignedGroupPatternsT&& value) {
    m_assignedGroupPatternsHasBeenSet = true;
    m_assignedGroupPatterns.emplace_back(std::forward<AssignedGroupPatternsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A map of in-app roles to Amazon Web Services IAM Identity Center group
   * patterns. Groups assigned to specific roles receive those permissions, while
   * groups in <code>AssignedGroupPatterns</code> but not in this map receive default
   * in-app role depending on app type. Group patterns support wildcard matching
   * using <code>*</code>. Currently supported by Fiddler version 1.3 and later with
   * roles: <code>ORG_MEMBER</code> (default) and <code>ORG_ADMIN</code>.</p>
   */
  inline const Aws::Vector<RoleGroupAssignment>& GetRoleGroupAssignments() const { return m_roleGroupAssignments; }
  inline bool RoleGroupAssignmentsHasBeenSet() const { return m_roleGroupAssignmentsHasBeenSet; }
  template <typename RoleGroupAssignmentsT = Aws::Vector<RoleGroupAssignment>>
  void SetRoleGroupAssignments(RoleGroupAssignmentsT&& value) {
    m_roleGroupAssignmentsHasBeenSet = true;
    m_roleGroupAssignments = std::forward<RoleGroupAssignmentsT>(value);
  }
  template <typename RoleGroupAssignmentsT = Aws::Vector<RoleGroupAssignment>>
  PartnerAppConfig& WithRoleGroupAssignments(RoleGroupAssignmentsT&& value) {
    SetRoleGroupAssignments(std::forward<RoleGroupAssignmentsT>(value));
    return *this;
  }
  template <typename RoleGroupAssignmentsT = RoleGroupAssignment>
  PartnerAppConfig& AddRoleGroupAssignments(RoleGroupAssignmentsT&& value) {
    m_roleGroupAssignmentsHasBeenSet = true;
    m_roleGroupAssignments.emplace_back(std::forward<RoleGroupAssignmentsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<Aws::String> m_adminUsers;

  Aws::Map<Aws::String, Aws::String> m_arguments;

  Aws::Vector<Aws::String> m_assignedGroupPatterns;

  Aws::Vector<RoleGroupAssignment> m_roleGroupAssignments;
  bool m_adminUsersHasBeenSet = false;
  bool m_argumentsHasBeenSet = false;
  bool m_assignedGroupPatternsHasBeenSet = false;
  bool m_roleGroupAssignmentsHasBeenSet = false;
};

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
