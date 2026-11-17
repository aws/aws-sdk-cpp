/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mgn/Mgn_EXPORTS.h>

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
 * <p>Behavioral configuration for a security group rule construct.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/mgn-2020-02-26/SecurityGroupRuleConfiguration">AWS
 * API Reference</a></p>
 */
class SecurityGroupRuleConfiguration {
 public:
  AWS_MGN_API SecurityGroupRuleConfiguration() = default;
  AWS_MGN_API SecurityGroupRuleConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_MGN_API SecurityGroupRuleConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MGN_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Whether automatic conversion of CIDR-based sources and destinations to
   * security group references applies to this rule.</p>
   */
  inline bool GetEnableReferencing() const { return m_enableReferencing; }
  inline bool EnableReferencingHasBeenSet() const { return m_enableReferencingHasBeenSet; }
  inline void SetEnableReferencing(bool value) {
    m_enableReferencingHasBeenSet = true;
    m_enableReferencing = value;
  }
  inline SecurityGroupRuleConfiguration& WithEnableReferencing(bool value) {
    SetEnableReferencing(value);
    return *this;
  }
  ///@}
 private:
  bool m_enableReferencing{false};
  bool m_enableReferencingHasBeenSet = false;
};

}  // namespace Model
}  // namespace mgn
}  // namespace Aws
