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
  class AuthorizeEndpointAccessRequest : public RedshiftRequest
  {
  public:
    AWS_REDSHIFT_API AuthorizeEndpointAccessRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AuthorizeEndpointAccess"; }

    AWS_REDSHIFT_API Aws::String SerializePayload() const override;

  protected:
    AWS_REDSHIFT_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The cluster identifier of the cluster to grant access to.</p>
     */
    inline const Aws::String& GetClusterIdentifier() const{ return m_clusterIdentifier; }

    /**
     * <p>The cluster identifier of the cluster to grant access to.</p>
     */
    inline bool ClusterIdentifierHasBeenSet() const { return m_clusterIdentifierHasBeenSet; }

    /**
     * <p>The cluster identifier of the cluster to grant access to.</p>
     */
    inline void SetClusterIdentifier(const Aws::String& value) { m_clusterIdentifierHasBeenSet = true; m_clusterIdentifier = value; }

    /**
     * <p>The cluster identifier of the cluster to grant access to.</p>
     */
    inline void SetClusterIdentifier(Aws::String&& value) { m_clusterIdentifierHasBeenSet = true; m_clusterIdentifier = std::move(value); }

    /**
     * <p>The cluster identifier of the cluster to grant access to.</p>
     */
    inline void SetClusterIdentifier(const char* value) { m_clusterIdentifierHasBeenSet = true; m_clusterIdentifier.assign(value); }

    /**
     * <p>The cluster identifier of the cluster to grant access to.</p>
     */
    inline AuthorizeEndpointAccessRequest& WithClusterIdentifier(const Aws::String& value) { SetClusterIdentifier(value); return *this;}

    /**
     * <p>The cluster identifier of the cluster to grant access to.</p>
     */
    inline AuthorizeEndpointAccessRequest& WithClusterIdentifier(Aws::String&& value) { SetClusterIdentifier(std::move(value)); return *this;}

    /**
     * <p>The cluster identifier of the cluster to grant access to.</p>
     */
    inline AuthorizeEndpointAccessRequest& WithClusterIdentifier(const char* value) { SetClusterIdentifier(value); return *this;}


    /**
     * <p>The Amazon Web Services account ID to grant access to.</p>
     */
    inline const Aws::String& GetAccount() const{ return m_account; }

    /**
     * <p>The Amazon Web Services account ID to grant access to.</p>
     */
    inline bool AccountHasBeenSet() const { return m_accountHasBeenSet; }

    /**
     * <p>The Amazon Web Services account ID to grant access to.</p>
     */
    inline void SetAccount(const Aws::String& value) { m_accountHasBeenSet = true; m_account = value; }

    /**
     * <p>The Amazon Web Services account ID to grant access to.</p>
     */
    inline void SetAccount(Aws::String&& value) { m_accountHasBeenSet = true; m_account = std::move(value); }

    /**
     * <p>The Amazon Web Services account ID to grant access to.</p>
     */
    inline void SetAccount(const char* value) { m_accountHasBeenSet = true; m_account.assign(value); }

    /**
     * <p>The Amazon Web Services account ID to grant access to.</p>
     */
    inline AuthorizeEndpointAccessRequest& WithAccount(const Aws::String& value) { SetAccount(value); return *this;}

    /**
     * <p>The Amazon Web Services account ID to grant access to.</p>
     */
    inline AuthorizeEndpointAccessRequest& WithAccount(Aws::String&& value) { SetAccount(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services account ID to grant access to.</p>
     */
    inline AuthorizeEndpointAccessRequest& WithAccount(const char* value) { SetAccount(value); return *this;}


    /**
     * <p>The virtual private cloud (VPC) identifiers to grant access to.</p>
     */
    inline const Aws::Vector<Aws::String>& GetVpcIds() const{ return m_vpcIds; }

    /**
     * <p>The virtual private cloud (VPC) identifiers to grant access to.</p>
     */
    inline bool VpcIdsHasBeenSet() const { return m_vpcIdsHasBeenSet; }

    /**
     * <p>The virtual private cloud (VPC) identifiers to grant access to.</p>
     */
    inline void SetVpcIds(const Aws::Vector<Aws::String>& value) { m_vpcIdsHasBeenSet = true; m_vpcIds = value; }

    /**
     * <p>The virtual private cloud (VPC) identifiers to grant access to.</p>
     */
    inline void SetVpcIds(Aws::Vector<Aws::String>&& value) { m_vpcIdsHasBeenSet = true; m_vpcIds = std::move(value); }

    /**
     * <p>The virtual private cloud (VPC) identifiers to grant access to.</p>
     */
    inline AuthorizeEndpointAccessRequest& WithVpcIds(const Aws::Vector<Aws::String>& value) { SetVpcIds(value); return *this;}

    /**
     * <p>The virtual private cloud (VPC) identifiers to grant access to.</p>
     */
    inline AuthorizeEndpointAccessRequest& WithVpcIds(Aws::Vector<Aws::String>&& value) { SetVpcIds(std::move(value)); return *this;}

    /**
     * <p>The virtual private cloud (VPC) identifiers to grant access to.</p>
     */
    inline AuthorizeEndpointAccessRequest& AddVpcIds(const Aws::String& value) { m_vpcIdsHasBeenSet = true; m_vpcIds.push_back(value); return *this; }

    /**
     * <p>The virtual private cloud (VPC) identifiers to grant access to.</p>
     */
    inline AuthorizeEndpointAccessRequest& AddVpcIds(Aws::String&& value) { m_vpcIdsHasBeenSet = true; m_vpcIds.push_back(std::move(value)); return *this; }

    /**
     * <p>The virtual private cloud (VPC) identifiers to grant access to.</p>
     */
    inline AuthorizeEndpointAccessRequest& AddVpcIds(const char* value) { m_vpcIdsHasBeenSet = true; m_vpcIds.push_back(value); return *this; }

  private:

    Aws::String m_clusterIdentifier;
    bool m_clusterIdentifierHasBeenSet = false;

    Aws::String m_account;
    bool m_accountHasBeenSet = false;

    Aws::Vector<Aws::String> m_vpcIds;
    bool m_vpcIdsHasBeenSet = false;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
