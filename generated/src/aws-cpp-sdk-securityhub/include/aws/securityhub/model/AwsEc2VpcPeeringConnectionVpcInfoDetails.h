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
    AWS_SECURITYHUB_API AwsEc2VpcPeeringConnectionVpcInfoDetails();
    AWS_SECURITYHUB_API AwsEc2VpcPeeringConnectionVpcInfoDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsEc2VpcPeeringConnectionVpcInfoDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The IPv4 CIDR block for the VPC. </p>
     */
    inline const Aws::String& GetCidrBlock() const{ return m_cidrBlock; }
    inline bool CidrBlockHasBeenSet() const { return m_cidrBlockHasBeenSet; }
    inline void SetCidrBlock(const Aws::String& value) { m_cidrBlockHasBeenSet = true; m_cidrBlock = value; }
    inline void SetCidrBlock(Aws::String&& value) { m_cidrBlockHasBeenSet = true; m_cidrBlock = std::move(value); }
    inline void SetCidrBlock(const char* value) { m_cidrBlockHasBeenSet = true; m_cidrBlock.assign(value); }
    inline AwsEc2VpcPeeringConnectionVpcInfoDetails& WithCidrBlock(const Aws::String& value) { SetCidrBlock(value); return *this;}
    inline AwsEc2VpcPeeringConnectionVpcInfoDetails& WithCidrBlock(Aws::String&& value) { SetCidrBlock(std::move(value)); return *this;}
    inline AwsEc2VpcPeeringConnectionVpcInfoDetails& WithCidrBlock(const char* value) { SetCidrBlock(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the IPv4 CIDR blocks for the VPC. </p>
     */
    inline const Aws::Vector<VpcInfoCidrBlockSetDetails>& GetCidrBlockSet() const{ return m_cidrBlockSet; }
    inline bool CidrBlockSetHasBeenSet() const { return m_cidrBlockSetHasBeenSet; }
    inline void SetCidrBlockSet(const Aws::Vector<VpcInfoCidrBlockSetDetails>& value) { m_cidrBlockSetHasBeenSet = true; m_cidrBlockSet = value; }
    inline void SetCidrBlockSet(Aws::Vector<VpcInfoCidrBlockSetDetails>&& value) { m_cidrBlockSetHasBeenSet = true; m_cidrBlockSet = std::move(value); }
    inline AwsEc2VpcPeeringConnectionVpcInfoDetails& WithCidrBlockSet(const Aws::Vector<VpcInfoCidrBlockSetDetails>& value) { SetCidrBlockSet(value); return *this;}
    inline AwsEc2VpcPeeringConnectionVpcInfoDetails& WithCidrBlockSet(Aws::Vector<VpcInfoCidrBlockSetDetails>&& value) { SetCidrBlockSet(std::move(value)); return *this;}
    inline AwsEc2VpcPeeringConnectionVpcInfoDetails& AddCidrBlockSet(const VpcInfoCidrBlockSetDetails& value) { m_cidrBlockSetHasBeenSet = true; m_cidrBlockSet.push_back(value); return *this; }
    inline AwsEc2VpcPeeringConnectionVpcInfoDetails& AddCidrBlockSet(VpcInfoCidrBlockSetDetails&& value) { m_cidrBlockSetHasBeenSet = true; m_cidrBlockSet.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The IPv6 CIDR block for the VPC. </p>
     */
    inline const Aws::Vector<VpcInfoIpv6CidrBlockSetDetails>& GetIpv6CidrBlockSet() const{ return m_ipv6CidrBlockSet; }
    inline bool Ipv6CidrBlockSetHasBeenSet() const { return m_ipv6CidrBlockSetHasBeenSet; }
    inline void SetIpv6CidrBlockSet(const Aws::Vector<VpcInfoIpv6CidrBlockSetDetails>& value) { m_ipv6CidrBlockSetHasBeenSet = true; m_ipv6CidrBlockSet = value; }
    inline void SetIpv6CidrBlockSet(Aws::Vector<VpcInfoIpv6CidrBlockSetDetails>&& value) { m_ipv6CidrBlockSetHasBeenSet = true; m_ipv6CidrBlockSet = std::move(value); }
    inline AwsEc2VpcPeeringConnectionVpcInfoDetails& WithIpv6CidrBlockSet(const Aws::Vector<VpcInfoIpv6CidrBlockSetDetails>& value) { SetIpv6CidrBlockSet(value); return *this;}
    inline AwsEc2VpcPeeringConnectionVpcInfoDetails& WithIpv6CidrBlockSet(Aws::Vector<VpcInfoIpv6CidrBlockSetDetails>&& value) { SetIpv6CidrBlockSet(std::move(value)); return *this;}
    inline AwsEc2VpcPeeringConnectionVpcInfoDetails& AddIpv6CidrBlockSet(const VpcInfoIpv6CidrBlockSetDetails& value) { m_ipv6CidrBlockSetHasBeenSet = true; m_ipv6CidrBlockSet.push_back(value); return *this; }
    inline AwsEc2VpcPeeringConnectionVpcInfoDetails& AddIpv6CidrBlockSet(VpcInfoIpv6CidrBlockSetDetails&& value) { m_ipv6CidrBlockSetHasBeenSet = true; m_ipv6CidrBlockSet.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The ID of the Amazon Web Services account that owns the VPC. </p>
     */
    inline const Aws::String& GetOwnerId() const{ return m_ownerId; }
    inline bool OwnerIdHasBeenSet() const { return m_ownerIdHasBeenSet; }
    inline void SetOwnerId(const Aws::String& value) { m_ownerIdHasBeenSet = true; m_ownerId = value; }
    inline void SetOwnerId(Aws::String&& value) { m_ownerIdHasBeenSet = true; m_ownerId = std::move(value); }
    inline void SetOwnerId(const char* value) { m_ownerIdHasBeenSet = true; m_ownerId.assign(value); }
    inline AwsEc2VpcPeeringConnectionVpcInfoDetails& WithOwnerId(const Aws::String& value) { SetOwnerId(value); return *this;}
    inline AwsEc2VpcPeeringConnectionVpcInfoDetails& WithOwnerId(Aws::String&& value) { SetOwnerId(std::move(value)); return *this;}
    inline AwsEc2VpcPeeringConnectionVpcInfoDetails& WithOwnerId(const char* value) { SetOwnerId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the VPC peering connection options for the accepter or
     * requester VPC. </p>
     */
    inline const VpcInfoPeeringOptionsDetails& GetPeeringOptions() const{ return m_peeringOptions; }
    inline bool PeeringOptionsHasBeenSet() const { return m_peeringOptionsHasBeenSet; }
    inline void SetPeeringOptions(const VpcInfoPeeringOptionsDetails& value) { m_peeringOptionsHasBeenSet = true; m_peeringOptions = value; }
    inline void SetPeeringOptions(VpcInfoPeeringOptionsDetails&& value) { m_peeringOptionsHasBeenSet = true; m_peeringOptions = std::move(value); }
    inline AwsEc2VpcPeeringConnectionVpcInfoDetails& WithPeeringOptions(const VpcInfoPeeringOptionsDetails& value) { SetPeeringOptions(value); return *this;}
    inline AwsEc2VpcPeeringConnectionVpcInfoDetails& WithPeeringOptions(VpcInfoPeeringOptionsDetails&& value) { SetPeeringOptions(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services Region in which the VPC is located. </p>
     */
    inline const Aws::String& GetRegion() const{ return m_region; }
    inline bool RegionHasBeenSet() const { return m_regionHasBeenSet; }
    inline void SetRegion(const Aws::String& value) { m_regionHasBeenSet = true; m_region = value; }
    inline void SetRegion(Aws::String&& value) { m_regionHasBeenSet = true; m_region = std::move(value); }
    inline void SetRegion(const char* value) { m_regionHasBeenSet = true; m_region.assign(value); }
    inline AwsEc2VpcPeeringConnectionVpcInfoDetails& WithRegion(const Aws::String& value) { SetRegion(value); return *this;}
    inline AwsEc2VpcPeeringConnectionVpcInfoDetails& WithRegion(Aws::String&& value) { SetRegion(std::move(value)); return *this;}
    inline AwsEc2VpcPeeringConnectionVpcInfoDetails& WithRegion(const char* value) { SetRegion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the VPC. </p>
     */
    inline const Aws::String& GetVpcId() const{ return m_vpcId; }
    inline bool VpcIdHasBeenSet() const { return m_vpcIdHasBeenSet; }
    inline void SetVpcId(const Aws::String& value) { m_vpcIdHasBeenSet = true; m_vpcId = value; }
    inline void SetVpcId(Aws::String&& value) { m_vpcIdHasBeenSet = true; m_vpcId = std::move(value); }
    inline void SetVpcId(const char* value) { m_vpcIdHasBeenSet = true; m_vpcId.assign(value); }
    inline AwsEc2VpcPeeringConnectionVpcInfoDetails& WithVpcId(const Aws::String& value) { SetVpcId(value); return *this;}
    inline AwsEc2VpcPeeringConnectionVpcInfoDetails& WithVpcId(Aws::String&& value) { SetVpcId(std::move(value)); return *this;}
    inline AwsEc2VpcPeeringConnectionVpcInfoDetails& WithVpcId(const char* value) { SetVpcId(value); return *this;}
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
