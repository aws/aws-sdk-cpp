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
    AWS_MANAGEDBLOCKCHAINQUERY_API GetTokenBalanceResult();
    AWS_MANAGEDBLOCKCHAINQUERY_API GetTokenBalanceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MANAGEDBLOCKCHAINQUERY_API GetTokenBalanceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const OwnerIdentifier& GetOwnerIdentifier() const{ return m_ownerIdentifier; }

    
    inline void SetOwnerIdentifier(const OwnerIdentifier& value) { m_ownerIdentifier = value; }

    
    inline void SetOwnerIdentifier(OwnerIdentifier&& value) { m_ownerIdentifier = std::move(value); }

    
    inline GetTokenBalanceResult& WithOwnerIdentifier(const OwnerIdentifier& value) { SetOwnerIdentifier(value); return *this;}

    
    inline GetTokenBalanceResult& WithOwnerIdentifier(OwnerIdentifier&& value) { SetOwnerIdentifier(std::move(value)); return *this;}


    
    inline const TokenIdentifier& GetTokenIdentifier() const{ return m_tokenIdentifier; }

    
    inline void SetTokenIdentifier(const TokenIdentifier& value) { m_tokenIdentifier = value; }

    
    inline void SetTokenIdentifier(TokenIdentifier&& value) { m_tokenIdentifier = std::move(value); }

    
    inline GetTokenBalanceResult& WithTokenIdentifier(const TokenIdentifier& value) { SetTokenIdentifier(value); return *this;}

    
    inline GetTokenBalanceResult& WithTokenIdentifier(TokenIdentifier&& value) { SetTokenIdentifier(std::move(value)); return *this;}


    /**
     * <p>The container for the token balance.</p>
     */
    inline const Aws::String& GetBalance() const{ return m_balance; }

    /**
     * <p>The container for the token balance.</p>
     */
    inline void SetBalance(const Aws::String& value) { m_balance = value; }

    /**
     * <p>The container for the token balance.</p>
     */
    inline void SetBalance(Aws::String&& value) { m_balance = std::move(value); }

    /**
     * <p>The container for the token balance.</p>
     */
    inline void SetBalance(const char* value) { m_balance.assign(value); }

    /**
     * <p>The container for the token balance.</p>
     */
    inline GetTokenBalanceResult& WithBalance(const Aws::String& value) { SetBalance(value); return *this;}

    /**
     * <p>The container for the token balance.</p>
     */
    inline GetTokenBalanceResult& WithBalance(Aws::String&& value) { SetBalance(std::move(value)); return *this;}

    /**
     * <p>The container for the token balance.</p>
     */
    inline GetTokenBalanceResult& WithBalance(const char* value) { SetBalance(value); return *this;}


    
    inline const BlockchainInstant& GetAtBlockchainInstant() const{ return m_atBlockchainInstant; }

    
    inline void SetAtBlockchainInstant(const BlockchainInstant& value) { m_atBlockchainInstant = value; }

    
    inline void SetAtBlockchainInstant(BlockchainInstant&& value) { m_atBlockchainInstant = std::move(value); }

    
    inline GetTokenBalanceResult& WithAtBlockchainInstant(const BlockchainInstant& value) { SetAtBlockchainInstant(value); return *this;}

    
    inline GetTokenBalanceResult& WithAtBlockchainInstant(BlockchainInstant&& value) { SetAtBlockchainInstant(std::move(value)); return *this;}


    
    inline const BlockchainInstant& GetLastUpdatedTime() const{ return m_lastUpdatedTime; }

    
    inline void SetLastUpdatedTime(const BlockchainInstant& value) { m_lastUpdatedTime = value; }

    
    inline void SetLastUpdatedTime(BlockchainInstant&& value) { m_lastUpdatedTime = std::move(value); }

    
    inline GetTokenBalanceResult& WithLastUpdatedTime(const BlockchainInstant& value) { SetLastUpdatedTime(value); return *this;}

    
    inline GetTokenBalanceResult& WithLastUpdatedTime(BlockchainInstant&& value) { SetLastUpdatedTime(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetTokenBalanceResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetTokenBalanceResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetTokenBalanceResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    OwnerIdentifier m_ownerIdentifier;

    TokenIdentifier m_tokenIdentifier;

    Aws::String m_balance;

    BlockchainInstant m_atBlockchainInstant;

    BlockchainInstant m_lastUpdatedTime;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ManagedBlockchainQuery
} // namespace Aws
