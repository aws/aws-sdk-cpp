/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/managedblockchain-query/ManagedBlockchainQuery_EXPORTS.h>
#include <aws/managedblockchain-query/model/OwnerIdentifier.h>
#include <aws/managedblockchain-query/model/TokenIdentifier.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/managedblockchain-query/model/BlockchainInstant.h>
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
  class GetTokenBalanceResult
  {
  public:
    AWS_MANAGEDBLOCKCHAINQUERY_API GetTokenBalanceResult() = default;
    AWS_MANAGEDBLOCKCHAINQUERY_API GetTokenBalanceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MANAGEDBLOCKCHAINQUERY_API GetTokenBalanceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    
    inline const OwnerIdentifier& GetOwnerIdentifier() const { return m_ownerIdentifier; }
    template<typename OwnerIdentifierT = OwnerIdentifier>
    void SetOwnerIdentifier(OwnerIdentifierT&& value) { m_ownerIdentifierHasBeenSet = true; m_ownerIdentifier = std::forward<OwnerIdentifierT>(value); }
    template<typename OwnerIdentifierT = OwnerIdentifier>
    GetTokenBalanceResult& WithOwnerIdentifier(OwnerIdentifierT&& value) { SetOwnerIdentifier(std::forward<OwnerIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const TokenIdentifier& GetTokenIdentifier() const { return m_tokenIdentifier; }
    template<typename TokenIdentifierT = TokenIdentifier>
    void SetTokenIdentifier(TokenIdentifierT&& value) { m_tokenIdentifierHasBeenSet = true; m_tokenIdentifier = std::forward<TokenIdentifierT>(value); }
    template<typename TokenIdentifierT = TokenIdentifier>
    GetTokenBalanceResult& WithTokenIdentifier(TokenIdentifierT&& value) { SetTokenIdentifier(std::forward<TokenIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The container for the token balance.</p>
     */
    inline const Aws::String& GetBalance() const { return m_balance; }
    template<typename BalanceT = Aws::String>
    void SetBalance(BalanceT&& value) { m_balanceHasBeenSet = true; m_balance = std::forward<BalanceT>(value); }
    template<typename BalanceT = Aws::String>
    GetTokenBalanceResult& WithBalance(BalanceT&& value) { SetBalance(std::forward<BalanceT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const BlockchainInstant& GetAtBlockchainInstant() const { return m_atBlockchainInstant; }
    template<typename AtBlockchainInstantT = BlockchainInstant>
    void SetAtBlockchainInstant(AtBlockchainInstantT&& value) { m_atBlockchainInstantHasBeenSet = true; m_atBlockchainInstant = std::forward<AtBlockchainInstantT>(value); }
    template<typename AtBlockchainInstantT = BlockchainInstant>
    GetTokenBalanceResult& WithAtBlockchainInstant(AtBlockchainInstantT&& value) { SetAtBlockchainInstant(std::forward<AtBlockchainInstantT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const BlockchainInstant& GetLastUpdatedTime() const { return m_lastUpdatedTime; }
    template<typename LastUpdatedTimeT = BlockchainInstant>
    void SetLastUpdatedTime(LastUpdatedTimeT&& value) { m_lastUpdatedTimeHasBeenSet = true; m_lastUpdatedTime = std::forward<LastUpdatedTimeT>(value); }
    template<typename LastUpdatedTimeT = BlockchainInstant>
    GetTokenBalanceResult& WithLastUpdatedTime(LastUpdatedTimeT&& value) { SetLastUpdatedTime(std::forward<LastUpdatedTimeT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetTokenBalanceResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    OwnerIdentifier m_ownerIdentifier;
    bool m_ownerIdentifierHasBeenSet = false;

    TokenIdentifier m_tokenIdentifier;
    bool m_tokenIdentifierHasBeenSet = false;

    Aws::String m_balance;
    bool m_balanceHasBeenSet = false;

    BlockchainInstant m_atBlockchainInstant;
    bool m_atBlockchainInstantHasBeenSet = false;

    BlockchainInstant m_lastUpdatedTime;
    bool m_lastUpdatedTimeHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ManagedBlockchainQuery
} // namespace Aws
