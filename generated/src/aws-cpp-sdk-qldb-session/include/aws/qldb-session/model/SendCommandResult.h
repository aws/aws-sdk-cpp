/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qldb-session/QLDBSession_EXPORTS.h>
#include <aws/qldb-session/model/StartSessionResult.h>
#include <aws/qldb-session/model/StartTransactionResult.h>
#include <aws/qldb-session/model/EndSessionResult.h>
#include <aws/qldb-session/model/CommitTransactionResult.h>
#include <aws/qldb-session/model/AbortTransactionResult.h>
#include <aws/qldb-session/model/ExecuteStatementResult.h>
#include <aws/qldb-session/model/FetchPageResult.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace QLDBSession
{
namespace Model
{
  class SendCommandResult
  {
  public:
    AWS_QLDBSESSION_API SendCommandResult() = default;
    AWS_QLDBSESSION_API SendCommandResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QLDBSESSION_API SendCommandResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Contains the details of the started session that includes a session token.
     * This <code>SessionToken</code> is required for every subsequent command that is
     * issued during the current session.</p>
     */
    inline const StartSessionResult& GetStartSession() const { return m_startSession; }
    template<typename StartSessionT = StartSessionResult>
    void SetStartSession(StartSessionT&& value) { m_startSessionHasBeenSet = true; m_startSession = std::forward<StartSessionT>(value); }
    template<typename StartSessionT = StartSessionResult>
    SendCommandResult& WithStartSession(StartSessionT&& value) { SetStartSession(std::forward<StartSessionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains the details of the started transaction.</p>
     */
    inline const StartTransactionResult& GetStartTransaction() const { return m_startTransaction; }
    template<typename StartTransactionT = StartTransactionResult>
    void SetStartTransaction(StartTransactionT&& value) { m_startTransactionHasBeenSet = true; m_startTransaction = std::forward<StartTransactionT>(value); }
    template<typename StartTransactionT = StartTransactionResult>
    SendCommandResult& WithStartTransaction(StartTransactionT&& value) { SetStartTransaction(std::forward<StartTransactionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains the details of the ended session.</p>
     */
    inline const EndSessionResult& GetEndSession() const { return m_endSession; }
    template<typename EndSessionT = EndSessionResult>
    void SetEndSession(EndSessionT&& value) { m_endSessionHasBeenSet = true; m_endSession = std::forward<EndSessionT>(value); }
    template<typename EndSessionT = EndSessionResult>
    SendCommandResult& WithEndSession(EndSessionT&& value) { SetEndSession(std::forward<EndSessionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains the details of the committed transaction.</p>
     */
    inline const CommitTransactionResult& GetCommitTransaction() const { return m_commitTransaction; }
    template<typename CommitTransactionT = CommitTransactionResult>
    void SetCommitTransaction(CommitTransactionT&& value) { m_commitTransactionHasBeenSet = true; m_commitTransaction = std::forward<CommitTransactionT>(value); }
    template<typename CommitTransactionT = CommitTransactionResult>
    SendCommandResult& WithCommitTransaction(CommitTransactionT&& value) { SetCommitTransaction(std::forward<CommitTransactionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains the details of the aborted transaction.</p>
     */
    inline const AbortTransactionResult& GetAbortTransaction() const { return m_abortTransaction; }
    template<typename AbortTransactionT = AbortTransactionResult>
    void SetAbortTransaction(AbortTransactionT&& value) { m_abortTransactionHasBeenSet = true; m_abortTransaction = std::forward<AbortTransactionT>(value); }
    template<typename AbortTransactionT = AbortTransactionResult>
    SendCommandResult& WithAbortTransaction(AbortTransactionT&& value) { SetAbortTransaction(std::forward<AbortTransactionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains the details of the executed statement.</p>
     */
    inline const ExecuteStatementResult& GetExecuteStatement() const { return m_executeStatement; }
    template<typename ExecuteStatementT = ExecuteStatementResult>
    void SetExecuteStatement(ExecuteStatementT&& value) { m_executeStatementHasBeenSet = true; m_executeStatement = std::forward<ExecuteStatementT>(value); }
    template<typename ExecuteStatementT = ExecuteStatementResult>
    SendCommandResult& WithExecuteStatement(ExecuteStatementT&& value) { SetExecuteStatement(std::forward<ExecuteStatementT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains the details of the fetched page.</p>
     */
    inline const FetchPageResult& GetFetchPage() const { return m_fetchPage; }
    template<typename FetchPageT = FetchPageResult>
    void SetFetchPage(FetchPageT&& value) { m_fetchPageHasBeenSet = true; m_fetchPage = std::forward<FetchPageT>(value); }
    template<typename FetchPageT = FetchPageResult>
    SendCommandResult& WithFetchPage(FetchPageT&& value) { SetFetchPage(std::forward<FetchPageT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    SendCommandResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    StartSessionResult m_startSession;
    bool m_startSessionHasBeenSet = false;

    StartTransactionResult m_startTransaction;
    bool m_startTransactionHasBeenSet = false;

    EndSessionResult m_endSession;
    bool m_endSessionHasBeenSet = false;

    CommitTransactionResult m_commitTransaction;
    bool m_commitTransactionHasBeenSet = false;

    AbortTransactionResult m_abortTransaction;
    bool m_abortTransactionHasBeenSet = false;

    ExecuteStatementResult m_executeStatement;
    bool m_executeStatementHasBeenSet = false;

    FetchPageResult m_fetchPage;
    bool m_fetchPageHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace QLDBSession
} // namespace Aws
