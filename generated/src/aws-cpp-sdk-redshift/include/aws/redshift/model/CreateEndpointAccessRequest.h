/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift/Redshift_EXPORTS.h>
#include <aws/redshift/RedshiftRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace Redshift
{
namespace Model
{

  /**
   */
  class CreateEndpointAccessRequest : public RedshiftRequest
  {
  public:
    AWS_REDSHIFT_API CreateEndpointAccessRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateEndpointAccess"; }

    AWS_REDSHIFT_API Aws::String SerializePayload() const override;

  protected:
    AWS_REDSHIFT_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The cluster identifier of the cluster to access.</p>
     */
    inline const Aws::String& GetClusterIdentifier() const{ return m_clusterIdentifier; }

    /**
     * <p>The cluster identifier of the cluster to access.</p>
     */
    inline bool ClusterIdentifierHasBeenSet() const { return m_clusterIdentifierHasBeenSet; }

    /**
     * <p>The cluster identifier of the cluster to access.</p>
     */
    inline void SetClusterIdentifier(const Aws::String& value) { m_clusterIdentifierHasBeenSet = true; m_clusterIdentifier = value; }

    /**
     * <p>The cluster identifier of the cluster to access.</p>
     */
    inline void SetClusterIdentifier(Aws::String&& value) { m_clusterIdentifierHasBeenSet = true; m_clusterIdentifier = std::move(value); }

    /**
     * <p>The cluster identifier of the cluster to access.</p>
     */
    inline void SetClusterIdentifier(const char* value) { m_clusterIdentifierHasBeenSet = true; m_clusterIdentifier.assign(value); }

    /**
     * <p>The cluster identifier of the cluster to access.</p>
     */
    inline CreateEndpointAccessRequest& WithClusterIdentifier(const Aws::String& value) { SetClusterIdentifier(value); return *this;}

    /**
     * <p>The cluster identifier of the cluster to access.</p>
     */
    inline CreateEndpointAccessRequest& WithClusterIdentifier(Aws::String&& value) { SetClusterIdentifier(std::move(value)); return *this;}

    /**
     * <p>The cluster identifier of the cluster to access.</p>
     */
    inline CreateEndpointAccessRequest& WithClusterIdentifier(const char* value) { SetClusterIdentifier(value); return *this;}


    /**
     * <p>The Amazon Web Services account ID of the owner of the cluster. This is only
     * required if the cluster is in another Amazon Web Services account.</p>
     */
    inline const Aws::String& GetResourceOwner() const{ return m_resourceOwner; }

    /**
     * <p>The Amazon Web Services account ID of the owner of the cluster. This is only
     * required if the cluster is in another Amazon Web Services account.</p>
     */
    inline bool ResourceOwnerHasBeenSet() const { return m_resourceOwnerHasBeenSet; }

    /**
     * <p>The Amazon Web Services account ID of the owner of the cluster. This is only
     * required if the cluster is in another Amazon Web Services account.</p>
     */
    inline void SetResourceOwner(const Aws::String& value) { m_resourceOwnerHasBeenSet = true; m_resourceOwner = value; }

    /**
     * <p>The Amazon Web Services account ID of the owner of the cluster. This is only
     * required if the cluster is in another Amazon Web Services account.</p>
     */
    inline void SetResourceOwner(Aws::String&& value) { m_resourceOwnerHasBeenSet = true; m_resourceOwner = std::move(value); }

    /**
     * <p>The Amazon Web Services account ID of the owner of the cluster. This is only
     * required if the cluster is in another Amazon Web Services account.</p>
     */
    inline void SetResourceOwner(const char* value) { m_resourceOwnerHasBeenSet = true; m_resourceOwner.assign(value); }

    /**
     * <p>The Amazon Web Services account ID of the owner of the cluster. This is only
     * required if the cluster is in another Amazon Web Services account.</p>
     */
    inline CreateEndpointAccessRequest& WithResourceOwner(const Aws::String& value) { SetResourceOwner(value); return *this;}

    /**
     * <p>The Amazon Web Services account ID of the owner of the cluster. This is only
     * required if the cluster is in another Amazon Web Services account.</p>
     */
    inline CreateEndpointAccessRequest& WithResourceOwner(Aws::String&& value) { SetResourceOwner(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services account ID of the owner of the cluster. This is only
     * required if the cluster is in another Amazon Web Services account.</p>
     */
    inline CreateEndpointAccessRequest& WithResourceOwner(const char* value) { SetResourceOwner(value); return *this;}


    /**
     * <p>The Redshift-managed VPC endpoint name.</p> <p>An endpoint name must contain
     * 1-30 characters. Valid characters are A-Z, a-z, 0-9, and hyphen(-). The first
     * character must be a letter. The name can't contain two consecutive hyphens or
     * end with a hyphen.</p>
     */
    inline const Aws::String& GetEndpointName() const{ return m_endpointName; }

    /**
     * <p>The Redshift-managed VPC endpoint name.</p> <p>An endpoint name must contain
     * 1-30 characters. Valid characters are A-Z, a-z, 0-9, and hyphen(-). The first
     * character must be a letter. The name can't contain two consecutive hyphens or
     * end with a hyphen.</p>
     */
    inline bool EndpointNameHasBeenSet() const { return m_endpointNameHasBeenSet; }

    /**
     * <p>The Redshift-managed VPC endpoint name.</p> <p>An endpoint name must contain
     * 1-30 characters. Valid characters are A-Z, a-z, 0-9, and hyphen(-). The first
     * character must be a letter. The name can't contain two consecutive hyphens or
     * end with a hyphen.</p>
     */
    inline void SetEndpointName(const Aws::String& value) { m_endpointNameHasBeenSet = true; m_endpointName = value; }

    /**
     * <p>The Redshift-managed VPC endpoint name.</p> <p>An endpoint name must contain
     * 1-30 characters. Valid characters are A-Z, a-z, 0-9, and hyphen(-). The first
     * character must be a letter. The name can't contain two consecutive hyphens or
     * end with a hyphen.</p>
     */
    inline void SetEndpointName(Aws::String&& value) { m_endpointNameHasBeenSet = true; m_endpointName = std::move(value); }

    /**
     * <p>The Redshift-managed VPC endpoint name.</p> <p>An endpoint name must contain
     * 1-30 characters. Valid characters are A-Z, a-z, 0-9, and hyphen(-). The first
     * character must be a letter. The name can't contain two consecutive hyphens or
     * end with a hyphen.</p>
     */
    inline void SetEndpointName(const char* value) { m_endpointNameHasBeenSet = true; m_endpointName.assign(value); }

    /**
     * <p>The Redshift-managed VPC endpoint name.</p> <p>An endpoint name must contain
     * 1-30 characters. Valid characters are A-Z, a-z, 0-9, and hyphen(-). The first
     * character must be a letter. The name can't contain two consecutive hyphens or
     * end with a hyphen.</p>
     */
    inline CreateEndpointAccessRequest& WithEndpointName(const Aws::String& value) { SetEndpointName(value); return *this;}

    /**
     * <p>The Redshift-managed VPC endpoint name.</p> <p>An endpoint name must contain
     * 1-30 characters. Valid characters are A-Z, a-z, 0-9, and hyphen(-). The first
     * character must be a letter. The name can't contain two consecutive hyphens or
     * end with a hyphen.</p>
     */
    inline CreateEndpointAccessRequest& WithEndpointName(Aws::String&& value) { SetEndpointName(std::move(value)); return *this;}

    /**
     * <p>The Redshift-managed VPC endpoint name.</p> <p>An endpoint name must contain
     * 1-30 characters. Valid characters are A-Z, a-z, 0-9, and hyphen(-). The first
     * character must be a letter. The name can't contain two consecutive hyphens or
     * end with a hyphen.</p>
     */
    inline CreateEndpointAccessRequest& WithEndpointName(const char* value) { SetEndpointName(value); return *this;}


    /**
     * <p>The subnet group from which Amazon Redshift chooses the subnet to deploy the
     * endpoint.</p>
     */
    inline const Aws::String& GetSubnetGroupName() const{ return m_subnetGroupName; }

    /**
     * <p>The subnet group from which Amazon Redshift chooses the subnet to deploy the
     * endpoint.</p>
     */
    inline bool SubnetGroupNameHasBeenSet() const { return m_subnetGroupNameHasBeenSet; }

    /**
     * <p>The subnet group from which Amazon Redshift chooses the subnet to deploy the
     * endpoint.</p>
     */
    inline void SetSubnetGroupName(const Aws::String& value) { m_subnetGroupNameHasBeenSet = true; m_subnetGroupName = value; }

    /**
     * <p>The subnet group from which Amazon Redshift chooses the subnet to deploy the
     * endpoint.</p>
     */
    inline void SetSubnetGroupName(Aws::String&& value) { m_subnetGroupNameHasBeenSet = true; m_subnetGroupName = std::move(value); }

    /**
     * <p>The subnet group from which Amazon Redshift chooses the subnet to deploy the
     * endpoint.</p>
     */
    inline void SetSubnetGroupName(const char* value) { m_subnetGroupNameHasBeenSet = true; m_subnetGroupName.assign(value); }

    /**
     * <p>The subnet group from which Amazon Redshift chooses the subnet to deploy the
     * endpoint.</p>
     */
    inline CreateEndpointAccessRequest& WithSubnetGroupName(const Aws::String& value) { SetSubnetGroupName(value); return *this;}

    /**
     * <p>The subnet group from which Amazon Redshift chooses the subnet to deploy the
     * endpoint.</p>
     */
    inline CreateEndpointAccessRequest& WithSubnetGroupName(Aws::String&& value) { SetSubnetGroupName(std::move(value)); return *this;}

    /**
     * <p>The subnet group from which Amazon Redshift chooses the subnet to deploy the
     * endpoint.</p>
     */
    inline CreateEndpointAccessRequest& WithSubnetGroupName(const char* value) { SetSubnetGroupName(value); return *this;}


    /**
     * <p>The security group that defines the ports, protocols, and sources for inbound
     * traffic that you are authorizing into your endpoint.</p>
     */
    inline const Aws::Vector<Aws::String>& GetVpcSecurityGroupIds() const{ return m_vpcSecurityGroupIds; }

    /**
     * <p>The security group that defines the ports, protocols, and sources for inbound
     * traffic that you are authorizing into your endpoint.</p>
     */
    inline bool VpcSecurityGroupIdsHasBeenSet() const { return m_vpcSecurityGroupIdsHasBeenSet; }

    /**
     * <p>The security group that defines the ports, protocols, and sources for inbound
     * traffic that you are authorizing into your endpoint.</p>
     */
    inline void SetVpcSecurityGroupIds(const Aws::Vector<Aws::String>& value) { m_vpcSecurityGroupIdsHasBeenSet = true; m_vpcSecurityGroupIds = value; }

    /**
     * <p>The security group that defines the ports, protocols, and sources for inbound
     * traffic that you are authorizing into your endpoint.</p>
     */
    inline void SetVpcSecurityGroupIds(Aws::Vector<Aws::String>&& value) { m_vpcSecurityGroupIdsHasBeenSet = true; m_vpcSecurityGroupIds = std::move(value); }

    /**
     * <p>The security group that defines the ports, protocols, and sources for inbound
     * traffic that you are authorizing into your endpoint.</p>
     */
    inline CreateEndpointAccessRequest& WithVpcSecurityGroupIds(const Aws::Vector<Aws::String>& value) { SetVpcSecurityGroupIds(value); return *this;}

    /**
     * <p>The security group that defines the ports, protocols, and sources for inbound
     * traffic that you are authorizing into your endpoint.</p>
     */
    inline CreateEndpointAccessRequest& WithVpcSecurityGroupIds(Aws::Vector<Aws::String>&& value) { SetVpcSecurityGroupIds(std::move(value)); return *this;}

    /**
     * <p>The security group that defines the ports, protocols, and sources for inbound
     * traffic that you are authorizing into your endpoint.</p>
     */
    inline CreateEndpointAccessRequest& AddVpcSecurityGroupIds(const Aws::String& value) { m_vpcSecurityGroupIdsHasBeenSet = true; m_vpcSecurityGroupIds.push_back(value); return *this; }

    /**
     * <p>The security group that defines the ports, protocols, and sources for inbound
     * traffic that you are authorizing into your endpoint.</p>
     */
    inline CreateEndpointAccessRequest& AddVpcSecurityGroupIds(Aws::String&& value) { m_vpcSecurityGroupIdsHasBeenSet = true; m_vpcSecurityGroupIds.push_back(std::move(value)); return *this; }

    /**
     * <p>The security group that defines the ports, protocols, and sources for inbound
     * traffic that you are authorizing into your endpoint.</p>
     */
    inline CreateEndpointAccessRequest& AddVpcSecurityGroupIds(const char* value) { m_vpcSecurityGroupIdsHasBeenSet = true; m_vpcSecurityGroupIds.push_back(value); return *this; }

  private:

    Aws::String m_clusterIdentifier;
    bool m_clusterIdentifierHasBeenSet = false;

    Aws::String m_resourceOwner;
    bool m_resourceOwnerHasBeenSet = false;

    Aws::String m_endpointName;
    bool m_endpointNameHasBeenSet = false;

    Aws::String m_subnetGroupName;
    bool m_subnetGroupNameHasBeenSet = false;

    Aws::Vector<Aws::String> m_vpcSecurityGroupIds;
    bool m_vpcSecurityGroupIdsHasBeenSet = false;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
