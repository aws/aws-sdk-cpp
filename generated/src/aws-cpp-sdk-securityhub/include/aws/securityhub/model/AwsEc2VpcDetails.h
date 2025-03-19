/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securityhub/model/CidrBlockAssociation.h>
#include <aws/securityhub/model/Ipv6CidrBlockAssociation.h>
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
namespace SecurityHub
{
namespace Model
{

  /**
   * <p>Details about an EC2 VPC.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsEc2VpcDetails">AWS
   * API Reference</a></p>
   */
  class AwsEc2VpcDetails
  {
  public:
    AWS_SECURITYHUB_API AwsEc2VpcDetails() = default;
    AWS_SECURITYHUB_API AwsEc2VpcDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsEc2VpcDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Information about the IPv4 CIDR blocks associated with the VPC.</p>
     */
    inline const Aws::Vector<CidrBlockAssociation>& GetCidrBlockAssociationSet() const { return m_cidrBlockAssociationSet; }
    inline bool CidrBlockAssociationSetHasBeenSet() const { return m_cidrBlockAssociationSetHasBeenSet; }
    template<typename CidrBlockAssociationSetT = Aws::Vector<CidrBlockAssociation>>
    void SetCidrBlockAssociationSet(CidrBlockAssociationSetT&& value) { m_cidrBlockAssociationSetHasBeenSet = true; m_cidrBlockAssociationSet = std::forward<CidrBlockAssociationSetT>(value); }
    template<typename CidrBlockAssociationSetT = Aws::Vector<CidrBlockAssociation>>
    AwsEc2VpcDetails& WithCidrBlockAssociationSet(CidrBlockAssociationSetT&& value) { SetCidrBlockAssociationSet(std::forward<CidrBlockAssociationSetT>(value)); return *this;}
    template<typename CidrBlockAssociationSetT = CidrBlockAssociation>
    AwsEc2VpcDetails& AddCidrBlockAssociationSet(CidrBlockAssociationSetT&& value) { m_cidrBlockAssociationSetHasBeenSet = true; m_cidrBlockAssociationSet.emplace_back(std::forward<CidrBlockAssociationSetT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Information about the IPv6 CIDR blocks associated with the VPC.</p>
     */
    inline const Aws::Vector<Ipv6CidrBlockAssociation>& GetIpv6CidrBlockAssociationSet() const { return m_ipv6CidrBlockAssociationSet; }
    inline bool Ipv6CidrBlockAssociationSetHasBeenSet() const { return m_ipv6CidrBlockAssociationSetHasBeenSet; }
    template<typename Ipv6CidrBlockAssociationSetT = Aws::Vector<Ipv6CidrBlockAssociation>>
    void SetIpv6CidrBlockAssociationSet(Ipv6CidrBlockAssociationSetT&& value) { m_ipv6CidrBlockAssociationSetHasBeenSet = true; m_ipv6CidrBlockAssociationSet = std::forward<Ipv6CidrBlockAssociationSetT>(value); }
    template<typename Ipv6CidrBlockAssociationSetT = Aws::Vector<Ipv6CidrBlockAssociation>>
    AwsEc2VpcDetails& WithIpv6CidrBlockAssociationSet(Ipv6CidrBlockAssociationSetT&& value) { SetIpv6CidrBlockAssociationSet(std::forward<Ipv6CidrBlockAssociationSetT>(value)); return *this;}
    template<typename Ipv6CidrBlockAssociationSetT = Ipv6CidrBlockAssociation>
    AwsEc2VpcDetails& AddIpv6CidrBlockAssociationSet(Ipv6CidrBlockAssociationSetT&& value) { m_ipv6CidrBlockAssociationSetHasBeenSet = true; m_ipv6CidrBlockAssociationSet.emplace_back(std::forward<Ipv6CidrBlockAssociationSetT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The identifier of the set of Dynamic Host Configuration Protocol (DHCP)
     * options that are associated with the VPC. If the default options are associated
     * with the VPC, then this is default.</p>
     */
    inline const Aws::String& GetDhcpOptionsId() const { return m_dhcpOptionsId; }
    inline bool DhcpOptionsIdHasBeenSet() const { return m_dhcpOptionsIdHasBeenSet; }
    template<typename DhcpOptionsIdT = Aws::String>
    void SetDhcpOptionsId(DhcpOptionsIdT&& value) { m_dhcpOptionsIdHasBeenSet = true; m_dhcpOptionsId = std::forward<DhcpOptionsIdT>(value); }
    template<typename DhcpOptionsIdT = Aws::String>
    AwsEc2VpcDetails& WithDhcpOptionsId(DhcpOptionsIdT&& value) { SetDhcpOptionsId(std::forward<DhcpOptionsIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current state of the VPC. Valid values are <code>available</code> or
     * <code>pending</code>.</p>
     */
    inline const Aws::String& GetState() const { return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    template<typename StateT = Aws::String>
    void SetState(StateT&& value) { m_stateHasBeenSet = true; m_state = std::forward<StateT>(value); }
    template<typename StateT = Aws::String>
    AwsEc2VpcDetails& WithState(StateT&& value) { SetState(std::forward<StateT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<CidrBlockAssociation> m_cidrBlockAssociationSet;
    bool m_cidrBlockAssociationSetHasBeenSet = false;

    Aws::Vector<Ipv6CidrBlockAssociation> m_ipv6CidrBlockAssociationSet;
    bool m_ipv6CidrBlockAssociationSetHasBeenSet = false;

    Aws::String m_dhcpOptionsId;
    bool m_dhcpOptionsIdHasBeenSet = false;

    Aws::String m_state;
    bool m_stateHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
