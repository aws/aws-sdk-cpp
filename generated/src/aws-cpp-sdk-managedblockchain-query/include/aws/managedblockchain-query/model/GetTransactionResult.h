/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/managedblockchain-query/ManagedBlockchainQuery_EXPORTS.h>
#include <aws/managedblockchain-query/model/Transaction.h>
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
namespace ManagedBlockchainQuery
{
namespace Model
{
  class GetTransactionResult
  {
  public:
    AWS_MANAGEDBLOCKCHAINQUERY_API GetTransactionResult();
    AWS_MANAGEDBLOCKCHAINQUERY_API GetTransactionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MANAGEDBLOCKCHAINQUERY_API GetTransactionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Contains the details of the transaction.</p>
     */
    inline const Transaction& GetTransaction() const{ return m_transaction; }

    /**
     * <p>Contains the details of the transaction.</p>
     */
    inline void SetTransaction(const Transaction& value) { m_transaction = value; }

    /**
     * <p>Contains the details of the transaction.</p>
     */
    inline void SetTransaction(Transaction&& value) { m_transaction = std::move(value); }

    /**
     * <p>Contains the details of the transaction.</p>
     */
    inline GetTransactionResult& WithTransaction(const Transaction& value) { SetTransaction(value); return *this;}

    /**
     * <p>Contains the details of the transaction.</p>
     */
    inline GetTransactionResult& WithTransaction(Transaction&& value) { SetTransaction(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetTransactionResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetTransactionResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetTransactionResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Transaction m_transaction;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ManagedBlockchainQuery
} // namespace Aws
