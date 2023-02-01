/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3outposts/S3Outposts_EXPORTS.h>
#include <aws/s3outposts/S3OutpostsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/s3outposts/model/EndpointAccessType.h>
#include <utility>

namespace Aws
{
namespace S3Outposts
{
namespace Model
{

  /**
   */
  class CreateEndpointRequest : public S3OutpostsRequest
  {
  public:
    AWS_S3OUTPOSTS_API CreateEndpointRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateEndpoint"; }

    AWS_S3OUTPOSTS_API Aws::String SerializePayload() const override;


    /**
     * <p>The ID of the Outposts. </p>
     */
    inline const Aws::String& GetOutpostId() const{ return m_outpostId; }

    /**
     * <p>The ID of the Outposts. </p>
     */
    inline bool OutpostIdHasBeenSet() const { return m_outpostIdHasBeenSet; }

    /**
     * <p>The ID of the Outposts. </p>
     */
    inline void SetOutpostId(const Aws::String& value) { m_outpostIdHasBeenSet = true; m_outpostId = value; }

    /**
     * <p>The ID of the Outposts. </p>
     */
    inline void SetOutpostId(Aws::String&& value) { m_outpostIdHasBeenSet = true; m_outpostId = std::move(value); }

    /**
     * <p>The ID of the Outposts. </p>
     */
    inline void SetOutpostId(const char* value) { m_outpostIdHasBeenSet = true; m_outpostId.assign(value); }

    /**
     * <p>The ID of the Outposts. </p>
     */
    inline CreateEndpointRequest& WithOutpostId(const Aws::String& value) { SetOutpostId(value); return *this;}

