/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift-serverless/RedshiftServerless_EXPORTS.h>
#include <aws/redshift-serverless/RedshiftServerlessRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace RedshiftServerless
{
namespace Model
{

  /**
   */
  class CreateEndpointAccessRequest : public RedshiftServerlessRequest
  {
  public:
    AWS_REDSHIFTSERVERLESS_API CreateEndpointAccessRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateEndpointAccess"; }

    AWS_REDSHIFTSERVERLESS_API Aws::String SerializePayload() const override;

    AWS_REDSHIFTSERVERLESS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the VPC endpoint. An endpoint name must contain 1-30 characters.
     * Valid characters are A-Z, a-z, 0-9, and hyphen(-). The first character must be a
     * letter. The name can't contain two consecutive hyphens or end with a hyphen.</p>
     */
    inline const Aws::String& GetEndpointName() const{ return m_endpointName; }

    /**
     * <p>The name of the VPC endpoint. An endpoint name must contain 1-30 characters.
     * Valid characters are A-Z, a-z, 0-9, and hyphen(-). The first character must be a
     * letter. The name can't contain two consecutive hyphens or end with a hyphen.</p>
     */
    inline bool EndpointNameHasBeenSet() const { return m_endpointNameHasBeenSet; }

    /**
     * <p>The name of the VPC endpoint. An endpoint name must contain 1-30 characters.
     * Valid characters are A-Z, a-z, 0-9, and hyphen(-). The first character must be a
     * letter. The name can't contain two consecutive hyphens or end with a hyphen.</p>
     */
    inline void SetEndpointName(const Aws::String& value) { m_endpointNameHasBeenSet = true; m_endpointName = value; }

    /**
     * <p>The name of the VPC endpoint. An endpoint name must contain 1-30 characters.
     * Valid characters are A-Z, a-z, 0-9, and hyphen(-). The first character must be a
     * letter. The name can't contain two consecutive hyphens or end with a hyphen.</p>
     */
    inline void SetEndpointName(Aws::String&& value) { m_endpointNameHasBeenSet = true; m_endpointName = std::move(value); }

    /**
     * <p>The name of the VPC endpoint. An endpoint name must contain 1-30 characters.
     * Valid characters are A-Z, a-z, 0-9, and hyphen(-). The first character must be a
     * letter. The name can't contain two consecutive hyphens or end with a hyphen.</p>
     */
    inline void SetEndpointName(const char* value) { m_endpointNameHasBeenSet = true; m_endpointName.assign(value); }

    /**
     * <p>The name of the VPC endpoint. An endpoint name must contain 1-30 characters.
     * Valid characters are A-Z, a-z, 0-9, and hyphen(-). The first character must be a
     * letter. The name can't contain two consecutive hyphens or end with a hyphen.</p>
     */
    inline CreateEndpointAccessRequest& WithEndpointName(const Aws::String& value) { SetEndpointName(value); return *this;}

    /**
     * <p>The name of the VPC endpoint. An endpoint name must contain 1-30 characters.
     * Valid characters are A-Z, a-z, 0-9, and hyphen(-). The first character must be a
     * letter. The name can't contain two consecutive hyphens or end with a hyphen.</p>
     */
    inline CreateEndpointAccessRequest& WithEndpointName(Aws::String&& value) { SetEndpointName(std::move(value)); return *this;}

    /**
     * <p>The name of the VPC endpoint. An endpoint name must contain 1-30 characters.
     * Valid characters are A-Z, a-z, 0-9, and hyphen(-). The first character must be a
     * letter. The name can't contain two consecutive hyphens or end with a hyphen.</p>
     */
    inline CreateEndpointAccessRequest& WithEndpointName(const char* value) { SetEndpointName(value); return *this;}


    /**
     * <p>The unique identifers of subnets from which Amazon Redshift Serverless
     * chooses one to deploy a VPC endpoint.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSubnetIds() const{ return m_subnetIds; }

    /**
     * <p>The unique identifers of subnets from which Amazon Redshift Serverless
     * chooses one to deploy a VPC endpoint.</p>
     */
    inline bool SubnetIdsHasBeenSet() const { return m_subnetIdsHasBeenSet; }

    /**
     * <p>The unique identifers of subnets from which Amazon Redshift Serverless
     * chooses one to deploy a VPC endpoint.</p>
     */
    inline void SetSubnetIds(const Aws::Vector<Aws::String>& value) { m_subnetIdsHasBeenSet = true; m_subnetIds = value; }

    /**
     * <p>The unique identifers of subnets from which Amazon Redshift Serverless
     * chooses one to deploy a VPC endpoint.</p>
     */
    inline void SetSubnetIds(Aws::Vector<Aws::String>&& value) { m_subnetIdsHasBeenSet = true; m_subnetIds = std::move(value); }

    /**
     * <p>The unique identifers of subnets from which Amazon Redshift Serverless
     * chooses one to deploy a VPC endpoint.</p>
     */
    inline CreateEndpointAccessRequest& WithSubnetIds(const Aws::Vector<Aws::String>& value) { SetSubnetIds(value); return *this;}

    /**
     * <p>The unique identifers of subnets from which Amazon Redshift Serverless
     * chooses one to deploy a VPC endpoint.</p>
     */
    inline CreateEndpointAccessRequest& WithSubnetIds(Aws::Vector<Aws::String>&& value) { SetSubnetIds(std::move(value)); return *this;}

    /**
     * <p>The unique identifers of subnets from which Amazon Redshift Serverless
     * chooses one to deploy a VPC endpoint.</p>
     */
    inline CreateEndpointAccessRequest& AddSubnetIds(const Aws::String& value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(value); return *this; }

    /**
     * <p>The unique identifers of subnets from which Amazon Redshift Serverless
     * chooses one to deploy a VPC endpoint.</p>
     */
    inline CreateEndpointAccessRequest& AddSubnetIds(Aws::String&& value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(std::move(value)); return *this; }

    /**
     * <p>The unique identifers of subnets from which Amazon Redshift Serverless
     * chooses one to deploy a VPC endpoint.</p>
     */
    inline CreateEndpointAccessRequest& AddSubnetIds(const char* value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(value); return *this; }


    /**
     * <p>The unique identifiers of the security group that defines the ports,
     * protocols, and sources for inbound traffic that you are authorizing into your
     * endpoint.</p>
     */
    inline const Aws::Vector<Aws::String>& GetVpcSecurityGroupIds() const{ return m_vpcSecurityGroupIds; }

    /**
     * <p>The unique identifiers of the security group that defines the ports,
     * protocols, and sources for inbound traffic that you are authorizing into your
     * endpoint.</p>
     */
    inline bool VpcSecurityGroupIdsHasBeenSet() const { return m_vpcSecurityGroupIdsHasBeenSet; }

    /**
     * <p>The unique identifiers of the security group that defines the ports,
     * protocols, and sources for inbound traffic that you are authorizing into your
     * endpoint.</p>
     */
    inline void SetVpcSecurityGroupIds(const Aws::Vector<Aws::String>& value) { m_vpcSecurityGroupIdsHasBeenSet = true; m_vpcSecurityGroupIds = value; }

    /**
     * <p>The unique identifiers of the security group that defines the ports,
     * protocols, and sources for inbound traffic that you are authorizing into your
     * endpoint.</p>
     */
    inline void SetVpcSecurityGroupIds(Aws::Vector<Aws::String>&& value) { m_vpcSecurityGroupIdsHasBeenSet = true; m_vpcSecurityGroupIds = std::move(value); }

    /**
     * <p>The unique identifiers of the security group that defines the ports,
     * protocols, and sources for inbound traffic that you are authorizing into your
     * endpoint.</p>
     */
    inline CreateEndpointAccessRequest& WithVpcSecurityGroupIds(const Aws::Vector<Aws::String>& value) { SetVpcSecurityGroupIds(value); return *this;}

    /**
     * <p>The unique identifiers of the security group that defines the ports,
     * protocols, and sources for inbound traffic that you are authorizing into your
     * endpoint.</p>
     */
    inline CreateEndpointAccessRequest& WithVpcSecurityGroupIds(Aws::Vector<Aws::String>&& value) { SetVpcSecurityGroupIds(std::move(value)); return *this;}

    /**
     * <p>The unique identifiers of the security group that defines the ports,
     * protocols, and sources for inbound traffic that you are authorizing into your
     * endpoint.</p>
     */
    inline CreateEndpointAccessRequest& AddVpcSecurityGroupIds(const Aws::String& value) { m_vpcSecurityGroupIdsHasBeenSet = true; m_vpcSecurityGroupIds.push_back(value); return *this; }

    /**
     * <p>The unique identifiers of the security group that defines the ports,
     * protocols, and sources for inbound traffic that you are authorizing into your
     * endpoint.</p>
     */
    inline CreateEndpointAccessRequest& AddVpcSecurityGroupIds(Aws::String&& value) { m_vpcSecurityGroupIdsHasBeenSet = true; m_vpcSecurityGroupIds.push_back(std::move(value)); return *this; }

    /**
     * <p>The unique identifiers of the security group that defines the ports,
     * protocols, and sources for inbound traffic that you are authorizing into your
     * endpoint.</p>
     */
    inline CreateEndpointAccessRequest& AddVpcSecurityGroupIds(const char* value) { m_vpcSecurityGroupIdsHasBeenSet = true; m_vpcSecurityGroupIds.push_back(value); return *this; }


    /**
     * <p>The name of the workgroup to associate with the VPC endpoint.</p>
     */
    inline const Aws::String& GetWorkgroupName() const{ return m_workgroupName; }

    /**
     * <p>The name of the workgroup to associate with the VPC endpoint.</p>
     */
    inline bool WorkgroupNameHasBeenSet() const { return m_workgroupNameHasBeenSet; }

    /**
     * <p>The name of the workgroup to associate with the VPC endpoint.</p>
     */
    inline void SetWorkgroupName(const Aws::String& value) { m_workgroupNameHasBeenSet = true; m_workgroupName = value; }

    /**
     * <p>The name of the workgroup to associate with the VPC endpoint.</p>
     */
    inline void SetWorkgroupName(Aws::String&& value) { m_workgroupNameHasBeenSet = true; m_workgroupName = std::move(value); }

    /**
     * <p>The name of the workgroup to associate with the VPC endpoint.</p>
     */
    inline void SetWorkgroupName(const char* value) { m_workgroupNameHasBeenSet = true; m_workgroupName.assign(value); }

    /**
     * <p>The name of the workgroup to associate with the VPC endpoint.</p>
     */
    inline CreateEndpointAccessRequest& WithWorkgroupName(const Aws::String& value) { SetWorkgroupName(value); return *this;}

    /**
     * <p>The name of the workgroup to associate with the VPC endpoint.</p>
     */
    inline CreateEndpointAccessRequest& WithWorkgroupName(Aws::String&& value) { SetWorkgroupName(std::move(value)); return *this;}

    /**
     * <p>The name of the workgroup to associate with the VPC endpoint.</p>
     */
    inline CreateEndpointAccessRequest& WithWorkgroupName(const char* value) { SetWorkgroupName(value); return *this;}

  private:

    Aws::String m_endpointName;
    bool m_endpointNameHasBeenSet = false;

    Aws::Vector<Aws::String> m_subnetIds;
    bool m_subnetIdsHasBeenSet = false;

    Aws::Vector<Aws::String> m_vpcSecurityGroupIds;
    bool m_vpcSecurityGroupIdsHasBeenSet = false;

    Aws::String m_workgroupName;
    bool m_workgroupNameHasBeenSet = false;
  };

} // namespace Model
} // namespace RedshiftServerless
} // namespace Aws
