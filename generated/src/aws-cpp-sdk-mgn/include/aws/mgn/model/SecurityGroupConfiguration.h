/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mgn/Mgn_EXPORTS.h>
#include <aws/mgn/model/SecurityGroupAssociations.h>

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
 * <p>Behavioral configuration for a security group construct.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/mgn-2020-02-26/SecurityGroupConfiguration">AWS
 * API Reference</a></p>
 */
class SecurityGroupConfiguration {
 public:
  AWS_MGN_API SecurityGroupConfiguration() = default;
  AWS_MGN_API SecurityGroupConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_MGN_API SecurityGroupConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MGN_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The CIDR ranges and machine identifiers that associate source machines with
   * the security group. Each list provided replaces the stored list rather than
   * merging into it.</p>
   */
  inline const SecurityGroupAssociations& GetAssociations() const { return m_associations; }
  inline bool AssociationsHasBeenSet() const { return m_associationsHasBeenSet; }
  template <typename AssociationsT = SecurityGroupAssociations>
  void SetAssociations(AssociationsT&& value) {
    m_associationsHasBeenSet = true;
    m_associations = std::forward<AssociationsT>(value);
  }
  template <typename AssociationsT = SecurityGroupAssociations>
  SecurityGroupConfiguration& WithAssociations(AssociationsT&& value) {
    SetAssociations(std::forward<AssociationsT>(value));
    return *this;
  }
  ///@}
 private:
  SecurityGroupAssociations m_associations;
  bool m_associationsHasBeenSet = false;
};

}  // namespace Model
}  // namespace mgn
}  // namespace Aws
