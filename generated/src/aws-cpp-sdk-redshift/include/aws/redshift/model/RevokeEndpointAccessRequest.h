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
    AWS_REDSHIFT_API RevokeEndpointAccessRequest() = default;

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
    inline const Aws::String& GetClusterIdentifier() const { return m_clusterIdentifier; }
    inline bool ClusterIdentifierHasBeenSet() const { return m_clusterIdentifierHasBeenSet; }
    template<typename ClusterIdentifierT = Aws::String>
    void SetClusterIdentifier(ClusterIdentifierT&& value) { m_clusterIdentifierHasBeenSet = true; m_clusterIdentifier = std::forward<ClusterIdentifierT>(value); }
    template<typename ClusterIdentifierT = Aws::String>
    RevokeEndpointAccessRequest& WithClusterIdentifier(ClusterIdentifierT&& value) { SetClusterIdentifier(std::forward<ClusterIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services account ID whose access is to be revoked.</p>
     */
    inline const Aws::String& GetAccount() const { return m_account; }
    inline bool AccountHasBeenSet() const { return m_accountHasBeenSet; }
    template<typename AccountT = Aws::String>
    void SetAccount(AccountT&& value) { m_accountHasBeenSet = true; m_account = std::forward<AccountT>(value); }
    template<typename AccountT = Aws::String>
    RevokeEndpointAccessRequest& WithAccount(AccountT&& value) { SetAccount(std::forward<AccountT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The virtual private cloud (VPC) identifiers for which access is to be
     * revoked.</p>
     */
    inline const Aws::Vector<Aws::String>& GetVpcIds() const { return m_vpcIds; }
    inline bool VpcIdsHasBeenSet() const { return m_vpcIdsHasBeenSet; }
    template<typename VpcIdsT = Aws::Vector<Aws::String>>
    void SetVpcIds(VpcIdsT&& value) { m_vpcIdsHasBeenSet = true; m_vpcIds = std::forward<VpcIdsT>(value); }
    template<typename VpcIdsT = Aws::Vector<Aws::String>>
    RevokeEndpointAccessRequest& WithVpcIds(VpcIdsT&& value) { SetVpcIds(std::forward<VpcIdsT>(value)); return *this;}
    template<typename VpcIdsT = Aws::String>
    RevokeEndpointAccessRequest& AddVpcIds(VpcIdsT&& value) { m_vpcIdsHasBeenSet = true; m_vpcIds.emplace_back(std::forward<VpcIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Indicates whether to force the revoke action. If true, the Redshift-managed
     * VPC endpoints associated with the endpoint authorization are also deleted.</p>
     */
    inline bool GetForce() const { return m_force; }
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

    bool m_force{false};
    bool m_forceHasBeenSet = false;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
