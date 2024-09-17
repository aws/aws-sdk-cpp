/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/rds/RDSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
    AWS_RDS_API ModifyDBProxyRequest();

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
    inline const Aws::String& GetDBProxyName() const{ return m_dBProxyName; }
    inline bool DBProxyNameHasBeenSet() const { return m_dBProxyNameHasBeenSet; }
    inline void SetDBProxyName(const Aws::String& value) { m_dBProxyNameHasBeenSet = true; m_dBProxyName = value; }
    inline void SetDBProxyName(Aws::String&& value) { m_dBProxyNameHasBeenSet = true; m_dBProxyName = std::move(value); }
    inline void SetDBProxyName(const char* value) { m_dBProxyNameHasBeenSet = true; m_dBProxyName.assign(value); }
    inline ModifyDBProxyRequest& WithDBProxyName(const Aws::String& value) { SetDBProxyName(value); return *this;}
    inline ModifyDBProxyRequest& WithDBProxyName(Aws::String&& value) { SetDBProxyName(std::move(value)); return *this;}
    inline ModifyDBProxyRequest& WithDBProxyName(const char* value) { SetDBProxyName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The new identifier for the <code>DBProxy</code>. An identifier must begin
     * with a letter and must contain only ASCII letters, digits, and hyphens; it can't
     * end with a hyphen or contain two consecutive hyphens.</p>
     */
    inline const Aws::String& GetNewDBProxyName() const{ return m_newDBProxyName; }
    inline bool NewDBProxyNameHasBeenSet() const { return m_newDBProxyNameHasBeenSet; }
    inline void SetNewDBProxyName(const Aws::String& value) { m_newDBProxyNameHasBeenSet = true; m_newDBProxyName = value; }
    inline void SetNewDBProxyName(Aws::String&& value) { m_newDBProxyNameHasBeenSet = true; m_newDBProxyName = std::move(value); }
    inline void SetNewDBProxyName(const char* value) { m_newDBProxyNameHasBeenSet = true; m_newDBProxyName.assign(value); }
    inline ModifyDBProxyRequest& WithNewDBProxyName(const Aws::String& value) { SetNewDBProxyName(value); return *this;}
    inline ModifyDBProxyRequest& WithNewDBProxyName(Aws::String&& value) { SetNewDBProxyName(std::move(value)); return *this;}
    inline ModifyDBProxyRequest& WithNewDBProxyName(const char* value) { SetNewDBProxyName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The new authentication settings for the <code>DBProxy</code>.</p>
     */
    inline const Aws::Vector<UserAuthConfig>& GetAuth() const{ return m_auth; }
    inline bool AuthHasBeenSet() const { return m_authHasBeenSet; }
    inline void SetAuth(const Aws::Vector<UserAuthConfig>& value) { m_authHasBeenSet = true; m_auth = value; }
    inline void SetAuth(Aws::Vector<UserAuthConfig>&& value) { m_authHasBeenSet = true; m_auth = std::move(value); }
    inline ModifyDBProxyRequest& WithAuth(const Aws::Vector<UserAuthConfig>& value) { SetAuth(value); return *this;}
    inline ModifyDBProxyRequest& WithAuth(Aws::Vector<UserAuthConfig>&& value) { SetAuth(std::move(value)); return *this;}
    inline ModifyDBProxyRequest& AddAuth(const UserAuthConfig& value) { m_authHasBeenSet = true; m_auth.push_back(value); return *this; }
    inline ModifyDBProxyRequest& AddAuth(UserAuthConfig&& value) { m_authHasBeenSet = true; m_auth.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Whether Transport Layer Security (TLS) encryption is required for connections
     * to the proxy. By enabling this setting, you can enforce encrypted TLS
     * connections to the proxy, even if the associated database doesn't use TLS.</p>
     */
    inline bool GetRequireTLS() const{ return m_requireTLS; }
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
    inline int GetIdleClientTimeout() const{ return m_idleClientTimeout; }
    inline bool IdleClientTimeoutHasBeenSet() const { return m_idleClientTimeoutHasBeenSet; }
    inline void SetIdleClientTimeout(int value) { m_idleClientTimeoutHasBeenSet = true; m_idleClientTimeout = value; }
    inline ModifyDBProxyRequest& WithIdleClientTimeout(int value) { SetIdleClientTimeout(value); return *this;}
    ///@}

    ///@{
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
    inline bool DebugLoggingHasBeenSet() const { return m_debugLoggingHasBeenSet; }
    inline void SetDebugLogging(bool value) { m_debugLoggingHasBeenSet = true; m_debugLogging = value; }
    inline ModifyDBProxyRequest& WithDebugLogging(bool value) { SetDebugLogging(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that the proxy uses to access
     * secrets in Amazon Web Services Secrets Manager.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }
    inline ModifyDBProxyRequest& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}
    inline ModifyDBProxyRequest& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}
    inline ModifyDBProxyRequest& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The new list of security groups for the <code>DBProxy</code>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSecurityGroups() const{ return m_securityGroups; }
    inline bool SecurityGroupsHasBeenSet() const { return m_securityGroupsHasBeenSet; }
    inline void SetSecurityGroups(const Aws::Vector<Aws::String>& value) { m_securityGroupsHasBeenSet = true; m_securityGroups = value; }
    inline void SetSecurityGroups(Aws::Vector<Aws::String>&& value) { m_securityGroupsHasBeenSet = true; m_securityGroups = std::move(value); }
    inline ModifyDBProxyRequest& WithSecurityGroups(const Aws::Vector<Aws::String>& value) { SetSecurityGroups(value); return *this;}
    inline ModifyDBProxyRequest& WithSecurityGroups(Aws::Vector<Aws::String>&& value) { SetSecurityGroups(std::move(value)); return *this;}
    inline ModifyDBProxyRequest& AddSecurityGroups(const Aws::String& value) { m_securityGroupsHasBeenSet = true; m_securityGroups.push_back(value); return *this; }
    inline ModifyDBProxyRequest& AddSecurityGroups(Aws::String&& value) { m_securityGroupsHasBeenSet = true; m_securityGroups.push_back(std::move(value)); return *this; }
    inline ModifyDBProxyRequest& AddSecurityGroups(const char* value) { m_securityGroupsHasBeenSet = true; m_securityGroups.push_back(value); return *this; }
    ///@}
  private:

    Aws::String m_dBProxyName;
    bool m_dBProxyNameHasBeenSet = false;

    Aws::String m_newDBProxyName;
    bool m_newDBProxyNameHasBeenSet = false;

    Aws::Vector<UserAuthConfig> m_auth;
    bool m_authHasBeenSet = false;

    bool m_requireTLS;
    bool m_requireTLSHasBeenSet = false;

    int m_idleClientTimeout;
    bool m_idleClientTimeoutHasBeenSet = false;

    bool m_debugLogging;
    bool m_debugLoggingHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    Aws::Vector<Aws::String> m_securityGroups;
    bool m_securityGroupsHasBeenSet = false;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
