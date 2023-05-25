/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/rds/RDSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/rds/model/EngineFamily.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/rds/model/UserAuthConfig.h>
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
  class CreateDBProxyRequest : public RDSRequest
  {
  public:
    AWS_RDS_API CreateDBProxyRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateDBProxy"; }

    AWS_RDS_API Aws::String SerializePayload() const override;

  protected:
    AWS_RDS_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The identifier for the proxy. This name must be unique for all proxies owned
     * by your Amazon Web Services account in the specified Amazon Web Services Region.
     * An identifier must begin with a letter and must contain only ASCII letters,
     * digits, and hyphens; it can't end with a hyphen or contain two consecutive
     * hyphens.</p>
     */
    inline const Aws::String& GetDBProxyName() const{ return m_dBProxyName; }

    /**
     * <p>The identifier for the proxy. This name must be unique for all proxies owned
     * by your Amazon Web Services account in the specified Amazon Web Services Region.
     * An identifier must begin with a letter and must contain only ASCII letters,
     * digits, and hyphens; it can't end with a hyphen or contain two consecutive
     * hyphens.</p>
     */
    inline bool DBProxyNameHasBeenSet() const { return m_dBProxyNameHasBeenSet; }

    /**
     * <p>The identifier for the proxy. This name must be unique for all proxies owned
     * by your Amazon Web Services account in the specified Amazon Web Services Region.
     * An identifier must begin with a letter and must contain only ASCII letters,
     * digits, and hyphens; it can't end with a hyphen or contain two consecutive
     * hyphens.</p>
     */
    inline void SetDBProxyName(const Aws::String& value) { m_dBProxyNameHasBeenSet = true; m_dBProxyName = value; }

    /**
     * <p>The identifier for the proxy. This name must be unique for all proxies owned
     * by your Amazon Web Services account in the specified Amazon Web Services Region.
     * An identifier must begin with a letter and must contain only ASCII letters,
     * digits, and hyphens; it can't end with a hyphen or contain two consecutive
     * hyphens.</p>
     */
    inline void SetDBProxyName(Aws::String&& value) { m_dBProxyNameHasBeenSet = true; m_dBProxyName = std::move(value); }

    /**
     * <p>The identifier for the proxy. This name must be unique for all proxies owned
     * by your Amazon Web Services account in the specified Amazon Web Services Region.
     * An identifier must begin with a letter and must contain only ASCII letters,
     * digits, and hyphens; it can't end with a hyphen or contain two consecutive
     * hyphens.</p>
     */
    inline void SetDBProxyName(const char* value) { m_dBProxyNameHasBeenSet = true; m_dBProxyName.assign(value); }

    /**
     * <p>The identifier for the proxy. This name must be unique for all proxies owned
     * by your Amazon Web Services account in the specified Amazon Web Services Region.
     * An identifier must begin with a letter and must contain only ASCII letters,
     * digits, and hyphens; it can't end with a hyphen or contain two consecutive
     * hyphens.</p>
     */
    inline CreateDBProxyRequest& WithDBProxyName(const Aws::String& value) { SetDBProxyName(value); return *this;}

    /**
     * <p>The identifier for the proxy. This name must be unique for all proxies owned
     * by your Amazon Web Services account in the specified Amazon Web Services Region.
     * An identifier must begin with a letter and must contain only ASCII letters,
     * digits, and hyphens; it can't end with a hyphen or contain two consecutive
     * hyphens.</p>
     */
    inline CreateDBProxyRequest& WithDBProxyName(Aws::String&& value) { SetDBProxyName(std::move(value)); return *this;}

    /**
     * <p>The identifier for the proxy. This name must be unique for all proxies owned
     * by your Amazon Web Services account in the specified Amazon Web Services Region.
     * An identifier must begin with a letter and must contain only ASCII letters,
     * digits, and hyphens; it can't end with a hyphen or contain two consecutive
     * hyphens.</p>
     */
    inline CreateDBProxyRequest& WithDBProxyName(const char* value) { SetDBProxyName(value); return *this;}


    /**
     * <p>The kinds of databases that the proxy can connect to. This value determines
     * which database network protocol the proxy recognizes when it interprets network
     * traffic to and from the database. For Aurora MySQL, RDS for MariaDB, and RDS for
     * MySQL databases, specify <code>MYSQL</code>. For Aurora PostgreSQL and RDS for
     * PostgreSQL databases, specify <code>POSTGRESQL</code>. For RDS for Microsoft SQL
     * Server, specify <code>SQLSERVER</code>.</p>
     */
    inline const EngineFamily& GetEngineFamily() const{ return m_engineFamily; }

    /**
     * <p>The kinds of databases that the proxy can connect to. This value determines
     * which database network protocol the proxy recognizes when it interprets network
     * traffic to and from the database. For Aurora MySQL, RDS for MariaDB, and RDS for
     * MySQL databases, specify <code>MYSQL</code>. For Aurora PostgreSQL and RDS for
     * PostgreSQL databases, specify <code>POSTGRESQL</code>. For RDS for Microsoft SQL
     * Server, specify <code>SQLSERVER</code>.</p>
     */
    inline bool EngineFamilyHasBeenSet() const { return m_engineFamilyHasBeenSet; }

    /**
     * <p>The kinds of databases that the proxy can connect to. This value determines
     * which database network protocol the proxy recognizes when it interprets network
     * traffic to and from the database. For Aurora MySQL, RDS for MariaDB, and RDS for
     * MySQL databases, specify <code>MYSQL</code>. For Aurora PostgreSQL and RDS for
     * PostgreSQL databases, specify <code>POSTGRESQL</code>. For RDS for Microsoft SQL
     * Server, specify <code>SQLSERVER</code>.</p>
     */
    inline void SetEngineFamily(const EngineFamily& value) { m_engineFamilyHasBeenSet = true; m_engineFamily = value; }

    /**
     * <p>The kinds of databases that the proxy can connect to. This value determines
     * which database network protocol the proxy recognizes when it interprets network
     * traffic to and from the database. For Aurora MySQL, RDS for MariaDB, and RDS for
     * MySQL databases, specify <code>MYSQL</code>. For Aurora PostgreSQL and RDS for
     * PostgreSQL databases, specify <code>POSTGRESQL</code>. For RDS for Microsoft SQL
     * Server, specify <code>SQLSERVER</code>.</p>
     */
    inline void SetEngineFamily(EngineFamily&& value) { m_engineFamilyHasBeenSet = true; m_engineFamily = std::move(value); }

    /**
     * <p>The kinds of databases that the proxy can connect to. This value determines
     * which database network protocol the proxy recognizes when it interprets network
     * traffic to and from the database. For Aurora MySQL, RDS for MariaDB, and RDS for
     * MySQL databases, specify <code>MYSQL</code>. For Aurora PostgreSQL and RDS for
     * PostgreSQL databases, specify <code>POSTGRESQL</code>. For RDS for Microsoft SQL
     * Server, specify <code>SQLSERVER</code>.</p>
     */
    inline CreateDBProxyRequest& WithEngineFamily(const EngineFamily& value) { SetEngineFamily(value); return *this;}

    /**
     * <p>The kinds of databases that the proxy can connect to. This value determines
     * which database network protocol the proxy recognizes when it interprets network
     * traffic to and from the database. For Aurora MySQL, RDS for MariaDB, and RDS for
     * MySQL databases, specify <code>MYSQL</code>. For Aurora PostgreSQL and RDS for
     * PostgreSQL databases, specify <code>POSTGRESQL</code>. For RDS for Microsoft SQL
     * Server, specify <code>SQLSERVER</code>.</p>
     */
    inline CreateDBProxyRequest& WithEngineFamily(EngineFamily&& value) { SetEngineFamily(std::move(value)); return *this;}


    /**
     * <p>The authorization mechanism that the proxy uses.</p>
     */
    inline const Aws::Vector<UserAuthConfig>& GetAuth() const{ return m_auth; }

    /**
     * <p>The authorization mechanism that the proxy uses.</p>
     */
    inline bool AuthHasBeenSet() const { return m_authHasBeenSet; }

    /**
     * <p>The authorization mechanism that the proxy uses.</p>
     */
    inline void SetAuth(const Aws::Vector<UserAuthConfig>& value) { m_authHasBeenSet = true; m_auth = value; }

    /**
     * <p>The authorization mechanism that the proxy uses.</p>
     */
    inline void SetAuth(Aws::Vector<UserAuthConfig>&& value) { m_authHasBeenSet = true; m_auth = std::move(value); }

    /**
     * <p>The authorization mechanism that the proxy uses.</p>
     */
    inline CreateDBProxyRequest& WithAuth(const Aws::Vector<UserAuthConfig>& value) { SetAuth(value); return *this;}

    /**
     * <p>The authorization mechanism that the proxy uses.</p>
     */
    inline CreateDBProxyRequest& WithAuth(Aws::Vector<UserAuthConfig>&& value) { SetAuth(std::move(value)); return *this;}

    /**
     * <p>The authorization mechanism that the proxy uses.</p>
     */
    inline CreateDBProxyRequest& AddAuth(const UserAuthConfig& value) { m_authHasBeenSet = true; m_auth.push_back(value); return *this; }

    /**
     * <p>The authorization mechanism that the proxy uses.</p>
     */
    inline CreateDBProxyRequest& AddAuth(UserAuthConfig&& value) { m_authHasBeenSet = true; m_auth.push_back(std::move(value)); return *this; }


    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that the proxy uses to access
     * secrets in Amazon Web Services Secrets Manager.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that the proxy uses to access
     * secrets in Amazon Web Services Secrets Manager.</p>
     */
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that the proxy uses to access
     * secrets in Amazon Web Services Secrets Manager.</p>
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that the proxy uses to access
     * secrets in Amazon Web Services Secrets Manager.</p>
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that the proxy uses to access
     * secrets in Amazon Web Services Secrets Manager.</p>
     */
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that the proxy uses to access
     * secrets in Amazon Web Services Secrets Manager.</p>
     */
    inline CreateDBProxyRequest& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that the proxy uses to access
     * secrets in Amazon Web Services Secrets Manager.</p>
     */
    inline CreateDBProxyRequest& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that the proxy uses to access
     * secrets in Amazon Web Services Secrets Manager.</p>
     */
    inline CreateDBProxyRequest& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}


    /**
     * <p>One or more VPC subnet IDs to associate with the new proxy.</p>
     */
    inline const Aws::Vector<Aws::String>& GetVpcSubnetIds() const{ return m_vpcSubnetIds; }

    /**
     * <p>One or more VPC subnet IDs to associate with the new proxy.</p>
     */
    inline bool VpcSubnetIdsHasBeenSet() const { return m_vpcSubnetIdsHasBeenSet; }

    /**
     * <p>One or more VPC subnet IDs to associate with the new proxy.</p>
     */
    inline void SetVpcSubnetIds(const Aws::Vector<Aws::String>& value) { m_vpcSubnetIdsHasBeenSet = true; m_vpcSubnetIds = value; }

    /**
     * <p>One or more VPC subnet IDs to associate with the new proxy.</p>
     */
    inline void SetVpcSubnetIds(Aws::Vector<Aws::String>&& value) { m_vpcSubnetIdsHasBeenSet = true; m_vpcSubnetIds = std::move(value); }

    /**
     * <p>One or more VPC subnet IDs to associate with the new proxy.</p>
     */
    inline CreateDBProxyRequest& WithVpcSubnetIds(const Aws::Vector<Aws::String>& value) { SetVpcSubnetIds(value); return *this;}

    /**
     * <p>One or more VPC subnet IDs to associate with the new proxy.</p>
     */
    inline CreateDBProxyRequest& WithVpcSubnetIds(Aws::Vector<Aws::String>&& value) { SetVpcSubnetIds(std::move(value)); return *this;}

    /**
     * <p>One or more VPC subnet IDs to associate with the new proxy.</p>
     */
    inline CreateDBProxyRequest& AddVpcSubnetIds(const Aws::String& value) { m_vpcSubnetIdsHasBeenSet = true; m_vpcSubnetIds.push_back(value); return *this; }

    /**
     * <p>One or more VPC subnet IDs to associate with the new proxy.</p>
     */
    inline CreateDBProxyRequest& AddVpcSubnetIds(Aws::String&& value) { m_vpcSubnetIdsHasBeenSet = true; m_vpcSubnetIds.push_back(std::move(value)); return *this; }

    /**
     * <p>One or more VPC subnet IDs to associate with the new proxy.</p>
     */
    inline CreateDBProxyRequest& AddVpcSubnetIds(const char* value) { m_vpcSubnetIdsHasBeenSet = true; m_vpcSubnetIds.push_back(value); return *this; }


    /**
     * <p>One or more VPC security group IDs to associate with the new proxy.</p>
     */
    inline const Aws::Vector<Aws::String>& GetVpcSecurityGroupIds() const{ return m_vpcSecurityGroupIds; }

    /**
     * <p>One or more VPC security group IDs to associate with the new proxy.</p>
     */
    inline bool VpcSecurityGroupIdsHasBeenSet() const { return m_vpcSecurityGroupIdsHasBeenSet; }

    /**
     * <p>One or more VPC security group IDs to associate with the new proxy.</p>
     */
    inline void SetVpcSecurityGroupIds(const Aws::Vector<Aws::String>& value) { m_vpcSecurityGroupIdsHasBeenSet = true; m_vpcSecurityGroupIds = value; }

    /**
     * <p>One or more VPC security group IDs to associate with the new proxy.</p>
     */
    inline void SetVpcSecurityGroupIds(Aws::Vector<Aws::String>&& value) { m_vpcSecurityGroupIdsHasBeenSet = true; m_vpcSecurityGroupIds = std::move(value); }

    /**
     * <p>One or more VPC security group IDs to associate with the new proxy.</p>
     */
    inline CreateDBProxyRequest& WithVpcSecurityGroupIds(const Aws::Vector<Aws::String>& value) { SetVpcSecurityGroupIds(value); return *this;}

    /**
     * <p>One or more VPC security group IDs to associate with the new proxy.</p>
     */
    inline CreateDBProxyRequest& WithVpcSecurityGroupIds(Aws::Vector<Aws::String>&& value) { SetVpcSecurityGroupIds(std::move(value)); return *this;}

    /**
     * <p>One or more VPC security group IDs to associate with the new proxy.</p>
     */
    inline CreateDBProxyRequest& AddVpcSecurityGroupIds(const Aws::String& value) { m_vpcSecurityGroupIdsHasBeenSet = true; m_vpcSecurityGroupIds.push_back(value); return *this; }

    /**
     * <p>One or more VPC security group IDs to associate with the new proxy.</p>
     */
    inline CreateDBProxyRequest& AddVpcSecurityGroupIds(Aws::String&& value) { m_vpcSecurityGroupIdsHasBeenSet = true; m_vpcSecurityGroupIds.push_back(std::move(value)); return *this; }

    /**
     * <p>One or more VPC security group IDs to associate with the new proxy.</p>
     */
    inline CreateDBProxyRequest& AddVpcSecurityGroupIds(const char* value) { m_vpcSecurityGroupIdsHasBeenSet = true; m_vpcSecurityGroupIds.push_back(value); return *this; }


    /**
     * <p>A Boolean parameter that specifies whether Transport Layer Security (TLS)
     * encryption is required for connections to the proxy. By enabling this setting,
     * you can enforce encrypted TLS connections to the proxy.</p>
     */
    inline bool GetRequireTLS() const{ return m_requireTLS; }

    /**
     * <p>A Boolean parameter that specifies whether Transport Layer Security (TLS)
     * encryption is required for connections to the proxy. By enabling this setting,
     * you can enforce encrypted TLS connections to the proxy.</p>
     */
    inline bool RequireTLSHasBeenSet() const { return m_requireTLSHasBeenSet; }

    /**
     * <p>A Boolean parameter that specifies whether Transport Layer Security (TLS)
     * encryption is required for connections to the proxy. By enabling this setting,
     * you can enforce encrypted TLS connections to the proxy.</p>
     */
    inline void SetRequireTLS(bool value) { m_requireTLSHasBeenSet = true; m_requireTLS = value; }

    /**
     * <p>A Boolean parameter that specifies whether Transport Layer Security (TLS)
     * encryption is required for connections to the proxy. By enabling this setting,
     * you can enforce encrypted TLS connections to the proxy.</p>
     */
    inline CreateDBProxyRequest& WithRequireTLS(bool value) { SetRequireTLS(value); return *this;}


    /**
     * <p>The number of seconds that a connection to the proxy can be inactive before
     * the proxy disconnects it. You can set this value higher or lower than the
     * connection timeout limit for the associated database.</p>
     */
    inline int GetIdleClientTimeout() const{ return m_idleClientTimeout; }

    /**
     * <p>The number of seconds that a connection to the proxy can be inactive before
     * the proxy disconnects it. You can set this value higher or lower than the
     * connection timeout limit for the associated database.</p>
     */
    inline bool IdleClientTimeoutHasBeenSet() const { return m_idleClientTimeoutHasBeenSet; }

    /**
     * <p>The number of seconds that a connection to the proxy can be inactive before
     * the proxy disconnects it. You can set this value higher or lower than the
     * connection timeout limit for the associated database.</p>
     */
    inline void SetIdleClientTimeout(int value) { m_idleClientTimeoutHasBeenSet = true; m_idleClientTimeout = value; }

    /**
     * <p>The number of seconds that a connection to the proxy can be inactive before
     * the proxy disconnects it. You can set this value higher or lower than the
     * connection timeout limit for the associated database.</p>
     */
    inline CreateDBProxyRequest& WithIdleClientTimeout(int value) { SetIdleClientTimeout(value); return *this;}


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
    inline CreateDBProxyRequest& WithDebugLogging(bool value) { SetDebugLogging(value); return *this;}


    /**
     * <p>An optional set of key-value pairs to associate arbitrary data of your
     * choosing with the proxy.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>An optional set of key-value pairs to associate arbitrary data of your
     * choosing with the proxy.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>An optional set of key-value pairs to associate arbitrary data of your
     * choosing with the proxy.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>An optional set of key-value pairs to associate arbitrary data of your
     * choosing with the proxy.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>An optional set of key-value pairs to associate arbitrary data of your
     * choosing with the proxy.</p>
     */
    inline CreateDBProxyRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>An optional set of key-value pairs to associate arbitrary data of your
     * choosing with the proxy.</p>
     */
    inline CreateDBProxyRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>An optional set of key-value pairs to associate arbitrary data of your
     * choosing with the proxy.</p>
     */
    inline CreateDBProxyRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>An optional set of key-value pairs to associate arbitrary data of your
     * choosing with the proxy.</p>
     */
    inline CreateDBProxyRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_dBProxyName;
    bool m_dBProxyNameHasBeenSet = false;

    EngineFamily m_engineFamily;
    bool m_engineFamilyHasBeenSet = false;

    Aws::Vector<UserAuthConfig> m_auth;
    bool m_authHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    Aws::Vector<Aws::String> m_vpcSubnetIds;
    bool m_vpcSubnetIdsHasBeenSet = false;

    Aws::Vector<Aws::String> m_vpcSecurityGroupIds;
    bool m_vpcSecurityGroupIdsHasBeenSet = false;

    bool m_requireTLS;
    bool m_requireTLSHasBeenSet = false;

    int m_idleClientTimeout;
    bool m_idleClientTimeoutHasBeenSet = false;

    bool m_debugLogging;
    bool m_debugLoggingHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
