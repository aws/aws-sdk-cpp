/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/managedblockchain-query/ManagedBlockchainQuery_EXPORTS.h>
#include <aws/managedblockchain-query/ManagedBlockchainQueryRequest.h>
#include <aws/managedblockchain-query/model/TokenIdentifier.h>
#include <aws/managedblockchain-query/model/OwnerIdentifier.h>
#include <aws/managedblockchain-query/model/BlockchainInstant.h>
#include <utility>

namespace Aws
{
namespace ManagedBlockchainQuery
{
namespace Model
{

  /**
   */
  class GetTokenBalanceRequest : public ManagedBlockchainQueryRequest
  {
  public:
    AWS_MANAGEDBLOCKCHAINQUERY_API GetTokenBalanceRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetTokenBalance"; }

    AWS_MANAGEDBLOCKCHAINQUERY_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The container for the identifier for the token, including the unique token ID
     * and its blockchain network.</p>
     */
    inline const TokenIdentifier& GetTokenIdentifier() const { return m_tokenIdentifier; }
    inline bool TokenIdentifierHasBeenSet() const { return m_tokenIdentifierHasBeenSet; }
    template<typename TokenIdentifierT = TokenIdentifier>
    void SetTokenIdentifier(TokenIdentifierT&& value) { m_tokenIdentifierHasBeenSet = true; m_tokenIdentifier = std::forward<TokenIdentifierT>(value); }
    template<typename TokenIdentifierT = TokenIdentifier>
    GetTokenBalanceRequest& WithTokenIdentifier(TokenIdentifierT&& value) { SetTokenIdentifier(std::forward<TokenIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The container for the identifier for the owner.</p>
     */
    inline const OwnerIdentifier& GetOwnerIdentifier() const { return m_ownerIdentifier; }
    inline bool OwnerIdentifierHasBeenSet() const { return m_ownerIdentifierHasBeenSet; }
    template<typename OwnerIdentifierT = OwnerIdentifier>
    void SetOwnerIdentifier(OwnerIdentifierT&& value) { m_ownerIdentifierHasBeenSet = true; m_ownerIdentifier = std::forward<OwnerIdentifierT>(value); }
    template<typename OwnerIdentifierT = OwnerIdentifier>
    GetTokenBalanceRequest& WithOwnerIdentifier(OwnerIdentifierT&& value) { SetOwnerIdentifier(std::forward<OwnerIdentifierT>(value)); return *this;}
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
    GetTokenBalanceRequest& WithAtBlockchainInstant(AtBlockchainInstantT&& value) { SetAtBlockchainInstant(std::forward<AtBlockchainInstantT>(value)); return *this;}
    ///@}
  private:

    TokenIdentifier m_tokenIdentifier;
    bool m_tokenIdentifierHasBeenSet = false;

    OwnerIdentifier m_ownerIdentifier;
    bool m_ownerIdentifierHasBeenSet = false;

    BlockchainInstant m_atBlockchainInstant;
    bool m_atBlockchainInstantHasBeenSet = false;
  };

} // namespace Model
} // namespace ManagedBlockchainQuery
} // namespace Aws
