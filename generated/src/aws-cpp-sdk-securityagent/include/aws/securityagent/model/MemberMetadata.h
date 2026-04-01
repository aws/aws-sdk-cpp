/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityagent/SecurityAgent_EXPORTS.h>
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
 * <p>Metadata associated with the member</p><p><h3>See Also:</h3>   <a
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
   * <p>User metadata for USER members</p>
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
 private:
  UserMetadata m_user;
  bool m_userHasBeenSet = false;
};

}  // namespace Model
}  // namespace SecurityAgent
}  // namespace Aws
