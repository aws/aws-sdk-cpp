/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rds-data/RDSDataService_EXPORTS.h>
#include <aws/rds-data/RDSDataServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/rds-data/model/ResultSetOptions.h>
#include <aws/rds-data/model/RecordsFormatType.h>
#include <aws/rds-data/model/SqlParameter.h>
#include <utility>

namespace Aws
{
namespace RDSDataService
{
namespace Model
{

  /**
   * <p>The request parameters represent the input of a request to run a SQL
   * statement against a database.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rds-data-2018-08-01/ExecuteStatementRequest">AWS
   * API Reference</a></p>
   */
  class ExecuteStatementRequest : public RDSDataServiceRequest
  {
  public:
    AWS_RDSDATASERVICE_API ExecuteStatementRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ExecuteStatement"; }

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
    ExecuteStatementRequest& WithResourceArn(ResourceArnT&& value) { SetResourceArn(std::forward<ResourceArnT>(value)); return *this;}
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
    ExecuteStatementRequest& WithSecretArn(SecretArnT&& value) { SetSecretArn(std::forward<SecretArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The SQL statement to run.</p>
     */
    inline const Aws::String& GetSql() const { return m_sql; }
    inline bool SqlHasBeenSet() const { return m_sqlHasBeenSet; }
    template<typename SqlT = Aws::String>
    void SetSql(SqlT&& value) { m_sqlHasBeenSet = true; m_sql = std::forward<SqlT>(value); }
    template<typename SqlT = Aws::String>
    ExecuteStatementRequest& WithSql(SqlT&& value) { SetSql(std::forward<SqlT>(value)); return *this;}
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
    ExecuteStatementRequest& WithDatabase(DatabaseT&& value) { SetDatabase(std::forward<DatabaseT>(value)); return *this;}
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
    ExecuteStatementRequest& WithSchema(SchemaT&& value) { SetSchema(std::forward<SchemaT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The parameters for the SQL statement.</p>  <p>Array parameters are not
     * supported.</p> 
     */
    inline const Aws::Vector<SqlParameter>& GetParameters() const { return m_parameters; }
    inline bool ParametersHasBeenSet() const { return m_parametersHasBeenSet; }
    template<typename ParametersT = Aws::Vector<SqlParameter>>
    void SetParameters(ParametersT&& value) { m_parametersHasBeenSet = true; m_parameters = std::forward<ParametersT>(value); }
    template<typename ParametersT = Aws::Vector<SqlParameter>>
    ExecuteStatementRequest& WithParameters(ParametersT&& value) { SetParameters(std::forward<ParametersT>(value)); return *this;}
    template<typename ParametersT = SqlParameter>
    ExecuteStatementRequest& AddParameters(ParametersT&& value) { m_parametersHasBeenSet = true; m_parameters.emplace_back(std::forward<ParametersT>(value)); return *this; }
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
    ExecuteStatementRequest& WithTransactionId(TransactionIdT&& value) { SetTransactionId(std::forward<TransactionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A value that indicates whether to include metadata in the results.</p>
     */
    inline bool GetIncludeResultMetadata() const { return m_includeResultMetadata; }
    inline bool IncludeResultMetadataHasBeenSet() const { return m_includeResultMetadataHasBeenSet; }
    inline void SetIncludeResultMetadata(bool value) { m_includeResultMetadataHasBeenSet = true; m_includeResultMetadata = value; }
    inline ExecuteStatementRequest& WithIncludeResultMetadata(bool value) { SetIncludeResultMetadata(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A value that indicates whether to continue running the statement after the
     * call times out. By default, the statement stops running when the call times
     * out.</p>  <p>For DDL statements, we recommend continuing to run the
     * statement after the call times out. When a DDL statement terminates before it is
     * finished running, it can result in errors and possibly corrupted data
     * structures.</p> 
     */
    inline bool GetContinueAfterTimeout() const { return m_continueAfterTimeout; }
    inline bool ContinueAfterTimeoutHasBeenSet() const { return m_continueAfterTimeoutHasBeenSet; }
    inline void SetContinueAfterTimeout(bool value) { m_continueAfterTimeoutHasBeenSet = true; m_continueAfterTimeout = value; }
    inline ExecuteStatementRequest& WithContinueAfterTimeout(bool value) { SetContinueAfterTimeout(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Options that control how the result set is returned.</p>
     */
    inline const ResultSetOptions& GetResultSetOptions() const { return m_resultSetOptions; }
    inline bool ResultSetOptionsHasBeenSet() const { return m_resultSetOptionsHasBeenSet; }
    template<typename ResultSetOptionsT = ResultSetOptions>
    void SetResultSetOptions(ResultSetOptionsT&& value) { m_resultSetOptionsHasBeenSet = true; m_resultSetOptions = std::forward<ResultSetOptionsT>(value); }
    template<typename ResultSetOptionsT = ResultSetOptions>
    ExecuteStatementRequest& WithResultSetOptions(ResultSetOptionsT&& value) { SetResultSetOptions(std::forward<ResultSetOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A value that indicates whether to format the result set as a single JSON
     * string. This parameter only applies to <code>SELECT</code> statements and is
     * ignored for other types of statements. Allowed values are <code>NONE</code> and
     * <code>JSON</code>. The default value is <code>NONE</code>. The result is
     * returned in the <code>formattedRecords</code> field.</p> <p>For usage
     * information about the JSON format for result sets, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/data-api.html">Using
     * the Data API</a> in the <i>Amazon Aurora User Guide</i>.</p>
     */
    inline RecordsFormatType GetFormatRecordsAs() const { return m_formatRecordsAs; }
    inline bool FormatRecordsAsHasBeenSet() const { return m_formatRecordsAsHasBeenSet; }
    inline void SetFormatRecordsAs(RecordsFormatType value) { m_formatRecordsAsHasBeenSet = true; m_formatRecordsAs = value; }
    inline ExecuteStatementRequest& WithFormatRecordsAs(RecordsFormatType value) { SetFormatRecordsAs(value); return *this;}
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

    Aws::Vector<SqlParameter> m_parameters;
    bool m_parametersHasBeenSet = false;

    Aws::String m_transactionId;
    bool m_transactionIdHasBeenSet = false;

    bool m_includeResultMetadata{false};
    bool m_includeResultMetadataHasBeenSet = false;

    bool m_continueAfterTimeout{false};
    bool m_continueAfterTimeoutHasBeenSet = false;

    ResultSetOptions m_resultSetOptions;
    bool m_resultSetOptionsHasBeenSet = false;

    RecordsFormatType m_formatRecordsAs{RecordsFormatType::NOT_SET};
    bool m_formatRecordsAsHasBeenSet = false;
  };

} // namespace Model
} // namespace RDSDataService
} // namespace Aws
