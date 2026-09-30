/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/marketplace-discovery/MarketplaceDiscovery_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace MarketplaceDiscovery {
namespace Model {

/**
 * <p>Contains a recommended security group configuration for an AMI fulfillment
 * option.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/marketplace-discovery-2026-02-05/AmazonMachineImageSecurityGroup">AWS
 * API Reference</a></p>
 */
class AmazonMachineImageSecurityGroup {
 public:
  AWS_MARKETPLACEDISCOVERY_API AmazonMachineImageSecurityGroup() = default;
  AWS_MARKETPLACEDISCOVERY_API AmazonMachineImageSecurityGroup(Aws::Utils::Json::JsonView jsonValue);
  AWS_MARKETPLACEDISCOVERY_API AmazonMachineImageSecurityGroup& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MARKETPLACEDISCOVERY_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The IP protocol name, such as <code>tcp</code>.</p>
   */
  inline const Aws::String& GetProtocol() const { return m_protocol; }
  inline bool ProtocolHasBeenSet() const { return m_protocolHasBeenSet; }
  template <typename ProtocolT = Aws::String>
  void SetProtocol(ProtocolT&& value) {
    m_protocolHasBeenSet = true;
    m_protocol = std::forward<ProtocolT>(value);
  }
  template <typename ProtocolT = Aws::String>
  AmazonMachineImageSecurityGroup& WithProtocol(ProtocolT&& value) {
    SetProtocol(std::forward<ProtocolT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The start of the port range.</p>
   */
  inline int GetFromPort() const { return m_fromPort; }
  inline bool FromPortHasBeenSet() const { return m_fromPortHasBeenSet; }
  inline void SetFromPort(int value) {
    m_fromPortHasBeenSet = true;
    m_fromPort = value;
  }
  inline AmazonMachineImageSecurityGroup& WithFromPort(int value) {
    SetFromPort(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The end of the port range.</p>
   */
  inline int GetToPort() const { return m_toPort; }
  inline bool ToPortHasBeenSet() const { return m_toPortHasBeenSet; }
  inline void SetToPort(int value) {
    m_toPortHasBeenSet = true;
    m_toPort = value;
  }
  inline AmazonMachineImageSecurityGroup& WithToPort(int value) {
    SetToPort(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The IP address ranges in CIDR format.</p>
   */
  inline const Aws::Vector<Aws::String>& GetCidrIpAddresses() const { return m_cidrIpAddresses; }
  inline bool CidrIpAddressesHasBeenSet() const { return m_cidrIpAddressesHasBeenSet; }
  template <typename CidrIpAddressesT = Aws::Vector<Aws::String>>
  void SetCidrIpAddresses(CidrIpAddressesT&& value) {
    m_cidrIpAddressesHasBeenSet = true;
    m_cidrIpAddresses = std::forward<CidrIpAddressesT>(value);
  }
  template <typename CidrIpAddressesT = Aws::Vector<Aws::String>>
  AmazonMachineImageSecurityGroup& WithCidrIpAddresses(CidrIpAddressesT&& value) {
    SetCidrIpAddresses(std::forward<CidrIpAddressesT>(value));
    return *this;
  }
  template <typename CidrIpAddressesT = Aws::String>
  AmazonMachineImageSecurityGroup& AddCidrIpAddresses(CidrIpAddressesT&& value) {
    m_cidrIpAddressesHasBeenSet = true;
    m_cidrIpAddresses.emplace_back(std::forward<CidrIpAddressesT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_protocol;

  int m_fromPort{0};

  int m_toPort{0};

  Aws::Vector<Aws::String> m_cidrIpAddresses;
  bool m_protocolHasBeenSet = false;
  bool m_fromPortHasBeenSet = false;
  bool m_toPortHasBeenSet = false;
  bool m_cidrIpAddressesHasBeenSet = false;
};

}  // namespace Model
}  // namespace MarketplaceDiscovery
}  // namespace Aws
