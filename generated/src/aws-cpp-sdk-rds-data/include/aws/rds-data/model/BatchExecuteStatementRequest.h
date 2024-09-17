/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rds-data/RDSDataService_EXPORTS.h>
#include <aws/rds-data/RDSDataServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/rds-data/model/SqlParameter.h>
#include <utility>

namespace Aws
{
namespace RDSDataService
{
namespace Model
{

  /**
   * <p>The request parameters represent the input of a SQL statement over an array
   * of data.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rds-data-2018-08-01/BatchExecuteStatementRequest">AWS
   * API Reference</a></p>
   */
  class BatchExecuteStatementRequest : public RDSDataServiceRequest
  {
  public:
    AWS_RDSDATASERVICE_API BatchExecuteStatementRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "BatchExecuteStatement"; }

    AWS_RDSDATASERVICE_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the Aurora Serverless DB cluster.</p>
     */
    inline const Aws::String& GetResourceArn() const{ return m_resourceArn; }
    inline bool ResourceArnHasBeenSet() const { return m_resourceArnHasBeenSet; }
    inline void SetResourceArn(const Aws::String& value) { m_resourceArnHasBeenSet = true; m_resourceArn = value; }
    inline void SetResourceArn(Aws::String&& value) { m_resourceArnHasBeenSet = true; m_resourceArn = std::move(value); }
    inline void SetResourceArn(const char* value) { m_resourceArnHasBeenSet = true; m_resourceArn.assign(value); }
    inline BatchExecuteStatementRequest& WithResourceArn(const Aws::String& value) { SetResourceArn(value); return *this;}
    inline BatchExecuteStatementRequest& WithResourceArn(Aws::String&& value) { SetResourceArn(std::move(value)); return *this;}
    inline BatchExecuteStatementRequest& WithResourceArn(const char* value) { SetResourceArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the secret that enables access to the DB cluster. Enter the
     * database user name and password for the credentials in the secret.</p> <p>For
     * information about creating the secret, see <a
     * href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/create_database_secret.html">Create
     * a database secret</a>.</p>
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
     * <p>The SQL statement to run. Don't include a semicolon (;) at the end of the SQL
     * statement.</p>
     */
    inline const Aws::String& GetSql() const{ return m_sql; }
    inline bool SqlHasBeenSet() const { return m_sqlHasBeenSet; }
    inline void SetSql(const Aws::String& value) { m_sqlHasBeenSet = true; m_sql = value; }
    inline void SetSql(Aws::String&& value) { m_sqlHasBeenSet = true; m_sql = std::move(value); }
    inline void SetSql(const char* value) { m_sqlHasBeenSet = true; m_sql.assign(value); }
    inline BatchExecuteStatementRequest& WithSql(const Aws::String& value) { SetSql(value); return *this;}
    inline BatchExecuteStatementRequest& WithSql(Aws::String&& value) { SetSql(std::move(value)); return *this;}
    inline BatchExecuteStatementRequest& WithSql(const char* value) { SetSql(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the database.</p>
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
     * <p>The name of the database schema.</p>  <p>Currently, the
     * <code>schema</code> parameter isn't supported.</p> 
     */
    inline const Aws::String& GetSchema() const{ return m_schema; }
    inline bool SchemaHasBeenSet() const { return m_schemaHasBeenSet; }
    inline void SetSchema(const Aws::String& value) { m_schemaHasBeenSet = true; m_schema = value; }
    inline void SetSchema(Aws::String&& value) { m_schemaHasBeenSet = true; m_schema = std::move(value); }
    inline void SetSchema(const char* value) { m_schemaHasBeenSet = true; m_schema.assign(value); }
    inline BatchExecuteStatementRequest& WithSchema(const Aws::String& value) { SetSchema(value); return *this;}
    inline BatchExecuteStatementRequest& WithSchema(Aws::String&& value) { SetSchema(std::move(value)); return *this;}
    inline BatchExecuteStatementRequest& WithSchema(const char* value) { SetSchema(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The parameter set for the batch operation.</p> <p>The SQL statement is
     * executed as many times as the number of parameter sets provided. To execute a
     * SQL statement with no parameters, use one of the following options:</p> <ul>
     * <li> <p>Specify one or more empty parameter sets.</p> </li> <li> <p>Use the
     * <code>ExecuteStatement</code> operation instead of the
     * <code>BatchExecuteStatement</code> operation.</p> </li> </ul>  <p>Array
     * parameters are not supported.</p> 
     */
    inline const Aws::Vector<Aws::Vector<SqlParameter>>& GetParameterSets() const{ return m_parameterSets; }
    inline bool ParameterSetsHasBeenSet() const { return m_parameterSetsHasBeenSet; }
    inline void SetParameterSets(const Aws::Vector<Aws::Vector<SqlParameter>>& value) { m_parameterSetsHasBeenSet = true; m_parameterSets = value; }
    inline void SetParameterSets(Aws::Vector<Aws::Vector<SqlParameter>>&& value) { m_parameterSetsHasBeenSet = true; m_parameterSets = std::move(value); }
    inline BatchExecuteStatementRequest& WithParameterSets(const Aws::Vector<Aws::Vector<SqlParameter>>& value) { SetParameterSets(value); return *this;}
    inline BatchExecuteStatementRequest& WithParameterSets(Aws::Vector<Aws::Vector<SqlParameter>>&& value) { SetParameterSets(std::move(value)); return *this;}
    inline BatchExecuteStatementRequest& AddParameterSets(const Aws::Vector<SqlParameter>& value) { m_parameterSetsHasBeenSet = true; m_parameterSets.push_back(value); return *this; }
    inline BatchExecuteStatementRequest& AddParameterSets(Aws::Vector<SqlParameter>&& value) { m_parameterSetsHasBeenSet = true; m_parameterSets.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The identifier of a transaction that was started by using the
     * <code>BeginTransaction</code> operation. Specify the transaction ID of the
     * transaction that you want to include the SQL statement in.</p> <p>If the SQL
     * statement is not part of a transaction, don't set this parameter.</p>
     */
    inline const Aws::String& GetTransactionId() const{ return m_transactionId; }
    inline bool TransactionIdHasBeenSet() const { return m_transactionIdHasBeenSet; }
    inline void SetTransactionId(const Aws::String& value) { m_transactionIdHasBeenSet = true; m_transactionId = value; }
    inline void SetTransactionId(Aws::String&& value) { m_transactionIdHasBeenSet = true; m_transactionId = std::move(value); }
    inline void SetTransactionId(const char* value) { m_transactionIdHasBeenSet = true; m_transactionId.assign(value); }
    inline BatchExecuteStatementRequest& WithTransactionId(const Aws::String& value) { SetTransactionId(value); return *this;}
    inline BatchExecuteStatementRequest& WithTransactionId(Aws::String&& value) { SetTransactionId(std::move(value)); return *this;}
    inline BatchExecuteStatementRequest& WithTransactionId(const char* value) { SetTransactionId(value); return *this;}
    ///@}
  private:

    Aws::String m_resourceArn;
    bool m_resourceArnHasBeenSet = false;

    Aws::String m_secretArn;
    bool m_secretArnHasBeenSet = false;

    Aws::String m_sql;
    bool m_sqlHasBeenSet = false;

    Aws::String m_database;
    bool m_databaseHasBeenSet = false;

    Aws::String m_schema;
    bool m_schemaHasBeenSet = false;

    Aws::Vector<Aws::Vector<SqlParameter>> m_parameterSets;
    bool m_parameterSetsHasBeenSet = false;

    Aws::String m_transactionId;
    bool m_transactionIdHasBeenSet = false;
  };

} // namespace Model
} // namespace RDSDataService
} // namespace Aws
