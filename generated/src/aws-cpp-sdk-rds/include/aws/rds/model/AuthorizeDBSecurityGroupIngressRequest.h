/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/rds/RDSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace RDS
{
namespace Model
{

  /**
   * <p/><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/AuthorizeDBSecurityGroupIngressMessage">AWS
   * API Reference</a></p>
   */
  class AuthorizeDBSecurityGroupIngressRequest : public RDSRequest
  {
  public:
    AWS_RDS_API AuthorizeDBSecurityGroupIngressRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AuthorizeDBSecurityGroupIngress"; }

    AWS_RDS_API Aws::String SerializePayload() const override;

  protected:
    AWS_RDS_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The name of the DB security group to add authorization to.</p>
     */
    inline const Aws::String& GetDBSecurityGroupName() const { return m_dBSecurityGroupName; }
    inline bool DBSecurityGroupNameHasBeenSet() const { return m_dBSecurityGroupNameHasBeenSet; }
    template<typename DBSecurityGroupNameT = Aws::String>
    void SetDBSecurityGroupName(DBSecurityGroupNameT&& value) { m_dBSecurityGroupNameHasBeenSet = true; m_dBSecurityGroupName = std::forward<DBSecurityGroupNameT>(value); }
    template<typename DBSecurityGroupNameT = Aws::String>
    AuthorizeDBSecurityGroupIngressRequest& WithDBSecurityGroupName(DBSecurityGroupNameT&& value) { SetDBSecurityGroupName(std::forward<DBSecurityGroupNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IP range to authorize.</p>
     */
    inline const Aws::String& GetCIDRIP() const { return m_cIDRIP; }
    inline bool CIDRIPHasBeenSet() const { return m_cIDRIPHasBeenSet; }
    template<typename CIDRIPT = Aws::String>
    void SetCIDRIP(CIDRIPT&& value) { m_cIDRIPHasBeenSet = true; m_cIDRIP = std::forward<CIDRIPT>(value); }
    template<typename CIDRIPT = Aws::String>
    AuthorizeDBSecurityGroupIngressRequest& WithCIDRIP(CIDRIPT&& value) { SetCIDRIP(std::forward<CIDRIPT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Name of the EC2 security group to authorize. For VPC DB security groups,
     * <code>EC2SecurityGroupId</code> must be provided. Otherwise,
     * <code>EC2SecurityGroupOwnerId</code> and either
     * <code>EC2SecurityGroupName</code> or <code>EC2SecurityGroupId</code> must be
     * provided.</p>
     */
    inline const Aws::String& GetEC2SecurityGroupName() const { return m_eC2SecurityGroupName; }
    inline bool EC2SecurityGroupNameHasBeenSet() const { return m_eC2SecurityGroupNameHasBeenSet; }
    template<typename EC2SecurityGroupNameT = Aws::String>
    void SetEC2SecurityGroupName(EC2SecurityGroupNameT&& value) { m_eC2SecurityGroupNameHasBeenSet = true; m_eC2SecurityGroupName = std::forward<EC2SecurityGroupNameT>(value); }
    template<typename EC2SecurityGroupNameT = Aws::String>
    AuthorizeDBSecurityGroupIngressRequest& WithEC2SecurityGroupName(EC2SecurityGroupNameT&& value) { SetEC2SecurityGroupName(std::forward<EC2SecurityGroupNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Id of the EC2 security group to authorize. For VPC DB security groups,
     * <code>EC2SecurityGroupId</code> must be provided. Otherwise,
     * <code>EC2SecurityGroupOwnerId</code> and either
     * <code>EC2SecurityGroupName</code> or <code>EC2SecurityGroupId</code> must be
     * provided.</p>
     */
    inline const Aws::String& GetEC2SecurityGroupId() const { return m_eC2SecurityGroupId; }
    inline bool EC2SecurityGroupIdHasBeenSet() const { return m_eC2SecurityGroupIdHasBeenSet; }
    template<typename EC2SecurityGroupIdT = Aws::String>
    void SetEC2SecurityGroupId(EC2SecurityGroupIdT&& value) { m_eC2SecurityGroupIdHasBeenSet = true; m_eC2SecurityGroupId = std::forward<EC2SecurityGroupIdT>(value); }
    template<typename EC2SecurityGroupIdT = Aws::String>
    AuthorizeDBSecurityGroupIngressRequest& WithEC2SecurityGroupId(EC2SecurityGroupIdT&& value) { SetEC2SecurityGroupId(std::forward<EC2SecurityGroupIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Amazon Web Services account number of the owner of the EC2 security group
     * specified in the <code>EC2SecurityGroupName</code> parameter. The Amazon Web
     * Services access key ID isn't an acceptable value. For VPC DB security groups,
     * <code>EC2SecurityGroupId</code> must be provided. Otherwise,
     * <code>EC2SecurityGroupOwnerId</code> and either
     * <code>EC2SecurityGroupName</code> or <code>EC2SecurityGroupId</code> must be
     * provided.</p>
     */
    inline const Aws::String& GetEC2SecurityGroupOwnerId() const { return m_eC2SecurityGroupOwnerId; }
    inline bool EC2SecurityGroupOwnerIdHasBeenSet() const { return m_eC2SecurityGroupOwnerIdHasBeenSet; }
    template<typename EC2SecurityGroupOwnerIdT = Aws::String>
    void SetEC2SecurityGroupOwnerId(EC2SecurityGroupOwnerIdT&& value) { m_eC2SecurityGroupOwnerIdHasBeenSet = true; m_eC2SecurityGroupOwnerId = std::forward<EC2SecurityGroupOwnerIdT>(value); }
    template<typename EC2SecurityGroupOwnerIdT = Aws::String>
    AuthorizeDBSecurityGroupIngressRequest& WithEC2SecurityGroupOwnerId(EC2SecurityGroupOwnerIdT&& value) { SetEC2SecurityGroupOwnerId(std::forward<EC2SecurityGroupOwnerIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_dBSecurityGroupName;
    bool m_dBSecurityGroupNameHasBeenSet = false;

    Aws::String m_cIDRIP;
    bool m_cIDRIPHasBeenSet = false;

    Aws::String m_eC2SecurityGroupName;
    bool m_eC2SecurityGroupNameHasBeenSet = false;

    Aws::String m_eC2SecurityGroupId;
    bool m_eC2SecurityGroupIdHasBeenSet = false;

    Aws::String m_eC2SecurityGroupOwnerId;
    bool m_eC2SecurityGroupOwnerIdHasBeenSet = false;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
