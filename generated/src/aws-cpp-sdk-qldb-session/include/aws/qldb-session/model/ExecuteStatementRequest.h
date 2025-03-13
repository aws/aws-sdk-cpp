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
    AWS_QLDBSESSION_API ExecuteStatementRequest() = default;
    AWS_QLDBSESSION_API ExecuteStatementRequest(Aws::Utils::Json::JsonView jsonValue);
    AWS_QLDBSESSION_API ExecuteStatementRequest& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QLDBSESSION_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specifies the transaction ID of the request.</p>
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
     * <p>Specifies the statement of the request.</p>
     */
    inline const Aws::String& GetStatement() const { return m_statement; }
    inline bool StatementHasBeenSet() const { return m_statementHasBeenSet; }
    template<typename StatementT = Aws::String>
    void SetStatement(StatementT&& value) { m_statementHasBeenSet = true; m_statement = std::forward<StatementT>(value); }
    template<typename StatementT = Aws::String>
    ExecuteStatementRequest& WithStatement(StatementT&& value) { SetStatement(std::forward<StatementT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the parameters for the parameterized statement in the request.</p>
     */
    inline const Aws::Vector<ValueHolder>& GetParameters() const { return m_parameters; }
    inline bool ParametersHasBeenSet() const { return m_parametersHasBeenSet; }
    template<typename ParametersT = Aws::Vector<ValueHolder>>
    void SetParameters(ParametersT&& value) { m_parametersHasBeenSet = true; m_parameters = std::forward<ParametersT>(value); }
    template<typename ParametersT = Aws::Vector<ValueHolder>>
    ExecuteStatementRequest& WithParameters(ParametersT&& value) { SetParameters(std::forward<ParametersT>(value)); return *this;}
    template<typename ParametersT = ValueHolder>
    ExecuteStatementRequest& AddParameters(ParametersT&& value) { m_parametersHasBeenSet = true; m_parameters.emplace_back(std::forward<ParametersT>(value)); return *this; }
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
