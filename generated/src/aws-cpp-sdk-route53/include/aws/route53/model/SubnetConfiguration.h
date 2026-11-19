/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/route53/Route53_EXPORTS.h>

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
 * <p>A complex type that identifies one subnet for a health check source and the
 * security groups that Route 53 associates with the network interfaces that it
 * creates in that subnet.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/route53-2013-04-01/SubnetConfiguration">AWS
 * API Reference</a></p>
 */
class SubnetConfiguration {
 public:
  AWS_ROUTE53_API SubnetConfiguration() = default;
  AWS_ROUTE53_API SubnetConfiguration(const Aws::Utils::Xml::XmlNode& xmlNode);
  AWS_ROUTE53_API SubnetConfiguration& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

  AWS_ROUTE53_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;

  ///@{
  /**
   * <p>The ID of the subnet that Route 53 uses to send health check requests.</p>
   */
  inline const Aws::String& GetSubnetId() const { return m_subnetId; }
  inline bool SubnetIdHasBeenSet() const { return m_subnetIdHasBeenSet; }
  template <typename SubnetIdT = Aws::String>
  void SetSubnetId(SubnetIdT&& value) {
    m_subnetIdHasBeenSet = true;
    m_subnetId = std::forward<SubnetIdT>(value);
  }
  template <typename SubnetIdT = Aws::String>
  SubnetConfiguration& WithSubnetId(SubnetIdT&& value) {
    SetSubnetId(std::forward<SubnetIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the Availability Zone that contains the subnet, for example
   * <code>use1-az1</code>. Specify the Availability Zone ID, not the Availability
   * Zone name.</p>
   */
  inline const Aws::String& GetAvailabilityZoneId() const { return m_availabilityZoneId; }
  inline bool AvailabilityZoneIdHasBeenSet() const { return m_availabilityZoneIdHasBeenSet; }
  template <typename AvailabilityZoneIdT = Aws::String>
  void SetAvailabilityZoneId(AvailabilityZoneIdT&& value) {
    m_availabilityZoneIdHasBeenSet = true;
    m_availabilityZoneId = std::forward<AvailabilityZoneIdT>(value);
  }
  template <typename AvailabilityZoneIdT = Aws::String>
  SubnetConfiguration& WithAvailabilityZoneId(AvailabilityZoneIdT&& value) {
    SetAvailabilityZoneId(std::forward<AvailabilityZoneIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The IDs of the security groups in the same virtual private cloud (VPC) to
   * associate with the network interfaces that Route 53 creates in this subnet. The
   * security groups must allow outbound traffic to the endpoints that the health
   * checks monitor.</p>
   */
  inline const Aws::Vector<Aws::String>& GetSecurityGroupIdList() const { return m_securityGroupIdList; }
  inline bool SecurityGroupIdListHasBeenSet() const { return m_securityGroupIdListHasBeenSet; }
  template <typename SecurityGroupIdListT = Aws::Vector<Aws::String>>
  void SetSecurityGroupIdList(SecurityGroupIdListT&& value) {
    m_securityGroupIdListHasBeenSet = true;
    m_securityGroupIdList = std::forward<SecurityGroupIdListT>(value);
  }
  template <typename SecurityGroupIdListT = Aws::Vector<Aws::String>>
  SubnetConfiguration& WithSecurityGroupIdList(SecurityGroupIdListT&& value) {
    SetSecurityGroupIdList(std::forward<SecurityGroupIdListT>(value));
    return *this;
  }
  template <typename SecurityGroupIdListT = Aws::String>
  SubnetConfiguration& AddSecurityGroupIdList(SecurityGroupIdListT&& value) {
    m_securityGroupIdListHasBeenSet = true;
    m_securityGroupIdList.emplace_back(std::forward<SecurityGroupIdListT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_subnetId;

  Aws::String m_availabilityZoneId;

  Aws::Vector<Aws::String> m_securityGroupIdList;
  bool m_subnetIdHasBeenSet = false;
  bool m_availabilityZoneIdHasBeenSet = false;
  bool m_securityGroupIdListHasBeenSet = false;
};

}  // namespace Model
}  // namespace Route53
}  // namespace Aws
