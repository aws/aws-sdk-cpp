/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift-data/RedshiftDataAPIService_EXPORTS.h>
#include <aws/redshift-data/RedshiftDataAPIServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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


    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request.</p>
     */
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request.</p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request.</p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request.</p>
     */
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request.</p>
     */
    inline BatchExecuteStatementRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request.</p>
     */
    inline BatchExecuteStatementRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request.</p>
     */
    inline BatchExecuteStatementRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}


    /**
     * <p>The cluster identifier. This parameter is required when connecting to a
     * cluster and authenticating using either Secrets Manager or temporary
     * credentials. </p>
     */
    inline const Aws::String& GetClusterIdentifier() const{ return m_clusterIdentifier; }

    /**
     * <p>The cluster identifier. This parameter is required when connecting to a
     * cluster and authenticating using either Secrets Manager or temporary
     * credentials. </p>
     */
    inline bool ClusterIdentifierHasBeenSet() const { return m_clusterIdentifierHasBeenSet; }

    /**
     * <p>The cluster identifier. This parameter is required when connecting to a
     * cluster and authenticating using either Secrets Manager or temporary
     * credentials. </p>
     */
    inline void SetClusterIdentifier(const Aws::String& value) { m_clusterIdentifierHasBeenSet = true; m_clusterIdentifier = value; }

    /**
     * <p>The cluster identifier. This parameter is required when connecting to a
     * cluster and authenticating using either Secrets Manager or temporary
     * credentials. </p>
     */
    inline void SetClusterIdentifier(Aws::String&& value) { m_clusterIdentifierHasBeenSet = true; m_clusterIdentifier = std::move(value); }

    /**
     * <p>The cluster identifier. This parameter is required when connecting to a
     * cluster and authenticating using either Secrets Manager or temporary
     * credentials. </p>
     */
    inline void SetClusterIdentifier(const char* value) { m_clusterIdentifierHasBeenSet = true; m_clusterIdentifier.assign(value); }

    /**
     * <p>The cluster identifier. This parameter is required when connecting to a
     * cluster and authenticating using either Secrets Manager or temporary
     * credentials. </p>
     */
    inline BatchExecuteStatementRequest& WithClusterIdentifier(const Aws::String& value) { SetClusterIdentifier(value); return *this;}

    /**
     * <p>The cluster identifier. This parameter is required when connecting to a
     * cluster and authenticating using either Secrets Manager or temporary
     * credentials. </p>
     */
    inline BatchExecuteStatementRequest& WithClusterIdentifier(Aws::String&& value) { SetClusterIdentifier(std::move(value)); return *this;}

    /**
     * <p>The cluster identifier. This parameter is required when connecting to a
     * cluster and authenticating using either Secrets Manager or temporary
     * credentials. </p>
     */
    inline BatchExecuteStatementRequest& WithClusterIdentifier(const char* value) { SetClusterIdentifier(value); return *this;}


    /**
     * <p>The name of the database. This parameter is required when authenticating
     * using either Secrets Manager or temporary credentials. </p>
     */
    inline const Aws::String& GetDatabase() const{ return m_database; }

    /**
     * <p>The name of the database. This parameter is required when authenticating
     * using either Secrets Manager or temporary credentials. </p>
     */
    inline bool DatabaseHasBeenSet() const { return m_databaseHasBeenSet; }

    /**
     * <p>The name of the database. This parameter is required when authenticating
     * using either Secrets Manager or temporary credentials. </p>
     */
    inline void SetDatabase(const Aws::String& value) { m_databaseHasBeenSet = true; m_database = value; }

    /**
     * <p>The name of the database. This parameter is required when authenticating
     * using either Secrets Manager or temporary credentials. </p>
     */
    inline void SetDatabase(Aws::String&& value) { m_databaseHasBeenSet = true; m_database = std::move(value); }

    /**
     * <p>The name of the database. This parameter is required when authenticating
     * using either Secrets Manager or temporary credentials. </p>
     */
    inline void SetDatabase(const char* value) { m_databaseHasBeenSet = true; m_database.assign(value); }

    /**
     * <p>The name of the database. This parameter is required when authenticating
     * using either Secrets Manager or temporary credentials. </p>
     */
    inline BatchExecuteStatementRequest& WithDatabase(const Aws::String& value) { SetDatabase(value); return *this;}

    /**
     * <p>The name of the database. This parameter is required when authenticating
     * using either Secrets Manager or temporary credentials. </p>
     */
    inline BatchExecuteStatementRequest& WithDatabase(Aws::String&& value) { SetDatabase(std::move(value)); return *this;}

    /**
     * <p>The name of the database. This parameter is required when authenticating
     * using either Secrets Manager or temporary credentials. </p>
     */
    inline BatchExecuteStatementRequest& WithDatabase(const char* value) { SetDatabase(value); return *this;}


    /**
     * <p>The database user name. This parameter is required when connecting to a
     * cluster and authenticating using temporary credentials. </p>
     */
    inline const Aws::String& GetDbUser() const{ return m_dbUser; }

    /**
     * <p>The database user name. This parameter is required when connecting to a
     * cluster and authenticating using temporary credentials. </p>
     */
    inline bool DbUserHasBeenSet() const { return m_dbUserHasBeenSet; }

    /**
     * <p>The database user name. This parameter is required when connecting to a
     * cluster and authenticating using temporary credentials. </p>
     */
    inline void SetDbUser(const Aws::String& value) { m_dbUserHasBeenSet = true; m_dbUser = value; }

    /**
     * <p>The database user name. This parameter is required when connecting to a
     * cluster and authenticating using temporary credentials. </p>
     */
    inline void SetDbUser(Aws::String&& value) { m_dbUserHasBeenSet = true; m_dbUser = std::move(value); }

    /**
     * <p>The database user name. This parameter is required when connecting to a
     * cluster and authenticating using temporary credentials. </p>
     */
    inline void SetDbUser(const char* value) { m_dbUserHasBeenSet = true; m_dbUser.assign(value); }

    /**
     * <p>The database user name. This parameter is required when connecting to a
     * cluster and authenticating using temporary credentials. </p>
     */
    inline BatchExecuteStatementRequest& WithDbUser(const Aws::String& value) { SetDbUser(value); return *this;}

    /**
     * <p>The database user name. This parameter is required when connecting to a
     * cluster and authenticating using temporary credentials. </p>
     */
    inline BatchExecuteStatementRequest& WithDbUser(Aws::String&& value) { SetDbUser(std::move(value)); return *this;}

    /**
     * <p>The database user name. This parameter is required when connecting to a
     * cluster and authenticating using temporary credentials. </p>
     */
    inline BatchExecuteStatementRequest& WithDbUser(const char* value) { SetDbUser(value); return *this;}


    /**
     * <p>The name or ARN of the secret that enables access to the database. This
     * parameter is required when authenticating using Secrets Manager. </p>
     */
    inline const Aws::String& GetSecretArn() const{ return m_secretArn; }

    /**
     * <p>The name or ARN of the secret that enables access to the database. This
     * parameter is required when authenticating using Secrets Manager. </p>
     */
    inline bool SecretArnHasBeenSet() const { return m_secretArnHasBeenSet; }

    /**
     * <p>The name or ARN of the secret that enables access to the database. This
     * parameter is required when authenticating using Secrets Manager. </p>
     */
    inline void SetSecretArn(const Aws::String& value) { m_secretArnHasBeenSet = true; m_secretArn = value; }

    /**
     * <p>The name or ARN of the secret that enables access to the database. This
     * parameter is required when authenticating using Secrets Manager. </p>
     */
    inline void SetSecretArn(Aws::String&& value) { m_secretArnHasBeenSet = true; m_secretArn = std::move(value); }

    /**
     * <p>The name or ARN of the secret that enables access to the database. This
     * parameter is required when authenticating using Secrets Manager. </p>
     */
    inline void SetSecretArn(const char* value) { m_secretArnHasBeenSet = true; m_secretArn.assign(value); }

    /**
     * <p>The name or ARN of the secret that enables access to the database. This
     * parameter is required when authenticating using Secrets Manager. </p>
     */
    inline BatchExecuteStatementRequest& WithSecretArn(const Aws::String& value) { SetSecretArn(value); return *this;}

    /**
     * <p>The name or ARN of the secret that enables access to the database. This
     * parameter is required when authenticating using Secrets Manager. </p>
     */
    inline BatchExecuteStatementRequest& WithSecretArn(Aws::String&& value) { SetSecretArn(std::move(value)); return *this;}

    /**
     * <p>The name or ARN of the secret that enables access to the database. This
     * parameter is required when authenticating using Secrets Manager. </p>
     */
    inline BatchExecuteStatementRequest& WithSecretArn(const char* value) { SetSecretArn(value); return *this;}


    /**
     * <p>One or more SQL statements to run. <pre><code> The SQL statements are run as
     * a single transaction. They run serially in the order of the array. Subsequent
     * SQL statements don't start until the previous statement in the array completes.
     * If any SQL statement fails, then because they are run as one transaction, all
     * work is rolled back.&lt;/p&gt; </code></pre>
     */
    inline const Aws::Vector<Aws::String>& GetSqls() const{ return m_sqls; }

    /**
     * <p>One or more SQL statements to run. <pre><code> The SQL statements are run as
     * a single transaction. They run serially in the order of the array. Subsequent
     * SQL statements don't start until the previous statement in the array completes.
     * If any SQL statement fails, then because they are run as one transaction, all
     * work is rolled back.&lt;/p&gt; </code></pre>
     */
    inline bool SqlsHasBeenSet() const { return m_sqlsHasBeenSet; }

    /**
     * <p>One or more SQL statements to run. <pre><code> The SQL statements are run as
     * a single transaction. They run serially in the order of the array. Subsequent
     * SQL statements don't start until the previous statement in the array completes.
     * If any SQL statement fails, then because they are run as one transaction, all
     * work is rolled back.&lt;/p&gt; </code></pre>
     */
    inline void SetSqls(const Aws::Vector<Aws::String>& value) { m_sqlsHasBeenSet = true; m_sqls = value; }

    /**
     * <p>One or more SQL statements to run. <pre><code> The SQL statements are run as
     * a single transaction. They run serially in the order of the array. Subsequent
     * SQL statements don't start until the previous statement in the array completes.
     * If any SQL statement fails, then because they are run as one transaction, all
     * work is rolled back.&lt;/p&gt; </code></pre>
     */
    inline void SetSqls(Aws::Vector<Aws::String>&& value) { m_sqlsHasBeenSet = true; m_sqls = std::move(value); }

    /**
     * <p>One or more SQL statements to run. <pre><code> The SQL statements are run as
     * a single transaction. They run serially in the order of the array. Subsequent
     * SQL statements don't start until the previous statement in the array completes.
     * If any SQL statement fails, then because they are run as one transaction, all
     * work is rolled back.&lt;/p&gt; </code></pre>
     */
    inline BatchExecuteStatementRequest& WithSqls(const Aws::Vector<Aws::String>& value) { SetSqls(value); return *this;}

    /**
     * <p>One or more SQL statements to run. <pre><code> The SQL statements are run as
     * a single transaction. They run serially in the order of the array. Subsequent
     * SQL statements don't start until the previous statement in the array completes.
     * If any SQL statement fails, then because they are run as one transaction, all
     * work is rolled back.&lt;/p&gt; </code></pre>
     */
    inline BatchExecuteStatementRequest& WithSqls(Aws::Vector<Aws::String>&& value) { SetSqls(std::move(value)); return *this;}

    /**
     * <p>One or more SQL statements to run. <pre><code> The SQL statements are run as
     * a single transaction. They run serially in the order of the array. Subsequent
     * SQL statements don't start until the previous statement in the array completes.
     * If any SQL statement fails, then because they are run as one transaction, all
     * work is rolled back.&lt;/p&gt; </code></pre>
     */
    inline BatchExecuteStatementRequest& AddSqls(const Aws::String& value) { m_sqlsHasBeenSet = true; m_sqls.push_back(value); return *this; }

    /**
     * <p>One or more SQL statements to run. <pre><code> The SQL statements are run as
     * a single transaction. They run serially in the order of the array. Subsequent
     * SQL statements don't start until the previous statement in the array completes.
     * If any SQL statement fails, then because they are run as one transaction, all
     * work is rolled back.&lt;/p&gt; </code></pre>
     */
    inline BatchExecuteStatementRequest& AddSqls(Aws::String&& value) { m_sqlsHasBeenSet = true; m_sqls.push_back(std::move(value)); return *this; }

    /**
     * <p>One or more SQL statements to run. <pre><code> The SQL statements are run as
     * a single transaction. They run serially in the order of the array. Subsequent
     * SQL statements don't start until the previous statement in the array completes.
     * If any SQL statement fails, then because they are run as one transaction, all
     * work is rolled back.&lt;/p&gt; </code></pre>
     */
    inline BatchExecuteStatementRequest& AddSqls(const char* value) { m_sqlsHasBeenSet = true; m_sqls.push_back(value); return *this; }


    /**
     * <p>The name of the SQL statements. You can name the SQL statements when you
     * create them to identify the query. </p>
     */
    inline const Aws::String& GetStatementName() const{ return m_statementName; }

    /**
     * <p>The name of the SQL statements. You can name the SQL statements when you
     * create them to identify the query. </p>
     */
    inline bool StatementNameHasBeenSet() const { return m_statementNameHasBeenSet; }

    /**
     * <p>The name of the SQL statements. You can name the SQL statements when you
     * create them to identify the query. </p>
     */
    inline void SetStatementName(const Aws::String& value) { m_statementNameHasBeenSet = true; m_statementName = value; }

    /**
     * <p>The name of the SQL statements. You can name the SQL statements when you
     * create them to identify the query. </p>
     */
    inline void SetStatementName(Aws::String&& value) { m_statementNameHasBeenSet = true; m_statementName = std::move(value); }

    /**
     * <p>The name of the SQL statements. You can name the SQL statements when you
     * create them to identify the query. </p>
     */
    inline void SetStatementName(const char* value) { m_statementNameHasBeenSet = true; m_statementName.assign(value); }

    /**
     * <p>The name of the SQL statements. You can name the SQL statements when you
     * create them to identify the query. </p>
     */
    inline BatchExecuteStatementRequest& WithStatementName(const Aws::String& value) { SetStatementName(value); return *this;}

    /**
     * <p>The name of the SQL statements. You can name the SQL statements when you
     * create them to identify the query. </p>
     */
    inline BatchExecuteStatementRequest& WithStatementName(Aws::String&& value) { SetStatementName(std::move(value)); return *this;}

    /**
     * <p>The name of the SQL statements. You can name the SQL statements when you
     * create them to identify the query. </p>
     */
    inline BatchExecuteStatementRequest& WithStatementName(const char* value) { SetStatementName(value); return *this;}


    /**
     * <p>A value that indicates whether to send an event to the Amazon EventBridge
     * event bus after the SQL statements run. </p>
     */
    inline bool GetWithEvent() const{ return m_withEvent; }

    /**
     * <p>A value that indicates whether to send an event to the Amazon EventBridge
     * event bus after the SQL statements run. </p>
     */
    inline bool WithEventHasBeenSet() const { return m_withEventHasBeenSet; }

    /**
     * <p>A value that indicates whether to send an event to the Amazon EventBridge
     * event bus after the SQL statements run. </p>
     */
    inline void SetWithEvent(bool value) { m_withEventHasBeenSet = true; m_withEvent = value; }

    /**
     * <p>A value that indicates whether to send an event to the Amazon EventBridge
     * event bus after the SQL statements run. </p>
     */
    inline BatchExecuteStatementRequest& WithWithEvent(bool value) { SetWithEvent(value); return *this;}


    /**
     * <p>The serverless workgroup name. This parameter is required when connecting to
     * a serverless workgroup and authenticating using either Secrets Manager or
     * temporary credentials.</p>
     */
    inline const Aws::String& GetWorkgroupName() const{ return m_workgroupName; }

    /**
     * <p>The serverless workgroup name. This parameter is required when connecting to
     * a serverless workgroup and authenticating using either Secrets Manager or
     * temporary credentials.</p>
     */
    inline bool WorkgroupNameHasBeenSet() const { return m_workgroupNameHasBeenSet; }

    /**
     * <p>The serverless workgroup name. This parameter is required when connecting to
     * a serverless workgroup and authenticating using either Secrets Manager or
     * temporary credentials.</p>
     */
    inline void SetWorkgroupName(const Aws::String& value) { m_workgroupNameHasBeenSet = true; m_workgroupName = value; }

    /**
     * <p>The serverless workgroup name. This parameter is required when connecting to
     * a serverless workgroup and authenticating using either Secrets Manager or
     * temporary credentials.</p>
     */
    inline void SetWorkgroupName(Aws::String&& value) { m_workgroupNameHasBeenSet = true; m_workgroupName = std::move(value); }

    /**
     * <p>The serverless workgroup name. This parameter is required when connecting to
     * a serverless workgroup and authenticating using either Secrets Manager or
     * temporary credentials.</p>
     */
    inline void SetWorkgroupName(const char* value) { m_workgroupNameHasBeenSet = true; m_workgroupName.assign(value); }

    /**
     * <p>The serverless workgroup name. This parameter is required when connecting to
     * a serverless workgroup and authenticating using either Secrets Manager or
     * temporary credentials.</p>
     */
    inline BatchExecuteStatementRequest& WithWorkgroupName(const Aws::String& value) { SetWorkgroupName(value); return *this;}

    /**
     * <p>The serverless workgroup name. This parameter is required when connecting to
     * a serverless workgroup and authenticating using either Secrets Manager or
     * temporary credentials.</p>
     */
    inline BatchExecuteStatementRequest& WithWorkgroupName(Aws::String&& value) { SetWorkgroupName(std::move(value)); return *this;}

    /**
     * <p>The serverless workgroup name. This parameter is required when connecting to
     * a serverless workgroup and authenticating using either Secrets Manager or
     * temporary credentials.</p>
     */
    inline BatchExecuteStatementRequest& WithWorkgroupName(const char* value) { SetWorkgroupName(value); return *this;}

  private:

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    Aws::String m_clusterIdentifier;
    bool m_clusterIdentifierHasBeenSet = false;

    Aws::String m_database;
    bool m_databaseHasBeenSet = false;

    Aws::String m_dbUser;
    bool m_dbUserHasBeenSet = false;

    Aws::String m_secretArn;
    bool m_secretArnHasBeenSet = false;

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
