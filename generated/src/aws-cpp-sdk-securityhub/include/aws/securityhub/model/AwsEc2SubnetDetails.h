/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
   * <p>Contains information about a subnet in Amazon EC2.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsEc2SubnetDetails">AWS
   * API Reference</a></p>
   */
  class AwsEc2SubnetDetails
  {
  public:
    AWS_SECURITYHUB_API AwsEc2SubnetDetails();
    AWS_SECURITYHUB_API AwsEc2SubnetDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsEc2SubnetDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Whether to assign an IPV6 address to a network interface that is created in
     * this subnet.</p>
     */
    inline bool GetAssignIpv6AddressOnCreation() const{ return m_assignIpv6AddressOnCreation; }
    inline bool AssignIpv6AddressOnCreationHasBeenSet() const { return m_assignIpv6AddressOnCreationHasBeenSet; }
    inline void SetAssignIpv6AddressOnCreation(bool value) { m_assignIpv6AddressOnCreationHasBeenSet = true; m_assignIpv6AddressOnCreation = value; }
    inline AwsEc2SubnetDetails& WithAssignIpv6AddressOnCreation(bool value) { SetAssignIpv6AddressOnCreation(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Availability Zone for the subnet.</p>
     */
    inline const Aws::String& GetAvailabilityZone() const{ return m_availabilityZone; }
    inline bool AvailabilityZoneHasBeenSet() const { return m_availabilityZoneHasBeenSet; }
    inline void SetAvailabilityZone(const Aws::String& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = value; }
    inline void SetAvailabilityZone(Aws::String&& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = std::move(value); }
    inline void SetAvailabilityZone(const char* value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone.assign(value); }
    inline AwsEc2SubnetDetails& WithAvailabilityZone(const Aws::String& value) { SetAvailabilityZone(value); return *this;}
    inline AwsEc2SubnetDetails& WithAvailabilityZone(Aws::String&& value) { SetAvailabilityZone(std::move(value)); return *this;}
    inline AwsEc2SubnetDetails& WithAvailabilityZone(const char* value) { SetAvailabilityZone(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the Availability Zone for the subnet.</p>
     */
    inline const Aws::String& GetAvailabilityZoneId() const{ return m_availabilityZoneId; }
    inline bool AvailabilityZoneIdHasBeenSet() const { return m_availabilityZoneIdHasBeenSet; }
    inline void SetAvailabilityZoneId(const Aws::String& value) { m_availabilityZoneIdHasBeenSet = true; m_availabilityZoneId = value; }
    inline void SetAvailabilityZoneId(Aws::String&& value) { m_availabilityZoneIdHasBeenSet = true; m_availabilityZoneId = std::move(value); }
    inline void SetAvailabilityZoneId(const char* value) { m_availabilityZoneIdHasBeenSet = true; m_availabilityZoneId.assign(value); }
    inline AwsEc2SubnetDetails& WithAvailabilityZoneId(const Aws::String& value) { SetAvailabilityZoneId(value); return *this;}
    inline AwsEc2SubnetDetails& WithAvailabilityZoneId(Aws::String&& value) { SetAvailabilityZoneId(std::move(value)); return *this;}
    inline AwsEc2SubnetDetails& WithAvailabilityZoneId(const char* value) { SetAvailabilityZoneId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of available IPV4 addresses in the subnet. Does not include
     * addresses for stopped instances.</p>
     */
    inline int GetAvailableIpAddressCount() const{ return m_availableIpAddressCount; }
    inline bool AvailableIpAddressCountHasBeenSet() const { return m_availableIpAddressCountHasBeenSet; }
    inline void SetAvailableIpAddressCount(int value) { m_availableIpAddressCountHasBeenSet = true; m_availableIpAddressCount = value; }
    inline AwsEc2SubnetDetails& WithAvailableIpAddressCount(int value) { SetAvailableIpAddressCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IPV4 CIDR block that is assigned to the subnet.</p>
     */
    inline const Aws::String& GetCidrBlock() const{ return m_cidrBlock; }
    inline bool CidrBlockHasBeenSet() const { return m_cidrBlockHasBeenSet; }
    inline void SetCidrBlock(const Aws::String& value) { m_cidrBlockHasBeenSet = true; m_cidrBlock = value; }
    inline void SetCidrBlock(Aws::String&& value) { m_cidrBlockHasBeenSet = true; m_cidrBlock = std::move(value); }
    inline void SetCidrBlock(const char* value) { m_cidrBlockHasBeenSet = true; m_cidrBlock.assign(value); }
    inline AwsEc2SubnetDetails& WithCidrBlock(const Aws::String& value) { SetCidrBlock(value); return *this;}
    inline AwsEc2SubnetDetails& WithCidrBlock(Aws::String&& value) { SetCidrBlock(std::move(value)); return *this;}
    inline AwsEc2SubnetDetails& WithCidrBlock(const char* value) { SetCidrBlock(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether this subnet is the default subnet for the Availability Zone.</p>
     */
    inline bool GetDefaultForAz() const{ return m_defaultForAz; }
    inline bool DefaultForAzHasBeenSet() const { return m_defaultForAzHasBeenSet; }
    inline void SetDefaultForAz(bool value) { m_defaultForAzHasBeenSet = true; m_defaultForAz = value; }
    inline AwsEc2SubnetDetails& WithDefaultForAz(bool value) { SetDefaultForAz(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether instances in this subnet receive a public IP address.</p>
     */
    inline bool GetMapPublicIpOnLaunch() const{ return m_mapPublicIpOnLaunch; }
    inline bool MapPublicIpOnLaunchHasBeenSet() const { return m_mapPublicIpOnLaunchHasBeenSet; }
    inline void SetMapPublicIpOnLaunch(bool value) { m_mapPublicIpOnLaunchHasBeenSet = true; m_mapPublicIpOnLaunch = value; }
    inline AwsEc2SubnetDetails& WithMapPublicIpOnLaunch(bool value) { SetMapPublicIpOnLaunch(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the Amazon Web Services account that owns the subnet.</p>
     */
    inline const Aws::String& GetOwnerId() const{ return m_ownerId; }
    inline bool OwnerIdHasBeenSet() const { return m_ownerIdHasBeenSet; }
    inline void SetOwnerId(const Aws::String& value) { m_ownerIdHasBeenSet = true; m_ownerId = value; }
    inline void SetOwnerId(Aws::String&& value) { m_ownerIdHasBeenSet = true; m_ownerId = std::move(value); }
    inline void SetOwnerId(const char* value) { m_ownerIdHasBeenSet = true; m_ownerId.assign(value); }
    inline AwsEc2SubnetDetails& WithOwnerId(const Aws::String& value) { SetOwnerId(value); return *this;}
    inline AwsEc2SubnetDetails& WithOwnerId(Aws::String&& value) { SetOwnerId(std::move(value)); return *this;}
    inline AwsEc2SubnetDetails& WithOwnerId(const char* value) { SetOwnerId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current state of the subnet. Valid values are <code>available</code> or
     * <code>pending</code>.</p>
     */
    inline const Aws::String& GetState() const{ return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(const Aws::String& value) { m_stateHasBeenSet = true; m_state = value; }
    inline void SetState(Aws::String&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }
    inline void SetState(const char* value) { m_stateHasBeenSet = true; m_state.assign(value); }
    inline AwsEc2SubnetDetails& WithState(const Aws::String& value) { SetState(value); return *this;}
    inline AwsEc2SubnetDetails& WithState(Aws::String&& value) { SetState(std::move(value)); return *this;}
    inline AwsEc2SubnetDetails& WithState(const char* value) { SetState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the subnet.</p>
     */
    inline const Aws::String& GetSubnetArn() const{ return m_subnetArn; }
    inline bool SubnetArnHasBeenSet() const { return m_subnetArnHasBeenSet; }
    inline void SetSubnetArn(const Aws::String& value) { m_subnetArnHasBeenSet = true; m_subnetArn = value; }
    inline void SetSubnetArn(Aws::String&& value) { m_subnetArnHasBeenSet = true; m_subnetArn = std::move(value); }
    inline void SetSubnetArn(const char* value) { m_subnetArnHasBeenSet = true; m_subnetArn.assign(value); }
    inline AwsEc2SubnetDetails& WithSubnetArn(const Aws::String& value) { SetSubnetArn(value); return *this;}
    inline AwsEc2SubnetDetails& WithSubnetArn(Aws::String&& value) { SetSubnetArn(std::move(value)); return *this;}
    inline AwsEc2SubnetDetails& WithSubnetArn(const char* value) { SetSubnetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the subnet.</p>
     */
    inline const Aws::String& GetSubnetId() const{ return m_subnetId; }
    inline bool SubnetIdHasBeenSet() const { return m_subnetIdHasBeenSet; }
    inline void SetSubnetId(const Aws::String& value) { m_subnetIdHasBeenSet = true; m_subnetId = value; }
    inline void SetSubnetId(Aws::String&& value) { m_subnetIdHasBeenSet = true; m_subnetId = std::move(value); }
    inline void SetSubnetId(const char* value) { m_subnetIdHasBeenSet = true; m_subnetId.assign(value); }
    inline AwsEc2SubnetDetails& WithSubnetId(const Aws::String& value) { SetSubnetId(value); return *this;}
    inline AwsEc2SubnetDetails& WithSubnetId(Aws::String&& value) { SetSubnetId(std::move(value)); return *this;}
    inline AwsEc2SubnetDetails& WithSubnetId(const char* value) { SetSubnetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the VPC that contains the subnet.</p>
     */
    inline const Aws::String& GetVpcId() const{ return m_vpcId; }
    inline bool VpcIdHasBeenSet() const { return m_vpcIdHasBeenSet; }
    inline void SetVpcId(const Aws::String& value) { m_vpcIdHasBeenSet = true; m_vpcId = value; }
    inline void SetVpcId(Aws::String&& value) { m_vpcIdHasBeenSet = true; m_vpcId = std::move(value); }
    inline void SetVpcId(const char* value) { m_vpcIdHasBeenSet = true; m_vpcId.assign(value); }
    inline AwsEc2SubnetDetails& WithVpcId(const Aws::String& value) { SetVpcId(value); return *this;}
    inline AwsEc2SubnetDetails& WithVpcId(Aws::String&& value) { SetVpcId(std::move(value)); return *this;}
    inline AwsEc2SubnetDetails& WithVpcId(const char* value) { SetVpcId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IPV6 CIDR blocks that are associated with the subnet.</p>
     */
    inline const Aws::Vector<Ipv6CidrBlockAssociation>& GetIpv6CidrBlockAssociationSet() const{ return m_ipv6CidrBlockAssociationSet; }
    inline bool Ipv6CidrBlockAssociationSetHasBeenSet() const { return m_ipv6CidrBlockAssociationSetHasBeenSet; }
    inline void SetIpv6CidrBlockAssociationSet(const Aws::Vector<Ipv6CidrBlockAssociation>& value) { m_ipv6CidrBlockAssociationSetHasBeenSet = true; m_ipv6CidrBlockAssociationSet = value; }
    inline void SetIpv6CidrBlockAssociationSet(Aws::Vector<Ipv6CidrBlockAssociation>&& value) { m_ipv6CidrBlockAssociationSetHasBeenSet = true; m_ipv6CidrBlockAssociationSet = std::move(value); }
    inline AwsEc2SubnetDetails& WithIpv6CidrBlockAssociationSet(const Aws::Vector<Ipv6CidrBlockAssociation>& value) { SetIpv6CidrBlockAssociationSet(value); return *this;}
    inline AwsEc2SubnetDetails& WithIpv6CidrBlockAssociationSet(Aws::Vector<Ipv6CidrBlockAssociation>&& value) { SetIpv6CidrBlockAssociationSet(std::move(value)); return *this;}
    inline AwsEc2SubnetDetails& AddIpv6CidrBlockAssociationSet(const Ipv6CidrBlockAssociation& value) { m_ipv6CidrBlockAssociationSetHasBeenSet = true; m_ipv6CidrBlockAssociationSet.push_back(value); return *this; }
    inline AwsEc2SubnetDetails& AddIpv6CidrBlockAssociationSet(Ipv6CidrBlockAssociation&& value) { m_ipv6CidrBlockAssociationSetHasBeenSet = true; m_ipv6CidrBlockAssociationSet.push_back(std::move(value)); return *this; }
    ///@}
  private:

    bool m_assignIpv6AddressOnCreation;
    bool m_assignIpv6AddressOnCreationHasBeenSet = false;

    Aws::String m_availabilityZone;
    bool m_availabilityZoneHasBeenSet = false;

    Aws::String m_availabilityZoneId;
    bool m_availabilityZoneIdHasBeenSet = false;

    int m_availableIpAddressCount;
    bool m_availableIpAddressCountHasBeenSet = false;

    Aws::String m_cidrBlock;
    bool m_cidrBlockHasBeenSet = false;

    bool m_defaultForAz;
    bool m_defaultForAzHasBeenSet = false;

    bool m_mapPublicIpOnLaunch;
    bool m_mapPublicIpOnLaunchHasBeenSet = false;

    Aws::String m_ownerId;
    bool m_ownerIdHasBeenSet = false;

    Aws::String m_state;
    bool m_stateHasBeenSet = false;

    Aws::String m_subnetArn;
    bool m_subnetArnHasBeenSet = false;

    Aws::String m_subnetId;
    bool m_subnetIdHasBeenSet = false;

    Aws::String m_vpcId;
    bool m_vpcIdHasBeenSet = false;

    Aws::Vector<Ipv6CidrBlockAssociation> m_ipv6CidrBlockAssociationSet;
    bool m_ipv6CidrBlockAssociationSetHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
