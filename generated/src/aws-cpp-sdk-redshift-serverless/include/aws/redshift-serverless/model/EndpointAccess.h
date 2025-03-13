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
    AWS_REDSHIFTSERVERLESS_API EndpointAccess() = default;
    AWS_REDSHIFTSERVERLESS_API EndpointAccess(Aws::Utils::Json::JsonView jsonValue);
    AWS_REDSHIFTSERVERLESS_API EndpointAccess& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_REDSHIFTSERVERLESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The DNS address of the endpoint.</p>
     */
    inline const Aws::String& GetAddress() const { return m_address; }
    inline bool AddressHasBeenSet() const { return m_addressHasBeenSet; }
    template<typename AddressT = Aws::String>
    void SetAddress(AddressT&& value) { m_addressHasBeenSet = true; m_address = std::forward<AddressT>(value); }
    template<typename AddressT = Aws::String>
    EndpointAccess& WithAddress(AddressT&& value) { SetAddress(std::forward<AddressT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the VPC endpoint.</p>
     */
    inline const Aws::String& GetEndpointArn() const { return m_endpointArn; }
    inline bool EndpointArnHasBeenSet() const { return m_endpointArnHasBeenSet; }
    template<typename EndpointArnT = Aws::String>
    void SetEndpointArn(EndpointArnT&& value) { m_endpointArnHasBeenSet = true; m_endpointArn = std::forward<EndpointArnT>(value); }
    template<typename EndpointArnT = Aws::String>
    EndpointAccess& WithEndpointArn(EndpointArnT&& value) { SetEndpointArn(std::forward<EndpointArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time that the endpoint was created.</p>
     */
    inline const Aws::Utils::DateTime& GetEndpointCreateTime() const { return m_endpointCreateTime; }
    inline bool EndpointCreateTimeHasBeenSet() const { return m_endpointCreateTimeHasBeenSet; }
    template<typename EndpointCreateTimeT = Aws::Utils::DateTime>
    void SetEndpointCreateTime(EndpointCreateTimeT&& value) { m_endpointCreateTimeHasBeenSet = true; m_endpointCreateTime = std::forward<EndpointCreateTimeT>(value); }
    template<typename EndpointCreateTimeT = Aws::Utils::DateTime>
    EndpointAccess& WithEndpointCreateTime(EndpointCreateTimeT&& value) { SetEndpointCreateTime(std::forward<EndpointCreateTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the VPC endpoint.</p>
     */
    inline const Aws::String& GetEndpointName() const { return m_endpointName; }
    inline bool EndpointNameHasBeenSet() const { return m_endpointNameHasBeenSet; }
    template<typename EndpointNameT = Aws::String>
    void SetEndpointName(EndpointNameT&& value) { m_endpointNameHasBeenSet = true; m_endpointName = std::forward<EndpointNameT>(value); }
    template<typename EndpointNameT = Aws::String>
    EndpointAccess& WithEndpointName(EndpointNameT&& value) { SetEndpointName(std::forward<EndpointNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the VPC endpoint.</p>
     */
    inline const Aws::String& GetEndpointStatus() const { return m_endpointStatus; }
    inline bool EndpointStatusHasBeenSet() const { return m_endpointStatusHasBeenSet; }
    template<typename EndpointStatusT = Aws::String>
    void SetEndpointStatus(EndpointStatusT&& value) { m_endpointStatusHasBeenSet = true; m_endpointStatus = std::forward<EndpointStatusT>(value); }
    template<typename EndpointStatusT = Aws::String>
    EndpointAccess& WithEndpointStatus(EndpointStatusT&& value) { SetEndpointStatus(std::forward<EndpointStatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The port number on which Amazon Redshift Serverless accepts incoming
     * connections.</p>
     */
    inline int GetPort() const { return m_port; }
    inline bool PortHasBeenSet() const { return m_portHasBeenSet; }
    inline void SetPort(int value) { m_portHasBeenSet = true; m_port = value; }
    inline EndpointAccess& WithPort(int value) { SetPort(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of subnets where Amazon Redshift Serverless choose to
     * deploy the VPC endpoint.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSubnetIds() const { return m_subnetIds; }
    inline bool SubnetIdsHasBeenSet() const { return m_subnetIdsHasBeenSet; }
    template<typename SubnetIdsT = Aws::Vector<Aws::String>>
    void SetSubnetIds(SubnetIdsT&& value) { m_subnetIdsHasBeenSet = true; m_subnetIds = std::forward<SubnetIdsT>(value); }
    template<typename SubnetIdsT = Aws::Vector<Aws::String>>
    EndpointAccess& WithSubnetIds(SubnetIdsT&& value) { SetSubnetIds(std::forward<SubnetIdsT>(value)); return *this;}
    template<typename SubnetIdsT = Aws::String>
    EndpointAccess& AddSubnetIds(SubnetIdsT&& value) { m_subnetIdsHasBeenSet = true; m_subnetIds.emplace_back(std::forward<SubnetIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The connection endpoint for connecting to Amazon Redshift Serverless.</p>
     */
    inline const VpcEndpoint& GetVpcEndpoint() const { return m_vpcEndpoint; }
    inline bool VpcEndpointHasBeenSet() const { return m_vpcEndpointHasBeenSet; }
    template<typename VpcEndpointT = VpcEndpoint>
    void SetVpcEndpoint(VpcEndpointT&& value) { m_vpcEndpointHasBeenSet = true; m_vpcEndpoint = std::forward<VpcEndpointT>(value); }
    template<typename VpcEndpointT = VpcEndpoint>
    EndpointAccess& WithVpcEndpoint(VpcEndpointT&& value) { SetVpcEndpoint(std::forward<VpcEndpointT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The security groups associated with the endpoint.</p>
     */
    inline const Aws::Vector<VpcSecurityGroupMembership>& GetVpcSecurityGroups() const { return m_vpcSecurityGroups; }
    inline bool VpcSecurityGroupsHasBeenSet() const { return m_vpcSecurityGroupsHasBeenSet; }
    template<typename VpcSecurityGroupsT = Aws::Vector<VpcSecurityGroupMembership>>
    void SetVpcSecurityGroups(VpcSecurityGroupsT&& value) { m_vpcSecurityGroupsHasBeenSet = true; m_vpcSecurityGroups = std::forward<VpcSecurityGroupsT>(value); }
    template<typename VpcSecurityGroupsT = Aws::Vector<VpcSecurityGroupMembership>>
    EndpointAccess& WithVpcSecurityGroups(VpcSecurityGroupsT&& value) { SetVpcSecurityGroups(std::forward<VpcSecurityGroupsT>(value)); return *this;}
    template<typename VpcSecurityGroupsT = VpcSecurityGroupMembership>
    EndpointAccess& AddVpcSecurityGroups(VpcSecurityGroupsT&& value) { m_vpcSecurityGroupsHasBeenSet = true; m_vpcSecurityGroups.emplace_back(std::forward<VpcSecurityGroupsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The name of the workgroup associated with the endpoint.</p>
     */
    inline const Aws::String& GetWorkgroupName() const { return m_workgroupName; }
    inline bool WorkgroupNameHasBeenSet() const { return m_workgroupNameHasBeenSet; }
    template<typename WorkgroupNameT = Aws::String>
    void SetWorkgroupName(WorkgroupNameT&& value) { m_workgroupNameHasBeenSet = true; m_workgroupName = std::forward<WorkgroupNameT>(value); }
    template<typename WorkgroupNameT = Aws::String>
    EndpointAccess& WithWorkgroupName(WorkgroupNameT&& value) { SetWorkgroupName(std::forward<WorkgroupNameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_address;
    bool m_addressHasBeenSet = false;

    Aws::String m_endpointArn;
    bool m_endpointArnHasBeenSet = false;

    Aws::Utils::DateTime m_endpointCreateTime{};
    bool m_endpointCreateTimeHasBeenSet = false;

    Aws::String m_endpointName;
    bool m_endpointNameHasBeenSet = false;

    Aws::String m_endpointStatus;
    bool m_endpointStatusHasBeenSet = false;

    int m_port{0};
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
