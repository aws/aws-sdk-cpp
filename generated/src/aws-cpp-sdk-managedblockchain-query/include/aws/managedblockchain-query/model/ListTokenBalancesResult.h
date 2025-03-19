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
    AWS_MANAGEDBLOCKCHAINQUERY_API ListTokenBalancesResult() = default;
    AWS_MANAGEDBLOCKCHAINQUERY_API ListTokenBalancesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MANAGEDBLOCKCHAINQUERY_API ListTokenBalancesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array of <code>TokenBalance</code> objects. Each object contains details
     * about the token balance.</p>
     */
    inline const Aws::Vector<TokenBalance>& GetTokenBalances() const { return m_tokenBalances; }
    template<typename TokenBalancesT = Aws::Vector<TokenBalance>>
    void SetTokenBalances(TokenBalancesT&& value) { m_tokenBalancesHasBeenSet = true; m_tokenBalances = std::forward<TokenBalancesT>(value); }
    template<typename TokenBalancesT = Aws::Vector<TokenBalance>>
    ListTokenBalancesResult& WithTokenBalances(TokenBalancesT&& value) { SetTokenBalances(std::forward<TokenBalancesT>(value)); return *this;}
    template<typename TokenBalancesT = TokenBalance>
    ListTokenBalancesResult& AddTokenBalances(TokenBalancesT&& value) { m_tokenBalancesHasBeenSet = true; m_tokenBalances.emplace_back(std::forward<TokenBalancesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The pagination token that indicates the next set of results to retrieve.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListTokenBalancesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListTokenBalancesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<TokenBalance> m_tokenBalances;
    bool m_tokenBalancesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ManagedBlockchainQuery
} // namespace Aws
