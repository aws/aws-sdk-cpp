/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift-data/RedshiftDataAPIService_EXPORTS.h>
#include <aws/redshift-data/RedshiftDataAPIServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/redshift-data/model/ResultFormatString.h>
#include <aws/redshift-data/model/SqlParameter.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace RedshiftDataAPIService
{
namespace Model
{

  /**
   */
  class ExecuteStatementRequest : public RedshiftDataAPIServiceRequest
  {
  public:
    AWS_REDSHIFTDATAAPISERVICE_API ExecuteStatementRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ExecuteStatement"; }

    AWS_REDSHIFTDATAAPISERVICE_API Aws::String SerializePayload() const override;

    AWS_REDSHIFTDATAAPISERVICE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }
    inline ExecuteStatementRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}
    inline ExecuteStatementRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}
    inline ExecuteStatementRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The cluster identifier. This parameter is required when connecting to a
     * cluster and authenticating using either Secrets Manager or temporary
     * credentials. </p>
     */
    inline const Aws::String& GetClusterIdentifier() const{ return m_clusterIdentifier; }
    inline bool ClusterIdentifierHasBeenSet() const { return m_clusterIdentifierHasBeenSet; }
    inline void SetClusterIdentifier(const Aws::String& value) { m_clusterIdentifierHasBeenSet = true; m_clusterIdentifier = value; }
    inline void SetClusterIdentifier(Aws::String&& value) { m_clusterIdentifierHasBeenSet = true; m_clusterIdentifier = std::move(value); }
    inline void SetClusterIdentifier(const char* value) { m_clusterIdentifierHasBeenSet = true; m_clusterIdentifier.assign(value); }
    inline ExecuteStatementRequest& WithClusterIdentifier(const Aws::String& value) { SetClusterIdentifier(value); return *this;}
    inline ExecuteStatementRequest& WithClusterIdentifier(Aws::String&& value) { SetClusterIdentifier(std::move(value)); return *this;}
    inline ExecuteStatementRequest& WithClusterIdentifier(const char* value) { SetClusterIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the database. This parameter is required when authenticating
     * using either Secrets Manager or temporary credentials. </p>
     */
    inline const Aws::String& GetDatabase() const{ return m_database; }
    inline bool DatabaseHasBeenSet() const { return m_databaseHasBeenSet; }
    inline void SetDatabase(const Aws::String& value) { m_databaseHasBeenSet = true; m_database = value; }
    inline void SetDatabase(Aws::String&& value) { m_databaseHasBeenSet = true; m_database = std::move(value); }
    inline void SetDatabase(const char* value) { m_databaseHasBeenSet = true; m_database.assign(value); }
    inline ExecuteStatementRequest& WithDatabase(const Aws::String& value) { SetDatabase(value); return *this;}
    inline ExecuteStatementRequest& WithDatabase(Aws::String&& value) { SetDatabase(std::move(value)); return *this;}
    inline ExecuteStatementRequest& WithDatabase(const char* value) { SetDatabase(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The database user name. This parameter is required when connecting to a
     * cluster as a database user and authenticating using temporary credentials. </p>
     */
    inline const Aws::String& GetDbUser() const{ return m_dbUser; }
    inline bool DbUserHasBeenSet() const { return m_dbUserHasBeenSet; }
    inline void SetDbUser(const Aws::String& value) { m_dbUserHasBeenSet = true; m_dbUser = value; }
    inline void SetDbUser(Aws::String&& value) { m_dbUserHasBeenSet = true; m_dbUser = std::move(value); }
    inline void SetDbUser(const char* value) { m_dbUserHasBeenSet = true; m_dbUser.assign(value); }
    inline ExecuteStatementRequest& WithDbUser(const Aws::String& value) { SetDbUser(value); return *this;}
    inline ExecuteStatementRequest& WithDbUser(Aws::String&& value) { SetDbUser(std::move(value)); return *this;}
    inline ExecuteStatementRequest& WithDbUser(const char* value) { SetDbUser(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The parameters for the SQL statement.</p>
     */
    inline const Aws::Vector<SqlParameter>& GetParameters() const{ return m_parameters; }
    inline bool ParametersHasBeenSet() const { return m_parametersHasBeenSet; }
    inline void SetParameters(const Aws::Vector<SqlParameter>& value) { m_parametersHasBeenSet = true; m_parameters = value; }
    inline void SetParameters(Aws::Vector<SqlParameter>&& value) { m_parametersHasBeenSet = true; m_parameters = std::move(value); }
    inline ExecuteStatementRequest& WithParameters(const Aws::Vector<SqlParameter>& value) { SetParameters(value); return *this;}
    inline ExecuteStatementRequest& WithParameters(Aws::Vector<SqlParameter>&& value) { SetParameters(std::move(value)); return *this;}
    inline ExecuteStatementRequest& AddParameters(const SqlParameter& value) { m_parametersHasBeenSet = true; m_parameters.push_back(value); return *this; }
    inline ExecuteStatementRequest& AddParameters(SqlParameter&& value) { m_parametersHasBeenSet = true; m_parameters.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The data format of the result of the SQL statement. If no format is
     * specified, the default is JSON.</p>
     */
    inline const ResultFormatString& GetResultFormat() const{ return m_resultFormat; }
    inline bool ResultFormatHasBeenSet() const { return m_resultFormatHasBeenSet; }
    inline void SetResultFormat(const ResultFormatString& value) { m_resultFormatHasBeenSet = true; m_resultFormat = value; }
    inline void SetResultFormat(ResultFormatString&& value) { m_resultFormatHasBeenSet = true; m_resultFormat = std::move(value); }
    inline ExecuteStatementRequest& WithResultFormat(const ResultFormatString& value) { SetResultFormat(value); return *this;}
    inline ExecuteStatementRequest& WithResultFormat(ResultFormatString&& value) { SetResultFormat(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name or ARN of the secret that enables access to the database. This
     * parameter is required when authenticating using Secrets Manager. </p>
     */
    inline const Aws::String& GetSecretArn() const{ return m_secretArn; }
    inline bool SecretArnHasBeenSet() const { return m_secretArnHasBeenSet; }
    inline void SetSecretArn(const Aws::String& value) { m_secretArnHasBeenSet = true; m_secretArn = value; }
    inline void SetSecretArn(Aws::String&& value) { m_secretArnHasBeenSet = true; m_secretArn = std::move(value); }
    inline void SetSecretArn(const char* value) { m_secretArnHasBeenSet = true; m_secretArn.assign(value); }
    inline ExecuteStatementRequest& WithSecretArn(const Aws::String& value) { SetSecretArn(value); return *this;}
    inline ExecuteStatementRequest& WithSecretArn(Aws::String&& value) { SetSecretArn(std::move(value)); return *this;}
    inline ExecuteStatementRequest& WithSecretArn(const char* value) { SetSecretArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The session identifier of the query.</p>
     */
    inline const Aws::String& GetSessionId() const{ return m_sessionId; }
    inline bool SessionIdHasBeenSet() const { return m_sessionIdHasBeenSet; }
    inline void SetSessionId(const Aws::String& value) { m_sessionIdHasBeenSet = true; m_sessionId = value; }
    inline void SetSessionId(Aws::String&& value) { m_sessionIdHasBeenSet = true; m_sessionId = std::move(value); }
    inline void SetSessionId(const char* value) { m_sessionIdHasBeenSet = true; m_sessionId.assign(value); }
    inline ExecuteStatementRequest& WithSessionId(const Aws::String& value) { SetSessionId(value); return *this;}
    inline ExecuteStatementRequest& WithSessionId(Aws::String&& value) { SetSessionId(std::move(value)); return *this;}
    inline ExecuteStatementRequest& WithSessionId(const char* value) { SetSessionId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of seconds to keep the session alive after the query finishes. The
     * maximum time a session can keep alive is 24 hours. After 24 hours, the session
     * is forced closed and the query is terminated.</p>
     */
    inline int GetSessionKeepAliveSeconds() const{ return m_sessionKeepAliveSeconds; }
    inline bool SessionKeepAliveSecondsHasBeenSet() const { return m_sessionKeepAliveSecondsHasBeenSet; }
    inline void SetSessionKeepAliveSeconds(int value) { m_sessionKeepAliveSecondsHasBeenSet = true; m_sessionKeepAliveSeconds = value; }
    inline ExecuteStatementRequest& WithSessionKeepAliveSeconds(int value) { SetSessionKeepAliveSeconds(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The SQL statement text to run. </p>
     */
    inline const Aws::String& GetSql() const{ return m_sql; }
    inline bool SqlHasBeenSet() const { return m_sqlHasBeenSet; }
    inline void SetSql(const Aws::String& value) { m_sqlHasBeenSet = true; m_sql = value; }
    inline void SetSql(Aws::String&& value) { m_sqlHasBeenSet = true; m_sql = std::move(value); }
    inline void SetSql(const char* value) { m_sqlHasBeenSet = true; m_sql.assign(value); }
    inline ExecuteStatementRequest& WithSql(const Aws::String& value) { SetSql(value); return *this;}
    inline ExecuteStatementRequest& WithSql(Aws::String&& value) { SetSql(std::move(value)); return *this;}
    inline ExecuteStatementRequest& WithSql(const char* value) { SetSql(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the SQL statement. You can name the SQL statement when you create
     * it to identify the query. </p>
     */
    inline const Aws::String& GetStatementName() const{ return m_statementName; }
    inline bool StatementNameHasBeenSet() const { return m_statementNameHasBeenSet; }
    inline void SetStatementName(const Aws::String& value) { m_statementNameHasBeenSet = true; m_statementName = value; }
    inline void SetStatementName(Aws::String&& value) { m_statementNameHasBeenSet = true; m_statementName = std::move(value); }
    inline void SetStatementName(const char* value) { m_statementNameHasBeenSet = true; m_statementName.assign(value); }
    inline ExecuteStatementRequest& WithStatementName(const Aws::String& value) { SetStatementName(value); return *this;}
    inline ExecuteStatementRequest& WithStatementName(Aws::String&& value) { SetStatementName(std::move(value)); return *this;}
    inline ExecuteStatementRequest& WithStatementName(const char* value) { SetStatementName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A value that indicates whether to send an event to the Amazon EventBridge
     * event bus after the SQL statement runs. </p>
     */
    inline bool GetWithEvent() const{ return m_withEvent; }
    inline bool WithEventHasBeenSet() const { return m_withEventHasBeenSet; }
    inline void SetWithEvent(bool value) { m_withEventHasBeenSet = true; m_withEvent = value; }
    inline ExecuteStatementRequest& WithWithEvent(bool value) { SetWithEvent(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The serverless workgroup name or Amazon Resource Name (ARN). This parameter
     * is required when connecting to a serverless workgroup and authenticating using
     * either Secrets Manager or temporary credentials.</p>
     */
    inline const Aws::String& GetWorkgroupName() const{ return m_workgroupName; }
    inline bool WorkgroupNameHasBeenSet() const { return m_workgroupNameHasBeenSet; }
    inline void SetWorkgroupName(const Aws::String& value) { m_workgroupNameHasBeenSet = true; m_workgroupName = value; }
    inline void SetWorkgroupName(Aws::String&& value) { m_workgroupNameHasBeenSet = true; m_workgroupName = std::move(value); }
    inline void SetWorkgroupName(const char* value) { m_workgroupNameHasBeenSet = true; m_workgroupName.assign(value); }
    inline ExecuteStatementRequest& WithWorkgroupName(const Aws::String& value) { SetWorkgroupName(value); return *this;}
    inline ExecuteStatementRequest& WithWorkgroupName(Aws::String&& value) { SetWorkgroupName(std::move(value)); return *this;}
    inline ExecuteStatementRequest& WithWorkgroupName(const char* value) { SetWorkgroupName(value); return *this;}
    ///@}
  private:

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    Aws::String m_clusterIdentifier;
    bool m_clusterIdentifierHasBeenSet = false;

    Aws::String m_database;
    bool m_databaseHasBeenSet = false;

    Aws::String m_dbUser;
    bool m_dbUserHasBeenSet = false;

    Aws::Vector<SqlParameter> m_parameters;
    bool m_parametersHasBeenSet = false;

    ResultFormatString m_resultFormat;
    bool m_resultFormatHasBeenSet = false;

    Aws::String m_secretArn;
    bool m_secretArnHasBeenSet = false;

    Aws::String m_sessionId;
    bool m_sessionIdHasBeenSet = false;

    int m_sessionKeepAliveSeconds;
    bool m_sessionKeepAliveSecondsHasBeenSet = false;

    Aws::String m_sql;
    bool m_sqlHasBeenSet = false;

    Aws::String m_statementName;
    bool m_statementNameHasBeenSet = false;

    bool m_withEvent;
    bool m_withEventHasBeenSet = false;

    Aws::String m_workgroupName;
    bool m_workgroupNameHasBeenSet = false;
  };

} // namespace Model
} // namespace RedshiftDataAPIService
} // namespace Aws
