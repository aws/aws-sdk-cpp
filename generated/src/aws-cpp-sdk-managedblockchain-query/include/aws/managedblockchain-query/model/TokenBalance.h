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
    AWS_MANAGEDBLOCKCHAINQUERY_API TokenBalance() = default;
    AWS_MANAGEDBLOCKCHAINQUERY_API TokenBalance(Aws::Utils::Json::JsonView jsonValue);
    AWS_MANAGEDBLOCKCHAINQUERY_API TokenBalance& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MANAGEDBLOCKCHAINQUERY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The container for the identifier of the owner.</p>
     */
    inline const OwnerIdentifier& GetOwnerIdentifier() const { return m_ownerIdentifier; }
    inline bool OwnerIdentifierHasBeenSet() const { return m_ownerIdentifierHasBeenSet; }
    template<typename OwnerIdentifierT = OwnerIdentifier>
    void SetOwnerIdentifier(OwnerIdentifierT&& value) { m_ownerIdentifierHasBeenSet = true; m_ownerIdentifier = std::forward<OwnerIdentifierT>(value); }
    template<typename OwnerIdentifierT = OwnerIdentifier>
    TokenBalance& WithOwnerIdentifier(OwnerIdentifierT&& value) { SetOwnerIdentifier(std::forward<OwnerIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier for the token, including the unique token ID and its
     * blockchain network.</p>
     */
    inline const TokenIdentifier& GetTokenIdentifier() const { return m_tokenIdentifier; }
    inline bool TokenIdentifierHasBeenSet() const { return m_tokenIdentifierHasBeenSet; }
    template<typename TokenIdentifierT = TokenIdentifier>
    void SetTokenIdentifier(TokenIdentifierT&& value) { m_tokenIdentifierHasBeenSet = true; m_tokenIdentifier = std::forward<TokenIdentifierT>(value); }
    template<typename TokenIdentifierT = TokenIdentifier>
    TokenBalance& WithTokenIdentifier(TokenIdentifierT&& value) { SetTokenIdentifier(std::forward<TokenIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The container of the token balance.</p>
     */
    inline const Aws::String& GetBalance() const { return m_balance; }
    inline bool BalanceHasBeenSet() const { return m_balanceHasBeenSet; }
    template<typename BalanceT = Aws::String>
    void SetBalance(BalanceT&& value) { m_balanceHasBeenSet = true; m_balance = std::forward<BalanceT>(value); }
    template<typename BalanceT = Aws::String>
    TokenBalance& WithBalance(BalanceT&& value) { SetBalance(std::forward<BalanceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time for when the TokenBalance is requested or the current time if a time
     * is not provided in the request.</p>  <p>This time will only be recorded up
     * to the second.</p> 
     */
    inline const BlockchainInstant& GetAtBlockchainInstant() const { return m_atBlockchainInstant; }
    inline bool AtBlockchainInstantHasBeenSet() const { return m_atBlockchainInstantHasBeenSet; }
    template<typename AtBlockchainInstantT = BlockchainInstant>
    void SetAtBlockchainInstant(AtBlockchainInstantT&& value) { m_atBlockchainInstantHasBeenSet = true; m_atBlockchainInstant = std::forward<AtBlockchainInstantT>(value); }
    template<typename AtBlockchainInstantT = BlockchainInstant>
    TokenBalance& WithAtBlockchainInstant(AtBlockchainInstantT&& value) { SetAtBlockchainInstant(std::forward<AtBlockchainInstantT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <code>Timestamp</code> of the last transaction at which the balance for
     * the token in the wallet was updated.</p>
     */
    inline const BlockchainInstant& GetLastUpdatedTime() const { return m_lastUpdatedTime; }
    inline bool LastUpdatedTimeHasBeenSet() const { return m_lastUpdatedTimeHasBeenSet; }
    template<typename LastUpdatedTimeT = BlockchainInstant>
    void SetLastUpdatedTime(LastUpdatedTimeT&& value) { m_lastUpdatedTimeHasBeenSet = true; m_lastUpdatedTime = std::forward<LastUpdatedTimeT>(value); }
    template<typename LastUpdatedTimeT = BlockchainInstant>
    TokenBalance& WithLastUpdatedTime(LastUpdatedTimeT&& value) { SetLastUpdatedTime(std::forward<LastUpdatedTimeT>(value)); return *this;}
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
  };

} // namespace Model
} // namespace ManagedBlockchainQuery
} // namespace Aws
