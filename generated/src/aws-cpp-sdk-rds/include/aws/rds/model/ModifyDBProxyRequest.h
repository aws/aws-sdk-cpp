/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/rds/RDSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/rds/model/DefaultAuthScheme.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/rds/model/UserAuthConfig.h>
#include <utility>

namespace Aws
{
namespace RDS
{
namespace Model
{

  /**
   */
  class ModifyDBProxyRequest : public RDSRequest
  {
  public:
    AWS_RDS_API ModifyDBProxyRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ModifyDBProxy"; }

    AWS_RDS_API Aws::String SerializePayload() const override;

  protected:
    AWS_RDS_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The identifier for the <code>DBProxy</code> to modify.</p>
     */
    inline const Aws::String& GetDBProxyName() const { return m_dBProxyName; }
    inline bool DBProxyNameHasBeenSet() const { return m_dBProxyNameHasBeenSet; }
    template<typename DBProxyNameT = Aws::String>
    void SetDBProxyName(DBProxyNameT&& value) { m_dBProxyNameHasBeenSet = true; m_dBProxyName = std::forward<DBProxyNameT>(value); }
    template<typename DBProxyNameT = Aws::String>
    ModifyDBProxyRequest& WithDBProxyName(DBProxyNameT&& value) { SetDBProxyName(std::forward<DBProxyNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The new identifier for the <code>DBProxy</code>. An identifier must begin
     * with a letter and must contain only ASCII letters, digits, and hyphens; it can't
     * end with a hyphen or contain two consecutive hyphens.</p>
     */
    inline const Aws::String& GetNewDBProxyName() const { return m_newDBProxyName; }
    inline bool NewDBProxyNameHasBeenSet() const { return m_newDBProxyNameHasBeenSet; }
    template<typename NewDBProxyNameT = Aws::String>
    void SetNewDBProxyName(NewDBProxyNameT&& value) { m_newDBProxyNameHasBeenSet = true; m_newDBProxyName = std::forward<NewDBProxyNameT>(value); }
    template<typename NewDBProxyNameT = Aws::String>
    ModifyDBProxyRequest& WithNewDBProxyName(NewDBProxyNameT&& value) { SetNewDBProxyName(std::forward<NewDBProxyNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The default authentication scheme that the proxy uses for client connections
     * to the proxy and connections from the proxy to the underlying database. Valid
     * values are <code>NONE</code> and <code>IAM_AUTH</code>. When set to
     * <code>IAM_AUTH</code>, the proxy uses end-to-end IAM authentication to connect
     * to the database.</p>
     */
    inline DefaultAuthScheme GetDefaultAuthScheme() const { return m_defaultAuthScheme; }
    inline bool DefaultAuthSchemeHasBeenSet() const { return m_defaultAuthSchemeHasBeenSet; }
    inline void SetDefaultAuthScheme(DefaultAuthScheme value) { m_defaultAuthSchemeHasBeenSet = true; m_defaultAuthScheme = value; }
    inline ModifyDBProxyRequest& WithDefaultAuthScheme(DefaultAuthScheme value) { SetDefaultAuthScheme(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The new authentication settings for the <code>DBProxy</code>.</p>
     */
    inline const Aws::Vector<UserAuthConfig>& GetAuth() const { return m_auth; }
    inline bool AuthHasBeenSet() const { return m_authHasBeenSet; }
    template<typename AuthT = Aws::Vector<UserAuthConfig>>
    void SetAuth(AuthT&& value) { m_authHasBeenSet = true; m_auth = std::forward<AuthT>(value); }
    template<typename AuthT = Aws::Vector<UserAuthConfig>>
    ModifyDBProxyRequest& WithAuth(AuthT&& value) { SetAuth(std::forward<AuthT>(value)); return *this;}
    template<typename AuthT = UserAuthConfig>
    ModifyDBProxyRequest& AddAuth(AuthT&& value) { m_authHasBeenSet = true; m_auth.emplace_back(std::forward<AuthT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Whether Transport Layer Security (TLS) encryption is required for connections
     * to the proxy. By enabling this setting, you can enforce encrypted TLS
     * connections to the proxy, even if the associated database doesn't use TLS.</p>
     */
    inline bool GetRequireTLS() const { return m_requireTLS; }
    inline bool RequireTLSHasBeenSet() const { return m_requireTLSHasBeenSet; }
    inline void SetRequireTLS(bool value) { m_requireTLSHasBeenSet = true; m_requireTLS = value; }
    inline ModifyDBProxyRequest& WithRequireTLS(bool value) { SetRequireTLS(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of seconds that a connection to the proxy can be inactive before
     * the proxy disconnects it. You can set this value higher or lower than the
     * connection timeout limit for the associated database.</p>
     */
    inline int GetIdleClientTimeout() const { return m_idleClientTimeout; }
    inline bool IdleClientTimeoutHasBeenSet() const { return m_idleClientTimeoutHasBeenSet; }
    inline void SetIdleClientTimeout(int value) { m_idleClientTimeoutHasBeenSet = true; m_idleClientTimeout = value; }
    inline ModifyDBProxyRequest& WithIdleClientTimeout(int value) { SetIdleClientTimeout(value); return *this;}
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
    inline ModifyDBProxyRequest& WithDebugLogging(bool value) { SetDebugLogging(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that the proxy uses to access
     * secrets in Amazon Web Services Secrets Manager.</p>
     */
    inline const Aws::String& GetRoleArn() const { return m_roleArn; }
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
    template<typename RoleArnT = Aws::String>
    void SetRoleArn(RoleArnT&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::forward<RoleArnT>(value); }
    template<typename RoleArnT = Aws::String>
    ModifyDBProxyRequest& WithRoleArn(RoleArnT&& value) { SetRoleArn(std::forward<RoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The new list of security groups for the <code>DBProxy</code>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSecurityGroups() const { return m_securityGroups; }
    inline bool SecurityGroupsHasBeenSet() const { return m_securityGroupsHasBeenSet; }
    template<typename SecurityGroupsT = Aws::Vector<Aws::String>>
    void SetSecurityGroups(SecurityGroupsT&& value) { m_securityGroupsHasBeenSet = true; m_securityGroups = std::forward<SecurityGroupsT>(value); }
    template<typename SecurityGroupsT = Aws::Vector<Aws::String>>
    ModifyDBProxyRequest& WithSecurityGroups(SecurityGroupsT&& value) { SetSecurityGroups(std::forward<SecurityGroupsT>(value)); return *this;}
    template<typename SecurityGroupsT = Aws::String>
    ModifyDBProxyRequest& AddSecurityGroups(SecurityGroupsT&& value) { m_securityGroupsHasBeenSet = true; m_securityGroups.emplace_back(std::forward<SecurityGroupsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_dBProxyName;
    bool m_dBProxyNameHasBeenSet = false;

    Aws::String m_newDBProxyName;
    bool m_newDBProxyNameHasBeenSet = false;

    DefaultAuthScheme m_defaultAuthScheme{DefaultAuthScheme::NOT_SET};
    bool m_defaultAuthSchemeHasBeenSet = false;

    Aws::Vector<UserAuthConfig> m_auth;
    bool m_authHasBeenSet = false;

    bool m_requireTLS{false};
    bool m_requireTLSHasBeenSet = false;

    int m_idleClientTimeout{0};
    bool m_idleClientTimeoutHasBeenSet = false;

    bool m_debugLogging{false};
    bool m_debugLoggingHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    Aws::Vector<Aws::String> m_securityGroups;
    bool m_securityGroupsHasBeenSet = false;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
