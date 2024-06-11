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
  class RevokeEndpointAccessRequest : public RedshiftRequest
  {
  public:
    AWS_REDSHIFT_API RevokeEndpointAccessRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "RevokeEndpointAccess"; }

    AWS_REDSHIFT_API Aws::String SerializePayload() const override;

  protected:
    AWS_REDSHIFT_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The cluster to revoke access from.</p>
     */
    inline const Aws::String& GetClusterIdentifier() const{ return m_clusterIdentifier; }
    inline bool ClusterIdentifierHasBeenSet() const { return m_clusterIdentifierHasBeenSet; }
    inline void SetClusterIdentifier(const Aws::String& value) { m_clusterIdentifierHasBeenSet = true; m_clusterIdentifier = value; }
    inline void SetClusterIdentifier(Aws::String&& value) { m_clusterIdentifierHasBeenSet = true; m_clusterIdentifier = std::move(value); }
    inline void SetClusterIdentifier(const char* value) { m_clusterIdentifierHasBeenSet = true; m_clusterIdentifier.assign(value); }
    inline RevokeEndpointAccessRequest& WithClusterIdentifier(const Aws::String& value) { SetClusterIdentifier(value); return *this;}
    inline RevokeEndpointAccessRequest& WithClusterIdentifier(Aws::String&& value) { SetClusterIdentifier(std::move(value)); return *this;}
    inline RevokeEndpointAccessRequest& WithClusterIdentifier(const char* value) { SetClusterIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services account ID whose access is to be revoked.</p>
     */
    inline const Aws::String& GetAccount() const{ return m_account; }
    inline bool AccountHasBeenSet() const { return m_accountHasBeenSet; }
    inline void SetAccount(const Aws::String& value) { m_accountHasBeenSet = true; m_account = value; }
    inline void SetAccount(Aws::String&& value) { m_accountHasBeenSet = true; m_account = std::move(value); }
    inline void SetAccount(const char* value) { m_accountHasBeenSet = true; m_account.assign(value); }
    inline RevokeEndpointAccessRequest& WithAccount(const Aws::String& value) { SetAccount(value); return *this;}
    inline RevokeEndpointAccessRequest& WithAccount(Aws::String&& value) { SetAccount(std::move(value)); return *this;}
    inline RevokeEndpointAccessRequest& WithAccount(const char* value) { SetAccount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The virtual private cloud (VPC) identifiers for which access is to be
     * revoked.</p>
     */
    inline const Aws::Vector<Aws::String>& GetVpcIds() const{ return m_vpcIds; }
    inline bool VpcIdsHasBeenSet() const { return m_vpcIdsHasBeenSet; }
    inline void SetVpcIds(const Aws::Vector<Aws::String>& value) { m_vpcIdsHasBeenSet = true; m_vpcIds = value; }
    inline void SetVpcIds(Aws::Vector<Aws::String>&& value) { m_vpcIdsHasBeenSet = true; m_vpcIds = std::move(value); }
    inline RevokeEndpointAccessRequest& WithVpcIds(const Aws::Vector<Aws::String>& value) { SetVpcIds(value); return *this;}
    inline RevokeEndpointAccessRequest& WithVpcIds(Aws::Vector<Aws::String>&& value) { SetVpcIds(std::move(value)); return *this;}
    inline RevokeEndpointAccessRequest& AddVpcIds(const Aws::String& value) { m_vpcIdsHasBeenSet = true; m_vpcIds.push_back(value); return *this; }
    inline RevokeEndpointAccessRequest& AddVpcIds(Aws::String&& value) { m_vpcIdsHasBeenSet = true; m_vpcIds.push_back(std::move(value)); return *this; }
    inline RevokeEndpointAccessRequest& AddVpcIds(const char* value) { m_vpcIdsHasBeenSet = true; m_vpcIds.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Indicates whether to force the revoke action. If true, the Redshift-managed
     * VPC endpoints associated with the endpoint authorization are also deleted.</p>
     */
    inline bool GetForce() const{ return m_force; }
    inline bool ForceHasBeenSet() const { return m_forceHasBeenSet; }
    inline void SetForce(bool value) { m_forceHasBeenSet = true; m_force = value; }
    inline RevokeEndpointAccessRequest& WithForce(bool value) { SetForce(value); return *this;}
    ///@}
  private:

    Aws::String m_clusterIdentifier;
    bool m_clusterIdentifierHasBeenSet = false;

    Aws::String m_account;
    bool m_accountHasBeenSet = false;

    Aws::Vector<Aws::String> m_vpcIds;
    bool m_vpcIdsHasBeenSet = false;

    bool m_force;
    bool m_forceHasBeenSet = false;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
