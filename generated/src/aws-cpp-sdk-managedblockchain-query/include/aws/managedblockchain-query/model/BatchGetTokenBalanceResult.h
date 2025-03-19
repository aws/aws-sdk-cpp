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
    AWS_MANAGEDBLOCKCHAINQUERY_API BatchGetTokenBalanceResult() = default;
    AWS_MANAGEDBLOCKCHAINQUERY_API BatchGetTokenBalanceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MANAGEDBLOCKCHAINQUERY_API BatchGetTokenBalanceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array of <code>BatchGetTokenBalanceOutputItem</code> objects returned by
     * the response.</p>
     */
    inline const Aws::Vector<BatchGetTokenBalanceOutputItem>& GetTokenBalances() const { return m_tokenBalances; }
    template<typename TokenBalancesT = Aws::Vector<BatchGetTokenBalanceOutputItem>>
    void SetTokenBalances(TokenBalancesT&& value) { m_tokenBalancesHasBeenSet = true; m_tokenBalances = std::forward<TokenBalancesT>(value); }
    template<typename TokenBalancesT = Aws::Vector<BatchGetTokenBalanceOutputItem>>
    BatchGetTokenBalanceResult& WithTokenBalances(TokenBalancesT&& value) { SetTokenBalances(std::forward<TokenBalancesT>(value)); return *this;}
    template<typename TokenBalancesT = BatchGetTokenBalanceOutputItem>
    BatchGetTokenBalanceResult& AddTokenBalances(TokenBalancesT&& value) { m_tokenBalancesHasBeenSet = true; m_tokenBalances.emplace_back(std::forward<TokenBalancesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An array of <code>BatchGetTokenBalanceErrorItem</code> objects returned from
     * the request.</p>
     */
    inline const Aws::Vector<BatchGetTokenBalanceErrorItem>& GetErrors() const { return m_errors; }
    template<typename ErrorsT = Aws::Vector<BatchGetTokenBalanceErrorItem>>
    void SetErrors(ErrorsT&& value) { m_errorsHasBeenSet = true; m_errors = std::forward<ErrorsT>(value); }
    template<typename ErrorsT = Aws::Vector<BatchGetTokenBalanceErrorItem>>
    BatchGetTokenBalanceResult& WithErrors(ErrorsT&& value) { SetErrors(std::forward<ErrorsT>(value)); return *this;}
    template<typename ErrorsT = BatchGetTokenBalanceErrorItem>
    BatchGetTokenBalanceResult& AddErrors(ErrorsT&& value) { m_errorsHasBeenSet = true; m_errors.emplace_back(std::forward<ErrorsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    BatchGetTokenBalanceResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<BatchGetTokenBalanceOutputItem> m_tokenBalances;
    bool m_tokenBalancesHasBeenSet = false;

    Aws::Vector<BatchGetTokenBalanceErrorItem> m_errors;
    bool m_errorsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ManagedBlockchainQuery
} // namespace Aws
