/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift/Redshift_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/redshift/model/VpcEndpoint.h>
#include <aws/redshift/model/ResponseMetadata.h>
#include <aws/redshift/model/VpcSecurityGroupMembership.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Xml
{
  class XmlDocument;
} // namespace Xml
} // namespace Utils
namespace Redshift
{
namespace Model
{
  /**
   * <p>Describes a Redshift-managed VPC endpoint.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-2012-12-01/EndpointAccess">AWS
   * API Reference</a></p>
   */
  class ModifyEndpointAccessResult
  {
  public:
    AWS_REDSHIFT_API ModifyEndpointAccessResult() = default;
    AWS_REDSHIFT_API ModifyEndpointAccessResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_REDSHIFT_API ModifyEndpointAccessResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The cluster identifier of the cluster associated with the endpoint.</p>
     */
    inline const Aws::String& GetClusterIdentifier() const { return m_clusterIdentifier; }
    template<typename ClusterIdentifierT = Aws::String>
    void SetClusterIdentifier(ClusterIdentifierT&& value) { m_clusterIdentifierHasBeenSet = true; m_clusterIdentifier = std::forward<ClusterIdentifierT>(value); }
    template<typename ClusterIdentifierT = Aws::String>
    ModifyEndpointAccessResult& WithClusterIdentifier(ClusterIdentifierT&& value) { SetClusterIdentifier(std::forward<ClusterIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services account ID of the owner of the cluster.</p>
     */
    inline const Aws::String& GetResourceOwner() const { return m_resourceOwner; }
    template<typename ResourceOwnerT = Aws::String>
    void SetResourceOwner(ResourceOwnerT&& value) { m_resourceOwnerHasBeenSet = true; m_resourceOwner = std::forward<ResourceOwnerT>(value); }
    template<typename ResourceOwnerT = Aws::String>
    ModifyEndpointAccessResult& WithResourceOwner(ResourceOwnerT&& value) { SetResourceOwner(std::forward<ResourceOwnerT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The subnet group name where Amazon Redshift chooses to deploy the
     * endpoint.</p>
     */
    inline const Aws::String& GetSubnetGroupName() const { return m_subnetGroupName; }
    template<typename SubnetGroupNameT = Aws::String>
    void SetSubnetGroupName(SubnetGroupNameT&& value) { m_subnetGroupNameHasBeenSet = true; m_subnetGroupName = std::forward<SubnetGroupNameT>(value); }
    template<typename SubnetGroupNameT = Aws::String>
    ModifyEndpointAccessResult& WithSubnetGroupName(SubnetGroupNameT&& value) { SetSubnetGroupName(std::forward<SubnetGroupNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the endpoint.</p>
     */
    inline const Aws::String& GetEndpointStatus() const { return m_endpointStatus; }
    template<typename EndpointStatusT = Aws::String>
    void SetEndpointStatus(EndpointStatusT&& value) { m_endpointStatusHasBeenSet = true; m_endpointStatus = std::forward<EndpointStatusT>(value); }
    template<typename EndpointStatusT = Aws::String>
    ModifyEndpointAccessResult& WithEndpointStatus(EndpointStatusT&& value) { SetEndpointStatus(std::forward<EndpointStatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the endpoint.</p>
     */
    inline const Aws::String& GetEndpointName() const { return m_endpointName; }
    template<typename EndpointNameT = Aws::String>
    void SetEndpointName(EndpointNameT&& value) { m_endpointNameHasBeenSet = true; m_endpointName = std::forward<EndpointNameT>(value); }
    template<typename EndpointNameT = Aws::String>
    ModifyEndpointAccessResult& WithEndpointName(EndpointNameT&& value) { SetEndpointName(std::forward<EndpointNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time (UTC) that the endpoint was created.</p>
     */
    inline const Aws::Utils::DateTime& GetEndpointCreateTime() const { return m_endpointCreateTime; }
    template<typename EndpointCreateTimeT = Aws::Utils::DateTime>
    void SetEndpointCreateTime(EndpointCreateTimeT&& value) { m_endpointCreateTimeHasBeenSet = true; m_endpointCreateTime = std::forward<EndpointCreateTimeT>(value); }
    template<typename EndpointCreateTimeT = Aws::Utils::DateTime>
    ModifyEndpointAccessResult& WithEndpointCreateTime(EndpointCreateTimeT&& value) { SetEndpointCreateTime(std::forward<EndpointCreateTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The port number on which the cluster accepts incoming connections.</p>
     */
    inline int GetPort() const { return m_port; }
    inline void SetPort(int value) { m_portHasBeenSet = true; m_port = value; }
    inline ModifyEndpointAccessResult& WithPort(int value) { SetPort(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The DNS address of the endpoint.</p>
     */
    inline const Aws::String& GetAddress() const { return m_address; }
    template<typename AddressT = Aws::String>
    void SetAddress(AddressT&& value) { m_addressHasBeenSet = true; m_address = std::forward<AddressT>(value); }
    template<typename AddressT = Aws::String>
    ModifyEndpointAccessResult& WithAddress(AddressT&& value) { SetAddress(std::forward<AddressT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The security groups associated with the endpoint.</p>
     */
    inline const Aws::Vector<VpcSecurityGroupMembership>& GetVpcSecurityGroups() const { return m_vpcSecurityGroups; }
    template<typename VpcSecurityGroupsT = Aws::Vector<VpcSecurityGroupMembership>>
    void SetVpcSecurityGroups(VpcSecurityGroupsT&& value) { m_vpcSecurityGroupsHasBeenSet = true; m_vpcSecurityGroups = std::forward<VpcSecurityGroupsT>(value); }
    template<typename VpcSecurityGroupsT = Aws::Vector<VpcSecurityGroupMembership>>
    ModifyEndpointAccessResult& WithVpcSecurityGroups(VpcSecurityGroupsT&& value) { SetVpcSecurityGroups(std::forward<VpcSecurityGroupsT>(value)); return *this;}
    template<typename VpcSecurityGroupsT = VpcSecurityGroupMembership>
    ModifyEndpointAccessResult& AddVpcSecurityGroups(VpcSecurityGroupsT&& value) { m_vpcSecurityGroupsHasBeenSet = true; m_vpcSecurityGroups.emplace_back(std::forward<VpcSecurityGroupsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const VpcEndpoint& GetVpcEndpoint() const { return m_vpcEndpoint; }
    template<typename VpcEndpointT = VpcEndpoint>
    void SetVpcEndpoint(VpcEndpointT&& value) { m_vpcEndpointHasBeenSet = true; m_vpcEndpoint = std::forward<VpcEndpointT>(value); }
    template<typename VpcEndpointT = VpcEndpoint>
    ModifyEndpointAccessResult& WithVpcEndpoint(VpcEndpointT&& value) { SetVpcEndpoint(std::forward<VpcEndpointT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    ModifyEndpointAccessResult& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_clusterIdentifier;
    bool m_clusterIdentifierHasBeenSet = false;

    Aws::String m_resourceOwner;
    bool m_resourceOwnerHasBeenSet = false;

    Aws::String m_subnetGroupName;
    bool m_subnetGroupNameHasBeenSet = false;

    Aws::String m_endpointStatus;
    bool m_endpointStatusHasBeenSet = false;

    Aws::String m_endpointName;
    bool m_endpointNameHasBeenSet = false;

    Aws::Utils::DateTime m_endpointCreateTime{};
    bool m_endpointCreateTimeHasBeenSet = false;

    int m_port{0};
    bool m_portHasBeenSet = false;

    Aws::String m_address;
    bool m_addressHasBeenSet = false;

    Aws::Vector<VpcSecurityGroupMembership> m_vpcSecurityGroups;
    bool m_vpcSecurityGroupsHasBeenSet = false;

    VpcEndpoint m_vpcEndpoint;
    bool m_vpcEndpointHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
