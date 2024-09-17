/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qldb-session/QLDBSession_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/Array.h>
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
   * <p>Contains the details of the transaction to commit.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/qldb-session-2019-07-11/CommitTransactionRequest">AWS
   * API Reference</a></p>
   */
  class CommitTransactionRequest
  {
  public:
    AWS_QLDBSESSION_API CommitTransactionRequest();
    AWS_QLDBSESSION_API CommitTransactionRequest(Aws::Utils::Json::JsonView jsonValue);
    AWS_QLDBSESSION_API CommitTransactionRequest& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QLDBSESSION_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specifies the transaction ID of the transaction to commit.</p>
     */
    inline const Aws::String& GetTransactionId() const{ return m_transactionId; }
    inline bool TransactionIdHasBeenSet() const { return m_transactionIdHasBeenSet; }
    inline void SetTransactionId(const Aws::String& value) { m_transactionIdHasBeenSet = true; m_transactionId = value; }
    inline void SetTransactionId(Aws::String&& value) { m_transactionIdHasBeenSet = true; m_transactionId = std::move(value); }
    inline void SetTransactionId(const char* value) { m_transactionIdHasBeenSet = true; m_transactionId.assign(value); }
    inline CommitTransactionRequest& WithTransactionId(const Aws::String& value) { SetTransactionId(value); return *this;}
    inline CommitTransactionRequest& WithTransactionId(Aws::String&& value) { SetTransactionId(std::move(value)); return *this;}
    inline CommitTransactionRequest& WithTransactionId(const char* value) { SetTransactionId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the commit digest for the transaction to commit. For every active
     * transaction, the commit digest must be passed. QLDB validates
     * <code>CommitDigest</code> and rejects the commit with an error if the digest
     * computed on the client does not match the digest computed by QLDB.</p> <p>The
     * purpose of the <code>CommitDigest</code> parameter is to ensure that QLDB
     * commits a transaction if and only if the server has processed the exact set of
     * statements sent by the client, in the same order that client sent them, and with
     * no duplicates.</p>
     */
    inline const Aws::Utils::ByteBuffer& GetCommitDigest() const{ return m_commitDigest; }
    inline bool CommitDigestHasBeenSet() const { return m_commitDigestHasBeenSet; }
    inline void SetCommitDigest(const Aws::Utils::ByteBuffer& value) { m_commitDigestHasBeenSet = true; m_commitDigest = value; }
    inline void SetCommitDigest(Aws::Utils::ByteBuffer&& value) { m_commitDigestHasBeenSet = true; m_commitDigest = std::move(value); }
    inline CommitTransactionRequest& WithCommitDigest(const Aws::Utils::ByteBuffer& value) { SetCommitDigest(value); return *this;}
    inline CommitTransactionRequest& WithCommitDigest(Aws::Utils::ByteBuffer&& value) { SetCommitDigest(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_transactionId;
    bool m_transactionIdHasBeenSet = false;

    Aws::Utils::ByteBuffer m_commitDigest;
    bool m_commitDigestHasBeenSet = false;
  };

} // namespace Model
} // namespace QLDBSession
} // namespace Aws
