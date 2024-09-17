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
    AWS_QLDBSESSION_API SendCommandRequest();

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
    inline const Aws::String& GetSessionToken() const{ return m_sessionToken; }
    inline bool SessionTokenHasBeenSet() const { return m_sessionTokenHasBeenSet; }
    inline void SetSessionToken(const Aws::String& value) { m_sessionTokenHasBeenSet = true; m_sessionToken = value; }
    inline void SetSessionToken(Aws::String&& value) { m_sessionTokenHasBeenSet = true; m_sessionToken = std::move(value); }
    inline void SetSessionToken(const char* value) { m_sessionTokenHasBeenSet = true; m_sessionToken.assign(value); }
    inline SendCommandRequest& WithSessionToken(const Aws::String& value) { SetSessionToken(value); return *this;}
    inline SendCommandRequest& WithSessionToken(Aws::String&& value) { SetSessionToken(std::move(value)); return *this;}
    inline SendCommandRequest& WithSessionToken(const char* value) { SetSessionToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Command to start a new session. A session token is obtained as part of the
     * response.</p>
     */
    inline const StartSessionRequest& GetStartSession() const{ return m_startSession; }
    inline bool StartSessionHasBeenSet() const { return m_startSessionHasBeenSet; }
    inline void SetStartSession(const StartSessionRequest& value) { m_startSessionHasBeenSet = true; m_startSession = value; }
    inline void SetStartSession(StartSessionRequest&& value) { m_startSessionHasBeenSet = true; m_startSession = std::move(value); }
    inline SendCommandRequest& WithStartSession(const StartSessionRequest& value) { SetStartSession(value); return *this;}
    inline SendCommandRequest& WithStartSession(StartSessionRequest&& value) { SetStartSession(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Command to start a new transaction.</p>
     */
    inline const StartTransactionRequest& GetStartTransaction() const{ return m_startTransaction; }
    inline bool StartTransactionHasBeenSet() const { return m_startTransactionHasBeenSet; }
    inline void SetStartTransaction(const StartTransactionRequest& value) { m_startTransactionHasBeenSet = true; m_startTransaction = value; }
    inline void SetStartTransaction(StartTransactionRequest&& value) { m_startTransactionHasBeenSet = true; m_startTransaction = std::move(value); }
    inline SendCommandRequest& WithStartTransaction(const StartTransactionRequest& value) { SetStartTransaction(value); return *this;}
    inline SendCommandRequest& WithStartTransaction(StartTransactionRequest&& value) { SetStartTransaction(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Command to end the current session.</p>
     */
    inline const EndSessionRequest& GetEndSession() const{ return m_endSession; }
    inline bool EndSessionHasBeenSet() const { return m_endSessionHasBeenSet; }
    inline void SetEndSession(const EndSessionRequest& value) { m_endSessionHasBeenSet = true; m_endSession = value; }
    inline void SetEndSession(EndSessionRequest&& value) { m_endSessionHasBeenSet = true; m_endSession = std::move(value); }
    inline SendCommandRequest& WithEndSession(const EndSessionRequest& value) { SetEndSession(value); return *this;}
    inline SendCommandRequest& WithEndSession(EndSessionRequest&& value) { SetEndSession(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Command to commit the specified transaction.</p>
     */
    inline const CommitTransactionRequest& GetCommitTransaction() const{ return m_commitTransaction; }
    inline bool CommitTransactionHasBeenSet() const { return m_commitTransactionHasBeenSet; }
    inline void SetCommitTransaction(const CommitTransactionRequest& value) { m_commitTransactionHasBeenSet = true; m_commitTransaction = value; }
    inline void SetCommitTransaction(CommitTransactionRequest&& value) { m_commitTransactionHasBeenSet = true; m_commitTransaction = std::move(value); }
    inline SendCommandRequest& WithCommitTransaction(const CommitTransactionRequest& value) { SetCommitTransaction(value); return *this;}
    inline SendCommandRequest& WithCommitTransaction(CommitTransactionRequest&& value) { SetCommitTransaction(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Command to abort the current transaction.</p>
     */
    inline const AbortTransactionRequest& GetAbortTransaction() const{ return m_abortTransaction; }
    inline bool AbortTransactionHasBeenSet() const { return m_abortTransactionHasBeenSet; }
    inline void SetAbortTransaction(const AbortTransactionRequest& value) { m_abortTransactionHasBeenSet = true; m_abortTransaction = value; }
    inline void SetAbortTransaction(AbortTransactionRequest&& value) { m_abortTransactionHasBeenSet = true; m_abortTransaction = std::move(value); }
    inline SendCommandRequest& WithAbortTransaction(const AbortTransactionRequest& value) { SetAbortTransaction(value); return *this;}
    inline SendCommandRequest& WithAbortTransaction(AbortTransactionRequest&& value) { SetAbortTransaction(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Command to execute a statement in the specified transaction.</p>
     */
    inline const ExecuteStatementRequest& GetExecuteStatement() const{ return m_executeStatement; }
    inline bool ExecuteStatementHasBeenSet() const { return m_executeStatementHasBeenSet; }
    inline void SetExecuteStatement(const ExecuteStatementRequest& value) { m_executeStatementHasBeenSet = true; m_executeStatement = value; }
    inline void SetExecuteStatement(ExecuteStatementRequest&& value) { m_executeStatementHasBeenSet = true; m_executeStatement = std::move(value); }
    inline SendCommandRequest& WithExecuteStatement(const ExecuteStatementRequest& value) { SetExecuteStatement(value); return *this;}
    inline SendCommandRequest& WithExecuteStatement(ExecuteStatementRequest&& value) { SetExecuteStatement(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Command to fetch a page.</p>
     */
    inline const FetchPageRequest& GetFetchPage() const{ return m_fetchPage; }
    inline bool FetchPageHasBeenSet() const { return m_fetchPageHasBeenSet; }
    inline void SetFetchPage(const FetchPageRequest& value) { m_fetchPageHasBeenSet = true; m_fetchPage = value; }
    inline void SetFetchPage(FetchPageRequest&& value) { m_fetchPageHasBeenSet = true; m_fetchPage = std::move(value); }
    inline SendCommandRequest& WithFetchPage(const FetchPageRequest& value) { SetFetchPage(value); return *this;}
    inline SendCommandRequest& WithFetchPage(FetchPageRequest&& value) { SetFetchPage(std::move(value)); return *this;}
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
