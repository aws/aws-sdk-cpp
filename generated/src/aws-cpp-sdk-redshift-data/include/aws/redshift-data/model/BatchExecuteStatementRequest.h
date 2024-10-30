/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift-data/RedshiftDataAPIService_EXPORTS.h>
#include <aws/redshift-data/RedshiftDataAPIServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/redshift-data/model/ResultFormatString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
  class BatchExecuteStatementRequest : public RedshiftDataAPIServiceRequest
  {
  public:
    AWS_REDSHIFTDATAAPISERVICE_API BatchExecuteStatementRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "BatchExecuteStatement"; }

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
    inline BatchExecuteStatementRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}
    inline BatchExecuteStatementRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}
    inline BatchExecuteStatementRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}
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
    inline BatchExecuteStatementRequest& WithClusterIdentifier(const Aws::String& value) { SetClusterIdentifier(value); return *this;}
    inline BatchExecuteStatementRequest& WithClusterIdentifier(Aws::String&& value) { SetClusterIdentifier(std::move(value)); return *this;}
    inline BatchExecuteStatementRequest& WithClusterIdentifier(const char* value) { SetClusterIdentifier(value); return *this;}
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
    inline BatchExecuteStatementRequest& WithDatabase(const Aws::String& value) { SetDatabase(value); return *this;}
    inline BatchExecuteStatementRequest& WithDatabase(Aws::String&& value) { SetDatabase(std::move(value)); return *this;}
    inline BatchExecuteStatementRequest& WithDatabase(const char* value) { SetDatabase(value); return *this;}
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
    inline BatchExecuteStatementRequest& WithDbUser(const Aws::String& value) { SetDbUser(value); return *this;}
    inline BatchExecuteStatementRequest& WithDbUser(Aws::String&& value) { SetDbUser(std::move(value)); return *this;}
    inline BatchExecuteStatementRequest& WithDbUser(const char* value) { SetDbUser(value); return *this;}
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
    inline BatchExecuteStatementRequest& WithResultFormat(const ResultFormatString& value) { SetResultFormat(value); return *this;}
    inline BatchExecuteStatementRequest& WithResultFormat(ResultFormatString&& value) { SetResultFormat(std::move(value)); return *this;}
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
    inline BatchExecuteStatementRequest& WithSecretArn(const Aws::String& value) { SetSecretArn(value); return *this;}
    inline BatchExecuteStatementRequest& WithSecretArn(Aws::String&& value) { SetSecretArn(std::move(value)); return *this;}
    inline BatchExecuteStatementRequest& WithSecretArn(const char* value) { SetSecretArn(value); return *this;}
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
    inline BatchExecuteStatementRequest& WithSessionId(const Aws::String& value) { SetSessionId(value); return *this;}
    inline BatchExecuteStatementRequest& WithSessionId(Aws::String&& value) { SetSessionId(std::move(value)); return *this;}
    inline BatchExecuteStatementRequest& WithSessionId(const char* value) { SetSessionId(value); return *this;}
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
    inline BatchExecuteStatementRequest& WithSessionKeepAliveSeconds(int value) { SetSessionKeepAliveSeconds(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>One or more SQL statements to run. <pre><code> The SQL statements are run as
     * a single transaction. They run serially in the order of the array. Subsequent
     * SQL statements don't start until the previous statement in the array completes.
     * If any SQL statement fails, then because they are run as one transaction, all
     * work is rolled back.&lt;/p&gt; </code></pre>
     */
    inline const Aws::Vector<Aws::String>& GetSqls() const{ return m_sqls; }
    inline bool SqlsHasBeenSet() const { return m_sqlsHasBeenSet; }
    inline void SetSqls(const Aws::Vector<Aws::String>& value) { m_sqlsHasBeenSet = true; m_sqls = value; }
    inline void SetSqls(Aws::Vector<Aws::String>&& value) { m_sqlsHasBeenSet = true; m_sqls = std::move(value); }
    inline BatchExecuteStatementRequest& WithSqls(const Aws::Vector<Aws::String>& value) { SetSqls(value); return *this;}
    inline BatchExecuteStatementRequest& WithSqls(Aws::Vector<Aws::String>&& value) { SetSqls(std::move(value)); return *this;}
    inline BatchExecuteStatementRequest& AddSqls(const Aws::String& value) { m_sqlsHasBeenSet = true; m_sqls.push_back(value); return *this; }
    inline BatchExecuteStatementRequest& AddSqls(Aws::String&& value) { m_sqlsHasBeenSet = true; m_sqls.push_back(std::move(value)); return *this; }
    inline BatchExecuteStatementRequest& AddSqls(const char* value) { m_sqlsHasBeenSet = true; m_sqls.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The name of the SQL statements. You can name the SQL statements when you
     * create them to identify the query. </p>
     */
    inline const Aws::String& GetStatementName() const{ return m_statementName; }
    inline bool StatementNameHasBeenSet() const { return m_statementNameHasBeenSet; }
    inline void SetStatementName(const Aws::String& value) { m_statementNameHasBeenSet = true; m_statementName = value; }
    inline void SetStatementName(Aws::String&& value) { m_statementNameHasBeenSet = true; m_statementName = std::move(value); }
    inline void SetStatementName(const char* value) { m_statementNameHasBeenSet = true; m_statementName.assign(value); }
    inline BatchExecuteStatementRequest& WithStatementName(const Aws::String& value) { SetStatementName(value); return *this;}
    inline BatchExecuteStatementRequest& WithStatementName(Aws::String&& value) { SetStatementName(std::move(value)); return *this;}
    inline BatchExecuteStatementRequest& WithStatementName(const char* value) { SetStatementName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A value that indicates whether to send an event to the Amazon EventBridge
     * event bus after the SQL statements run. </p>
     */
    inline bool GetWithEvent() const{ return m_withEvent; }
    inline bool WithEventHasBeenSet() const { return m_withEventHasBeenSet; }
    inline void SetWithEvent(bool value) { m_withEventHasBeenSet = true; m_withEvent = value; }
    inline BatchExecuteStatementRequest& WithWithEvent(bool value) { SetWithEvent(value); return *this;}
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
    inline BatchExecuteStatementRequest& WithWorkgroupName(const Aws::String& value) { SetWorkgroupName(value); return *this;}
    inline BatchExecuteStatementRequest& WithWorkgroupName(Aws::String&& value) { SetWorkgroupName(std::move(value)); return *this;}
    inline BatchExecuteStatementRequest& WithWorkgroupName(const char* value) { SetWorkgroupName(value); return *this;}
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

    ResultFormatString m_resultFormat;
    bool m_resultFormatHasBeenSet = false;

    Aws::String m_secretArn;
    bool m_secretArnHasBeenSet = false;

    Aws::String m_sessionId;
    bool m_sessionIdHasBeenSet = false;

    int m_sessionKeepAliveSeconds;
    bool m_sessionKeepAliveSecondsHasBeenSet = false;

    Aws::Vector<Aws::String> m_sqls;
    bool m_sqlsHasBeenSet = false;

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
