/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
 * <p>Customer VPC configuration that the Security Agent accesses</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/securityagent-2025-09-06/VpcConfig">AWS
 * API Reference</a></p>
 */
class VpcConfig {
 public:
  AWS_SECURITYAGENT_API VpcConfig() = default;
  AWS_SECURITYAGENT_API VpcConfig(Aws::Utils::Json::JsonView jsonValue);
  AWS_SECURITYAGENT_API VpcConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SECURITYAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>ARN or ID of the customer VPC</p>
   */
  inline const Aws::String& GetVpcArn() const { return m_vpcArn; }
  inline bool VpcArnHasBeenSet() const { return m_vpcArnHasBeenSet; }
  template <typename VpcArnT = Aws::String>
  void SetVpcArn(VpcArnT&& value) {
    m_vpcArnHasBeenSet = true;
    m_vpcArn = std::forward<VpcArnT>(value);
  }
  template <typename VpcArnT = Aws::String>
  VpcConfig& WithVpcArn(VpcArnT&& value) {
    SetVpcArn(std::forward<VpcArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>List of security group ARNs or IDs in the customer VPC</p>
   */
  inline const Aws::Vector<Aws::String>& GetSecurityGroupArns() const { return m_securityGroupArns; }
  inline bool SecurityGroupArnsHasBeenSet() const { return m_securityGroupArnsHasBeenSet; }
  template <typename SecurityGroupArnsT = Aws::Vector<Aws::String>>
  void SetSecurityGroupArns(SecurityGroupArnsT&& value) {
    m_securityGroupArnsHasBeenSet = true;
    m_securityGroupArns = std::forward<SecurityGroupArnsT>(value);
  }
  template <typename SecurityGroupArnsT = Aws::Vector<Aws::String>>
  VpcConfig& WithSecurityGroupArns(SecurityGroupArnsT&& value) {
    SetSecurityGroupArns(std::forward<SecurityGroupArnsT>(value));
    return *this;
  }
  template <typename SecurityGroupArnsT = Aws::String>
  VpcConfig& AddSecurityGroupArns(SecurityGroupArnsT&& value) {
    m_securityGroupArnsHasBeenSet = true;
    m_securityGroupArns.emplace_back(std::forward<SecurityGroupArnsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>List of subnet ARNs or IDs in the customer VPC</p>
   */
  inline const Aws::Vector<Aws::String>& GetSubnetArns() const { return m_subnetArns; }
  inline bool SubnetArnsHasBeenSet() const { return m_subnetArnsHasBeenSet; }
  template <typename SubnetArnsT = Aws::Vector<Aws::String>>
  void SetSubnetArns(SubnetArnsT&& value) {
    m_subnetArnsHasBeenSet = true;
    m_subnetArns = std::forward<SubnetArnsT>(value);
  }
  template <typename SubnetArnsT = Aws::Vector<Aws::String>>
  VpcConfig& WithSubnetArns(SubnetArnsT&& value) {
    SetSubnetArns(std::forward<SubnetArnsT>(value));
    return *this;
  }
  template <typename SubnetArnsT = Aws::String>
  VpcConfig& AddSubnetArns(SubnetArnsT&& value) {
    m_subnetArnsHasBeenSet = true;
    m_subnetArns.emplace_back(std::forward<SubnetArnsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_vpcArn;

  Aws::Vector<Aws::String> m_securityGroupArns;

  Aws::Vector<Aws::String> m_subnetArns;
  bool m_vpcArnHasBeenSet = false;
  bool m_securityGroupArnsHasBeenSet = false;
  bool m_subnetArnsHasBeenSet = false;
};

}  // namespace Model
}  // namespace SecurityAgent
}  // namespace Aws
