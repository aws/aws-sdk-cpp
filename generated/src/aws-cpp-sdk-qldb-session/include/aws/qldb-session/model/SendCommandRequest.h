/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qldb-session/QLDBSession_EXPORTS.h>
#include <aws/qldb-session/QLDBSessionRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/qldb-session/model/StartSessionRequest.h>
#include <aws/qldb-session/model/StartTransactionRequest.h>
#include <aws/qldb-session/model/EndSessionRequest.h>
#include <aws/qldb-session/model/CommitTransactionRequest.h>
#include <aws/qldb-session/model/AbortTransactionRequest.h>
#include <aws/qldb-session/model/ExecuteStatementRequest.h>
#include <aws/qldb-session/model/FetchPageRequest.h>
#include <utility>

namespace Aws
{
namespace QLDBSession
{
namespace Model
{

  /**
   */
  class SendCommandRequest : public QLDBSessionRequest
  {
  public:
    AWS_QLDBSESSION_API SendCommandRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "SendCommand"; }

    AWS_QLDBSESSION_API Aws::String SerializePayload() const override;

    AWS_QLDBSESSION_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>Specifies the session token for the current command. A session token is
     * constant throughout the life of the session.</p> <p>To obtain a session token,
     * run the <code>StartSession</code> command. This <code>SessionToken</code> is
     * required for every subsequent command that is issued during the current
     * session.</p>
     */
    inline const Aws::String& GetSessionToken() const { return m_sessionToken; }
    inline bool SessionTokenHasBeenSet() const { return m_sessionTokenHasBeenSet; }
    template<typename SessionTokenT = Aws::String>
    void SetSessionToken(SessionTokenT&& value) { m_sessionTokenHasBeenSet = true; m_sessionToken = std::forward<SessionTokenT>(value); }
    template<typename SessionTokenT = Aws::String>
    SendCommandRequest& WithSessionToken(SessionTokenT&& value) { SetSessionToken(std::forward<SessionTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Command to start a new session. A session token is obtained as part of the
     * response.</p>
     */
    inline const StartSessionRequest& GetStartSession() const { return m_startSession; }
    inline bool StartSessionHasBeenSet() const { return m_startSessionHasBeenSet; }
    template<typename StartSessionT = StartSessionRequest>
    void SetStartSession(StartSessionT&& value) { m_startSessionHasBeenSet = true; m_startSession = std::forward<StartSessionT>(value); }
    template<typename StartSessionT = StartSessionRequest>
    SendCommandRequest& WithStartSession(StartSessionT&& value) { SetStartSession(std::forward<StartSessionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Command to start a new transaction.</p>
     */
    inline const StartTransactionRequest& GetStartTransaction() const { return m_startTransaction; }
    inline bool StartTransactionHasBeenSet() const { return m_startTransactionHasBeenSet; }
    template<typename StartTransactionT = StartTransactionRequest>
    void SetStartTransaction(StartTransactionT&& value) { m_startTransactionHasBeenSet = true; m_startTransaction = std::forward<StartTransactionT>(value); }
    template<typename StartTransactionT = StartTransactionRequest>
    SendCommandRequest& WithStartTransaction(StartTransactionT&& value) { SetStartTransaction(std::forward<StartTransactionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Command to end the current session.</p>
     */
    inline const EndSessionRequest& GetEndSession() const { return m_endSession; }
    inline bool EndSessionHasBeenSet() const { return m_endSessionHasBeenSet; }
    template<typename EndSessionT = EndSessionRequest>
    void SetEndSession(EndSessionT&& value) { m_endSessionHasBeenSet = true; m_endSession = std::forward<EndSessionT>(value); }
    template<typename EndSessionT = EndSessionRequest>
    SendCommandRequest& WithEndSession(EndSessionT&& value) { SetEndSession(std::forward<EndSessionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Command to commit the specified transaction.</p>
     */
    inline const CommitTransactionRequest& GetCommitTransaction() const { return m_commitTransaction; }
    inline bool CommitTransactionHasBeenSet() const { return m_commitTransactionHasBeenSet; }
    template<typename CommitTransactionT = CommitTransactionRequest>
    void SetCommitTransaction(CommitTransactionT&& value) { m_commitTransactionHasBeenSet = true; m_commitTransaction = std::forward<CommitTransactionT>(value); }
    template<typename CommitTransactionT = CommitTransactionRequest>
    SendCommandRequest& WithCommitTransaction(CommitTransactionT&& value) { SetCommitTransaction(std::forward<CommitTransactionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Command to abort the current transaction.</p>
     */
    inline const AbortTransactionRequest& GetAbortTransaction() const { return m_abortTransaction; }
    inline bool AbortTransactionHasBeenSet() const { return m_abortTransactionHasBeenSet; }
    template<typename AbortTransactionT = AbortTransactionRequest>
    void SetAbortTransaction(AbortTransactionT&& value) { m_abortTransactionHasBeenSet = true; m_abortTransaction = std::forward<AbortTransactionT>(value); }
    template<typename AbortTransactionT = AbortTransactionRequest>
    SendCommandRequest& WithAbortTransaction(AbortTransactionT&& value) { SetAbortTransaction(std::forward<AbortTransactionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Command to execute a statement in the specified transaction.</p>
     */
    inline const ExecuteStatementRequest& GetExecuteStatement() const { return m_executeStatement; }
    inline bool ExecuteStatementHasBeenSet() const { return m_executeStatementHasBeenSet; }
    template<typename ExecuteStatementT = ExecuteStatementRequest>
    void SetExecuteStatement(ExecuteStatementT&& value) { m_executeStatementHasBeenSet = true; m_executeStatement = std::forward<ExecuteStatementT>(value); }
    template<typename ExecuteStatementT = ExecuteStatementRequest>
    SendCommandRequest& WithExecuteStatement(ExecuteStatementT&& value) { SetExecuteStatement(std::forward<ExecuteStatementT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Command to fetch a page.</p>
     */
    inline const FetchPageRequest& GetFetchPage() const { return m_fetchPage; }
    inline bool FetchPageHasBeenSet() const { return m_fetchPageHasBeenSet; }
    template<typename FetchPageT = FetchPageRequest>
    void SetFetchPage(FetchPageT&& value) { m_fetchPageHasBeenSet = true; m_fetchPage = std::forward<FetchPageT>(value); }
    template<typename FetchPageT = FetchPageRequest>
    SendCommandRequest& WithFetchPage(FetchPageT&& value) { SetFetchPage(std::forward<FetchPageT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_sessionToken;
    bool m_sessionTokenHasBeenSet = false;

    StartSessionRequest m_startSession;
    bool m_startSessionHasBeenSet = false;

    StartTransactionRequest m_startTransaction;
    bool m_startTransactionHasBeenSet = false;

    EndSessionRequest m_endSession;
    bool m_endSessionHasBeenSet = false;

    CommitTransactionRequest m_commitTransaction;
    bool m_commitTransactionHasBeenSet = false;

    AbortTransactionRequest m_abortTransaction;
    bool m_abortTransactionHasBeenSet = false;

    ExecuteStatementRequest m_executeStatement;
    bool m_executeStatementHasBeenSet = false;

    FetchPageRequest m_fetchPage;
    bool m_fetchPageHasBeenSet = false;
  };

} // namespace Model
} // namespace QLDBSession
} // namespace Aws
