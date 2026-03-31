/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityagent/SecurityAgent_EXPORTS.h>
#include <aws/securityagent/model/UserRole.h>

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
 * <p>User membership configuration</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/securityagent-2025-09-06/UserConfig">AWS
 * API Reference</a></p>
 */
class UserConfig {
 public:
  AWS_SECURITYAGENT_API UserConfig() = default;
  AWS_SECURITYAGENT_API UserConfig(Aws::Utils::Json::JsonView jsonValue);
  AWS_SECURITYAGENT_API UserConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SECURITYAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Role of the user associated to the agent space</p>
   */
  inline UserRole GetRole() const { return m_role; }
  inline bool RoleHasBeenSet() const { return m_roleHasBeenSet; }
  inline void SetRole(UserRole value) {
    m_roleHasBeenSet = true;
    m_role = value;
  }
  inline UserConfig& WithRole(UserRole value) {
    SetRole(value);
    return *this;
  }
  ///@}
 private:
  UserRole m_role{UserRole::NOT_SET};
  bool m_roleHasBeenSet = false;
};

}  // namespace Model
}  // namespace SecurityAgent
}  // namespace Aws
