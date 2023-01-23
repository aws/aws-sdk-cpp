/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift-serverless/RedshiftServerless_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/redshift-serverless/model/VpcEndpoint.h>
#include <aws/redshift-serverless/model/VpcSecurityGroupMembership.h>
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
namespace RedshiftServerless
{
namespace Model
{

  /**
   * <p>Information about an Amazon Redshift Serverless VPC endpoint.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-serverless-2021-04-21/EndpointAccess">AWS
   * API Reference</a></p>
   */
  class EndpointAccess
  {
  public:
    AWS_REDSHIFTSERVERLESS_API EndpointAccess();
    AWS_REDSHIFTSERVERLESS_API EndpointAccess(Aws::Utils::Json::JsonView jsonValue);
    AWS_REDSHIFTSERVERLESS_API EndpointAccess& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_REDSHIFTSERVERLESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The DNS address of the endpoint.</p>
     */
    inline const Aws::String& GetAddress() const{ return m_address; }

    /**
     * <p>The DNS address of the endpoint.</p>
     */
    inline bool AddressHasBeenSet() const { return m_addressHasBeenSet; }

    /**
     * <p>The DNS address of the endpoint.</p>
     */
    inline void SetAddress(const Aws::String& value) { m_addressHasBeenSet = true; m_address = value; }

    /**
     * <p>The DNS address of the endpoint.</p>
     */
    inline void SetAddress(Aws::String&& value) { m_addressHasBeenSet = true; m_address = std::move(value); }

    /**
     * <p>The DNS address of the endpoint.</p>
     */
    inline void SetAddress(const char* value) { m_addressHasBeenSet = true; m_address.assign(value); }

    /**
     * <p>The DNS address of the endpoint.</p>
     */
    inline EndpointAccess& WithAddress(const Aws::String& value) { SetAddress(value); return *this;}

    /**
     * <p>The DNS address of the endpoint.</p>
     */
    inline EndpointAccess& WithAddress(Aws::String&& value) { SetAddress(std::move(value)); return *this;}

