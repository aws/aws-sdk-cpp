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
  class DeleteEndpointAccessResult
  {
  public:
    AWS_REDSHIFT_API DeleteEndpointAccessResult();
    AWS_REDSHIFT_API DeleteEndpointAccessResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_REDSHIFT_API DeleteEndpointAccessResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>The cluster identifier of the cluster associated with the endpoint.</p>
     */
    inline const Aws::String& GetClusterIdentifier() const{ return m_clusterIdentifier; }

    /**
     * <p>The cluster identifier of the cluster associated with the endpoint.</p>
     */
    inline void SetClusterIdentifier(const Aws::String& value) { m_clusterIdentifier = value; }

    /**
     * <p>The cluster identifier of the cluster associated with the endpoint.</p>
     */
    inline void SetClusterIdentifier(Aws::String&& value) { m_clusterIdentifier = std::move(value); }

    /**
     * <p>The cluster identifier of the cluster associated with the endpoint.</p>
     */
    inline void SetClusterIdentifier(const char* value) { m_clusterIdentifier.assign(value); }

    /**
     * <p>The cluster identifier of the cluster associated with the endpoint.</p>
     */
    inline DeleteEndpointAccessResult& WithClusterIdentifier(const Aws::String& value) { SetClusterIdentifier(value); return *this;}

    /**
     * <p>The cluster identifier of the cluster associated with the endpoint.</p>
     */
    inline DeleteEndpointAccessResult& WithClusterIdentifier(Aws::String&& value) { SetClusterIdentifier(std::move(value)); return *this;}

    /**
     * <p>The cluster identifier of the cluster associated with the endpoint.</p>
     */
    inline DeleteEndpointAccessResult& WithClusterIdentifier(const char* value) { SetClusterIdentifier(value); return *this;}


    /**
     * <p>The Amazon Web Services account ID of the owner of the cluster.</p>
     */
    inline const Aws::String& GetResourceOwner() const{ return m_resourceOwner; }

    /**
     * <p>The Amazon Web Services account ID of the owner of the cluster.</p>
     */
    inline void SetResourceOwner(const Aws::String& value) { m_resourceOwner = value; }

    /**
     * <p>The Amazon Web Services account ID of the owner of the cluster.</p>
     */
    inline void SetResourceOwner(Aws::String&& value) { m_resourceOwner = std::move(value); }

    /**
     * <p>The Amazon Web Services account ID of the owner of the cluster.</p>
     */
    inline void SetResourceOwner(const char* value) { m_resourceOwner.assign(value); }

    /**
     * <p>The Amazon Web Services account ID of the owner of the cluster.</p>
     */
    inline DeleteEndpointAccessResult& WithResourceOwner(const Aws::String& value) { SetResourceOwner(value); return *this;}

    /**
     * <p>The Amazon Web Services account ID of the owner of the cluster.</p>
     */
    inline DeleteEndpointAccessResult& WithResourceOwner(Aws::String&& value) { SetResourceOwner(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services account ID of the owner of the cluster.</p>
     */
    inline DeleteEndpointAccessResult& WithResourceOwner(const char* value) { SetResourceOwner(value); return *this;}


    /**
     * <p>The subnet group name where Amazon Redshift chooses to deploy the
     * endpoint.</p>
     */
    inline const Aws::String& GetSubnetGroupName() const{ return m_subnetGroupName; }

    /**
     * <p>The subnet group name where Amazon Redshift chooses to deploy the
     * endpoint.</p>
     */
    inline void SetSubnetGroupName(const Aws::String& value) { m_subnetGroupName = value; }

    /**
     * <p>The subnet group name where Amazon Redshift chooses to deploy the
     * endpoint.</p>
     */
    inline void SetSubnetGroupName(Aws::String&& value) { m_subnetGroupName = std::move(value); }

    /**
     * <p>The subnet group name where Amazon Redshift chooses to deploy the
     * endpoint.</p>
     */
    inline void SetSubnetGroupName(const char* value) { m_subnetGroupName.assign(value); }

    /**
     * <p>The subnet group name where Amazon Redshift chooses to deploy the
     * endpoint.</p>
     */
    inline DeleteEndpointAccessResult& WithSubnetGroupName(const Aws::String& value) { SetSubnetGroupName(value); return *this;}

    /**
     * <p>The subnet group name where Amazon Redshift chooses to deploy the
     * endpoint.</p>
     */
    inline DeleteEndpointAccessResult& WithSubnetGroupName(Aws::String&& value) { SetSubnetGroupName(std::move(value)); return *this;}

    /**
     * <p>The subnet group name where Amazon Redshift chooses to deploy the
     * endpoint.</p>
     */
    inline DeleteEndpointAccessResult& WithSubnetGroupName(const char* value) { SetSubnetGroupName(value); return *this;}


    /**
     * <p>The status of the endpoint.</p>
     */
    inline const Aws::String& GetEndpointStatus() const{ return m_endpointStatus; }

    /**
     * <p>The status of the endpoint.</p>
     */
    inline void SetEndpointStatus(const Aws::String& value) { m_endpointStatus = value; }

    /**
     * <p>The status of the endpoint.</p>
     */
    inline void SetEndpointStatus(Aws::String&& value) { m_endpointStatus = std::move(value); }

    /**
     * <p>The status of the endpoint.</p>
     */
    inline void SetEndpointStatus(const char* value) { m_endpointStatus.assign(value); }

    /**
     * <p>The status of the endpoint.</p>
     */
    inline DeleteEndpointAccessResult& WithEndpointStatus(const Aws::String& value) { SetEndpointStatus(value); return *this;}

    /**
     * <p>The status of the endpoint.</p>
     */
    inline DeleteEndpointAccessResult& WithEndpointStatus(Aws::String&& value) { SetEndpointStatus(std::move(value)); return *this;}

    /**
     * <p>The status of the endpoint.</p>
     */
    inline DeleteEndpointAccessResult& WithEndpointStatus(const char* value) { SetEndpointStatus(value); return *this;}


    /**
     * <p>The name of the endpoint.</p>
     */
    inline const Aws::String& GetEndpointName() const{ return m_endpointName; }

    /**
     * <p>The name of the endpoint.</p>
     */
    inline void SetEndpointName(const Aws::String& value) { m_endpointName = value; }

    /**
     * <p>The name of the endpoint.</p>
     */
    inline void SetEndpointName(Aws::String&& value) { m_endpointName = std::move(value); }

    /**
     * <p>The name of the endpoint.</p>
     */
    inline void SetEndpointName(const char* value) { m_endpointName.assign(value); }

    /**
     * <p>The name of the endpoint.</p>
     */
    inline DeleteEndpointAccessResult& WithEndpointName(const Aws::String& value) { SetEndpointName(value); return *this;}

    /**
     * <p>The name of the endpoint.</p>
     */
    inline DeleteEndpointAccessResult& WithEndpointName(Aws::String&& value) { SetEndpointName(std::move(value)); return *this;}

    /**
     * <p>The name of the endpoint.</p>
     */
    inline DeleteEndpointAccessResult& WithEndpointName(const char* value) { SetEndpointName(value); return *this;}


    /**
     * <p>The time (UTC) that the endpoint was created.</p>
     */
    inline const Aws::Utils::DateTime& GetEndpointCreateTime() const{ return m_endpointCreateTime; }

    /**
     * <p>The time (UTC) that the endpoint was created.</p>
     */
    inline void SetEndpointCreateTime(const Aws::Utils::DateTime& value) { m_endpointCreateTime = value; }

    /**
     * <p>The time (UTC) that the endpoint was created.</p>
     */
    inline void SetEndpointCreateTime(Aws::Utils::DateTime&& value) { m_endpointCreateTime = std::move(value); }

    /**
     * <p>The time (UTC) that the endpoint was created.</p>
     */
    inline DeleteEndpointAccessResult& WithEndpointCreateTime(const Aws::Utils::DateTime& value) { SetEndpointCreateTime(value); return *this;}

    /**
     * <p>The time (UTC) that the endpoint was created.</p>
     */
    inline DeleteEndpointAccessResult& WithEndpointCreateTime(Aws::Utils::DateTime&& value) { SetEndpointCreateTime(std::move(value)); return *this;}


    /**
     * <p>The port number on which the cluster accepts incoming connections.</p>
     */
    inline int GetPort() const{ return m_port; }

    /**
     * <p>The port number on which the cluster accepts incoming connections.</p>
     */
    inline void SetPort(int value) { m_port = value; }

    /**
     * <p>The port number on which the cluster accepts incoming connections.</p>
     */
    inline DeleteEndpointAccessResult& WithPort(int value) { SetPort(value); return *this;}


    /**
     * <p>The DNS address of the endpoint.</p>
     */
    inline const Aws::String& GetAddress() const{ return m_address; }

    /**
     * <p>The DNS address of the endpoint.</p>
     */
    inline void SetAddress(const Aws::String& value) { m_address = value; }

    /**
     * <p>The DNS address of the endpoint.</p>
     */
    inline void SetAddress(Aws::String&& value) { m_address = std::move(value); }

    /**
     * <p>The DNS address of the endpoint.</p>
     */
    inline void SetAddress(const char* value) { m_address.assign(value); }

    /**
     * <p>The DNS address of the endpoint.</p>
     */
    inline DeleteEndpointAccessResult& WithAddress(const Aws::String& value) { SetAddress(value); return *this;}

    /**
     * <p>The DNS address of the endpoint.</p>
     */
    inline DeleteEndpointAccessResult& WithAddress(Aws::String&& value) { SetAddress(std::move(value)); return *this;}

    /**
     * <p>The DNS address of the endpoint.</p>
     */
    inline DeleteEndpointAccessResult& WithAddress(const char* value) { SetAddress(value); return *this;}


    /**
     * <p>The security groups associated with the endpoint.</p>
     */
    inline const Aws::Vector<VpcSecurityGroupMembership>& GetVpcSecurityGroups() const{ return m_vpcSecurityGroups; }

    /**
     * <p>The security groups associated with the endpoint.</p>
     */
    inline void SetVpcSecurityGroups(const Aws::Vector<VpcSecurityGroupMembership>& value) { m_vpcSecurityGroups = value; }

    /**
     * <p>The security groups associated with the endpoint.</p>
     */
    inline void SetVpcSecurityGroups(Aws::Vector<VpcSecurityGroupMembership>&& value) { m_vpcSecurityGroups = std::move(value); }

    /**
     * <p>The security groups associated with the endpoint.</p>
     */
    inline DeleteEndpointAccessResult& WithVpcSecurityGroups(const Aws::Vector<VpcSecurityGroupMembership>& value) { SetVpcSecurityGroups(value); return *this;}

    /**
     * <p>The security groups associated with the endpoint.</p>
     */
    inline DeleteEndpointAccessResult& WithVpcSecurityGroups(Aws::Vector<VpcSecurityGroupMembership>&& value) { SetVpcSecurityGroups(std::move(value)); return *this;}

    /**
     * <p>The security groups associated with the endpoint.</p>
     */
    inline DeleteEndpointAccessResult& AddVpcSecurityGroups(const VpcSecurityGroupMembership& value) { m_vpcSecurityGroups.push_back(value); return *this; }

    /**
     * <p>The security groups associated with the endpoint.</p>
     */
    inline DeleteEndpointAccessResult& AddVpcSecurityGroups(VpcSecurityGroupMembership&& value) { m_vpcSecurityGroups.push_back(std::move(value)); return *this; }


    
    inline const VpcEndpoint& GetVpcEndpoint() const{ return m_vpcEndpoint; }

    
    inline void SetVpcEndpoint(const VpcEndpoint& value) { m_vpcEndpoint = value; }

    
    inline void SetVpcEndpoint(VpcEndpoint&& value) { m_vpcEndpoint = std::move(value); }

    
    inline DeleteEndpointAccessResult& WithVpcEndpoint(const VpcEndpoint& value) { SetVpcEndpoint(value); return *this;}

    
    inline DeleteEndpointAccessResult& WithVpcEndpoint(VpcEndpoint&& value) { SetVpcEndpoint(std::move(value)); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline DeleteEndpointAccessResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DeleteEndpointAccessResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::String m_clusterIdentifier;

    Aws::String m_resourceOwner;

    Aws::String m_subnetGroupName;

    Aws::String m_endpointStatus;

    Aws::String m_endpointName;

    Aws::Utils::DateTime m_endpointCreateTime;

    int m_port;

    Aws::String m_address;

    Aws::Vector<VpcSecurityGroupMembership> m_vpcSecurityGroups;

    VpcEndpoint m_vpcEndpoint;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
