/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/securityhub/model/VpcInfoPeeringOptionsDetails.h>
#include <aws/securityhub/model/VpcInfoCidrBlockSetDetails.h>
#include <aws/securityhub/model/VpcInfoIpv6CidrBlockSetDetails.h>
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
   * <p>Describes a VPC in a VPC peering connection. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsEc2VpcPeeringConnectionVpcInfoDetails">AWS
   * API Reference</a></p>
   */
  class AwsEc2VpcPeeringConnectionVpcInfoDetails
  {
  public:
    AWS_SECURITYHUB_API AwsEc2VpcPeeringConnectionVpcInfoDetails() = default;
    AWS_SECURITYHUB_API AwsEc2VpcPeeringConnectionVpcInfoDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsEc2VpcPeeringConnectionVpcInfoDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The IPv4 CIDR block for the VPC. </p>
     */
    inline const Aws::String& GetCidrBlock() const { return m_cidrBlock; }
    inline bool CidrBlockHasBeenSet() const { return m_cidrBlockHasBeenSet; }
    template<typename CidrBlockT = Aws::String>
    void SetCidrBlock(CidrBlockT&& value) { m_cidrBlockHasBeenSet = true; m_cidrBlock = std::forward<CidrBlockT>(value); }
    template<typename CidrBlockT = Aws::String>
    AwsEc2VpcPeeringConnectionVpcInfoDetails& WithCidrBlock(CidrBlockT&& value) { SetCidrBlock(std::forward<CidrBlockT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the IPv4 CIDR blocks for the VPC. </p>
     */
    inline const Aws::Vector<VpcInfoCidrBlockSetDetails>& GetCidrBlockSet() const { return m_cidrBlockSet; }
    inline bool CidrBlockSetHasBeenSet() const { return m_cidrBlockSetHasBeenSet; }
    template<typename CidrBlockSetT = Aws::Vector<VpcInfoCidrBlockSetDetails>>
    void SetCidrBlockSet(CidrBlockSetT&& value) { m_cidrBlockSetHasBeenSet = true; m_cidrBlockSet = std::forward<CidrBlockSetT>(value); }
    template<typename CidrBlockSetT = Aws::Vector<VpcInfoCidrBlockSetDetails>>
    AwsEc2VpcPeeringConnectionVpcInfoDetails& WithCidrBlockSet(CidrBlockSetT&& value) { SetCidrBlockSet(std::forward<CidrBlockSetT>(value)); return *this;}
    template<typename CidrBlockSetT = VpcInfoCidrBlockSetDetails>
    AwsEc2VpcPeeringConnectionVpcInfoDetails& AddCidrBlockSet(CidrBlockSetT&& value) { m_cidrBlockSetHasBeenSet = true; m_cidrBlockSet.emplace_back(std::forward<CidrBlockSetT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The IPv6 CIDR block for the VPC. </p>
     */
    inline const Aws::Vector<VpcInfoIpv6CidrBlockSetDetails>& GetIpv6CidrBlockSet() const { return m_ipv6CidrBlockSet; }
    inline bool Ipv6CidrBlockSetHasBeenSet() const { return m_ipv6CidrBlockSetHasBeenSet; }
    template<typename Ipv6CidrBlockSetT = Aws::Vector<VpcInfoIpv6CidrBlockSetDetails>>
    void SetIpv6CidrBlockSet(Ipv6CidrBlockSetT&& value) { m_ipv6CidrBlockSetHasBeenSet = true; m_ipv6CidrBlockSet = std::forward<Ipv6CidrBlockSetT>(value); }
    template<typename Ipv6CidrBlockSetT = Aws::Vector<VpcInfoIpv6CidrBlockSetDetails>>
    AwsEc2VpcPeeringConnectionVpcInfoDetails& WithIpv6CidrBlockSet(Ipv6CidrBlockSetT&& value) { SetIpv6CidrBlockSet(std::forward<Ipv6CidrBlockSetT>(value)); return *this;}
    template<typename Ipv6CidrBlockSetT = VpcInfoIpv6CidrBlockSetDetails>
    AwsEc2VpcPeeringConnectionVpcInfoDetails& AddIpv6CidrBlockSet(Ipv6CidrBlockSetT&& value) { m_ipv6CidrBlockSetHasBeenSet = true; m_ipv6CidrBlockSet.emplace_back(std::forward<Ipv6CidrBlockSetT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The ID of the Amazon Web Services account that owns the VPC. </p>
     */
    inline const Aws::String& GetOwnerId() const { return m_ownerId; }
    inline bool OwnerIdHasBeenSet() const { return m_ownerIdHasBeenSet; }
    template<typename OwnerIdT = Aws::String>
    void SetOwnerId(OwnerIdT&& value) { m_ownerIdHasBeenSet = true; m_ownerId = std::forward<OwnerIdT>(value); }
    template<typename OwnerIdT = Aws::String>
    AwsEc2VpcPeeringConnectionVpcInfoDetails& WithOwnerId(OwnerIdT&& value) { SetOwnerId(std::forward<OwnerIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the VPC peering connection options for the accepter or
     * requester VPC. </p>
     */
    inline const VpcInfoPeeringOptionsDetails& GetPeeringOptions() const { return m_peeringOptions; }
    inline bool PeeringOptionsHasBeenSet() const { return m_peeringOptionsHasBeenSet; }
    template<typename PeeringOptionsT = VpcInfoPeeringOptionsDetails>
    void SetPeeringOptions(PeeringOptionsT&& value) { m_peeringOptionsHasBeenSet = true; m_peeringOptions = std::forward<PeeringOptionsT>(value); }
    template<typename PeeringOptionsT = VpcInfoPeeringOptionsDetails>
    AwsEc2VpcPeeringConnectionVpcInfoDetails& WithPeeringOptions(PeeringOptionsT&& value) { SetPeeringOptions(std::forward<PeeringOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services Region in which the VPC is located. </p>
     */
    inline const Aws::String& GetRegion() const { return m_region; }
    inline bool RegionHasBeenSet() const { return m_regionHasBeenSet; }
    template<typename RegionT = Aws::String>
    void SetRegion(RegionT&& value) { m_regionHasBeenSet = true; m_region = std::forward<RegionT>(value); }
    template<typename RegionT = Aws::String>
    AwsEc2VpcPeeringConnectionVpcInfoDetails& WithRegion(RegionT&& value) { SetRegion(std::forward<RegionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the VPC. </p>
     */
    inline const Aws::String& GetVpcId() const { return m_vpcId; }
    inline bool VpcIdHasBeenSet() const { return m_vpcIdHasBeenSet; }
    template<typename VpcIdT = Aws::String>
    void SetVpcId(VpcIdT&& value) { m_vpcIdHasBeenSet = true; m_vpcId = std::forward<VpcIdT>(value); }
    template<typename VpcIdT = Aws::String>
    AwsEc2VpcPeeringConnectionVpcInfoDetails& WithVpcId(VpcIdT&& value) { SetVpcId(std::forward<VpcIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_cidrBlock;
    bool m_cidrBlockHasBeenSet = false;

    Aws::Vector<VpcInfoCidrBlockSetDetails> m_cidrBlockSet;
    bool m_cidrBlockSetHasBeenSet = false;

    Aws::Vector<VpcInfoIpv6CidrBlockSetDetails> m_ipv6CidrBlockSet;
    bool m_ipv6CidrBlockSetHasBeenSet = false;

    Aws::String m_ownerId;
    bool m_ownerIdHasBeenSet = false;

    VpcInfoPeeringOptionsDetails m_peeringOptions;
    bool m_peeringOptionsHasBeenSet = false;

    Aws::String m_region;
    bool m_regionHasBeenSet = false;

    Aws::String m_vpcId;
    bool m_vpcIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
