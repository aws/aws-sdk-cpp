/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/rds/model/DBProxyEndpointStatus.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
#include <aws/rds/model/DBProxyEndpointTargetRole.h>
#include <aws/rds/model/EndpointNetworkType.h>
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
namespace RDS
{
namespace Model
{

  /**
   * <p>The data structure representing an endpoint associated with a DB proxy. RDS
   * automatically creates one endpoint for each DB proxy. For Aurora DB clusters,
   * you can associate additional endpoints with the same DB proxy. These endpoints
   * can be read/write or read-only. They can also reside in different VPCs than the
   * associated DB proxy.</p> <p>This data type is used as a response element in the
   * <code>DescribeDBProxyEndpoints</code> operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DBProxyEndpoint">AWS
   * API Reference</a></p>
   */
  class DBProxyEndpoint
  {
  public:
    AWS_RDS_API DBProxyEndpoint() = default;
    AWS_RDS_API DBProxyEndpoint(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_RDS_API DBProxyEndpoint& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_RDS_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_RDS_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The name for the DB proxy endpoint. An identifier must begin with a letter
     * and must contain only ASCII letters, digits, and hyphens; it can't end with a
     * hyphen or contain two consecutive hyphens.</p>
     */
    inline const Aws::String& GetDBProxyEndpointName() const { return m_dBProxyEndpointName; }
    inline bool DBProxyEndpointNameHasBeenSet() const { return m_dBProxyEndpointNameHasBeenSet; }
    template<typename DBProxyEndpointNameT = Aws::String>
    void SetDBProxyEndpointName(DBProxyEndpointNameT&& value) { m_dBProxyEndpointNameHasBeenSet = true; m_dBProxyEndpointName = std::forward<DBProxyEndpointNameT>(value); }
    template<typename DBProxyEndpointNameT = Aws::String>
    DBProxyEndpoint& WithDBProxyEndpointName(DBProxyEndpointNameT&& value) { SetDBProxyEndpointName(std::forward<DBProxyEndpointNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) for the DB proxy endpoint.</p>
     */
    inline const Aws::String& GetDBProxyEndpointArn() const { return m_dBProxyEndpointArn; }
    inline bool DBProxyEndpointArnHasBeenSet() const { return m_dBProxyEndpointArnHasBeenSet; }
    template<typename DBProxyEndpointArnT = Aws::String>
    void SetDBProxyEndpointArn(DBProxyEndpointArnT&& value) { m_dBProxyEndpointArnHasBeenSet = true; m_dBProxyEndpointArn = std::forward<DBProxyEndpointArnT>(value); }
    template<typename DBProxyEndpointArnT = Aws::String>
    DBProxyEndpoint& WithDBProxyEndpointArn(DBProxyEndpointArnT&& value) { SetDBProxyEndpointArn(std::forward<DBProxyEndpointArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier for the DB proxy that is associated with this DB proxy
     * endpoint.</p>
     */
    inline const Aws::String& GetDBProxyName() const { return m_dBProxyName; }
    inline bool DBProxyNameHasBeenSet() const { return m_dBProxyNameHasBeenSet; }
    template<typename DBProxyNameT = Aws::String>
    void SetDBProxyName(DBProxyNameT&& value) { m_dBProxyNameHasBeenSet = true; m_dBProxyName = std::forward<DBProxyNameT>(value); }
    template<typename DBProxyNameT = Aws::String>
    DBProxyEndpoint& WithDBProxyName(DBProxyNameT&& value) { SetDBProxyName(std::forward<DBProxyNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of this DB proxy endpoint. A status of
     * <code>available</code> means the endpoint is ready to handle requests. Other
     * values indicate that you must wait for the endpoint to be ready, or take some
     * action to resolve an issue.</p>
     */
    inline DBProxyEndpointStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(DBProxyEndpointStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline DBProxyEndpoint& WithStatus(DBProxyEndpointStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides the VPC ID of the DB proxy endpoint.</p>
     */
    inline const Aws::String& GetVpcId() const { return m_vpcId; }
    inline bool VpcIdHasBeenSet() const { return m_vpcIdHasBeenSet; }
    template<typename VpcIdT = Aws::String>
    void SetVpcId(VpcIdT&& value) { m_vpcIdHasBeenSet = true; m_vpcId = std::forward<VpcIdT>(value); }
    template<typename VpcIdT = Aws::String>
    DBProxyEndpoint& WithVpcId(VpcIdT&& value) { SetVpcId(std::forward<VpcIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides a list of VPC security groups that the DB proxy endpoint belongs
     * to.</p>
     */
    inline const Aws::Vector<Aws::String>& GetVpcSecurityGroupIds() const { return m_vpcSecurityGroupIds; }
    inline bool VpcSecurityGroupIdsHasBeenSet() const { return m_vpcSecurityGroupIdsHasBeenSet; }
    template<typename VpcSecurityGroupIdsT = Aws::Vector<Aws::String>>
    void SetVpcSecurityGroupIds(VpcSecurityGroupIdsT&& value) { m_vpcSecurityGroupIdsHasBeenSet = true; m_vpcSecurityGroupIds = std::forward<VpcSecurityGroupIdsT>(value); }
    template<typename VpcSecurityGroupIdsT = Aws::Vector<Aws::String>>
    DBProxyEndpoint& WithVpcSecurityGroupIds(VpcSecurityGroupIdsT&& value) { SetVpcSecurityGroupIds(std::forward<VpcSecurityGroupIdsT>(value)); return *this;}
    template<typename VpcSecurityGroupIdsT = Aws::String>
    DBProxyEndpoint& AddVpcSecurityGroupIds(VpcSecurityGroupIdsT&& value) { m_vpcSecurityGroupIdsHasBeenSet = true; m_vpcSecurityGroupIds.emplace_back(std::forward<VpcSecurityGroupIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The EC2 subnet IDs for the DB proxy endpoint.</p>
     */
    inline const Aws::Vector<Aws::String>& GetVpcSubnetIds() const { return m_vpcSubnetIds; }
    inline bool VpcSubnetIdsHasBeenSet() const { return m_vpcSubnetIdsHasBeenSet; }
    template<typename VpcSubnetIdsT = Aws::Vector<Aws::String>>
    void SetVpcSubnetIds(VpcSubnetIdsT&& value) { m_vpcSubnetIdsHasBeenSet = true; m_vpcSubnetIds = std::forward<VpcSubnetIdsT>(value); }
    template<typename VpcSubnetIdsT = Aws::Vector<Aws::String>>
    DBProxyEndpoint& WithVpcSubnetIds(VpcSubnetIdsT&& value) { SetVpcSubnetIds(std::forward<VpcSubnetIdsT>(value)); return *this;}
    template<typename VpcSubnetIdsT = Aws::String>
    DBProxyEndpoint& AddVpcSubnetIds(VpcSubnetIdsT&& value) { m_vpcSubnetIdsHasBeenSet = true; m_vpcSubnetIds.emplace_back(std::forward<VpcSubnetIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The endpoint that you can use to connect to the DB proxy. You include the
     * endpoint value in the connection string for a database client application.</p>
     */
    inline const Aws::String& GetEndpoint() const { return m_endpoint; }
    inline bool EndpointHasBeenSet() const { return m_endpointHasBeenSet; }
    template<typename EndpointT = Aws::String>
    void SetEndpoint(EndpointT&& value) { m_endpointHasBeenSet = true; m_endpoint = std::forward<EndpointT>(value); }
    template<typename EndpointT = Aws::String>
    DBProxyEndpoint& WithEndpoint(EndpointT&& value) { SetEndpoint(std::forward<EndpointT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when the DB proxy endpoint was first created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedDate() const { return m_createdDate; }
    inline bool CreatedDateHasBeenSet() const { return m_createdDateHasBeenSet; }
    template<typename CreatedDateT = Aws::Utils::DateTime>
    void SetCreatedDate(CreatedDateT&& value) { m_createdDateHasBeenSet = true; m_createdDate = std::forward<CreatedDateT>(value); }
    template<typename CreatedDateT = Aws::Utils::DateTime>
    DBProxyEndpoint& WithCreatedDate(CreatedDateT&& value) { SetCreatedDate(std::forward<CreatedDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A value that indicates whether the DB proxy endpoint can be used for
     * read/write or read-only operations.</p>
     */
    inline DBProxyEndpointTargetRole GetTargetRole() const { return m_targetRole; }
    inline bool TargetRoleHasBeenSet() const { return m_targetRoleHasBeenSet; }
    inline void SetTargetRole(DBProxyEndpointTargetRole value) { m_targetRoleHasBeenSet = true; m_targetRole = value; }
    inline DBProxyEndpoint& WithTargetRole(DBProxyEndpointTargetRole value) { SetTargetRole(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether this endpoint is the default endpoint for the associated DB
     * proxy. Default DB proxy endpoints always have read/write capability. Other
     * endpoints that you associate with the DB proxy can be either read/write or
     * read-only.</p>
     */
    inline bool GetIsDefault() const { return m_isDefault; }
    inline bool IsDefaultHasBeenSet() const { return m_isDefaultHasBeenSet; }
    inline void SetIsDefault(bool value) { m_isDefaultHasBeenSet = true; m_isDefault = value; }
    inline DBProxyEndpoint& WithIsDefault(bool value) { SetIsDefault(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The network type of the DB proxy endpoint. The network type determines the IP
     * version that the proxy endpoint supports.</p> <p>Valid values:</p> <ul> <li> <p>
     * <code>IPV4</code> - The proxy endpoint supports IPv4 only.</p> </li> <li> <p>
     * <code>IPV6</code> - The proxy endpoint supports IPv6 only.</p> </li> <li> <p>
     * <code>DUAL</code> - The proxy endpoint supports both IPv4 and IPv6.</p> </li>
     * </ul>
     */
    inline EndpointNetworkType GetEndpointNetworkType() const { return m_endpointNetworkType; }
    inline bool EndpointNetworkTypeHasBeenSet() const { return m_endpointNetworkTypeHasBeenSet; }
    inline void SetEndpointNetworkType(EndpointNetworkType value) { m_endpointNetworkTypeHasBeenSet = true; m_endpointNetworkType = value; }
    inline DBProxyEndpoint& WithEndpointNetworkType(EndpointNetworkType value) { SetEndpointNetworkType(value); return *this;}
    ///@}
  private:

    Aws::String m_dBProxyEndpointName;
    bool m_dBProxyEndpointNameHasBeenSet = false;

    Aws::String m_dBProxyEndpointArn;
    bool m_dBProxyEndpointArnHasBeenSet = false;

    Aws::String m_dBProxyName;
    bool m_dBProxyNameHasBeenSet = false;

    DBProxyEndpointStatus m_status{DBProxyEndpointStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_vpcId;
    bool m_vpcIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_vpcSecurityGroupIds;
    bool m_vpcSecurityGroupIdsHasBeenSet = false;

    Aws::Vector<Aws::String> m_vpcSubnetIds;
    bool m_vpcSubnetIdsHasBeenSet = false;

    Aws::String m_endpoint;
    bool m_endpointHasBeenSet = false;

    Aws::Utils::DateTime m_createdDate{};
    bool m_createdDateHasBeenSet = false;

    DBProxyEndpointTargetRole m_targetRole{DBProxyEndpointTargetRole::NOT_SET};
    bool m_targetRoleHasBeenSet = false;

    bool m_isDefault{false};
    bool m_isDefaultHasBeenSet = false;

    EndpointNetworkType m_endpointNetworkType{EndpointNetworkType::NOT_SET};
    bool m_endpointNetworkTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