    /**
     * <p>The ID of the Outposts. </p>
     */
    inline CreateEndpointRequest& WithOutpostId(Aws::String&& value) { SetOutpostId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Outposts. </p>
     */
    inline CreateEndpointRequest& WithOutpostId(const char* value) { SetOutpostId(value); return *this;}


    /**
     * <p>The ID of the subnet in the selected VPC. The endpoint subnet must belong to
     * the Outpost that has Amazon S3 on Outposts provisioned.</p>
     */
    inline const Aws::String& GetSubnetId() const{ return m_subnetId; }

    /**
     * <p>The ID of the subnet in the selected VPC. The endpoint subnet must belong to
     * the Outpost that has Amazon S3 on Outposts provisioned.</p>
     */
    inline bool SubnetIdHasBeenSet() const { return m_subnetIdHasBeenSet; }

    /**
     * <p>The ID of the subnet in the selected VPC. The endpoint subnet must belong to
     * the Outpost that has Amazon S3 on Outposts provisioned.</p>
     */
    inline void SetSubnetId(const Aws::String& value) { m_subnetIdHasBeenSet = true; m_subnetId = value; }

    /**
     * <p>The ID of the subnet in the selected VPC. The endpoint subnet must belong to
     * the Outpost that has Amazon S3 on Outposts provisioned.</p>
     */
    inline void SetSubnetId(Aws::String&& value) { m_subnetIdHasBeenSet = true; m_subnetId = std::move(value); }

    /**
     * <p>The ID of the subnet in the selected VPC. The endpoint subnet must belong to
     * the Outpost that has Amazon S3 on Outposts provisioned.</p>
     */
    inline void SetSubnetId(const char* value) { m_subnetIdHasBeenSet = true; m_subnetId.assign(value); }

    /**
     * <p>The ID of the subnet in the selected VPC. The endpoint subnet must belong to
     * the Outpost that has Amazon S3 on Outposts provisioned.</p>
     */
    inline CreateEndpointRequest& WithSubnetId(const Aws::String& value) { SetSubnetId(value); return *this;}

    /**
     * <p>The ID of the subnet in the selected VPC. The endpoint subnet must belong to
     * the Outpost that has Amazon S3 on Outposts provisioned.</p>
     */
    inline CreateEndpointRequest& WithSubnetId(Aws::String&& value) { SetSubnetId(std::move(value)); return *this;}

    /**
     * <p>The ID of the subnet in the selected VPC. The endpoint subnet must belong to
     * the Outpost that has Amazon S3 on Outposts provisioned.</p>
     */
    inline CreateEndpointRequest& WithSubnetId(const char* value) { SetSubnetId(value); return *this;}


    /**
     * <p>The ID of the security group to use with the endpoint.</p>
     */
    inline const Aws::String& GetSecurityGroupId() const{ return m_securityGroupId; }

    /**
     * <p>The ID of the security group to use with the endpoint.</p>
     */
    inline bool SecurityGroupIdHasBeenSet() const { return m_securityGroupIdHasBeenSet; }

    /**
     * <p>The ID of the security group to use with the endpoint.</p>
     */
    inline void SetSecurityGroupId(const Aws::String& value) { m_securityGroupIdHasBeenSet = true; m_securityGroupId = value; }

    /**
     * <p>The ID of the security group to use with the endpoint.</p>
     */
    inline void SetSecurityGroupId(Aws::String&& value) { m_securityGroupIdHasBeenSet = true; m_securityGroupId = std::move(value); }

    /**
     * <p>The ID of the security group to use with the endpoint.</p>
     */
    inline void SetSecurityGroupId(const char* value) { m_securityGroupIdHasBeenSet = true; m_securityGroupId.assign(value); }

    /**
     * <p>The ID of the security group to use with the endpoint.</p>
     */
    inline CreateEndpointRequest& WithSecurityGroupId(const Aws::String& value) { SetSecurityGroupId(value); return *this;}

    /**
     * <p>The ID of the security group to use with the endpoint.</p>
     */
    inline CreateEndpointRequest& WithSecurityGroupId(Aws::String&& value) { SetSecurityGroupId(std::move(value)); return *this;}

    /**
     * <p>The ID of the security group to use with the endpoint.</p>
     */
    inline CreateEndpointRequest& WithSecurityGroupId(const char* value) { SetSecurityGroupId(value); return *this;}


    /**
     * <p>The type of access for the network connectivity for the Amazon S3 on Outposts
     * endpoint. To use the Amazon Web Services VPC, choose <code>Private</code>. To
     * use the endpoint with an on-premises network, choose
     * <code>CustomerOwnedIp</code>. If you choose <code>CustomerOwnedIp</code>, you
     * must also provide the customer-owned IP address pool (CoIP pool).</p>  <p>
     * <code>Private</code> is the default access type value.</p> 
     */
    inline const EndpointAccessType& GetAccessType() const{ return m_accessType; }

    /**
     * <p>The type of access for the network connectivity for the Amazon S3 on Outposts
     * endpoint. To use the Amazon Web Services VPC, choose <code>Private</code>. To
     * use the endpoint with an on-premises network, choose
     * <code>CustomerOwnedIp</code>. If you choose <code>CustomerOwnedIp</code>, you
     * must also provide the customer-owned IP address pool (CoIP pool).</p>  <p>
     * <code>Private</code> is the default access type value.</p> 
     */
    inline bool AccessTypeHasBeenSet() const { return m_accessTypeHasBeenSet; }

    /**
     * <p>The type of access for the network connectivity for the Amazon S3 on Outposts
     * endpoint. To use the Amazon Web Services VPC, choose <code>Private</code>. To
     * use the endpoint with an on-premises network, choose
     * <code>CustomerOwnedIp</code>. If you choose <code>CustomerOwnedIp</code>, you
     * must also provide the customer-owned IP address pool (CoIP pool).</p>  <p>
     * <code>Private</code> is the default access type value.</p> 
     */
    inline void SetAccessType(const EndpointAccessType& value) { m_accessTypeHasBeenSet = true; m_accessType = value; }

    /**
     * <p>The type of access for the network connectivity for the Amazon S3 on Outposts
     * endpoint. To use the Amazon Web Services VPC, choose <code>Private</code>. To
     * use the endpoint with an on-premises network, choose
     * <code>CustomerOwnedIp</code>. If you choose <code>CustomerOwnedIp</code>, you
     * must also provide the customer-owned IP address pool (CoIP pool).</p>  <p>
     * <code>Private</code> is the default access type value.</p> 
     */
    inline void SetAccessType(EndpointAccessType&& value) { m_accessTypeHasBeenSet = true; m_accessType = std::move(value); }

    /**
     * <p>The type of access for the network connectivity for the Amazon S3 on Outposts
     * endpoint. To use the Amazon Web Services VPC, choose <code>Private</code>. To
     * use the endpoint with an on-premises network, choose
     * <code>CustomerOwnedIp</code>. If you choose <code>CustomerOwnedIp</code>, you
     * must also provide the customer-owned IP address pool (CoIP pool).</p>  <p>
     * <code>Private</code> is the default access type value.</p> 
     */
    inline CreateEndpointRequest& WithAccessType(const EndpointAccessType& value) { SetAccessType(value); return *this;}

    /**
     * <p>The type of access for the network connectivity for the Amazon S3 on Outposts
     * endpoint. To use the Amazon Web Services VPC, choose <code>Private</code>. To
     * use the endpoint with an on-premises network, choose
     * <code>CustomerOwnedIp</code>. If you choose <code>CustomerOwnedIp</code>, you
     * must also provide the customer-owned IP address pool (CoIP pool).</p>  <p>
     * <code>Private</code> is the default access type value.</p> 
     */
    inline CreateEndpointRequest& WithAccessType(EndpointAccessType&& value) { SetAccessType(std::move(value)); return *this;}


    /**
     * <p>The ID of the customer-owned IPv4 address pool (CoIP pool) for the endpoint.
     * IP addresses are allocated from this pool for the endpoint.</p>
     */
    inline const Aws::String& GetCustomerOwnedIpv4Pool() const{ return m_customerOwnedIpv4Pool; }

    /**
     * <p>The ID of the customer-owned IPv4 address pool (CoIP pool) for the endpoint.
     * IP addresses are allocated from this pool for the endpoint.</p>
     */
    inline bool CustomerOwnedIpv4PoolHasBeenSet() const { return m_customerOwnedIpv4PoolHasBeenSet; }

    /**
     * <p>The ID of the customer-owned IPv4 address pool (CoIP pool) for the endpoint.
     * IP addresses are allocated from this pool for the endpoint.</p>
     */
    inline void SetCustomerOwnedIpv4Pool(const Aws::String& value) { m_customerOwnedIpv4PoolHasBeenSet = true; m_customerOwnedIpv4Pool = value; }

    /**
     * <p>The ID of the customer-owned IPv4 address pool (CoIP pool) for the endpoint.
     * IP addresses are allocated from this pool for the endpoint.</p>
     */
    inline void SetCustomerOwnedIpv4Pool(Aws::String&& value) { m_customerOwnedIpv4PoolHasBeenSet = true; m_customerOwnedIpv4Pool = std::move(value); }

    /**
     * <p>The ID of the customer-owned IPv4 address pool (CoIP pool) for the endpoint.
     * IP addresses are allocated from this pool for the endpoint.</p>
     */
    inline void SetCustomerOwnedIpv4Pool(const char* value) { m_customerOwnedIpv4PoolHasBeenSet = true; m_customerOwnedIpv4Pool.assign(value); }

    /**
     * <p>The ID of the customer-owned IPv4 address pool (CoIP pool) for the endpoint.
     * IP addresses are allocated from this pool for the endpoint.</p>
     */
    inline CreateEndpointRequest& WithCustomerOwnedIpv4Pool(const Aws::String& value) { SetCustomerOwnedIpv4Pool(value); return *this;}

    /**
     * <p>The ID of the customer-owned IPv4 address pool (CoIP pool) for the endpoint.
     * IP addresses are allocated from this pool for the endpoint.</p>
     */
    inline CreateEndpointRequest& WithCustomerOwnedIpv4Pool(Aws::String&& value) { SetCustomerOwnedIpv4Pool(std::move(value)); return *this;}

    /**
     * <p>The ID of the customer-owned IPv4 address pool (CoIP pool) for the endpoint.
     * IP addresses are allocated from this pool for the endpoint.</p>
     */
    inline CreateEndpointRequest& WithCustomerOwnedIpv4Pool(const char* value) { SetCustomerOwnedIpv4Pool(value); return *this;}

  private:

    Aws::String m_outpostId;
    bool m_outpostIdHasBeenSet = false;

    Aws::String m_subnetId;
    bool m_subnetIdHasBeenSet = false;

    Aws::String m_securityGroupId;
    bool m_securityGroupIdHasBeenSet = false;

    EndpointAccessType m_accessType;
    bool m_accessTypeHasBeenSet = false;

    Aws::String m_customerOwnedIpv4Pool;
    bool m_customerOwnedIpv4PoolHasBeenSet = false;
  };

} // namespace Model
} // namespace S3Outposts
} // namespace Aws
