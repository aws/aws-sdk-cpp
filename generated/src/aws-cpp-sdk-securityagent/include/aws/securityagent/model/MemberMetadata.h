/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityagent/SecurityAgent_EXPORTS.h>
#include <aws/securityagent/model/GroupMetadata.h>
#include <aws/securityagent/model/UserMetadata.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace SecurityAgent {
namespace Model {

/**
 * <p>Contains metadata about a member. This is a union type that contains
 * member-type-specific metadata.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/securityagent-2025-09-06/MemberMetadata">AWS
 * API Reference</a></p>
 */
class MemberMetadata {
 public:
  AWS_SECURITYAGENT_API MemberMetadata() = default;
  AWS_SECURITYAGENT_API MemberMetadata(Aws::Utils::Json::JsonView jsonValue);
  AWS_SECURITYAGENT_API MemberMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SECURITYAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The user metadata for the member.</p>
   */
  inline const UserMetadata& GetUser() const { return m_user; }
  inline bool UserHasBeenSet() const { return m_userHasBeenSet; }
  template <typename UserT = UserMetadata>
  void SetUser(UserT&& value) {
    m_userHasBeenSet = true;
    m_user = std::forward<UserT>(value);
  }
  template <typename UserT = UserMetadata>
  MemberMetadata& WithUser(UserT&& value) {
    SetUser(std::forward<UserT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The group metadata for the member.</p>
   */
  inline const GroupMetadata& GetGroup() const { return m_group; }
  inline bool GroupHasBeenSet() const { return m_groupHasBeenSet; }
  template <typename GroupT = GroupMetadata>
  void SetGroup(GroupT&& value) {
    m_groupHasBeenSet = true;
    m_group = std::forward<GroupT>(value);
  }
  template <typename GroupT = GroupMetadata>
  MemberMetadata& WithGroup(GroupT&& value) {
    SetGroup(std::forward<GroupT>(value));
    return *this;
  }
  ///@}
 private:
  UserMetadata m_user;

  GroupMetadata m_group;
  bool m_userHasBeenSet = false;
  bool m_groupHasBeenSet = false;
};

}  // namespace Model
}  // namespace SecurityAgent
}  // namespace Aws
