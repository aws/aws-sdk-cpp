/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift/Redshift_EXPORTS.h>
#include <aws/redshift/RedshiftRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Redshift
{
namespace Model
{

  /**
   * <p/><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-2012-12-01/AuthorizeClusterSecurityGroupIngressMessage">AWS
   * API Reference</a></p>
   */
  class AuthorizeClusterSecurityGroupIngressRequest : public RedshiftRequest
  {
  public:
    AWS_REDSHIFT_API AuthorizeClusterSecurityGroupIngressRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AuthorizeClusterSecurityGroupIngress"; }

    AWS_REDSHIFT_API Aws::String SerializePayload() const override;

  protected:
    AWS_REDSHIFT_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The name of the security group to which the ingress rule is added.</p>
     */
    inline const Aws::String& GetClusterSecurityGroupName() const { return m_clusterSecurityGroupName; }
    inline bool ClusterSecurityGroupNameHasBeenSet() const { return m_clusterSecurityGroupNameHasBeenSet; }
    template<typename ClusterSecurityGroupNameT = Aws::String>
    void SetClusterSecurityGroupName(ClusterSecurityGroupNameT&& value) { m_clusterSecurityGroupNameHasBeenSet = true; m_clusterSecurityGroupName = std::forward<ClusterSecurityGroupNameT>(value); }
    template<typename ClusterSecurityGroupNameT = Aws::String>
    AuthorizeClusterSecurityGroupIngressRequest& WithClusterSecurityGroupName(ClusterSecurityGroupNameT&& value) { SetClusterSecurityGroupName(std::forward<ClusterSecurityGroupNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IP range to be added the Amazon Redshift security group.</p>
     */
    inline const Aws::String& GetCIDRIP() const { return m_cIDRIP; }
    inline bool CIDRIPHasBeenSet() const { return m_cIDRIPHasBeenSet; }
    template<typename CIDRIPT = Aws::String>
    void SetCIDRIP(CIDRIPT&& value) { m_cIDRIPHasBeenSet = true; m_cIDRIP = std::forward<CIDRIPT>(value); }
    template<typename CIDRIPT = Aws::String>
    AuthorizeClusterSecurityGroupIngressRequest& WithCIDRIP(CIDRIPT&& value) { SetCIDRIP(std::forward<CIDRIPT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The EC2 security group to be added the Amazon Redshift security group.</p>
     */
    inline const Aws::String& GetEC2SecurityGroupName() const { return m_eC2SecurityGroupName; }
    inline bool EC2SecurityGroupNameHasBeenSet() const { return m_eC2SecurityGroupNameHasBeenSet; }
    template<typename EC2SecurityGroupNameT = Aws::String>
    void SetEC2SecurityGroupName(EC2SecurityGroupNameT&& value) { m_eC2SecurityGroupNameHasBeenSet = true; m_eC2SecurityGroupName = std::forward<EC2SecurityGroupNameT>(value); }
    template<typename EC2SecurityGroupNameT = Aws::String>
    AuthorizeClusterSecurityGroupIngressRequest& WithEC2SecurityGroupName(EC2SecurityGroupNameT&& value) { SetEC2SecurityGroupName(std::forward<EC2SecurityGroupNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services account number of the owner of the security group
     * specified by the <i>EC2SecurityGroupName</i> parameter. The Amazon Web Services
     * Access Key ID is not an acceptable value. </p> <p>Example:
     * <code>111122223333</code> </p>
     */
    inline const Aws::String& GetEC2SecurityGroupOwnerId() const { return m_eC2SecurityGroupOwnerId; }
    inline bool EC2SecurityGroupOwnerIdHasBeenSet() const { return m_eC2SecurityGroupOwnerIdHasBeenSet; }
    template<typename EC2SecurityGroupOwnerIdT = Aws::String>
    void SetEC2SecurityGroupOwnerId(EC2SecurityGroupOwnerIdT&& value) { m_eC2SecurityGroupOwnerIdHasBeenSet = true; m_eC2SecurityGroupOwnerId = std::forward<EC2SecurityGroupOwnerIdT>(value); }
    template<typename EC2SecurityGroupOwnerIdT = Aws::String>
    AuthorizeClusterSecurityGroupIngressRequest& WithEC2SecurityGroupOwnerId(EC2SecurityGroupOwnerIdT&& value) { SetEC2SecurityGroupOwnerId(std::forward<EC2SecurityGroupOwnerIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_clusterSecurityGroupName;
    bool m_clusterSecurityGroupNameHasBeenSet = false;

    Aws::String m_cIDRIP;
    bool m_cIDRIPHasBeenSet = false;

    Aws::String m_eC2SecurityGroupName;
    bool m_eC2SecurityGroupNameHasBeenSet = false;

    Aws::String m_eC2SecurityGroupOwnerId;
    bool m_eC2SecurityGroupOwnerIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
