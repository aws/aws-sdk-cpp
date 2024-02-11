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
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace ManagedBlockchainQuery
{
namespace Model
{

  /**
   * <p>The container for the properties of a token balance output.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/managedblockchain-query-2023-05-04/BatchGetTokenBalanceOutputItem">AWS
   * API Reference</a></p>
   */
  class BatchGetTokenBalanceOutputItem
  {
  public:
    AWS_MANAGEDBLOCKCHAINQUERY_API BatchGetTokenBalanceOutputItem();
    AWS_MANAGEDBLOCKCHAINQUERY_API BatchGetTokenBalanceOutputItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_MANAGEDBLOCKCHAINQUERY_API BatchGetTokenBalanceOutputItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MANAGEDBLOCKCHAINQUERY_API Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const OwnerIdentifier& GetOwnerIdentifier() const{ return m_ownerIdentifier; }

    
    inline bool OwnerIdentifierHasBeenSet() const { return m_ownerIdentifierHasBeenSet; }

    
    inline void SetOwnerIdentifier(const OwnerIdentifier& value) { m_ownerIdentifierHasBeenSet = true; m_ownerIdentifier = value; }

    
    inline void SetOwnerIdentifier(OwnerIdentifier&& value) { m_ownerIdentifierHasBeenSet = true; m_ownerIdentifier = std::move(value); }

    
    inline BatchGetTokenBalanceOutputItem& WithOwnerIdentifier(const OwnerIdentifier& value) { SetOwnerIdentifier(value); return *this;}

    
    inline BatchGetTokenBalanceOutputItem& WithOwnerIdentifier(OwnerIdentifier&& value) { SetOwnerIdentifier(std::move(value)); return *this;}


    
    inline const TokenIdentifier& GetTokenIdentifier() const{ return m_tokenIdentifier; }

    
    inline bool TokenIdentifierHasBeenSet() const { return m_tokenIdentifierHasBeenSet; }

    
    inline void SetTokenIdentifier(const TokenIdentifier& value) { m_tokenIdentifierHasBeenSet = true; m_tokenIdentifier = value; }

    
    inline void SetTokenIdentifier(TokenIdentifier&& value) { m_tokenIdentifierHasBeenSet = true; m_tokenIdentifier = std::move(value); }

    
    inline BatchGetTokenBalanceOutputItem& WithTokenIdentifier(const TokenIdentifier& value) { SetTokenIdentifier(value); return *this;}

    
    inline BatchGetTokenBalanceOutputItem& WithTokenIdentifier(TokenIdentifier&& value) { SetTokenIdentifier(std::move(value)); return *this;}


    /**
     * <p>The container for the token balance.</p>
     */
    inline const Aws::String& GetBalance() const{ return m_balance; }

    /**
     * <p>The container for the token balance.</p>
     */
    inline bool BalanceHasBeenSet() const { return m_balanceHasBeenSet; }

    /**
     * <p>The container for the token balance.</p>
     */
    inline void SetBalance(const Aws::String& value) { m_balanceHasBeenSet = true; m_balance = value; }

    /**
     * <p>The container for the token balance.</p>
     */
    inline void SetBalance(Aws::String&& value) { m_balanceHasBeenSet = true; m_balance = std::move(value); }

    /**
     * <p>The container for the token balance.</p>
     */
    inline void SetBalance(const char* value) { m_balanceHasBeenSet = true; m_balance.assign(value); }

    /**
     * <p>The container for the token balance.</p>
     */
    inline BatchGetTokenBalanceOutputItem& WithBalance(const Aws::String& value) { SetBalance(value); return *this;}

    /**
     * <p>The container for the token balance.</p>
     */
    inline BatchGetTokenBalanceOutputItem& WithBalance(Aws::String&& value) { SetBalance(std::move(value)); return *this;}

    /**
     * <p>The container for the token balance.</p>
     */
    inline BatchGetTokenBalanceOutputItem& WithBalance(const char* value) { SetBalance(value); return *this;}


    
    inline const BlockchainInstant& GetAtBlockchainInstant() const{ return m_atBlockchainInstant; }

    
    inline bool AtBlockchainInstantHasBeenSet() const { return m_atBlockchainInstantHasBeenSet; }

    
    inline void SetAtBlockchainInstant(const BlockchainInstant& value) { m_atBlockchainInstantHasBeenSet = true; m_atBlockchainInstant = value; }

    
    inline void SetAtBlockchainInstant(BlockchainInstant&& value) { m_atBlockchainInstantHasBeenSet = true; m_atBlockchainInstant = std::move(value); }

    
    inline BatchGetTokenBalanceOutputItem& WithAtBlockchainInstant(const BlockchainInstant& value) { SetAtBlockchainInstant(value); return *this;}

    
    inline BatchGetTokenBalanceOutputItem& WithAtBlockchainInstant(BlockchainInstant&& value) { SetAtBlockchainInstant(std::move(value)); return *this;}


    
    inline const BlockchainInstant& GetLastUpdatedTime() const{ return m_lastUpdatedTime; }

    
    inline bool LastUpdatedTimeHasBeenSet() const { return m_lastUpdatedTimeHasBeenSet; }

    
    inline void SetLastUpdatedTime(const BlockchainInstant& value) { m_lastUpdatedTimeHasBeenSet = true; m_lastUpdatedTime = value; }

    
    inline void SetLastUpdatedTime(BlockchainInstant&& value) { m_lastUpdatedTimeHasBeenSet = true; m_lastUpdatedTime = std::move(value); }

    
    inline BatchGetTokenBalanceOutputItem& WithLastUpdatedTime(const BlockchainInstant& value) { SetLastUpdatedTime(value); return *this;}

    
    inline BatchGetTokenBalanceOutputItem& WithLastUpdatedTime(BlockchainInstant&& value) { SetLastUpdatedTime(std::move(value)); return *this;}

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
  };

} // namespace Model
} // namespace ManagedBlockchainQuery
} // namespace Aws
