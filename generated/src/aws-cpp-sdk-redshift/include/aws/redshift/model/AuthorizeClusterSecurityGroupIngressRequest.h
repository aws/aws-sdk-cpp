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
    AWS_REDSHIFT_API AuthorizeClusterSecurityGroupIngressRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AuthorizeClusterSecurityGroupIngress"; }

    AWS_REDSHIFT_API Aws::String SerializePayload() const override;

  protected:
    AWS_REDSHIFT_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The name of the security group to which the ingress rule is added.</p>
     */
    inline const Aws::String& GetClusterSecurityGroupName() const{ return m_clusterSecurityGroupName; }

    /**
     * <p>The name of the security group to which the ingress rule is added.</p>
     */
    inline bool ClusterSecurityGroupNameHasBeenSet() const { return m_clusterSecurityGroupNameHasBeenSet; }

    /**
     * <p>The name of the security group to which the ingress rule is added.</p>
     */
    inline void SetClusterSecurityGroupName(const Aws::String& value) { m_clusterSecurityGroupNameHasBeenSet = true; m_clusterSecurityGroupName = value; }

    /**
     * <p>The name of the security group to which the ingress rule is added.</p>
     */
    inline void SetClusterSecurityGroupName(Aws::String&& value) { m_clusterSecurityGroupNameHasBeenSet = true; m_clusterSecurityGroupName = std::move(value); }

    /**
     * <p>The name of the security group to which the ingress rule is added.</p>
     */
    inline void SetClusterSecurityGroupName(const char* value) { m_clusterSecurityGroupNameHasBeenSet = true; m_clusterSecurityGroupName.assign(value); }

    /**
     * <p>The name of the security group to which the ingress rule is added.</p>
     */
    inline AuthorizeClusterSecurityGroupIngressRequest& WithClusterSecurityGroupName(const Aws::String& value) { SetClusterSecurityGroupName(value); return *this;}

    /**
     * <p>The name of the security group to which the ingress rule is added.</p>
     */
    inline AuthorizeClusterSecurityGroupIngressRequest& WithClusterSecurityGroupName(Aws::String&& value) { SetClusterSecurityGroupName(std::move(value)); return *this;}

    /**
     * <p>The name of the security group to which the ingress rule is added.</p>
     */
    inline AuthorizeClusterSecurityGroupIngressRequest& WithClusterSecurityGroupName(const char* value) { SetClusterSecurityGroupName(value); return *this;}


    /**
     * <p>The IP range to be added the Amazon Redshift security group.</p>
     */
    inline const Aws::String& GetCIDRIP() const{ return m_cIDRIP; }

    /**
     * <p>The IP range to be added the Amazon Redshift security group.</p>
     */
    inline bool CIDRIPHasBeenSet() const { return m_cIDRIPHasBeenSet; }

    /**
     * <p>The IP range to be added the Amazon Redshift security group.</p>
     */
    inline void SetCIDRIP(const Aws::String& value) { m_cIDRIPHasBeenSet = true; m_cIDRIP = value; }

    /**
     * <p>The IP range to be added the Amazon Redshift security group.</p>
     */
    inline void SetCIDRIP(Aws::String&& value) { m_cIDRIPHasBeenSet = true; m_cIDRIP = std::move(value); }

    /**
     * <p>The IP range to be added the Amazon Redshift security group.</p>
     */
    inline void SetCIDRIP(const char* value) { m_cIDRIPHasBeenSet = true; m_cIDRIP.assign(value); }

    /**
     * <p>The IP range to be added the Amazon Redshift security group.</p>
     */
    inline AuthorizeClusterSecurityGroupIngressRequest& WithCIDRIP(const Aws::String& value) { SetCIDRIP(value); return *this;}

    /**
     * <p>The IP range to be added the Amazon Redshift security group.</p>
     */
    inline AuthorizeClusterSecurityGroupIngressRequest& WithCIDRIP(Aws::String&& value) { SetCIDRIP(std::move(value)); return *this;}

    /**
     * <p>The IP range to be added the Amazon Redshift security group.</p>
     */
    inline AuthorizeClusterSecurityGroupIngressRequest& WithCIDRIP(const char* value) { SetCIDRIP(value); return *this;}


    /**
     * <p>The EC2 security group to be added the Amazon Redshift security group.</p>
     */
    inline const Aws::String& GetEC2SecurityGroupName() const{ return m_eC2SecurityGroupName; }

    /**
     * <p>The EC2 security group to be added the Amazon Redshift security group.</p>
     */
    inline bool EC2SecurityGroupNameHasBeenSet() const { return m_eC2SecurityGroupNameHasBeenSet; }

    /**
     * <p>The EC2 security group to be added the Amazon Redshift security group.</p>
     */
    inline void SetEC2SecurityGroupName(const Aws::String& value) { m_eC2SecurityGroupNameHasBeenSet = true; m_eC2SecurityGroupName = value; }

    /**
     * <p>The EC2 security group to be added the Amazon Redshift security group.</p>
     */
    inline void SetEC2SecurityGroupName(Aws::String&& value) { m_eC2SecurityGroupNameHasBeenSet = true; m_eC2SecurityGroupName = std::move(value); }

    /**
     * <p>The EC2 security group to be added the Amazon Redshift security group.</p>
     */
    inline void SetEC2SecurityGroupName(const char* value) { m_eC2SecurityGroupNameHasBeenSet = true; m_eC2SecurityGroupName.assign(value); }

    /**
     * <p>The EC2 security group to be added the Amazon Redshift security group.</p>
     */
    inline AuthorizeClusterSecurityGroupIngressRequest& WithEC2SecurityGroupName(const Aws::String& value) { SetEC2SecurityGroupName(value); return *this;}

    /**
     * <p>The EC2 security group to be added the Amazon Redshift security group.</p>
     */
    inline AuthorizeClusterSecurityGroupIngressRequest& WithEC2SecurityGroupName(Aws::String&& value) { SetEC2SecurityGroupName(std::move(value)); return *this;}

    /**
     * <p>The EC2 security group to be added the Amazon Redshift security group.</p>
     */
    inline AuthorizeClusterSecurityGroupIngressRequest& WithEC2SecurityGroupName(const char* value) { SetEC2SecurityGroupName(value); return *this;}


    /**
     * <p>The Amazon Web Services account number of the owner of the security group
     * specified by the <i>EC2SecurityGroupName</i> parameter. The Amazon Web Services
     * Access Key ID is not an acceptable value. </p> <p>Example:
     * <code>111122223333</code> </p>
     */
    inline const Aws::String& GetEC2SecurityGroupOwnerId() const{ return m_eC2SecurityGroupOwnerId; }

    /**
     * <p>The Amazon Web Services account number of the owner of the security group
     * specified by the <i>EC2SecurityGroupName</i> parameter. The Amazon Web Services
     * Access Key ID is not an acceptable value. </p> <p>Example:
     * <code>111122223333</code> </p>
     */
    inline bool EC2SecurityGroupOwnerIdHasBeenSet() const { return m_eC2SecurityGroupOwnerIdHasBeenSet; }

    /**
     * <p>The Amazon Web Services account number of the owner of the security group
     * specified by the <i>EC2SecurityGroupName</i> parameter. The Amazon Web Services
     * Access Key ID is not an acceptable value. </p> <p>Example:
     * <code>111122223333</code> </p>
     */
    inline void SetEC2SecurityGroupOwnerId(const Aws::String& value) { m_eC2SecurityGroupOwnerIdHasBeenSet = true; m_eC2SecurityGroupOwnerId = value; }

    /**
     * <p>The Amazon Web Services account number of the owner of the security group
     * specified by the <i>EC2SecurityGroupName</i> parameter. The Amazon Web Services
     * Access Key ID is not an acceptable value. </p> <p>Example:
     * <code>111122223333</code> </p>
     */
    inline void SetEC2SecurityGroupOwnerId(Aws::String&& value) { m_eC2SecurityGroupOwnerIdHasBeenSet = true; m_eC2SecurityGroupOwnerId = std::move(value); }

    /**
     * <p>The Amazon Web Services account number of the owner of the security group
     * specified by the <i>EC2SecurityGroupName</i> parameter. The Amazon Web Services
     * Access Key ID is not an acceptable value. </p> <p>Example:
     * <code>111122223333</code> </p>
     */
    inline void SetEC2SecurityGroupOwnerId(const char* value) { m_eC2SecurityGroupOwnerIdHasBeenSet = true; m_eC2SecurityGroupOwnerId.assign(value); }

    /**
     * <p>The Amazon Web Services account number of the owner of the security group
     * specified by the <i>EC2SecurityGroupName</i> parameter. The Amazon Web Services
     * Access Key ID is not an acceptable value. </p> <p>Example:
     * <code>111122223333</code> </p>
     */
    inline AuthorizeClusterSecurityGroupIngressRequest& WithEC2SecurityGroupOwnerId(const Aws::String& value) { SetEC2SecurityGroupOwnerId(value); return *this;}

    /**
     * <p>The Amazon Web Services account number of the owner of the security group
     * specified by the <i>EC2SecurityGroupName</i> parameter. The Amazon Web Services
     * Access Key ID is not an acceptable value. </p> <p>Example:
     * <code>111122223333</code> </p>
     */
    inline AuthorizeClusterSecurityGroupIngressRequest& WithEC2SecurityGroupOwnerId(Aws::String&& value) { SetEC2SecurityGroupOwnerId(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services account number of the owner of the security group
     * specified by the <i>EC2SecurityGroupName</i> parameter. The Amazon Web Services
     * Access Key ID is not an acceptable value. </p> <p>Example:
     * <code>111122223333</code> </p>
     */
    inline AuthorizeClusterSecurityGroupIngressRequest& WithEC2SecurityGroupOwnerId(const char* value) { SetEC2SecurityGroupOwnerId(value); return *this;}

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
