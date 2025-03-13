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
    AWS_RDSDATASERVICE_API BatchExecuteStatementRequest() = default;

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
    inline const Aws::String& GetResourceArn() const { return m_resourceArn; }
    inline bool ResourceArnHasBeenSet() const { return m_resourceArnHasBeenSet; }
    template<typename ResourceArnT = Aws::String>
    void SetResourceArn(ResourceArnT&& value) { m_resourceArnHasBeenSet = true; m_resourceArn = std::forward<ResourceArnT>(value); }
    template<typename ResourceArnT = Aws::String>
    BatchExecuteStatementRequest& WithResourceArn(ResourceArnT&& value) { SetResourceArn(std::forward<ResourceArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the secret that enables access to the DB cluster. Enter the
     * database user name and password for the credentials in the secret.</p> <p>For
     * information about creating the secret, see <a
     * href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/create_database_secret.html">Create
     * a database secret</a>.</p>
     */
    inline const Aws::String& GetSecretArn() const { return m_secretArn; }
    inline bool SecretArnHasBeenSet() const { return m_secretArnHasBeenSet; }
    template<typename SecretArnT = Aws::String>
    void SetSecretArn(SecretArnT&& value) { m_secretArnHasBeenSet = true; m_secretArn = std::forward<SecretArnT>(value); }
    template<typename SecretArnT = Aws::String>
    BatchExecuteStatementRequest& WithSecretArn(SecretArnT&& value) { SetSecretArn(std::forward<SecretArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The SQL statement to run. Don't include a semicolon (;) at the end of the SQL
     * statement.</p>
     */
    inline const Aws::String& GetSql() const { return m_sql; }
    inline bool SqlHasBeenSet() const { return m_sqlHasBeenSet; }
    template<typename SqlT = Aws::String>
    void SetSql(SqlT&& value) { m_sqlHasBeenSet = true; m_sql = std::forward<SqlT>(value); }
    template<typename SqlT = Aws::String>
    BatchExecuteStatementRequest& WithSql(SqlT&& value) { SetSql(std::forward<SqlT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the database.</p>
     */
    inline const Aws::String& GetDatabase() const { return m_database; }
    inline bool DatabaseHasBeenSet() const { return m_databaseHasBeenSet; }
    template<typename DatabaseT = Aws::String>
    void SetDatabase(DatabaseT&& value) { m_databaseHasBeenSet = true; m_database = std::forward<DatabaseT>(value); }
    template<typename DatabaseT = Aws::String>
    BatchExecuteStatementRequest& WithDatabase(DatabaseT&& value) { SetDatabase(std::forward<DatabaseT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the database schema.</p>  <p>Currently, the
     * <code>schema</code> parameter isn't supported.</p> 
     */
    inline const Aws::String& GetSchema() const { return m_schema; }
    inline bool SchemaHasBeenSet() const { return m_schemaHasBeenSet; }
    template<typename SchemaT = Aws::String>
    void SetSchema(SchemaT&& value) { m_schemaHasBeenSet = true; m_schema = std::forward<SchemaT>(value); }
    template<typename SchemaT = Aws::String>
    BatchExecuteStatementRequest& WithSchema(SchemaT&& value) { SetSchema(std::forward<SchemaT>(value)); return *this;}
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
    inline const Aws::Vector<Aws::Vector<SqlParameter>>& GetParameterSets() const { return m_parameterSets; }
    inline bool ParameterSetsHasBeenSet() const { return m_parameterSetsHasBeenSet; }
    template<typename ParameterSetsT = Aws::Vector<Aws::Vector<SqlParameter>>>
    void SetParameterSets(ParameterSetsT&& value) { m_parameterSetsHasBeenSet = true; m_parameterSets = std::forward<ParameterSetsT>(value); }
    template<typename ParameterSetsT = Aws::Vector<Aws::Vector<SqlParameter>>>
    BatchExecuteStatementRequest& WithParameterSets(ParameterSetsT&& value) { SetParameterSets(std::forward<ParameterSetsT>(value)); return *this;}
    template<typename ParameterSetsT = Aws::Vector<SqlParameter>>
    BatchExecuteStatementRequest& AddParameterSets(ParameterSetsT&& value) { m_parameterSetsHasBeenSet = true; m_parameterSets.emplace_back(std::forward<ParameterSetsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The identifier of a transaction that was started by using the
     * <code>BeginTransaction</code> operation. Specify the transaction ID of the
     * transaction that you want to include the SQL statement in.</p> <p>If the SQL
     * statement is not part of a transaction, don't set this parameter.</p>
     */
    inline const Aws::String& GetTransactionId() const { return m_transactionId; }
    inline bool TransactionIdHasBeenSet() const { return m_transactionIdHasBeenSet; }
    template<typename TransactionIdT = Aws::String>
    void SetTransactionId(TransactionIdT&& value) { m_transactionIdHasBeenSet = true; m_transactionId = std::forward<TransactionIdT>(value); }
    template<typename TransactionIdT = Aws::String>
    BatchExecuteStatementRequest& WithTransactionId(TransactionIdT&& value) { SetTransactionId(std::forward<TransactionIdT>(value)); return *this;}
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
