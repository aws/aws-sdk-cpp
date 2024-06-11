/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
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
namespace SecurityHub
{
namespace Model
{

  /**
   * <p>Information about an Elastic IP address.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsEc2EipDetails">AWS
   * API Reference</a></p>
   */
  class AwsEc2EipDetails
  {
  public:
    AWS_SECURITYHUB_API AwsEc2EipDetails();
    AWS_SECURITYHUB_API AwsEc2EipDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsEc2EipDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The identifier of the EC2 instance.</p>
     */
    inline const Aws::String& GetInstanceId() const{ return m_instanceId; }
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }
    inline void SetInstanceId(const Aws::String& value) { m_instanceIdHasBeenSet = true; m_instanceId = value; }
    inline void SetInstanceId(Aws::String&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::move(value); }
    inline void SetInstanceId(const char* value) { m_instanceIdHasBeenSet = true; m_instanceId.assign(value); }
    inline AwsEc2EipDetails& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}
    inline AwsEc2EipDetails& WithInstanceId(Aws::String&& value) { SetInstanceId(std::move(value)); return *this;}
    inline AwsEc2EipDetails& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A public IP address that is associated with the EC2 instance.</p>
     */
    inline const Aws::String& GetPublicIp() const{ return m_publicIp; }
    inline bool PublicIpHasBeenSet() const { return m_publicIpHasBeenSet; }
    inline void SetPublicIp(const Aws::String& value) { m_publicIpHasBeenSet = true; m_publicIp = value; }
    inline void SetPublicIp(Aws::String&& value) { m_publicIpHasBeenSet = true; m_publicIp = std::move(value); }
    inline void SetPublicIp(const char* value) { m_publicIpHasBeenSet = true; m_publicIp.assign(value); }
    inline AwsEc2EipDetails& WithPublicIp(const Aws::String& value) { SetPublicIp(value); return *this;}
    inline AwsEc2EipDetails& WithPublicIp(Aws::String&& value) { SetPublicIp(std::move(value)); return *this;}
    inline AwsEc2EipDetails& WithPublicIp(const char* value) { SetPublicIp(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier that Amazon Web Services assigns to represent the allocation
     * of the Elastic IP address for use with Amazon VPC.</p>
     */
    inline const Aws::String& GetAllocationId() const{ return m_allocationId; }
    inline bool AllocationIdHasBeenSet() const { return m_allocationIdHasBeenSet; }
    inline void SetAllocationId(const Aws::String& value) { m_allocationIdHasBeenSet = true; m_allocationId = value; }
    inline void SetAllocationId(Aws::String&& value) { m_allocationIdHasBeenSet = true; m_allocationId = std::move(value); }
    inline void SetAllocationId(const char* value) { m_allocationIdHasBeenSet = true; m_allocationId.assign(value); }
    inline AwsEc2EipDetails& WithAllocationId(const Aws::String& value) { SetAllocationId(value); return *this;}
    inline AwsEc2EipDetails& WithAllocationId(Aws::String&& value) { SetAllocationId(std::move(value)); return *this;}
    inline AwsEc2EipDetails& WithAllocationId(const char* value) { SetAllocationId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier that represents the association of the Elastic IP address with
     * an EC2 instance.</p>
     */
    inline const Aws::String& GetAssociationId() const{ return m_associationId; }
    inline bool AssociationIdHasBeenSet() const { return m_associationIdHasBeenSet; }
    inline void SetAssociationId(const Aws::String& value) { m_associationIdHasBeenSet = true; m_associationId = value; }
    inline void SetAssociationId(Aws::String&& value) { m_associationIdHasBeenSet = true; m_associationId = std::move(value); }
    inline void SetAssociationId(const char* value) { m_associationIdHasBeenSet = true; m_associationId.assign(value); }
    inline AwsEc2EipDetails& WithAssociationId(const Aws::String& value) { SetAssociationId(value); return *this;}
    inline AwsEc2EipDetails& WithAssociationId(Aws::String&& value) { SetAssociationId(std::move(value)); return *this;}
    inline AwsEc2EipDetails& WithAssociationId(const char* value) { SetAssociationId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The domain in which to allocate the address.</p> <p>If the address is for use
     * with EC2 instances in a VPC, then <code>Domain</code> is <code>vpc</code>.
     * Otherwise, <code>Domain</code> is <code>standard</code>. </p>
     */
    inline const Aws::String& GetDomain() const{ return m_domain; }
    inline bool DomainHasBeenSet() const { return m_domainHasBeenSet; }
    inline void SetDomain(const Aws::String& value) { m_domainHasBeenSet = true; m_domain = value; }
    inline void SetDomain(Aws::String&& value) { m_domainHasBeenSet = true; m_domain = std::move(value); }
    inline void SetDomain(const char* value) { m_domainHasBeenSet = true; m_domain.assign(value); }
    inline AwsEc2EipDetails& WithDomain(const Aws::String& value) { SetDomain(value); return *this;}
    inline AwsEc2EipDetails& WithDomain(Aws::String&& value) { SetDomain(std::move(value)); return *this;}
    inline AwsEc2EipDetails& WithDomain(const char* value) { SetDomain(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of an IP address pool. This parameter allows Amazon EC2 to
     * select an IP address from the address pool.</p>
     */
    inline const Aws::String& GetPublicIpv4Pool() const{ return m_publicIpv4Pool; }
    inline bool PublicIpv4PoolHasBeenSet() const { return m_publicIpv4PoolHasBeenSet; }
    inline void SetPublicIpv4Pool(const Aws::String& value) { m_publicIpv4PoolHasBeenSet = true; m_publicIpv4Pool = value; }
    inline void SetPublicIpv4Pool(Aws::String&& value) { m_publicIpv4PoolHasBeenSet = true; m_publicIpv4Pool = std::move(value); }
    inline void SetPublicIpv4Pool(const char* value) { m_publicIpv4PoolHasBeenSet = true; m_publicIpv4Pool.assign(value); }
    inline AwsEc2EipDetails& WithPublicIpv4Pool(const Aws::String& value) { SetPublicIpv4Pool(value); return *this;}
    inline AwsEc2EipDetails& WithPublicIpv4Pool(Aws::String&& value) { SetPublicIpv4Pool(std::move(value)); return *this;}
    inline AwsEc2EipDetails& WithPublicIpv4Pool(const char* value) { SetPublicIpv4Pool(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the location from which the Elastic IP address is advertised.</p>
     */
    inline const Aws::String& GetNetworkBorderGroup() const{ return m_networkBorderGroup; }
    inline bool NetworkBorderGroupHasBeenSet() const { return m_networkBorderGroupHasBeenSet; }
    inline void SetNetworkBorderGroup(const Aws::String& value) { m_networkBorderGroupHasBeenSet = true; m_networkBorderGroup = value; }
    inline void SetNetworkBorderGroup(Aws::String&& value) { m_networkBorderGroupHasBeenSet = true; m_networkBorderGroup = std::move(value); }
    inline void SetNetworkBorderGroup(const char* value) { m_networkBorderGroupHasBeenSet = true; m_networkBorderGroup.assign(value); }
    inline AwsEc2EipDetails& WithNetworkBorderGroup(const Aws::String& value) { SetNetworkBorderGroup(value); return *this;}
    inline AwsEc2EipDetails& WithNetworkBorderGroup(Aws::String&& value) { SetNetworkBorderGroup(std::move(value)); return *this;}
    inline AwsEc2EipDetails& WithNetworkBorderGroup(const char* value) { SetNetworkBorderGroup(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the network interface.</p>
     */
    inline const Aws::String& GetNetworkInterfaceId() const{ return m_networkInterfaceId; }
    inline bool NetworkInterfaceIdHasBeenSet() const { return m_networkInterfaceIdHasBeenSet; }
    inline void SetNetworkInterfaceId(const Aws::String& value) { m_networkInterfaceIdHasBeenSet = true; m_networkInterfaceId = value; }
    inline void SetNetworkInterfaceId(Aws::String&& value) { m_networkInterfaceIdHasBeenSet = true; m_networkInterfaceId = std::move(value); }
    inline void SetNetworkInterfaceId(const char* value) { m_networkInterfaceIdHasBeenSet = true; m_networkInterfaceId.assign(value); }
    inline AwsEc2EipDetails& WithNetworkInterfaceId(const Aws::String& value) { SetNetworkInterfaceId(value); return *this;}
    inline AwsEc2EipDetails& WithNetworkInterfaceId(Aws::String&& value) { SetNetworkInterfaceId(std::move(value)); return *this;}
    inline AwsEc2EipDetails& WithNetworkInterfaceId(const char* value) { SetNetworkInterfaceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services account ID of the owner of the network interface.</p>
     */
    inline const Aws::String& GetNetworkInterfaceOwnerId() const{ return m_networkInterfaceOwnerId; }
    inline bool NetworkInterfaceOwnerIdHasBeenSet() const { return m_networkInterfaceOwnerIdHasBeenSet; }
    inline void SetNetworkInterfaceOwnerId(const Aws::String& value) { m_networkInterfaceOwnerIdHasBeenSet = true; m_networkInterfaceOwnerId = value; }
    inline void SetNetworkInterfaceOwnerId(Aws::String&& value) { m_networkInterfaceOwnerIdHasBeenSet = true; m_networkInterfaceOwnerId = std::move(value); }
    inline void SetNetworkInterfaceOwnerId(const char* value) { m_networkInterfaceOwnerIdHasBeenSet = true; m_networkInterfaceOwnerId.assign(value); }
    inline AwsEc2EipDetails& WithNetworkInterfaceOwnerId(const Aws::String& value) { SetNetworkInterfaceOwnerId(value); return *this;}
    inline AwsEc2EipDetails& WithNetworkInterfaceOwnerId(Aws::String&& value) { SetNetworkInterfaceOwnerId(std::move(value)); return *this;}
    inline AwsEc2EipDetails& WithNetworkInterfaceOwnerId(const char* value) { SetNetworkInterfaceOwnerId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The private IP address that is associated with the Elastic IP address.</p>
     */
    inline const Aws::String& GetPrivateIpAddress() const{ return m_privateIpAddress; }
    inline bool PrivateIpAddressHasBeenSet() const { return m_privateIpAddressHasBeenSet; }
    inline void SetPrivateIpAddress(const Aws::String& value) { m_privateIpAddressHasBeenSet = true; m_privateIpAddress = value; }
    inline void SetPrivateIpAddress(Aws::String&& value) { m_privateIpAddressHasBeenSet = true; m_privateIpAddress = std::move(value); }
    inline void SetPrivateIpAddress(const char* value) { m_privateIpAddressHasBeenSet = true; m_privateIpAddress.assign(value); }
    inline AwsEc2EipDetails& WithPrivateIpAddress(const Aws::String& value) { SetPrivateIpAddress(value); return *this;}
    inline AwsEc2EipDetails& WithPrivateIpAddress(Aws::String&& value) { SetPrivateIpAddress(std::move(value)); return *this;}
    inline AwsEc2EipDetails& WithPrivateIpAddress(const char* value) { SetPrivateIpAddress(value); return *this;}
    ///@}
  private:

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet = false;

    Aws::String m_publicIp;
    bool m_publicIpHasBeenSet = false;

    Aws::String m_allocationId;
    bool m_allocationIdHasBeenSet = false;

    Aws::String m_associationId;
    bool m_associationIdHasBeenSet = false;

    Aws::String m_domain;
    bool m_domainHasBeenSet = false;

    Aws::String m_publicIpv4Pool;
    bool m_publicIpv4PoolHasBeenSet = false;

    Aws::String m_networkBorderGroup;
    bool m_networkBorderGroupHasBeenSet = false;

    Aws::String m_networkInterfaceId;
    bool m_networkInterfaceIdHasBeenSet = false;

    Aws::String m_networkInterfaceOwnerId;
    bool m_networkInterfaceOwnerIdHasBeenSet = false;

    Aws::String m_privateIpAddress;
    bool m_privateIpAddressHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
