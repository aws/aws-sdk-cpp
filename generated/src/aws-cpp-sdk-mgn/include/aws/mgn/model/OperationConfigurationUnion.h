/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mgn/Mgn_EXPORTS.h>
#include <aws/mgn/model/SecurityGroupConfiguration.h>
#include <aws/mgn/model/SecurityGroupRuleConfiguration.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace mgn {
namespace Model {

/**
 * <p>Construct-type-specific behavioral configuration. The variant provided must
 * match the construct type.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/mgn-2020-02-26/OperationConfigurationUnion">AWS
 * API Reference</a></p>
 */
class OperationConfigurationUnion {
 public:
  AWS_MGN_API OperationConfigurationUnion() = default;
  AWS_MGN_API OperationConfigurationUnion(Aws::Utils::Json::JsonView jsonValue);
  AWS_MGN_API OperationConfigurationUnion& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MGN_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Behavioral configuration for a security group construct.</p>
   */
  inline const SecurityGroupConfiguration& GetSecurityGroup() const { return m_securityGroup; }
  inline bool SecurityGroupHasBeenSet() const { return m_securityGroupHasBeenSet; }
  template <typename SecurityGroupT = SecurityGroupConfiguration>
  void SetSecurityGroup(SecurityGroupT&& value) {
    m_securityGroupHasBeenSet = true;
    m_securityGroup = std::forward<SecurityGroupT>(value);
  }
  template <typename SecurityGroupT = SecurityGroupConfiguration>
  OperationConfigurationUnion& WithSecurityGroup(SecurityGroupT&& value) {
    SetSecurityGroup(std::forward<SecurityGroupT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Behavioral configuration for a security group rule construct.</p>
   */
  inline const SecurityGroupRuleConfiguration& GetSecurityGroupRule() const { return m_securityGroupRule; }
  inline bool SecurityGroupRuleHasBeenSet() const { return m_securityGroupRuleHasBeenSet; }
  template <typename SecurityGroupRuleT = SecurityGroupRuleConfiguration>
  void SetSecurityGroupRule(SecurityGroupRuleT&& value) {
    m_securityGroupRuleHasBeenSet = true;
    m_securityGroupRule = std::forward<SecurityGroupRuleT>(value);
  }
  template <typename SecurityGroupRuleT = SecurityGroupRuleConfiguration>
  OperationConfigurationUnion& WithSecurityGroupRule(SecurityGroupRuleT&& value) {
    SetSecurityGroupRule(std::forward<SecurityGroupRuleT>(value));
    return *this;
  }
  ///@}
 private:
  SecurityGroupConfiguration m_securityGroup;

  SecurityGroupRuleConfiguration m_securityGroupRule;
  bool m_securityGroupHasBeenSet = false;
  bool m_securityGroupRuleHasBeenSet = false;
};

}  // namespace Model
}  // namespace mgn
}  // namespace Aws
