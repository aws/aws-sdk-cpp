/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/managedblockchain-query/ManagedBlockchainQuery_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/managedblockchain-query/model/TokenBalance.h>
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
  class ListTokenBalancesResult
  {
  public:
    AWS_MANAGEDBLOCKCHAINQUERY_API ListTokenBalancesResult();
    AWS_MANAGEDBLOCKCHAINQUERY_API ListTokenBalancesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MANAGEDBLOCKCHAINQUERY_API ListTokenBalancesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An array of <code>TokenBalance</code> objects. Each object contains details
     * about the token balance.</p>
     */
    inline const Aws::Vector<TokenBalance>& GetTokenBalances() const{ return m_tokenBalances; }

    /**
     * <p>An array of <code>TokenBalance</code> objects. Each object contains details
     * about the token balance.</p>
     */
    inline void SetTokenBalances(const Aws::Vector<TokenBalance>& value) { m_tokenBalances = value; }

    /**
     * <p>An array of <code>TokenBalance</code> objects. Each object contains details
     * about the token balance.</p>
     */
    inline void SetTokenBalances(Aws::Vector<TokenBalance>&& value) { m_tokenBalances = std::move(value); }

    /**
     * <p>An array of <code>TokenBalance</code> objects. Each object contains details
     * about the token balance.</p>
     */
    inline ListTokenBalancesResult& WithTokenBalances(const Aws::Vector<TokenBalance>& value) { SetTokenBalances(value); return *this;}

    /**
     * <p>An array of <code>TokenBalance</code> objects. Each object contains details
     * about the token balance.</p>
     */
    inline ListTokenBalancesResult& WithTokenBalances(Aws::Vector<TokenBalance>&& value) { SetTokenBalances(std::move(value)); return *this;}

    /**
     * <p>An array of <code>TokenBalance</code> objects. Each object contains details
     * about the token balance.</p>
     */
    inline ListTokenBalancesResult& AddTokenBalances(const TokenBalance& value) { m_tokenBalances.push_back(value); return *this; }

    /**
     * <p>An array of <code>TokenBalance</code> objects. Each object contains details
     * about the token balance.</p>
     */
    inline ListTokenBalancesResult& AddTokenBalances(TokenBalance&& value) { m_tokenBalances.push_back(std::move(value)); return *this; }


    /**
     * <p>The pagination token that indicates the next set of results to retrieve.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The pagination token that indicates the next set of results to retrieve.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The pagination token that indicates the next set of results to retrieve.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The pagination token that indicates the next set of results to retrieve.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The pagination token that indicates the next set of results to retrieve.</p>
     */
    inline ListTokenBalancesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The pagination token that indicates the next set of results to retrieve.</p>
     */
    inline ListTokenBalancesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The pagination token that indicates the next set of results to retrieve.</p>
     */
    inline ListTokenBalancesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListTokenBalancesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListTokenBalancesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListTokenBalancesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<TokenBalance> m_tokenBalances;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ManagedBlockchainQuery
} // namespace Aws
