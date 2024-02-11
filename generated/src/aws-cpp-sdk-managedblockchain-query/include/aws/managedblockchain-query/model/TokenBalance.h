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
   * <p>The balance of the token.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/managedblockchain-query-2023-05-04/TokenBalance">AWS
   * API Reference</a></p>
   */
  class TokenBalance
  {
  public:
    AWS_MANAGEDBLOCKCHAINQUERY_API TokenBalance();
    AWS_MANAGEDBLOCKCHAINQUERY_API TokenBalance(Aws::Utils::Json::JsonView jsonValue);
    AWS_MANAGEDBLOCKCHAINQUERY_API TokenBalance& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MANAGEDBLOCKCHAINQUERY_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The container for the identifier of the owner.</p>
     */
    inline const OwnerIdentifier& GetOwnerIdentifier() const{ return m_ownerIdentifier; }

    /**
     * <p>The container for the identifier of the owner.</p>
     */
    inline bool OwnerIdentifierHasBeenSet() const { return m_ownerIdentifierHasBeenSet; }

    /**
     * <p>The container for the identifier of the owner.</p>
     */
    inline void SetOwnerIdentifier(const OwnerIdentifier& value) { m_ownerIdentifierHasBeenSet = true; m_ownerIdentifier = value; }

    /**
     * <p>The container for the identifier of the owner.</p>
     */
    inline void SetOwnerIdentifier(OwnerIdentifier&& value) { m_ownerIdentifierHasBeenSet = true; m_ownerIdentifier = std::move(value); }

    /**
     * <p>The container for the identifier of the owner.</p>
     */
    inline TokenBalance& WithOwnerIdentifier(const OwnerIdentifier& value) { SetOwnerIdentifier(value); return *this;}

    /**
     * <p>The container for the identifier of the owner.</p>
     */
    inline TokenBalance& WithOwnerIdentifier(OwnerIdentifier&& value) { SetOwnerIdentifier(std::move(value)); return *this;}


    /**
     * <p>The identifier for the token, including the unique token ID and its
     * blockchain network.</p>
     */
    inline const TokenIdentifier& GetTokenIdentifier() const{ return m_tokenIdentifier; }

    /**
     * <p>The identifier for the token, including the unique token ID and its
     * blockchain network.</p>
     */
    inline bool TokenIdentifierHasBeenSet() const { return m_tokenIdentifierHasBeenSet; }

    /**
     * <p>The identifier for the token, including the unique token ID and its
     * blockchain network.</p>
     */
    inline void SetTokenIdentifier(const TokenIdentifier& value) { m_tokenIdentifierHasBeenSet = true; m_tokenIdentifier = value; }

    /**
     * <p>The identifier for the token, including the unique token ID and its
     * blockchain network.</p>
     */
    inline void SetTokenIdentifier(TokenIdentifier&& value) { m_tokenIdentifierHasBeenSet = true; m_tokenIdentifier = std::move(value); }

    /**
     * <p>The identifier for the token, including the unique token ID and its
     * blockchain network.</p>
     */
    inline TokenBalance& WithTokenIdentifier(const TokenIdentifier& value) { SetTokenIdentifier(value); return *this;}

    /**
     * <p>The identifier for the token, including the unique token ID and its
     * blockchain network.</p>
     */
    inline TokenBalance& WithTokenIdentifier(TokenIdentifier&& value) { SetTokenIdentifier(std::move(value)); return *this;}


    /**
     * <p>The container of the token balance.</p>
     */
    inline const Aws::String& GetBalance() const{ return m_balance; }

    /**
     * <p>The container of the token balance.</p>
     */
    inline bool BalanceHasBeenSet() const { return m_balanceHasBeenSet; }

    /**
     * <p>The container of the token balance.</p>
     */
    inline void SetBalance(const Aws::String& value) { m_balanceHasBeenSet = true; m_balance = value; }

    /**
     * <p>The container of the token balance.</p>
     */
    inline void SetBalance(Aws::String&& value) { m_balanceHasBeenSet = true; m_balance = std::move(value); }

    /**
     * <p>The container of the token balance.</p>
     */
    inline void SetBalance(const char* value) { m_balanceHasBeenSet = true; m_balance.assign(value); }

    /**
     * <p>The container of the token balance.</p>
     */
    inline TokenBalance& WithBalance(const Aws::String& value) { SetBalance(value); return *this;}

    /**
     * <p>The container of the token balance.</p>
     */
    inline TokenBalance& WithBalance(Aws::String&& value) { SetBalance(std::move(value)); return *this;}

    /**
     * <p>The container of the token balance.</p>
     */
    inline TokenBalance& WithBalance(const char* value) { SetBalance(value); return *this;}


    /**
     * <p>The time for when the TokenBalance is requested or the current time if a time
     * is not provided in the request.</p>  <p>This time will only be recorded up
     * to the second.</p> 
     */
    inline const BlockchainInstant& GetAtBlockchainInstant() const{ return m_atBlockchainInstant; }

    /**
     * <p>The time for when the TokenBalance is requested or the current time if a time
     * is not provided in the request.</p>  <p>This time will only be recorded up
     * to the second.</p> 
     */
    inline bool AtBlockchainInstantHasBeenSet() const { return m_atBlockchainInstantHasBeenSet; }

    /**
     * <p>The time for when the TokenBalance is requested or the current time if a time
     * is not provided in the request.</p>  <p>This time will only be recorded up
     * to the second.</p> 
     */
    inline void SetAtBlockchainInstant(const BlockchainInstant& value) { m_atBlockchainInstantHasBeenSet = true; m_atBlockchainInstant = value; }

    /**
     * <p>The time for when the TokenBalance is requested or the current time if a time
     * is not provided in the request.</p>  <p>This time will only be recorded up
     * to the second.</p> 
     */
    inline void SetAtBlockchainInstant(BlockchainInstant&& value) { m_atBlockchainInstantHasBeenSet = true; m_atBlockchainInstant = std::move(value); }

    /**
     * <p>The time for when the TokenBalance is requested or the current time if a time
     * is not provided in the request.</p>  <p>This time will only be recorded up
     * to the second.</p> 
     */
    inline TokenBalance& WithAtBlockchainInstant(const BlockchainInstant& value) { SetAtBlockchainInstant(value); return *this;}

    /**
     * <p>The time for when the TokenBalance is requested or the current time if a time
     * is not provided in the request.</p>  <p>This time will only be recorded up
     * to the second.</p> 
     */
    inline TokenBalance& WithAtBlockchainInstant(BlockchainInstant&& value) { SetAtBlockchainInstant(std::move(value)); return *this;}


    /**
     * <p>The <code>Timestamp</code> of the last transaction at which the balance for
     * the token in the wallet was updated.</p>
     */
    inline const BlockchainInstant& GetLastUpdatedTime() const{ return m_lastUpdatedTime; }

    /**
     * <p>The <code>Timestamp</code> of the last transaction at which the balance for
     * the token in the wallet was updated.</p>
     */
    inline bool LastUpdatedTimeHasBeenSet() const { return m_lastUpdatedTimeHasBeenSet; }

    /**
     * <p>The <code>Timestamp</code> of the last transaction at which the balance for
     * the token in the wallet was updated.</p>
     */
    inline void SetLastUpdatedTime(const BlockchainInstant& value) { m_lastUpdatedTimeHasBeenSet = true; m_lastUpdatedTime = value; }

    /**
     * <p>The <code>Timestamp</code> of the last transaction at which the balance for
     * the token in the wallet was updated.</p>
     */
    inline void SetLastUpdatedTime(BlockchainInstant&& value) { m_lastUpdatedTimeHasBeenSet = true; m_lastUpdatedTime = std::move(value); }

    /**
     * <p>The <code>Timestamp</code> of the last transaction at which the balance for
     * the token in the wallet was updated.</p>
     */
    inline TokenBalance& WithLastUpdatedTime(const BlockchainInstant& value) { SetLastUpdatedTime(value); return *this;}

    /**
     * <p>The <code>Timestamp</code> of the last transaction at which the balance for
     * the token in the wallet was updated.</p>
     */
    inline TokenBalance& WithLastUpdatedTime(BlockchainInstant&& value) { SetLastUpdatedTime(std::move(value)); return *this;}

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
