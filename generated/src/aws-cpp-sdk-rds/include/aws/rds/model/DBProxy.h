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
    AWS_RDS_API DBProxy();
    AWS_RDS_API DBProxy(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_RDS_API DBProxy& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_RDS_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_RDS_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The identifier for the proxy. This name must be unique for all proxies owned
     * by your Amazon Web Services account in the specified Amazon Web Services
     * Region.</p>
     */
    inline const Aws::String& GetDBProxyName() const{ return m_dBProxyName; }

    /**
     * <p>The identifier for the proxy. This name must be unique for all proxies owned
     * by your Amazon Web Services account in the specified Amazon Web Services
     * Region.</p>
     */
    inline bool DBProxyNameHasBeenSet() const { return m_dBProxyNameHasBeenSet; }

    /**
     * <p>The identifier for the proxy. This name must be unique for all proxies owned
     * by your Amazon Web Services account in the specified Amazon Web Services
     * Region.</p>
     */
    inline void SetDBProxyName(const Aws::String& value) { m_dBProxyNameHasBeenSet = true; m_dBProxyName = value; }

    /**
     * <p>The identifier for the proxy. This name must be unique for all proxies owned
     * by your Amazon Web Services account in the specified Amazon Web Services
     * Region.</p>
     */
    inline void SetDBProxyName(Aws::String&& value) { m_dBProxyNameHasBeenSet = true; m_dBProxyName = std::move(value); }

    /**
     * <p>The identifier for the proxy. This name must be unique for all proxies owned
     * by your Amazon Web Services account in the specified Amazon Web Services
     * Region.</p>
     */
    inline void SetDBProxyName(const char* value) { m_dBProxyNameHasBeenSet = true; m_dBProxyName.assign(value); }

    /**
     * <p>The identifier for the proxy. This name must be unique for all proxies owned
     * by your Amazon Web Services account in the specified Amazon Web Services
     * Region.</p>
     */
    inline DBProxy& WithDBProxyName(const Aws::String& value) { SetDBProxyName(value); return *this;}

    /**
     * <p>The identifier for the proxy. This name must be unique for all proxies owned
     * by your Amazon Web Services account in the specified Amazon Web Services
     * Region.</p>
     */
    inline DBProxy& WithDBProxyName(Aws::String&& value) { SetDBProxyName(std::move(value)); return *this;}

    /**
     * <p>The identifier for the proxy. This name must be unique for all proxies owned
     * by your Amazon Web Services account in the specified Amazon Web Services
     * Region.</p>
     */
    inline DBProxy& WithDBProxyName(const char* value) { SetDBProxyName(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) for the proxy.</p>
     */
    inline const Aws::String& GetDBProxyArn() const{ return m_dBProxyArn; }

    /**
     * <p>The Amazon Resource Name (ARN) for the proxy.</p>
     */
    inline bool DBProxyArnHasBeenSet() const { return m_dBProxyArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) for the proxy.</p>
     */
    inline void SetDBProxyArn(const Aws::String& value) { m_dBProxyArnHasBeenSet = true; m_dBProxyArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) for the proxy.</p>
     */
    inline void SetDBProxyArn(Aws::String&& value) { m_dBProxyArnHasBeenSet = true; m_dBProxyArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the proxy.</p>
     */
    inline void SetDBProxyArn(const char* value) { m_dBProxyArnHasBeenSet = true; m_dBProxyArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the proxy.</p>
     */
    inline DBProxy& WithDBProxyArn(const Aws::String& value) { SetDBProxyArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the proxy.</p>
     */
    inline DBProxy& WithDBProxyArn(Aws::String&& value) { SetDBProxyArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the proxy.</p>
     */
    inline DBProxy& WithDBProxyArn(const char* value) { SetDBProxyArn(value); return *this;}


    /**
     * <p>The current status of this proxy. A status of <code>available</code> means
     * the proxy is ready to handle requests. Other values indicate that you must wait
     * for the proxy to be ready, or take some action to resolve an issue.</p>
     */
    inline const DBProxyStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The current status of this proxy. A status of <code>available</code> means
     * the proxy is ready to handle requests. Other values indicate that you must wait
     * for the proxy to be ready, or take some action to resolve an issue.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The current status of this proxy. A status of <code>available</code> means
     * the proxy is ready to handle requests. Other values indicate that you must wait
     * for the proxy to be ready, or take some action to resolve an issue.</p>
     */
    inline void SetStatus(const DBProxyStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The current status of this proxy. A status of <code>available</code> means
     * the proxy is ready to handle requests. Other values indicate that you must wait
     * for the proxy to be ready, or take some action to resolve an issue.</p>
     */
    inline void SetStatus(DBProxyStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The current status of this proxy. A status of <code>available</code> means
     * the proxy is ready to handle requests. Other values indicate that you must wait
     * for the proxy to be ready, or take some action to resolve an issue.</p>
     */
    inline DBProxy& WithStatus(const DBProxyStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The current status of this proxy. A status of <code>available</code> means
     * the proxy is ready to handle requests. Other values indicate that you must wait
     * for the proxy to be ready, or take some action to resolve an issue.</p>
     */
    inline DBProxy& WithStatus(DBProxyStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The kinds of databases that the proxy can connect to. This value determines
     * which database network protocol the proxy recognizes when it interprets network
     * traffic to and from the database. <code>MYSQL</code> supports Aurora MySQL, RDS
     * for MariaDB, and RDS for MySQL databases. <code>POSTGRESQL</code> supports
     * Aurora PostgreSQL and RDS for PostgreSQL databases. <code>SQLSERVER</code>
     * supports RDS for Microsoft SQL Server databases.</p>
     */
    inline const Aws::String& GetEngineFamily() const{ return m_engineFamily; }

    /**
     * <p>The kinds of databases that the proxy can connect to. This value determines
     * which database network protocol the proxy recognizes when it interprets network
     * traffic to and from the database. <code>MYSQL</code> supports Aurora MySQL, RDS
     * for MariaDB, and RDS for MySQL databases. <code>POSTGRESQL</code> supports
     * Aurora PostgreSQL and RDS for PostgreSQL databases. <code>SQLSERVER</code>
     * supports RDS for Microsoft SQL Server databases.</p>
     */
    inline bool EngineFamilyHasBeenSet() const { return m_engineFamilyHasBeenSet; }

    /**
     * <p>The kinds of databases that the proxy can connect to. This value determines
     * which database network protocol the proxy recognizes when it interprets network
     * traffic to and from the database. <code>MYSQL</code> supports Aurora MySQL, RDS
     * for MariaDB, and RDS for MySQL databases. <code>POSTGRESQL</code> supports
     * Aurora PostgreSQL and RDS for PostgreSQL databases. <code>SQLSERVER</code>
     * supports RDS for Microsoft SQL Server databases.</p>
     */
    inline void SetEngineFamily(const Aws::String& value) { m_engineFamilyHasBeenSet = true; m_engineFamily = value; }

    /**
     * <p>The kinds of databases that the proxy can connect to. This value determines
     * which database network protocol the proxy recognizes when it interprets network
     * traffic to and from the database. <code>MYSQL</code> supports Aurora MySQL, RDS
     * for MariaDB, and RDS for MySQL databases. <code>POSTGRESQL</code> supports
     * Aurora PostgreSQL and RDS for PostgreSQL databases. <code>SQLSERVER</code>
     * supports RDS for Microsoft SQL Server databases.</p>
     */
    inline void SetEngineFamily(Aws::String&& value) { m_engineFamilyHasBeenSet = true; m_engineFamily = std::move(value); }

    /**
     * <p>The kinds of databases that the proxy can connect to. This value determines
     * which database network protocol the proxy recognizes when it interprets network
     * traffic to and from the database. <code>MYSQL</code> supports Aurora MySQL, RDS
     * for MariaDB, and RDS for MySQL databases. <code>POSTGRESQL</code> supports
     * Aurora PostgreSQL and RDS for PostgreSQL databases. <code>SQLSERVER</code>
     * supports RDS for Microsoft SQL Server databases.</p>
     */
    inline void SetEngineFamily(const char* value) { m_engineFamilyHasBeenSet = true; m_engineFamily.assign(value); }

    /**
     * <p>The kinds of databases that the proxy can connect to. This value determines
     * which database network protocol the proxy recognizes when it interprets network
     * traffic to and from the database. <code>MYSQL</code> supports Aurora MySQL, RDS
     * for MariaDB, and RDS for MySQL databases. <code>POSTGRESQL</code> supports
     * Aurora PostgreSQL and RDS for PostgreSQL databases. <code>SQLSERVER</code>
     * supports RDS for Microsoft SQL Server databases.</p>
     */
    inline DBProxy& WithEngineFamily(const Aws::String& value) { SetEngineFamily(value); return *this;}

    /**
     * <p>The kinds of databases that the proxy can connect to. This value determines
     * which database network protocol the proxy recognizes when it interprets network
     * traffic to and from the database. <code>MYSQL</code> supports Aurora MySQL, RDS
     * for MariaDB, and RDS for MySQL databases. <code>POSTGRESQL</code> supports
     * Aurora PostgreSQL and RDS for PostgreSQL databases. <code>SQLSERVER</code>
     * supports RDS for Microsoft SQL Server databases.</p>
     */
    inline DBProxy& WithEngineFamily(Aws::String&& value) { SetEngineFamily(std::move(value)); return *this;}

    /**
     * <p>The kinds of databases that the proxy can connect to. This value determines
     * which database network protocol the proxy recognizes when it interprets network
     * traffic to and from the database. <code>MYSQL</code> supports Aurora MySQL, RDS
     * for MariaDB, and RDS for MySQL databases. <code>POSTGRESQL</code> supports
     * Aurora PostgreSQL and RDS for PostgreSQL databases. <code>SQLSERVER</code>
     * supports RDS for Microsoft SQL Server databases.</p>
     */
    inline DBProxy& WithEngineFamily(const char* value) { SetEngineFamily(value); return *this;}


    /**
     * <p>Provides the VPC ID of the DB proxy.</p>
     */
    inline const Aws::String& GetVpcId() const{ return m_vpcId; }

    /**
     * <p>Provides the VPC ID of the DB proxy.</p>
     */
    inline bool VpcIdHasBeenSet() const { return m_vpcIdHasBeenSet; }

    /**
     * <p>Provides the VPC ID of the DB proxy.</p>
     */
    inline void SetVpcId(const Aws::String& value) { m_vpcIdHasBeenSet = true; m_vpcId = value; }

    /**
     * <p>Provides the VPC ID of the DB proxy.</p>
     */
    inline void SetVpcId(Aws::String&& value) { m_vpcIdHasBeenSet = true; m_vpcId = std::move(value); }

    /**
     * <p>Provides the VPC ID of the DB proxy.</p>
     */
    inline void SetVpcId(const char* value) { m_vpcIdHasBeenSet = true; m_vpcId.assign(value); }

    /**
     * <p>Provides the VPC ID of the DB proxy.</p>
     */
    inline DBProxy& WithVpcId(const Aws::String& value) { SetVpcId(value); return *this;}

    /**
     * <p>Provides the VPC ID of the DB proxy.</p>
     */
    inline DBProxy& WithVpcId(Aws::String&& value) { SetVpcId(std::move(value)); return *this;}

    /**
     * <p>Provides the VPC ID of the DB proxy.</p>
     */
    inline DBProxy& WithVpcId(const char* value) { SetVpcId(value); return *this;}


    /**
     * <p>Provides a list of VPC security groups that the proxy belongs to.</p>
     */
    inline const Aws::Vector<Aws::String>& GetVpcSecurityGroupIds() const{ return m_vpcSecurityGroupIds; }

    /**
     * <p>Provides a list of VPC security groups that the proxy belongs to.</p>
     */
    inline bool VpcSecurityGroupIdsHasBeenSet() const { return m_vpcSecurityGroupIdsHasBeenSet; }

    /**
     * <p>Provides a list of VPC security groups that the proxy belongs to.</p>
     */
    inline void SetVpcSecurityGroupIds(const Aws::Vector<Aws::String>& value) { m_vpcSecurityGroupIdsHasBeenSet = true; m_vpcSecurityGroupIds = value; }

    /**
     * <p>Provides a list of VPC security groups that the proxy belongs to.</p>
     */
    inline void SetVpcSecurityGroupIds(Aws::Vector<Aws::String>&& value) { m_vpcSecurityGroupIdsHasBeenSet = true; m_vpcSecurityGroupIds = std::move(value); }

    /**
     * <p>Provides a list of VPC security groups that the proxy belongs to.</p>
     */
    inline DBProxy& WithVpcSecurityGroupIds(const Aws::Vector<Aws::String>& value) { SetVpcSecurityGroupIds(value); return *this;}

    /**
     * <p>Provides a list of VPC security groups that the proxy belongs to.</p>
     */
    inline DBProxy& WithVpcSecurityGroupIds(Aws::Vector<Aws::String>&& value) { SetVpcSecurityGroupIds(std::move(value)); return *this;}

    /**
     * <p>Provides a list of VPC security groups that the proxy belongs to.</p>
     */
    inline DBProxy& AddVpcSecurityGroupIds(const Aws::String& value) { m_vpcSecurityGroupIdsHasBeenSet = true; m_vpcSecurityGroupIds.push_back(value); return *this; }

    /**
     * <p>Provides a list of VPC security groups that the proxy belongs to.</p>
     */
    inline DBProxy& AddVpcSecurityGroupIds(Aws::String&& value) { m_vpcSecurityGroupIdsHasBeenSet = true; m_vpcSecurityGroupIds.push_back(std::move(value)); return *this; }

    /**
     * <p>Provides a list of VPC security groups that the proxy belongs to.</p>
     */
    inline DBProxy& AddVpcSecurityGroupIds(const char* value) { m_vpcSecurityGroupIdsHasBeenSet = true; m_vpcSecurityGroupIds.push_back(value); return *this; }


    /**
     * <p>The EC2 subnet IDs for the proxy.</p>
     */
    inline const Aws::Vector<Aws::String>& GetVpcSubnetIds() const{ return m_vpcSubnetIds; }

    /**
     * <p>The EC2 subnet IDs for the proxy.</p>
     */
    inline bool VpcSubnetIdsHasBeenSet() const { return m_vpcSubnetIdsHasBeenSet; }

    /**
     * <p>The EC2 subnet IDs for the proxy.</p>
     */
    inline void SetVpcSubnetIds(const Aws::Vector<Aws::String>& value) { m_vpcSubnetIdsHasBeenSet = true; m_vpcSubnetIds = value; }

    /**
     * <p>The EC2 subnet IDs for the proxy.</p>
     */
    inline void SetVpcSubnetIds(Aws::Vector<Aws::String>&& value) { m_vpcSubnetIdsHasBeenSet = true; m_vpcSubnetIds = std::move(value); }

    /**
     * <p>The EC2 subnet IDs for the proxy.</p>
     */
    inline DBProxy& WithVpcSubnetIds(const Aws::Vector<Aws::String>& value) { SetVpcSubnetIds(value); return *this;}

    /**
     * <p>The EC2 subnet IDs for the proxy.</p>
     */
    inline DBProxy& WithVpcSubnetIds(Aws::Vector<Aws::String>&& value) { SetVpcSubnetIds(std::move(value)); return *this;}

    /**
     * <p>The EC2 subnet IDs for the proxy.</p>
     */
    inline DBProxy& AddVpcSubnetIds(const Aws::String& value) { m_vpcSubnetIdsHasBeenSet = true; m_vpcSubnetIds.push_back(value); return *this; }

    /**
     * <p>The EC2 subnet IDs for the proxy.</p>
     */
    inline DBProxy& AddVpcSubnetIds(Aws::String&& value) { m_vpcSubnetIdsHasBeenSet = true; m_vpcSubnetIds.push_back(std::move(value)); return *this; }

    /**
     * <p>The EC2 subnet IDs for the proxy.</p>
     */
    inline DBProxy& AddVpcSubnetIds(const char* value) { m_vpcSubnetIdsHasBeenSet = true; m_vpcSubnetIds.push_back(value); return *this; }


    /**
     * <p>One or more data structures specifying the authorization mechanism to connect
     * to the associated RDS DB instance or Aurora DB cluster.</p>
     */
    inline const Aws::Vector<UserAuthConfigInfo>& GetAuth() const{ return m_auth; }

    /**
     * <p>One or more data structures specifying the authorization mechanism to connect
     * to the associated RDS DB instance or Aurora DB cluster.</p>
     */
    inline bool AuthHasBeenSet() const { return m_authHasBeenSet; }

    /**
     * <p>One or more data structures specifying the authorization mechanism to connect
     * to the associated RDS DB instance or Aurora DB cluster.</p>
     */
    inline void SetAuth(const Aws::Vector<UserAuthConfigInfo>& value) { m_authHasBeenSet = true; m_auth = value; }

    /**
     * <p>One or more data structures specifying the authorization mechanism to connect
     * to the associated RDS DB instance or Aurora DB cluster.</p>
     */
    inline void SetAuth(Aws::Vector<UserAuthConfigInfo>&& value) { m_authHasBeenSet = true; m_auth = std::move(value); }

    /**
     * <p>One or more data structures specifying the authorization mechanism to connect
     * to the associated RDS DB instance or Aurora DB cluster.</p>
     */
    inline DBProxy& WithAuth(const Aws::Vector<UserAuthConfigInfo>& value) { SetAuth(value); return *this;}

    /**
     * <p>One or more data structures specifying the authorization mechanism to connect
     * to the associated RDS DB instance or Aurora DB cluster.</p>
     */
    inline DBProxy& WithAuth(Aws::Vector<UserAuthConfigInfo>&& value) { SetAuth(std::move(value)); return *this;}

    /**
     * <p>One or more data structures specifying the authorization mechanism to connect
     * to the associated RDS DB instance or Aurora DB cluster.</p>
     */
    inline DBProxy& AddAuth(const UserAuthConfigInfo& value) { m_authHasBeenSet = true; m_auth.push_back(value); return *this; }

    /**
     * <p>One or more data structures specifying the authorization mechanism to connect
     * to the associated RDS DB instance or Aurora DB cluster.</p>
     */
    inline DBProxy& AddAuth(UserAuthConfigInfo&& value) { m_authHasBeenSet = true; m_auth.push_back(std::move(value)); return *this; }


    /**
     * <p>The Amazon Resource Name (ARN) for the IAM role that the proxy uses to access
     * Amazon Secrets Manager.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * <p>The Amazon Resource Name (ARN) for the IAM role that the proxy uses to access
     * Amazon Secrets Manager.</p>
     */
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) for the IAM role that the proxy uses to access
     * Amazon Secrets Manager.</p>
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) for the IAM role that the proxy uses to access
     * Amazon Secrets Manager.</p>
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the IAM role that the proxy uses to access
     * Amazon Secrets Manager.</p>
     */
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the IAM role that the proxy uses to access
     * Amazon Secrets Manager.</p>
     */
    inline DBProxy& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the IAM role that the proxy uses to access
     * Amazon Secrets Manager.</p>
     */
    inline DBProxy& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the IAM role that the proxy uses to access
     * Amazon Secrets Manager.</p>
     */
    inline DBProxy& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}


    /**
     * <p>The endpoint that you can use to connect to the DB proxy. You include the
     * endpoint value in the connection string for a database client application.</p>
     */
    inline const Aws::String& GetEndpoint() const{ return m_endpoint; }

    /**
     * <p>The endpoint that you can use to connect to the DB proxy. You include the
     * endpoint value in the connection string for a database client application.</p>
     */
    inline bool EndpointHasBeenSet() const { return m_endpointHasBeenSet; }

    /**
     * <p>The endpoint that you can use to connect to the DB proxy. You include the
     * endpoint value in the connection string for a database client application.</p>
     */
    inline void SetEndpoint(const Aws::String& value) { m_endpointHasBeenSet = true; m_endpoint = value; }

    /**
     * <p>The endpoint that you can use to connect to the DB proxy. You include the
     * endpoint value in the connection string for a database client application.</p>
     */
    inline void SetEndpoint(Aws::String&& value) { m_endpointHasBeenSet = true; m_endpoint = std::move(value); }

    /**
     * <p>The endpoint that you can use to connect to the DB proxy. You include the
     * endpoint value in the connection string for a database client application.</p>
     */
    inline void SetEndpoint(const char* value) { m_endpointHasBeenSet = true; m_endpoint.assign(value); }

    /**
     * <p>The endpoint that you can use to connect to the DB proxy. You include the
     * endpoint value in the connection string for a database client application.</p>
     */
    inline DBProxy& WithEndpoint(const Aws::String& value) { SetEndpoint(value); return *this;}

    /**
     * <p>The endpoint that you can use to connect to the DB proxy. You include the
     * endpoint value in the connection string for a database client application.</p>
     */
    inline DBProxy& WithEndpoint(Aws::String&& value) { SetEndpoint(std::move(value)); return *this;}

    /**
     * <p>The endpoint that you can use to connect to the DB proxy. You include the
     * endpoint value in the connection string for a database client application.</p>
     */
    inline DBProxy& WithEndpoint(const char* value) { SetEndpoint(value); return *this;}


    /**
     * <p>Indicates whether Transport Layer Security (TLS) encryption is required for
     * connections to the proxy.</p>
     */
    inline bool GetRequireTLS() const{ return m_requireTLS; }

    /**
     * <p>Indicates whether Transport Layer Security (TLS) encryption is required for
     * connections to the proxy.</p>
     */
    inline bool RequireTLSHasBeenSet() const { return m_requireTLSHasBeenSet; }

    /**
     * <p>Indicates whether Transport Layer Security (TLS) encryption is required for
     * connections to the proxy.</p>
     */
    inline void SetRequireTLS(bool value) { m_requireTLSHasBeenSet = true; m_requireTLS = value; }

    /**
     * <p>Indicates whether Transport Layer Security (TLS) encryption is required for
     * connections to the proxy.</p>
     */
    inline DBProxy& WithRequireTLS(bool value) { SetRequireTLS(value); return *this;}


    /**
     * <p>The number of seconds a connection to the proxy can have no activity before
     * the proxy drops the client connection. The proxy keeps the underlying database
     * connection open and puts it back into the connection pool for reuse by later
     * connection requests.</p> <p>Default: 1800 (30 minutes)</p> <p>Constraints: 1 to
     * 28,800</p>
     */
    inline int GetIdleClientTimeout() const{ return m_idleClientTimeout; }

    /**
     * <p>The number of seconds a connection to the proxy can have no activity before
     * the proxy drops the client connection. The proxy keeps the underlying database
     * connection open and puts it back into the connection pool for reuse by later
     * connection requests.</p> <p>Default: 1800 (30 minutes)</p> <p>Constraints: 1 to
     * 28,800</p>
     */
    inline bool IdleClientTimeoutHasBeenSet() const { return m_idleClientTimeoutHasBeenSet; }

    /**
     * <p>The number of seconds a connection to the proxy can have no activity before
     * the proxy drops the client connection. The proxy keeps the underlying database
     * connection open and puts it back into the connection pool for reuse by later
     * connection requests.</p> <p>Default: 1800 (30 minutes)</p> <p>Constraints: 1 to
     * 28,800</p>
     */
    inline void SetIdleClientTimeout(int value) { m_idleClientTimeoutHasBeenSet = true; m_idleClientTimeout = value; }

    /**
     * <p>The number of seconds a connection to the proxy can have no activity before
     * the proxy drops the client connection. The proxy keeps the underlying database
     * connection open and puts it back into the connection pool for reuse by later
     * connection requests.</p> <p>Default: 1800 (30 minutes)</p> <p>Constraints: 1 to
     * 28,800</p>
     */
    inline DBProxy& WithIdleClientTimeout(int value) { SetIdleClientTimeout(value); return *this;}


    /**
     * <p>Whether the proxy includes detailed information about SQL statements in its
     * logs. This information helps you to debug issues involving SQL behavior or the
     * performance and scalability of the proxy connections. The debug information
     * includes the text of SQL statements that you submit through the proxy. Thus,
     * only enable this setting when needed for debugging, and only when you have
     * security measures in place to safeguard any sensitive information that appears
     * in the logs.</p>
     */
    inline bool GetDebugLogging() const{ return m_debugLogging; }

    /**
     * <p>Whether the proxy includes detailed information about SQL statements in its
     * logs. This information helps you to debug issues involving SQL behavior or the
     * performance and scalability of the proxy connections. The debug information
     * includes the text of SQL statements that you submit through the proxy. Thus,
     * only enable this setting when needed for debugging, and only when you have
     * security measures in place to safeguard any sensitive information that appears
     * in the logs.</p>
     */
    inline bool DebugLoggingHasBeenSet() const { return m_debugLoggingHasBeenSet; }

    /**
     * <p>Whether the proxy includes detailed information about SQL statements in its
     * logs. This information helps you to debug issues involving SQL behavior or the
     * performance and scalability of the proxy connections. The debug information
     * includes the text of SQL statements that you submit through the proxy. Thus,
     * only enable this setting when needed for debugging, and only when you have
     * security measures in place to safeguard any sensitive information that appears
     * in the logs.</p>
     */
    inline void SetDebugLogging(bool value) { m_debugLoggingHasBeenSet = true; m_debugLogging = value; }

    /**
     * <p>Whether the proxy includes detailed information about SQL statements in its
     * logs. This information helps you to debug issues involving SQL behavior or the
     * performance and scalability of the proxy connections. The debug information
     * includes the text of SQL statements that you submit through the proxy. Thus,
     * only enable this setting when needed for debugging, and only when you have
     * security measures in place to safeguard any sensitive information that appears
     * in the logs.</p>
     */
    inline DBProxy& WithDebugLogging(bool value) { SetDebugLogging(value); return *this;}


    /**
     * <p>The date and time when the proxy was first created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedDate() const{ return m_createdDate; }

    /**
     * <p>The date and time when the proxy was first created.</p>
     */
    inline bool CreatedDateHasBeenSet() const { return m_createdDateHasBeenSet; }

    /**
     * <p>The date and time when the proxy was first created.</p>
     */
    inline void SetCreatedDate(const Aws::Utils::DateTime& value) { m_createdDateHasBeenSet = true; m_createdDate = value; }

    /**
     * <p>The date and time when the proxy was first created.</p>
     */
    inline void SetCreatedDate(Aws::Utils::DateTime&& value) { m_createdDateHasBeenSet = true; m_createdDate = std::move(value); }

    /**
     * <p>The date and time when the proxy was first created.</p>
     */
    inline DBProxy& WithCreatedDate(const Aws::Utils::DateTime& value) { SetCreatedDate(value); return *this;}

    /**
     * <p>The date and time when the proxy was first created.</p>
     */
    inline DBProxy& WithCreatedDate(Aws::Utils::DateTime&& value) { SetCreatedDate(std::move(value)); return *this;}


    /**
     * <p>The date and time when the proxy was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedDate() const{ return m_updatedDate; }

    /**
     * <p>The date and time when the proxy was last updated.</p>
     */
    inline bool UpdatedDateHasBeenSet() const { return m_updatedDateHasBeenSet; }

    /**
     * <p>The date and time when the proxy was last updated.</p>
     */
    inline void SetUpdatedDate(const Aws::Utils::DateTime& value) { m_updatedDateHasBeenSet = true; m_updatedDate = value; }

    /**
     * <p>The date and time when the proxy was last updated.</p>
     */
    inline void SetUpdatedDate(Aws::Utils::DateTime&& value) { m_updatedDateHasBeenSet = true; m_updatedDate = std::move(value); }

    /**
     * <p>The date and time when the proxy was last updated.</p>
     */
    inline DBProxy& WithUpdatedDate(const Aws::Utils::DateTime& value) { SetUpdatedDate(value); return *this;}

    /**
     * <p>The date and time when the proxy was last updated.</p>
     */
    inline DBProxy& WithUpdatedDate(Aws::Utils::DateTime&& value) { SetUpdatedDate(std::move(value)); return *this;}

  private:

    Aws::String m_dBProxyName;
    bool m_dBProxyNameHasBeenSet = false;

    Aws::String m_dBProxyArn;
    bool m_dBProxyArnHasBeenSet = false;

    DBProxyStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_engineFamily;
    bool m_engineFamilyHasBeenSet = false;

    Aws::String m_vpcId;
    bool m_vpcIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_vpcSecurityGroupIds;
    bool m_vpcSecurityGroupIdsHasBeenSet = false;

    Aws::Vector<Aws::String> m_vpcSubnetIds;
    bool m_vpcSubnetIdsHasBeenSet = false;

    Aws::Vector<UserAuthConfigInfo> m_auth;
    bool m_authHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    Aws::String m_endpoint;
    bool m_endpointHasBeenSet = false;

    bool m_requireTLS;
    bool m_requireTLSHasBeenSet = false;

    int m_idleClientTimeout;
    bool m_idleClientTimeoutHasBeenSet = false;

    bool m_debugLogging;
    bool m_debugLoggingHasBeenSet = false;

    Aws::Utils::DateTime m_createdDate;
    bool m_createdDateHasBeenSet = false;

    Aws::Utils::DateTime m_updatedDate;
    bool m_updatedDateHasBeenSet = false;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
