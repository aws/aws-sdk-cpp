/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/rds/RDSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/rds/model/DBProxyEndpointTargetRole.h>
#include <aws/rds/model/EndpointNetworkType.h>
#include <aws/rds/model/Tag.h>
#include <utility>

namespace Aws
{
namespace RDS
{
namespace Model
{

  /**
   */
  class CreateDBProxyEndpointRequest : public RDSRequest
  {
  public:
    AWS_RDS_API CreateDBProxyEndpointRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateDBProxyEndpoint"; }

    AWS_RDS_API Aws::String SerializePayload() const override;

  protected:
    AWS_RDS_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The name of the DB proxy associated with the DB proxy endpoint that you
     * create.</p>
     */
    inline const Aws::String& GetDBProxyName() const { return m_dBProxyName; }
    inline bool DBProxyNameHasBeenSet() const { return m_dBProxyNameHasBeenSet; }
    template<typename DBProxyNameT = Aws::String>
    void SetDBProxyName(DBProxyNameT&& value) { m_dBProxyNameHasBeenSet = true; m_dBProxyName = std::forward<DBProxyNameT>(value); }
    template<typename DBProxyNameT = Aws::String>
    CreateDBProxyEndpointRequest& WithDBProxyName(DBProxyNameT&& value) { SetDBProxyName(std::forward<DBProxyNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the DB proxy endpoint to create.</p>
     */
    inline const Aws::String& GetDBProxyEndpointName() const { return m_dBProxyEndpointName; }
    inline bool DBProxyEndpointNameHasBeenSet() const { return m_dBProxyEndpointNameHasBeenSet; }
    template<typename DBProxyEndpointNameT = Aws::String>
    void SetDBProxyEndpointName(DBProxyEndpointNameT&& value) { m_dBProxyEndpointNameHasBeenSet = true; m_dBProxyEndpointName = std::forward<DBProxyEndpointNameT>(value); }
    template<typename DBProxyEndpointNameT = Aws::String>
    CreateDBProxyEndpointRequest& WithDBProxyEndpointName(DBProxyEndpointNameT&& value) { SetDBProxyEndpointName(std::forward<DBProxyEndpointNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The VPC subnet IDs for the DB proxy endpoint that you create. You can specify
     * a different set of subnet IDs than for the original DB proxy.</p>
     */
    inline const Aws::Vector<Aws::String>& GetVpcSubnetIds() const { return m_vpcSubnetIds; }
    inline bool VpcSubnetIdsHasBeenSet() const { return m_vpcSubnetIdsHasBeenSet; }
    template<typename VpcSubnetIdsT = Aws::Vector<Aws::String>>
    void SetVpcSubnetIds(VpcSubnetIdsT&& value) { m_vpcSubnetIdsHasBeenSet = true; m_vpcSubnetIds = std::forward<VpcSubnetIdsT>(value); }
    template<typename VpcSubnetIdsT = Aws::Vector<Aws::String>>
    CreateDBProxyEndpointRequest& WithVpcSubnetIds(VpcSubnetIdsT&& value) { SetVpcSubnetIds(std::forward<VpcSubnetIdsT>(value)); return *this;}
    template<typename VpcSubnetIdsT = Aws::String>
    CreateDBProxyEndpointRequest& AddVpcSubnetIds(VpcSubnetIdsT&& value) { m_vpcSubnetIdsHasBeenSet = true; m_vpcSubnetIds.emplace_back(std::forward<VpcSubnetIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The VPC security group IDs for the DB proxy endpoint that you create. You can
     * specify a different set of security group IDs than for the original DB proxy.
     * The default is the default security group for the VPC.</p>
     */
    inline const Aws::Vector<Aws::String>& GetVpcSecurityGroupIds() const { return m_vpcSecurityGroupIds; }
    inline bool VpcSecurityGroupIdsHasBeenSet() const { return m_vpcSecurityGroupIdsHasBeenSet; }
    template<typename VpcSecurityGroupIdsT = Aws::Vector<Aws::String>>
    void SetVpcSecurityGroupIds(VpcSecurityGroupIdsT&& value) { m_vpcSecurityGroupIdsHasBeenSet = true; m_vpcSecurityGroupIds = std::forward<VpcSecurityGroupIdsT>(value); }
    template<typename VpcSecurityGroupIdsT = Aws::Vector<Aws::String>>
    CreateDBProxyEndpointRequest& WithVpcSecurityGroupIds(VpcSecurityGroupIdsT&& value) { SetVpcSecurityGroupIds(std::forward<VpcSecurityGroupIdsT>(value)); return *this;}
    template<typename VpcSecurityGroupIdsT = Aws::String>
    CreateDBProxyEndpointRequest& AddVpcSecurityGroupIds(VpcSecurityGroupIdsT&& value) { m_vpcSecurityGroupIdsHasBeenSet = true; m_vpcSecurityGroupIds.emplace_back(std::forward<VpcSecurityGroupIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The role of the DB proxy endpoint. The role determines whether the endpoint
     * can be used for read/write or only read operations. The default is
     * <code>READ_WRITE</code>. The only role that proxies for RDS for Microsoft SQL
     * Server support is <code>READ_WRITE</code>.</p>
     */
    inline DBProxyEndpointTargetRole GetTargetRole() const { return m_targetRole; }
    inline bool TargetRoleHasBeenSet() const { return m_targetRoleHasBeenSet; }
    inline void SetTargetRole(DBProxyEndpointTargetRole value) { m_targetRoleHasBeenSet = true; m_targetRole = value; }
    inline CreateDBProxyEndpointRequest& WithTargetRole(DBProxyEndpointTargetRole value) { SetTargetRole(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    CreateDBProxyEndpointRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    CreateDBProxyEndpointRequest& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The network type of the DB proxy endpoint. The network type determines the IP
     * version that the proxy endpoint supports.</p> <p>Valid values:</p> <ul> <li> <p>
     * <code>IPV4</code> - The proxy endpoint supports IPv4 only.</p> </li> <li> <p>
     * <code>IPV6</code> - The proxy endpoint supports IPv6 only.</p> </li> <li> <p>
     * <code>DUAL</code> - The proxy endpoint supports both IPv4 and IPv6.</p> </li>
     * </ul> <p>Default: <code>IPV4</code> </p> <p>Constraints:</p> <ul> <li> <p>If you
     * specify <code>IPV6</code> or <code>DUAL</code>, the VPC and all subnets must
     * have an IPv6 CIDR block.</p> </li> <li> <p>If you specify <code>IPV6</code> or
     * <code>DUAL</code>, the VPC tenancy cannot be <code>dedicated</code>.</p> </li>
     * </ul>
     */
    inline EndpointNetworkType GetEndpointNetworkType() const { return m_endpointNetworkType; }
    inline bool EndpointNetworkTypeHasBeenSet() const { return m_endpointNetworkTypeHasBeenSet; }
    inline void SetEndpointNetworkType(EndpointNetworkType value) { m_endpointNetworkTypeHasBeenSet = true; m_endpointNetworkType = value; }
    inline CreateDBProxyEndpointRequest& WithEndpointNetworkType(EndpointNetworkType value) { SetEndpointNetworkType(value); return *this;}
    ///@}
  private:

    Aws::String m_dBProxyName;
    bool m_dBProxyNameHasBeenSet = false;

    Aws::String m_dBProxyEndpointName;
    bool m_dBProxyEndpointNameHasBeenSet = false;

    Aws::Vector<Aws::String> m_vpcSubnetIds;
    bool m_vpcSubnetIdsHasBeenSet = false;

    Aws::Vector<Aws::String> m_vpcSecurityGroupIds;
    bool m_vpcSecurityGroupIdsHasBeenSet = false;

    DBProxyEndpointTargetRole m_targetRole{DBProxyEndpointTargetRole::NOT_SET};
    bool m_targetRoleHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    EndpointNetworkType m_endpointNetworkType{EndpointNetworkType::NOT_SET};
    bool m_endpointNetworkTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
