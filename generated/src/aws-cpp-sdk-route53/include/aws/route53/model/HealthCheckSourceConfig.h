/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/route53/Route53_EXPORTS.h>
#include <aws/route53/model/SubnetConfiguration.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Xml {
class XmlNode;
}  // namespace Xml
}  // namespace Utils
namespace Route53 {
namespace Model {

/**
 * <p>A complex type that contains the virtual private cloud (VPC), subnets, and
 * security groups for a health check source. You can't change these values after
 * you create the source.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/route53-2013-04-01/HealthCheckSourceConfig">AWS
 * API Reference</a></p>
 */
class HealthCheckSourceConfig {
 public:
  AWS_ROUTE53_API HealthCheckSourceConfig() = default;
  AWS_ROUTE53_API HealthCheckSourceConfig(const Aws::Utils::Xml::XmlNode& xmlNode);
  AWS_ROUTE53_API HealthCheckSourceConfig& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

  AWS_ROUTE53_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;

  ///@{
  /**
   * <p>The ID of the virtual private cloud (VPC) that contains the subnets for the
   * health check source. All subnets in <code>SubnetConfigurationList</code> must
   * belong to this VPC.</p>
   */
  inline const Aws::String& GetVpcId() const { return m_vpcId; }
  inline bool VpcIdHasBeenSet() const { return m_vpcIdHasBeenSet; }
  template <typename VpcIdT = Aws::String>
  void SetVpcId(VpcIdT&& value) {
    m_vpcIdHasBeenSet = true;
    m_vpcId = std::forward<VpcIdT>(value);
  }
  template <typename VpcIdT = Aws::String>
  HealthCheckSourceConfig& WithVpcId(VpcIdT&& value) {
    SetVpcId(std::forward<VpcIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A complex type that contains two or three <code>SubnetConfiguration</code>
   * elements, one in each Availability Zone that Route 53 uses for private endpoint
   * health checks in the Amazon Web Services Region. The Availability Zones must be
   * distinct. Route 53 creates network interfaces in each subnet and sends health
   * check requests from all of them.</p>
   */
  inline const Aws::Vector<SubnetConfiguration>& GetSubnetConfigurationList() const { return m_subnetConfigurationList; }
  inline bool SubnetConfigurationListHasBeenSet() const { return m_subnetConfigurationListHasBeenSet; }
  template <typename SubnetConfigurationListT = Aws::Vector<SubnetConfiguration>>
  void SetSubnetConfigurationList(SubnetConfigurationListT&& value) {
    m_subnetConfigurationListHasBeenSet = true;
    m_subnetConfigurationList = std::forward<SubnetConfigurationListT>(value);
  }
  template <typename SubnetConfigurationListT = Aws::Vector<SubnetConfiguration>>
  HealthCheckSourceConfig& WithSubnetConfigurationList(SubnetConfigurationListT&& value) {
    SetSubnetConfigurationList(std::forward<SubnetConfigurationListT>(value));
    return *this;
  }
  template <typename SubnetConfigurationListT = SubnetConfiguration>
  HealthCheckSourceConfig& AddSubnetConfigurationList(SubnetConfigurationListT&& value) {
    m_subnetConfigurationListHasBeenSet = true;
    m_subnetConfigurationList.emplace_back(std::forward<SubnetConfigurationListT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_vpcId;

  Aws::Vector<SubnetConfiguration> m_subnetConfigurationList;
  bool m_vpcIdHasBeenSet = false;
  bool m_subnetConfigurationListHasBeenSet = false;
};

}  // namespace Model
}  // namespace Route53
}  // namespace Aws
