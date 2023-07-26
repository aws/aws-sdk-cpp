/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/managedblockchain-query/ManagedBlockchainQuery_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/managedblockchain-query/model/BatchGetTokenBalanceOutputItem.h>
#include <aws/managedblockchain-query/model/BatchGetTokenBalanceErrorItem.h>
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
  class BatchGetTokenBalanceResult
  {
  public:
    AWS_MANAGEDBLOCKCHAINQUERY_API BatchGetTokenBalanceResult();
    AWS_MANAGEDBLOCKCHAINQUERY_API BatchGetTokenBalanceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MANAGEDBLOCKCHAINQUERY_API BatchGetTokenBalanceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An array of <code>BatchGetTokenBalanceOutputItem</code> objects returned by
     * the response.</p>
     */
    inline const Aws::Vector<BatchGetTokenBalanceOutputItem>& GetTokenBalances() const{ return m_tokenBalances; }

    /**
     * <p>An array of <code>BatchGetTokenBalanceOutputItem</code> objects returned by
     * the response.</p>
     */
    inline void SetTokenBalances(const Aws::Vector<BatchGetTokenBalanceOutputItem>& value) { m_tokenBalances = value; }

    /**
     * <p>An array of <code>BatchGetTokenBalanceOutputItem</code> objects returned by
     * the response.</p>
     */
    inline void SetTokenBalances(Aws::Vector<BatchGetTokenBalanceOutputItem>&& value) { m_tokenBalances = std::move(value); }

    /**
     * <p>An array of <code>BatchGetTokenBalanceOutputItem</code> objects returned by
     * the response.</p>
     */
    inline BatchGetTokenBalanceResult& WithTokenBalances(const Aws::Vector<BatchGetTokenBalanceOutputItem>& value) { SetTokenBalances(value); return *this;}

    /**
     * <p>An array of <code>BatchGetTokenBalanceOutputItem</code> objects returned by
     * the response.</p>
     */
    inline BatchGetTokenBalanceResult& WithTokenBalances(Aws::Vector<BatchGetTokenBalanceOutputItem>&& value) { SetTokenBalances(std::move(value)); return *this;}

    /**
     * <p>An array of <code>BatchGetTokenBalanceOutputItem</code> objects returned by
     * the response.</p>
     */
    inline BatchGetTokenBalanceResult& AddTokenBalances(const BatchGetTokenBalanceOutputItem& value) { m_tokenBalances.push_back(value); return *this; }

    /**
     * <p>An array of <code>BatchGetTokenBalanceOutputItem</code> objects returned by
     * the response.</p>
     */
    inline BatchGetTokenBalanceResult& AddTokenBalances(BatchGetTokenBalanceOutputItem&& value) { m_tokenBalances.push_back(std::move(value)); return *this; }


    /**
     * <p>An array of <code>BatchGetTokenBalanceErrorItem</code> objects returned from
     * the request.</p>
     */
    inline const Aws::Vector<BatchGetTokenBalanceErrorItem>& GetErrors() const{ return m_errors; }

    /**
     * <p>An array of <code>BatchGetTokenBalanceErrorItem</code> objects returned from
     * the request.</p>
     */
    inline void SetErrors(const Aws::Vector<BatchGetTokenBalanceErrorItem>& value) { m_errors = value; }

    /**
     * <p>An array of <code>BatchGetTokenBalanceErrorItem</code> objects returned from
     * the request.</p>
     */
    inline void SetErrors(Aws::Vector<BatchGetTokenBalanceErrorItem>&& value) { m_errors = std::move(value); }

    /**
     * <p>An array of <code>BatchGetTokenBalanceErrorItem</code> objects returned from
     * the request.</p>
     */
    inline BatchGetTokenBalanceResult& WithErrors(const Aws::Vector<BatchGetTokenBalanceErrorItem>& value) { SetErrors(value); return *this;}

    /**
     * <p>An array of <code>BatchGetTokenBalanceErrorItem</code> objects returned from
     * the request.</p>
     */
    inline BatchGetTokenBalanceResult& WithErrors(Aws::Vector<BatchGetTokenBalanceErrorItem>&& value) { SetErrors(std::move(value)); return *this;}

    /**
     * <p>An array of <code>BatchGetTokenBalanceErrorItem</code> objects returned from
     * the request.</p>
     */
    inline BatchGetTokenBalanceResult& AddErrors(const BatchGetTokenBalanceErrorItem& value) { m_errors.push_back(value); return *this; }

    /**
     * <p>An array of <code>BatchGetTokenBalanceErrorItem</code> objects returned from
     * the request.</p>
     */
    inline BatchGetTokenBalanceResult& AddErrors(BatchGetTokenBalanceErrorItem&& value) { m_errors.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline BatchGetTokenBalanceResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline BatchGetTokenBalanceResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline BatchGetTokenBalanceResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<BatchGetTokenBalanceOutputItem> m_tokenBalances;

    Aws::Vector<BatchGetTokenBalanceErrorItem> m_errors;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ManagedBlockchainQuery
} // namespace Aws
