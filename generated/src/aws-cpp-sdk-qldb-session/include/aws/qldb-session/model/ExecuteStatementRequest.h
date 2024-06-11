/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qldb-session/QLDBSession_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/qldb-session/model/ValueHolder.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace QLDBSession
{
namespace Model
{

  /**
   * <p>Specifies a request to execute a statement.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/qldb-session-2019-07-11/ExecuteStatementRequest">AWS
   * API Reference</a></p>
   */
  class ExecuteStatementRequest
  {
  public:
    AWS_QLDBSESSION_API ExecuteStatementRequest();
    AWS_QLDBSESSION_API ExecuteStatementRequest(Aws::Utils::Json::JsonView jsonValue);
    AWS_QLDBSESSION_API ExecuteStatementRequest& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QLDBSESSION_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specifies the transaction ID of the request.</p>
     */
    inline const Aws::String& GetTransactionId() const{ return m_transactionId; }
    inline bool TransactionIdHasBeenSet() const { return m_transactionIdHasBeenSet; }
    inline void SetTransactionId(const Aws::String& value) { m_transactionIdHasBeenSet = true; m_transactionId = value; }
    inline void SetTransactionId(Aws::String&& value) { m_transactionIdHasBeenSet = true; m_transactionId = std::move(value); }
    inline void SetTransactionId(const char* value) { m_transactionIdHasBeenSet = true; m_transactionId.assign(value); }
    inline ExecuteStatementRequest& WithTransactionId(const Aws::String& value) { SetTransactionId(value); return *this;}
    inline ExecuteStatementRequest& WithTransactionId(Aws::String&& value) { SetTransactionId(std::move(value)); return *this;}
    inline ExecuteStatementRequest& WithTransactionId(const char* value) { SetTransactionId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the statement of the request.</p>
     */
    inline const Aws::String& GetStatement() const{ return m_statement; }
    inline bool StatementHasBeenSet() const { return m_statementHasBeenSet; }
    inline void SetStatement(const Aws::String& value) { m_statementHasBeenSet = true; m_statement = value; }
    inline void SetStatement(Aws::String&& value) { m_statementHasBeenSet = true; m_statement = std::move(value); }
    inline void SetStatement(const char* value) { m_statementHasBeenSet = true; m_statement.assign(value); }
    inline ExecuteStatementRequest& WithStatement(const Aws::String& value) { SetStatement(value); return *this;}
    inline ExecuteStatementRequest& WithStatement(Aws::String&& value) { SetStatement(std::move(value)); return *this;}
    inline ExecuteStatementRequest& WithStatement(const char* value) { SetStatement(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the parameters for the parameterized statement in the request.</p>
     */
    inline const Aws::Vector<ValueHolder>& GetParameters() const{ return m_parameters; }
    inline bool ParametersHasBeenSet() const { return m_parametersHasBeenSet; }
    inline void SetParameters(const Aws::Vector<ValueHolder>& value) { m_parametersHasBeenSet = true; m_parameters = value; }
    inline void SetParameters(Aws::Vector<ValueHolder>&& value) { m_parametersHasBeenSet = true; m_parameters = std::move(value); }
    inline ExecuteStatementRequest& WithParameters(const Aws::Vector<ValueHolder>& value) { SetParameters(value); return *this;}
    inline ExecuteStatementRequest& WithParameters(Aws::Vector<ValueHolder>&& value) { SetParameters(std::move(value)); return *this;}
    inline ExecuteStatementRequest& AddParameters(const ValueHolder& value) { m_parametersHasBeenSet = true; m_parameters.push_back(value); return *this; }
    inline ExecuteStatementRequest& AddParameters(ValueHolder&& value) { m_parametersHasBeenSet = true; m_parameters.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_transactionId;
    bool m_transactionIdHasBeenSet = false;

    Aws::String m_statement;
    bool m_statementHasBeenSet = false;

    Aws::Vector<ValueHolder> m_parameters;
    bool m_parametersHasBeenSet = false;
  };

} // namespace Model
} // namespace QLDBSession
} // namespace Aws