    /**
     * <p>The DNS address of the endpoint.</p>
     */
    inline EndpointAccess& WithAddress(const char* value) { SetAddress(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the VPC endpoint.</p>
     */
    inline const Aws::String& GetEndpointArn() const{ return m_endpointArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the VPC endpoint.</p>
     */
    inline bool EndpointArnHasBeenSet() const { return m_endpointArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the VPC endpoint.</p>
     */
    inline void SetEndpointArn(const Aws::String& value) { m_endpointArnHasBeenSet = true; m_endpointArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the VPC endpoint.</p>
     */
    inline void SetEndpointArn(Aws::String&& value) { m_endpointArnHasBeenSet = true; m_endpointArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the VPC endpoint.</p>
     */
    inline void SetEndpointArn(const char* value) { m_endpointArnHasBeenSet = true; m_endpointArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the VPC endpoint.</p>
     */
    inline EndpointAccess& WithEndpointArn(const Aws::String& value) { SetEndpointArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the VPC endpoint.</p>
     */
    inline EndpointAccess& WithEndpointArn(Aws::String&& value) { SetEndpointArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the VPC endpoint.</p>
     */
    inline EndpointAccess& WithEndpointArn(const char* value) { SetEndpointArn(value); return *this;}


    /**
     * <p>The time that the endpoint was created.</p>
     */
    inline const Aws::Utils::DateTime& GetEndpointCreateTime() const{ return m_endpointCreateTime; }

    /**
     * <p>The time that the endpoint was created.</p>
     */
    inline bool EndpointCreateTimeHasBeenSet() const { return m_endpointCreateTimeHasBeenSet; }

    /**
     * <p>The time that the endpoint was created.</p>
     */
    inline void SetEndpointCreateTime(const Aws::Utils::DateTime& value) { m_endpointCreateTimeHasBeenSet = true; m_endpointCreateTime = value; }

    /**
     * <p>The time that the endpoint was created.</p>
     */
    inline void SetEndpointCreateTime(Aws::Utils::DateTime&& value) { m_endpointCreateTimeHasBeenSet = true; m_endpointCreateTime = std::move(value); }

    /**
     * <p>The time that the endpoint was created.</p>
     */
    inline EndpointAccess& WithEndpointCreateTime(const Aws::Utils::DateTime& value) { SetEndpointCreateTime(value); return *this;}

    /**
     * <p>The time that the endpoint was created.</p>
     */
    inline EndpointAccess& WithEndpointCreateTime(Aws::Utils::DateTime&& value) { SetEndpointCreateTime(std::move(value)); return *this;}


    /**
     * <p>The name of the VPC endpoint.</p>
     */
    inline const Aws::String& GetEndpointName() const{ return m_endpointName; }

    /**
     * <p>The name of the VPC endpoint.</p>
     */
    inline bool EndpointNameHasBeenSet() const { return m_endpointNameHasBeenSet; }

    /**
     * <p>The name of the VPC endpoint.</p>
     */
    inline void SetEndpointName(const Aws::String& value) { m_endpointNameHasBeenSet = true; m_endpointName = value; }

    /**
     * <p>The name of the VPC endpoint.</p>
     */
    inline void SetEndpointName(Aws::String&& value) { m_endpointNameHasBeenSet = true; m_endpointName = std::move(value); }

    /**
     * <p>The name of the VPC endpoint.</p>
     */
    inline void SetEndpointName(const char* value) { m_endpointNameHasBeenSet = true; m_endpointName.assign(value); }

    /**
     * <p>The name of the VPC endpoint.</p>
     */
    inline EndpointAccess& WithEndpointName(const Aws::String& value) { SetEndpointName(value); return *this;}

    /**
     * <p>The name of the VPC endpoint.</p>
     */
    inline EndpointAccess& WithEndpointName(Aws::String&& value) { SetEndpointName(std::move(value)); return *this;}

    /**
     * <p>The name of the VPC endpoint.</p>
     */
    inline EndpointAccess& WithEndpointName(const char* value) { SetEndpointName(value); return *this;}


    /**
     * <p>The status of the VPC endpoint.</p>
     */
    inline const Aws::String& GetEndpointStatus() const{ return m_endpointStatus; }

    /**
     * <p>The status of the VPC endpoint.</p>
     */
    inline bool EndpointStatusHasBeenSet() const { return m_endpointStatusHasBeenSet; }

    /**
     * <p>The status of the VPC endpoint.</p>
     */
    inline void SetEndpointStatus(const Aws::String& value) { m_endpointStatusHasBeenSet = true; m_endpointStatus = value; }

    /**
     * <p>The status of the VPC endpoint.</p>
     */
    inline void SetEndpointStatus(Aws::String&& value) { m_endpointStatusHasBeenSet = true; m_endpointStatus = std::move(value); }

    /**
     * <p>The status of the VPC endpoint.</p>
     */
    inline void SetEndpointStatus(const char* value) { m_endpointStatusHasBeenSet = true; m_endpointStatus.assign(value); }

    /**
     * <p>The status of the VPC endpoint.</p>
     */
    inline EndpointAccess& WithEndpointStatus(const Aws::String& value) { SetEndpointStatus(value); return *this;}

    /**
     * <p>The status of the VPC endpoint.</p>
     */
    inline EndpointAccess& WithEndpointStatus(Aws::String&& value) { SetEndpointStatus(std::move(value)); return *this;}

    /**
     * <p>The status of the VPC endpoint.</p>
     */
    inline EndpointAccess& WithEndpointStatus(const char* value) { SetEndpointStatus(value); return *this;}


    /**
     * <p>The port number on which Amazon Redshift Serverless accepts incoming
     * connections.</p>
     */
    inline int GetPort() const{ return m_port; }

    /**
     * <p>The port number on which Amazon Redshift Serverless accepts incoming
     * connections.</p>
     */
    inline bool PortHasBeenSet() const { return m_portHasBeenSet; }

    /**
     * <p>The port number on which Amazon Redshift Serverless accepts incoming
     * connections.</p>
     */
    inline void SetPort(int value) { m_portHasBeenSet = true; m_port = value; }

    /**
     * <p>The port number on which Amazon Redshift Serverless accepts incoming
     * connections.</p>
     */
    inline EndpointAccess& WithPort(int value) { SetPort(value); return *this;}


    /**
     * <p>The unique identifier of subnets where Amazon Redshift Serverless choose to
     * deploy the VPC endpoint.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSubnetIds() const{ return m_subnetIds; }

    /**
     * <p>The unique identifier of subnets where Amazon Redshift Serverless choose to
     * deploy the VPC endpoint.</p>
     */
    inline bool SubnetIdsHasBeenSet() const { return m_subnetIdsHasBeenSet; }

    /**
     * <p>The unique identifier of subnets where Amazon Redshift Serverless choose to
     * deploy the VPC endpoint.</p>
     */
    inline void SetSubnetIds(const Aws::Vector<Aws::String>& value) { m_subnetIdsHasBeenSet = true; m_subnetIds = value; }

    /**
     * <p>The unique identifier of subnets where Amazon Redshift Serverless choose to
     * deploy the VPC endpoint.</p>
     */
    inline void SetSubnetIds(Aws::Vector<Aws::String>&& value) { m_subnetIdsHasBeenSet = true; m_subnetIds = std::move(value); }

    /**
     * <p>The unique identifier of subnets where Amazon Redshift Serverless choose to
     * deploy the VPC endpoint.</p>
     */
    inline EndpointAccess& WithSubnetIds(const Aws::Vector<Aws::String>& value) { SetSubnetIds(value); return *this;}

    /**
     * <p>The unique identifier of subnets where Amazon Redshift Serverless choose to
     * deploy the VPC endpoint.</p>
     */
    inline EndpointAccess& WithSubnetIds(Aws::Vector<Aws::String>&& value) { SetSubnetIds(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of subnets where Amazon Redshift Serverless choose to
     * deploy the VPC endpoint.</p>
     */
    inline EndpointAccess& AddSubnetIds(const Aws::String& value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(value); return *this; }

    /**
     * <p>The unique identifier of subnets where Amazon Redshift Serverless choose to
     * deploy the VPC endpoint.</p>
     */
    inline EndpointAccess& AddSubnetIds(Aws::String&& value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(std::move(value)); return *this; }

    /**
     * <p>The unique identifier of subnets where Amazon Redshift Serverless choose to
     * deploy the VPC endpoint.</p>
     */
    inline EndpointAccess& AddSubnetIds(const char* value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(value); return *this; }


    /**
     * <p>The connection endpoint for connecting to Amazon Redshift Serverless.</p>
     */
    inline const VpcEndpoint& GetVpcEndpoint() const{ return m_vpcEndpoint; }

    /**
     * <p>The connection endpoint for connecting to Amazon Redshift Serverless.</p>
     */
    inline bool VpcEndpointHasBeenSet() const { return m_vpcEndpointHasBeenSet; }

    /**
     * <p>The connection endpoint for connecting to Amazon Redshift Serverless.</p>
     */
    inline void SetVpcEndpoint(const VpcEndpoint& value) { m_vpcEndpointHasBeenSet = true; m_vpcEndpoint = value; }

    /**
     * <p>The connection endpoint for connecting to Amazon Redshift Serverless.</p>
     */
    inline void SetVpcEndpoint(VpcEndpoint&& value) { m_vpcEndpointHasBeenSet = true; m_vpcEndpoint = std::move(value); }

    /**
     * <p>The connection endpoint for connecting to Amazon Redshift Serverless.</p>
     */
    inline EndpointAccess& WithVpcEndpoint(const VpcEndpoint& value) { SetVpcEndpoint(value); return *this;}

    /**
     * <p>The connection endpoint for connecting to Amazon Redshift Serverless.</p>
     */
    inline EndpointAccess& WithVpcEndpoint(VpcEndpoint&& value) { SetVpcEndpoint(std::move(value)); return *this;}


    /**
     * <p>The security groups associated with the endpoint.</p>
     */
    inline const Aws::Vector<VpcSecurityGroupMembership>& GetVpcSecurityGroups() const{ return m_vpcSecurityGroups; }

    /**
     * <p>The security groups associated with the endpoint.</p>
     */
    inline bool VpcSecurityGroupsHasBeenSet() const { return m_vpcSecurityGroupsHasBeenSet; }

    /**
     * <p>The security groups associated with the endpoint.</p>
     */
    inline void SetVpcSecurityGroups(const Aws::Vector<VpcSecurityGroupMembership>& value) { m_vpcSecurityGroupsHasBeenSet = true; m_vpcSecurityGroups = value; }

    /**
     * <p>The security groups associated with the endpoint.</p>
     */
    inline void SetVpcSecurityGroups(Aws::Vector<VpcSecurityGroupMembership>&& value) { m_vpcSecurityGroupsHasBeenSet = true; m_vpcSecurityGroups = std::move(value); }

    /**
     * <p>The security groups associated with the endpoint.</p>
     */
    inline EndpointAccess& WithVpcSecurityGroups(const Aws::Vector<VpcSecurityGroupMembership>& value) { SetVpcSecurityGroups(value); return *this;}

    /**
     * <p>The security groups associated with the endpoint.</p>
     */
    inline EndpointAccess& WithVpcSecurityGroups(Aws::Vector<VpcSecurityGroupMembership>&& value) { SetVpcSecurityGroups(std::move(value)); return *this;}

    /**
     * <p>The security groups associated with the endpoint.</p>
     */
    inline EndpointAccess& AddVpcSecurityGroups(const VpcSecurityGroupMembership& value) { m_vpcSecurityGroupsHasBeenSet = true; m_vpcSecurityGroups.push_back(value); return *this; }

    /**
     * <p>The security groups associated with the endpoint.</p>
     */
    inline EndpointAccess& AddVpcSecurityGroups(VpcSecurityGroupMembership&& value) { m_vpcSecurityGroupsHasBeenSet = true; m_vpcSecurityGroups.push_back(std::move(value)); return *this; }


    /**
     * <p>The name of the workgroup associated with the endpoint.</p>
     */
    inline const Aws::String& GetWorkgroupName() const{ return m_workgroupName; }

    /**
     * <p>The name of the workgroup associated with the endpoint.</p>
     */
    inline bool WorkgroupNameHasBeenSet() const { return m_workgroupNameHasBeenSet; }

    /**
     * <p>The name of the workgroup associated with the endpoint.</p>
     */
    inline void SetWorkgroupName(const Aws::String& value) { m_workgroupNameHasBeenSet = true; m_workgroupName = value; }

    /**
     * <p>The name of the workgroup associated with the endpoint.</p>
     */
    inline void SetWorkgroupName(Aws::String&& value) { m_workgroupNameHasBeenSet = true; m_workgroupName = std::move(value); }

    /**
     * <p>The name of the workgroup associated with the endpoint.</p>
     */
    inline void SetWorkgroupName(const char* value) { m_workgroupNameHasBeenSet = true; m_workgroupName.assign(value); }

    /**
     * <p>The name of the workgroup associated with the endpoint.</p>
     */
    inline EndpointAccess& WithWorkgroupName(const Aws::String& value) { SetWorkgroupName(value); return *this;}

    /**
     * <p>The name of the workgroup associated with the endpoint.</p>
     */
    inline EndpointAccess& WithWorkgroupName(Aws::String&& value) { SetWorkgroupName(std::move(value)); return *this;}

    /**
     * <p>The name of the workgroup associated with the endpoint.</p>
     */
    inline EndpointAccess& WithWorkgroupName(const char* value) { SetWorkgroupName(value); return *this;}

  private:

    Aws::String m_address;
    bool m_addressHasBeenSet = false;

    Aws::String m_endpointArn;
    bool m_endpointArnHasBeenSet = false;

    Aws::Utils::DateTime m_endpointCreateTime;
    bool m_endpointCreateTimeHasBeenSet = false;

    Aws::String m_endpointName;
    bool m_endpointNameHasBeenSet = false;

    Aws::String m_endpointStatus;
    bool m_endpointStatusHasBeenSet = false;

    int m_port;
    bool m_portHasBeenSet = false;

    Aws::Vector<Aws::String> m_subnetIds;
    bool m_subnetIdsHasBeenSet = false;

    VpcEndpoint m_vpcEndpoint;
    bool m_vpcEndpointHasBeenSet = false;

    Aws::Vector<VpcSecurityGroupMembership> m_vpcSecurityGroups;
    bool m_vpcSecurityGroupsHasBeenSet = false;

    Aws::String m_workgroupName;
    bool m_workgroupNameHasBeenSet = false;
  };

} // namespace Model
} // namespace RedshiftServerless
} // namespace Aws
