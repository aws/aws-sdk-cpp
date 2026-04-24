/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securityagent/SecurityAgent_EXPORTS.h>

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
 * <p>IdC configuration containing application and instance ARNs</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/securityagent-2025-09-06/IdCConfiguration">AWS
 * API Reference</a></p>
 */
class IdCConfiguration {
 public:
  AWS_SECURITYAGENT_API IdCConfiguration() = default;
  AWS_SECURITYAGENT_API IdCConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_SECURITYAGENT_API IdCConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SECURITYAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>ARN of the IAM Identity Center application associated with this
   * application</p>
   */
  inline const Aws::String& GetIdcApplicationArn() const { return m_idcApplicationArn; }
  inline bool IdcApplicationArnHasBeenSet() const { return m_idcApplicationArnHasBeenSet; }
  template <typename IdcApplicationArnT = Aws::String>
  void SetIdcApplicationArn(IdcApplicationArnT&& value) {
    m_idcApplicationArnHasBeenSet = true;
    m_idcApplicationArn = std::forward<IdcApplicationArnT>(value);
  }
  template <typename IdcApplicationArnT = Aws::String>
  IdCConfiguration& WithIdcApplicationArn(IdcApplicationArnT&& value) {
    SetIdcApplicationArn(std::forward<IdcApplicationArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>ARN of the IAM Identity Center instance used for user authentication</p>
   */
  inline const Aws::String& GetIdcInstanceArn() const { return m_idcInstanceArn; }
  inline bool IdcInstanceArnHasBeenSet() const { return m_idcInstanceArnHasBeenSet; }
  template <typename IdcInstanceArnT = Aws::String>
  void SetIdcInstanceArn(IdcInstanceArnT&& value) {
    m_idcInstanceArnHasBeenSet = true;
    m_idcInstanceArn = std::forward<IdcInstanceArnT>(value);
  }
  template <typename IdcInstanceArnT = Aws::String>
  IdCConfiguration& WithIdcInstanceArn(IdcInstanceArnT&& value) {
    SetIdcInstanceArn(std::forward<IdcInstanceArnT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_idcApplicationArn;

  Aws::String m_idcInstanceArn;
  bool m_idcApplicationArnHasBeenSet = false;
  bool m_idcInstanceArnHasBeenSet = false;
};

}  // namespace Model
}  // namespace SecurityAgent
}  // namespace Aws
