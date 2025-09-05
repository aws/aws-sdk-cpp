/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pcs/PCS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/pcs/model/NetworkType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace PCS
{
namespace Model
{

  /**
   * <p>The networking configuration for the cluster's control plane.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pcs-2023-02-10/Networking">AWS API
   * Reference</a></p>
   */
  class Networking
  {
  public:
    AWS_PCS_API Networking() = default;
    AWS_PCS_API Networking(Aws::Utils::Json::JsonView jsonValue);
    AWS_PCS_API Networking& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PCS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the subnet where PCS creates an Elastic Network Interface (ENI) to
     * enable communication between managed controllers and PCS resources. The subnet
     * must have an available IP address, cannot reside in Outposts, Wavelength, or an
     * Amazon Web Services Local Zone.</p> <p> Example: <code>subnet-abcd1234</code>
     * </p>
     */
    inline const Aws::Vector<Aws::String>& GetSubnetIds() const { return m_subnetIds; }
    inline bool SubnetIdsHasBeenSet() const { return m_subnetIdsHasBeenSet; }
    template<typename SubnetIdsT = Aws::Vector<Aws::String>>
    void SetSubnetIds(SubnetIdsT&& value) { m_subnetIdsHasBeenSet = true; m_subnetIds = std::forward<SubnetIdsT>(value); }
    template<typename SubnetIdsT = Aws::Vector<Aws::String>>
    Networking& WithSubnetIds(SubnetIdsT&& value) { SetSubnetIds(std::forward<SubnetIdsT>(value)); return *this;}
    template<typename SubnetIdsT = Aws::String>
    Networking& AddSubnetIds(SubnetIdsT&& value) { m_subnetIdsHasBeenSet = true; m_subnetIds.emplace_back(std::forward<SubnetIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The list of security group IDs associated with the Elastic Network Interface
     * (ENI) created in subnets.</p> <p>The following rules are required:</p> <ul> <li>
     * <p>Inbound rule 1</p> <ul> <li> <p>Protocol: All</p> </li> <li> <p>Ports:
     * All</p> </li> <li> <p>Source: Self</p> </li> </ul> </li> <li> <p>Outbound rule
     * 1</p> <ul> <li> <p>Protocol: All</p> </li> <li> <p>Ports: All</p> </li> <li>
     * <p>Destination: 0.0.0.0/0 (IPv4) or ::/0 (IPv6)</p> </li> </ul> </li> <li>
     * <p>Outbound rule 2</p> <ul> <li> <p>Protocol: All</p> </li> <li> <p>Ports:
     * All</p> </li> <li> <p>Destination: Self</p> </li> </ul> </li> </ul>
     */
    inline const Aws::Vector<Aws::String>& GetSecurityGroupIds() const { return m_securityGroupIds; }
    inline bool SecurityGroupIdsHasBeenSet() const { return m_securityGroupIdsHasBeenSet; }
    template<typename SecurityGroupIdsT = Aws::Vector<Aws::String>>
    void SetSecurityGroupIds(SecurityGroupIdsT&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds = std::forward<SecurityGroupIdsT>(value); }
    template<typename SecurityGroupIdsT = Aws::Vector<Aws::String>>
    Networking& WithSecurityGroupIds(SecurityGroupIdsT&& value) { SetSecurityGroupIds(std::forward<SecurityGroupIdsT>(value)); return *this;}
    template<typename SecurityGroupIdsT = Aws::String>
    Networking& AddSecurityGroupIds(SecurityGroupIdsT&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.emplace_back(std::forward<SecurityGroupIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The IP address version the cluster uses. The default is
     * <code>IPV4</code>.</p>
     */
    inline NetworkType GetNetworkType() const { return m_networkType; }
    inline bool NetworkTypeHasBeenSet() const { return m_networkTypeHasBeenSet; }
    inline void SetNetworkType(NetworkType value) { m_networkTypeHasBeenSet = true; m_networkType = value; }
    inline Networking& WithNetworkType(NetworkType value) { SetNetworkType(value); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_subnetIds;
    bool m_subnetIdsHasBeenSet = false;

    Aws::Vector<Aws::String> m_securityGroupIds;
    bool m_securityGroupIdsHasBeenSet = false;

    NetworkType m_networkType{NetworkType::NOT_SET};
    bool m_networkTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace PCS
} // namespace Aws
