/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/rds/model/DBProxyStatus.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
#include <aws/rds/model/EndpointNetworkType.h>
#include <aws/rds/model/TargetConnectionNetworkType.h>
#include <aws/rds/model/UserAuthConfigInfo.h>
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
   * <p>The data structure representing a proxy managed by the RDS Proxy.</p> <p>This
   * data type is used as a response element in the <code>DescribeDBProxies</code>
   * action.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DBProxy">AWS API
   * Reference</a></p>
   */
  class DBProxy
  {
  public:
    AWS_RDS_API DBProxy() = default;
    AWS_RDS_API DBProxy(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_RDS_API DBProxy& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_RDS_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_RDS_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The identifier for the proxy. This name must be unique for all proxies owned
     * by your Amazon Web Services account in the specified Amazon Web Services
     * Region.</p>
     */
    inline const Aws::String& GetDBProxyName() const { return m_dBProxyName; }
    inline bool DBProxyNameHasBeenSet() const { return m_dBProxyNameHasBeenSet; }
    template<typename DBProxyNameT = Aws::String>
    void SetDBProxyName(DBProxyNameT&& value) { m_dBProxyNameHasBeenSet = true; m_dBProxyName = std::forward<DBProxyNameT>(value); }
    template<typename DBProxyNameT = Aws::String>
    DBProxy& WithDBProxyName(DBProxyNameT&& value) { SetDBProxyName(std::forward<DBProxyNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) for the proxy.</p>
     */
    inline const Aws::String& GetDBProxyArn() const { return m_dBProxyArn; }
    inline bool DBProxyArnHasBeenSet() const { return m_dBProxyArnHasBeenSet; }
    template<typename DBProxyArnT = Aws::String>
    void SetDBProxyArn(DBProxyArnT&& value) { m_dBProxyArnHasBeenSet = true; m_dBProxyArn = std::forward<DBProxyArnT>(value); }
    template<typename DBProxyArnT = Aws::String>
    DBProxy& WithDBProxyArn(DBProxyArnT&& value) { SetDBProxyArn(std::forward<DBProxyArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of this proxy. A status of <code>available</code> means
     * the proxy is ready to handle requests. Other values indicate that you must wait
     * for the proxy to be ready, or take some action to resolve an issue.</p>
     */
    inline DBProxyStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(DBProxyStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline DBProxy& WithStatus(DBProxyStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The kinds of databases that the proxy can connect to. This value determines
     * which database network protocol the proxy recognizes when it interprets network
     * traffic to and from the database. <code>MYSQL</code> supports Aurora MySQL, RDS
     * for MariaDB, and RDS for MySQL databases. <code>POSTGRESQL</code> supports
     * Aurora PostgreSQL and RDS for PostgreSQL databases. <code>SQLSERVER</code>
     * supports RDS for Microsoft SQL Server databases.</p>
     */
    inline const Aws::String& GetEngineFamily() const { return m_engineFamily; }
    inline bool EngineFamilyHasBeenSet() const { return m_engineFamilyHasBeenSet; }
    template<typename EngineFamilyT = Aws::String>
    void SetEngineFamily(EngineFamilyT&& value) { m_engineFamilyHasBeenSet = true; m_engineFamily = std::forward<EngineFamilyT>(value); }
    template<typename EngineFamilyT = Aws::String>
    DBProxy& WithEngineFamily(EngineFamilyT&& value) { SetEngineFamily(std::forward<EngineFamilyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides the VPC ID of the DB proxy.</p>
     */
    inline const Aws::String& GetVpcId() const { return m_vpcId; }
    inline bool VpcIdHasBeenSet() const { return m_vpcIdHasBeenSet; }
    template<typename VpcIdT = Aws::String>
    void SetVpcId(VpcIdT&& value) { m_vpcIdHasBeenSet = true; m_vpcId = std::forward<VpcIdT>(value); }
    template<typename VpcIdT = Aws::String>
    DBProxy& WithVpcId(VpcIdT&& value) { SetVpcId(std::forward<VpcIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides a list of VPC security groups that the proxy belongs to.</p>
     */
    inline const Aws::Vector<Aws::String>& GetVpcSecurityGroupIds() const { return m_vpcSecurityGroupIds; }
    inline bool VpcSecurityGroupIdsHasBeenSet() const { return m_vpcSecurityGroupIdsHasBeenSet; }
    template<typename VpcSecurityGroupIdsT = Aws::Vector<Aws::String>>
    void SetVpcSecurityGroupIds(VpcSecurityGroupIdsT&& value) { m_vpcSecurityGroupIdsHasBeenSet = true; m_vpcSecurityGroupIds = std::forward<VpcSecurityGroupIdsT>(value); }
    template<typename VpcSecurityGroupIdsT = Aws::Vector<Aws::String>>
    DBProxy& WithVpcSecurityGroupIds(VpcSecurityGroupIdsT&& value) { SetVpcSecurityGroupIds(std::forward<VpcSecurityGroupIdsT>(value)); return *this;}
    template<typename VpcSecurityGroupIdsT = Aws::String>
    DBProxy& AddVpcSecurityGroupIds(VpcSecurityGroupIdsT&& value) { m_vpcSecurityGroupIdsHasBeenSet = true; m_vpcSecurityGroupIds.emplace_back(std::forward<VpcSecurityGroupIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The EC2 subnet IDs for the proxy.</p>
     */
    inline const Aws::Vector<Aws::String>& GetVpcSubnetIds() const { return m_vpcSubnetIds; }
    inline bool VpcSubnetIdsHasBeenSet() const { return m_vpcSubnetIdsHasBeenSet; }
    template<typename VpcSubnetIdsT = Aws::Vector<Aws::String>>
    void SetVpcSubnetIds(VpcSubnetIdsT&& value) { m_vpcSubnetIdsHasBeenSet = true; m_vpcSubnetIds = std::forward<VpcSubnetIdsT>(value); }
    template<typename VpcSubnetIdsT = Aws::Vector<Aws::String>>
    DBProxy& WithVpcSubnetIds(VpcSubnetIdsT&& value) { SetVpcSubnetIds(std::forward<VpcSubnetIdsT>(value)); return *this;}
    template<typename VpcSubnetIdsT = Aws::String>
    DBProxy& AddVpcSubnetIds(VpcSubnetIdsT&& value) { m_vpcSubnetIdsHasBeenSet = true; m_vpcSubnetIds.emplace_back(std::forward<VpcSubnetIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The default authentication scheme that the proxy uses for client connections
     * to the proxy and connections from the proxy to the underlying database. Valid
     * values are <code>NONE</code> and <code>IAM_AUTH</code>. When set to
     * <code>IAM_AUTH</code>, the proxy uses end-to-end IAM authentication to connect
     * to the database. </p>
     */
    inline const Aws::String& GetDefaultAuthScheme() const { return m_defaultAuthScheme; }
    inline bool DefaultAuthSchemeHasBeenSet() const { return m_defaultAuthSchemeHasBeenSet; }
    template<typename DefaultAuthSchemeT = Aws::String>
    void SetDefaultAuthScheme(DefaultAuthSchemeT&& value) { m_defaultAuthSchemeHasBeenSet = true; m_defaultAuthScheme = std::forward<DefaultAuthSchemeT>(value); }
    template<typename DefaultAuthSchemeT = Aws::String>
    DBProxy& WithDefaultAuthScheme(DefaultAuthSchemeT&& value) { SetDefaultAuthScheme(std::forward<DefaultAuthSchemeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>One or more data structures specifying the authorization mechanism to connect
     * to the associated RDS DB instance or Aurora DB cluster.</p>
     */
    inline const Aws::Vector<UserAuthConfigInfo>& GetAuth() const { return m_auth; }
    inline bool AuthHasBeenSet() const { return m_authHasBeenSet; }
    template<typename AuthT = Aws::Vector<UserAuthConfigInfo>>
    void SetAuth(AuthT&& value) { m_authHasBeenSet = true; m_auth = std::forward<AuthT>(value); }
    template<typename AuthT = Aws::Vector<UserAuthConfigInfo>>
    DBProxy& WithAuth(AuthT&& value) { SetAuth(std::forward<AuthT>(value)); return *this;}
    template<typename AuthT = UserAuthConfigInfo>
    DBProxy& AddAuth(AuthT&& value) { m_authHasBeenSet = true; m_auth.emplace_back(std::forward<AuthT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) for the IAM role that the proxy uses to access
     * Amazon Secrets Manager.</p>
     */
    inline const Aws::String& GetRoleArn() const { return m_roleArn; }
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
    template<typename RoleArnT = Aws::String>
    void SetRoleArn(RoleArnT&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::forward<RoleArnT>(value); }
    template<typename RoleArnT = Aws::String>
    DBProxy& WithRoleArn(RoleArnT&& value) { SetRoleArn(std::forward<RoleArnT>(value)); return *this;}
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
    DBProxy& WithEndpoint(EndpointT&& value) { SetEndpoint(std::forward<EndpointT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether Transport Layer Security (TLS) encryption is required for
     * connections to the proxy.</p>
     */
    inline bool GetRequireTLS() const { return m_requireTLS; }
    inline bool RequireTLSHasBeenSet() const { return m_requireTLSHasBeenSet; }
    inline void SetRequireTLS(bool value) { m_requireTLSHasBeenSet = true; m_requireTLS = value; }
    inline DBProxy& WithRequireTLS(bool value) { SetRequireTLS(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of seconds a connection to the proxy can have no activity before
     * the proxy drops the client connection. The proxy keeps the underlying database
     * connection open and puts it back into the connection pool for reuse by later
     * connection requests.</p> <p>Default: 1800 (30 minutes)</p> <p>Constraints: 1 to
     * 28,800</p>
     */
    inline int GetIdleClientTimeout() const { return m_idleClientTimeout; }
    inline bool IdleClientTimeoutHasBeenSet() const { return m_idleClientTimeoutHasBeenSet; }
    inline void SetIdleClientTimeout(int value) { m_idleClientTimeoutHasBeenSet = true; m_idleClientTimeout = value; }
    inline DBProxy& WithIdleClientTimeout(int value) { SetIdleClientTimeout(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether the proxy logs detailed connection and query information.
     * When you enable <code>DebugLogging</code>, the proxy captures connection details
     * and connection pool behavior from your queries. Debug logging increases
     * CloudWatch costs and can impact proxy performance. Enable this option only when
     * you need to troubleshoot connection or performance issues.</p>
     */
    inline bool GetDebugLogging() const { return m_debugLogging; }
    inline bool DebugLoggingHasBeenSet() const { return m_debugLoggingHasBeenSet; }
    inline void SetDebugLogging(bool value) { m_debugLoggingHasBeenSet = true; m_debugLogging = value; }
    inline DBProxy& WithDebugLogging(bool value) { SetDebugLogging(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when the proxy was first created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedDate() const { return m_createdDate; }
    inline bool CreatedDateHasBeenSet() const { return m_createdDateHasBeenSet; }
    template<typename CreatedDateT = Aws::Utils::DateTime>
    void SetCreatedDate(CreatedDateT&& value) { m_createdDateHasBeenSet = true; m_createdDate = std::forward<CreatedDateT>(value); }
    template<typename CreatedDateT = Aws::Utils::DateTime>
    DBProxy& WithCreatedDate(CreatedDateT&& value) { SetCreatedDate(std::forward<CreatedDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when the proxy was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedDate() const { return m_updatedDate; }
    inline bool UpdatedDateHasBeenSet() const { return m_updatedDateHasBeenSet; }
    template<typename UpdatedDateT = Aws::Utils::DateTime>
    void SetUpdatedDate(UpdatedDateT&& value) { m_updatedDateHasBeenSet = true; m_updatedDate = std::forward<UpdatedDateT>(value); }
    template<typename UpdatedDateT = Aws::Utils::DateTime>
    DBProxy& WithUpdatedDate(UpdatedDateT&& value) { SetUpdatedDate(std::forward<UpdatedDateT>(value)); return *this;}
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
    inline DBProxy& WithEndpointNetworkType(EndpointNetworkType value) { SetEndpointNetworkType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The network type that the proxy uses to connect to the target database. The
     * network type determines the IP version that the proxy uses for connections to
     * the database.</p> <p>Valid values:</p> <ul> <li> <p> <code>IPV4</code> - The
     * proxy connects to the database using IPv4 only.</p> </li> <li> <p>
     * <code>IPV6</code> - The proxy connects to the database using IPv6 only.</p>
     * </li> </ul>
     */
    inline TargetConnectionNetworkType GetTargetConnectionNetworkType() const { return m_targetConnectionNetworkType; }
    inline bool TargetConnectionNetworkTypeHasBeenSet() const { return m_targetConnectionNetworkTypeHasBeenSet; }
    inline void SetTargetConnectionNetworkType(TargetConnectionNetworkType value) { m_targetConnectionNetworkTypeHasBeenSet = true; m_targetConnectionNetworkType = value; }
    inline DBProxy& WithTargetConnectionNetworkType(TargetConnectionNetworkType value) { SetTargetConnectionNetworkType(value); return *this;}
    ///@}
  private:

    Aws::String m_dBProxyName;
    bool m_dBProxyNameHasBeenSet = false;

    Aws::String m_dBProxyArn;
    bool m_dBProxyArnHasBeenSet = false;

    DBProxyStatus m_status{DBProxyStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_engineFamily;
    bool m_engineFamilyHasBeenSet = false;

    Aws::String m_vpcId;
    bool m_vpcIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_vpcSecurityGroupIds;
    bool m_vpcSecurityGroupIdsHasBeenSet = false;

    Aws::Vector<Aws::String> m_vpcSubnetIds;
    bool m_vpcSubnetIdsHasBeenSet = false;

    Aws::String m_defaultAuthScheme;
    bool m_defaultAuthSchemeHasBeenSet = false;

    Aws::Vector<UserAuthConfigInfo> m_auth;
    bool m_authHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    Aws::String m_endpoint;
    bool m_endpointHasBeenSet = false;

    bool m_requireTLS{false};
    bool m_requireTLSHasBeenSet = false;

    int m_idleClientTimeout{0};
    bool m_idleClientTimeoutHasBeenSet = false;

    bool m_debugLogging{false};
    bool m_debugLoggingHasBeenSet = false;

    Aws::Utils::DateTime m_createdDate{};
    bool m_createdDateHasBeenSet = false;

    Aws::Utils::DateTime m_updatedDate{};
    bool m_updatedDateHasBeenSet = false;

    EndpointNetworkType m_endpointNetworkType{EndpointNetworkType::NOT_SET};
    bool m_endpointNetworkTypeHasBeenSet = false;

    TargetConnectionNetworkType m_targetConnectionNetworkType{TargetConnectionNetworkType::NOT_SET};
    bool m_targetConnectionNetworkTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
