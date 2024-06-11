/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift/Redshift_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/redshift/model/VpcEndpoint.h>
#include <aws/redshift/model/ResponseMetadata.h>
#include <aws/redshift/model/VpcSecurityGroupMembership.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
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
  class EndpointAccess
  {
  public:
    AWS_REDSHIFT_API EndpointAccess();
    AWS_REDSHIFT_API EndpointAccess(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_REDSHIFT_API EndpointAccess& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_REDSHIFT_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_REDSHIFT_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The cluster identifier of the cluster associated with the endpoint.</p>
     */
    inline const Aws::String& GetClusterIdentifier() const{ return m_clusterIdentifier; }
    inline bool ClusterIdentifierHasBeenSet() const { return m_clusterIdentifierHasBeenSet; }
    inline void SetClusterIdentifier(const Aws::String& value) { m_clusterIdentifierHasBeenSet = true; m_clusterIdentifier = value; }
    inline void SetClusterIdentifier(Aws::String&& value) { m_clusterIdentifierHasBeenSet = true; m_clusterIdentifier = std::move(value); }
    inline void SetClusterIdentifier(const char* value) { m_clusterIdentifierHasBeenSet = true; m_clusterIdentifier.assign(value); }
    inline EndpointAccess& WithClusterIdentifier(const Aws::String& value) { SetClusterIdentifier(value); return *this;}
    inline EndpointAccess& WithClusterIdentifier(Aws::String&& value) { SetClusterIdentifier(std::move(value)); return *this;}
    inline EndpointAccess& WithClusterIdentifier(const char* value) { SetClusterIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services account ID of the owner of the cluster.</p>
     */
    inline const Aws::String& GetResourceOwner() const{ return m_resourceOwner; }
    inline bool ResourceOwnerHasBeenSet() const { return m_resourceOwnerHasBeenSet; }
    inline void SetResourceOwner(const Aws::String& value) { m_resourceOwnerHasBeenSet = true; m_resourceOwner = value; }
    inline void SetResourceOwner(Aws::String&& value) { m_resourceOwnerHasBeenSet = true; m_resourceOwner = std::move(value); }
    inline void SetResourceOwner(const char* value) { m_resourceOwnerHasBeenSet = true; m_resourceOwner.assign(value); }
    inline EndpointAccess& WithResourceOwner(const Aws::String& value) { SetResourceOwner(value); return *this;}
    inline EndpointAccess& WithResourceOwner(Aws::String&& value) { SetResourceOwner(std::move(value)); return *this;}
    inline EndpointAccess& WithResourceOwner(const char* value) { SetResourceOwner(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The subnet group name where Amazon Redshift chooses to deploy the
     * endpoint.</p>
     */
    inline const Aws::String& GetSubnetGroupName() const{ return m_subnetGroupName; }
    inline bool SubnetGroupNameHasBeenSet() const { return m_subnetGroupNameHasBeenSet; }
    inline void SetSubnetGroupName(const Aws::String& value) { m_subnetGroupNameHasBeenSet = true; m_subnetGroupName = value; }
    inline void SetSubnetGroupName(Aws::String&& value) { m_subnetGroupNameHasBeenSet = true; m_subnetGroupName = std::move(value); }
    inline void SetSubnetGroupName(const char* value) { m_subnetGroupNameHasBeenSet = true; m_subnetGroupName.assign(value); }
    inline EndpointAccess& WithSubnetGroupName(const Aws::String& value) { SetSubnetGroupName(value); return *this;}
    inline EndpointAccess& WithSubnetGroupName(Aws::String&& value) { SetSubnetGroupName(std::move(value)); return *this;}
    inline EndpointAccess& WithSubnetGroupName(const char* value) { SetSubnetGroupName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the endpoint.</p>
     */
    inline const Aws::String& GetEndpointStatus() const{ return m_endpointStatus; }
    inline bool EndpointStatusHasBeenSet() const { return m_endpointStatusHasBeenSet; }
    inline void SetEndpointStatus(const Aws::String& value) { m_endpointStatusHasBeenSet = true; m_endpointStatus = value; }
    inline void SetEndpointStatus(Aws::String&& value) { m_endpointStatusHasBeenSet = true; m_endpointStatus = std::move(value); }
    inline void SetEndpointStatus(const char* value) { m_endpointStatusHasBeenSet = true; m_endpointStatus.assign(value); }
    inline EndpointAccess& WithEndpointStatus(const Aws::String& value) { SetEndpointStatus(value); return *this;}
    inline EndpointAccess& WithEndpointStatus(Aws::String&& value) { SetEndpointStatus(std::move(value)); return *this;}
    inline EndpointAccess& WithEndpointStatus(const char* value) { SetEndpointStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the endpoint.</p>
     */
    inline const Aws::String& GetEndpointName() const{ return m_endpointName; }
    inline bool EndpointNameHasBeenSet() const { return m_endpointNameHasBeenSet; }
    inline void SetEndpointName(const Aws::String& value) { m_endpointNameHasBeenSet = true; m_endpointName = value; }
    inline void SetEndpointName(Aws::String&& value) { m_endpointNameHasBeenSet = true; m_endpointName = std::move(value); }
    inline void SetEndpointName(const char* value) { m_endpointNameHasBeenSet = true; m_endpointName.assign(value); }
    inline EndpointAccess& WithEndpointName(const Aws::String& value) { SetEndpointName(value); return *this;}
    inline EndpointAccess& WithEndpointName(Aws::String&& value) { SetEndpointName(std::move(value)); return *this;}
    inline EndpointAccess& WithEndpointName(const char* value) { SetEndpointName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time (UTC) that the endpoint was created.</p>
     */
    inline const Aws::Utils::DateTime& GetEndpointCreateTime() const{ return m_endpointCreateTime; }
    inline bool EndpointCreateTimeHasBeenSet() const { return m_endpointCreateTimeHasBeenSet; }
    inline void SetEndpointCreateTime(const Aws::Utils::DateTime& value) { m_endpointCreateTimeHasBeenSet = true; m_endpointCreateTime = value; }
    inline void SetEndpointCreateTime(Aws::Utils::DateTime&& value) { m_endpointCreateTimeHasBeenSet = true; m_endpointCreateTime = std::move(value); }
    inline EndpointAccess& WithEndpointCreateTime(const Aws::Utils::DateTime& value) { SetEndpointCreateTime(value); return *this;}
    inline EndpointAccess& WithEndpointCreateTime(Aws::Utils::DateTime&& value) { SetEndpointCreateTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The port number on which the cluster accepts incoming connections.</p>
     */
    inline int GetPort() const{ return m_port; }
    inline bool PortHasBeenSet() const { return m_portHasBeenSet; }
    inline void SetPort(int value) { m_portHasBeenSet = true; m_port = value; }
    inline EndpointAccess& WithPort(int value) { SetPort(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The DNS address of the endpoint.</p>
     */
    inline const Aws::String& GetAddress() const{ return m_address; }
    inline bool AddressHasBeenSet() const { return m_addressHasBeenSet; }
    inline void SetAddress(const Aws::String& value) { m_addressHasBeenSet = true; m_address = value; }
    inline void SetAddress(Aws::String&& value) { m_addressHasBeenSet = true; m_address = std::move(value); }
    inline void SetAddress(const char* value) { m_addressHasBeenSet = true; m_address.assign(value); }
    inline EndpointAccess& WithAddress(const Aws::String& value) { SetAddress(value); return *this;}
    inline EndpointAccess& WithAddress(Aws::String&& value) { SetAddress(std::move(value)); return *this;}
    inline EndpointAccess& WithAddress(const char* value) { SetAddress(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The security groups associated with the endpoint.</p>
     */
    inline const Aws::Vector<VpcSecurityGroupMembership>& GetVpcSecurityGroups() const{ return m_vpcSecurityGroups; }
    inline bool VpcSecurityGroupsHasBeenSet() const { return m_vpcSecurityGroupsHasBeenSet; }
    inline void SetVpcSecurityGroups(const Aws::Vector<VpcSecurityGroupMembership>& value) { m_vpcSecurityGroupsHasBeenSet = true; m_vpcSecurityGroups = value; }
    inline void SetVpcSecurityGroups(Aws::Vector<VpcSecurityGroupMembership>&& value) { m_vpcSecurityGroupsHasBeenSet = true; m_vpcSecurityGroups = std::move(value); }
    inline EndpointAccess& WithVpcSecurityGroups(const Aws::Vector<VpcSecurityGroupMembership>& value) { SetVpcSecurityGroups(value); return *this;}
    inline EndpointAccess& WithVpcSecurityGroups(Aws::Vector<VpcSecurityGroupMembership>&& value) { SetVpcSecurityGroups(std::move(value)); return *this;}
    inline EndpointAccess& AddVpcSecurityGroups(const VpcSecurityGroupMembership& value) { m_vpcSecurityGroupsHasBeenSet = true; m_vpcSecurityGroups.push_back(value); return *this; }
    inline EndpointAccess& AddVpcSecurityGroups(VpcSecurityGroupMembership&& value) { m_vpcSecurityGroupsHasBeenSet = true; m_vpcSecurityGroups.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const VpcEndpoint& GetVpcEndpoint() const{ return m_vpcEndpoint; }
    inline bool VpcEndpointHasBeenSet() const { return m_vpcEndpointHasBeenSet; }
    inline void SetVpcEndpoint(const VpcEndpoint& value) { m_vpcEndpointHasBeenSet = true; m_vpcEndpoint = value; }
    inline void SetVpcEndpoint(VpcEndpoint&& value) { m_vpcEndpointHasBeenSet = true; m_vpcEndpoint = std::move(value); }
    inline EndpointAccess& WithVpcEndpoint(const VpcEndpoint& value) { SetVpcEndpoint(value); return *this;}
    inline EndpointAccess& WithVpcEndpoint(VpcEndpoint&& value) { SetVpcEndpoint(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }
    inline EndpointAccess& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}
    inline EndpointAccess& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}
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

    Aws::Utils::DateTime m_endpointCreateTime;
    bool m_endpointCreateTimeHasBeenSet = false;

    int m_port;
    bool m_portHasBeenSet = false;

    Aws::String m_address;
    bool m_addressHasBeenSet = false;

    Aws::Vector<VpcSecurityGroupMembership> m_vpcSecurityGroups;
    bool m_vpcSecurityGroupsHasBeenSet = false;

    VpcEndpoint m_vpcEndpoint;
    bool m_vpcEndpointHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
