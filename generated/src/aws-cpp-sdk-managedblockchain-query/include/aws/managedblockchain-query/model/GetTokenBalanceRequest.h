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
    AWS_MANAGEDBLOCKCHAINQUERY_API GetTokenBalanceRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetTokenBalance"; }

    AWS_MANAGEDBLOCKCHAINQUERY_API Aws::String SerializePayload() const override;


    /**
     * <p>The container for the identifier for the token, including the unique token ID
     * and its blockchain network.</p>
     */
    inline const TokenIdentifier& GetTokenIdentifier() const{ return m_tokenIdentifier; }

    /**
     * <p>The container for the identifier for the token, including the unique token ID
     * and its blockchain network.</p>
     */
    inline bool TokenIdentifierHasBeenSet() const { return m_tokenIdentifierHasBeenSet; }

    /**
     * <p>The container for the identifier for the token, including the unique token ID
     * and its blockchain network.</p>
     */
    inline void SetTokenIdentifier(const TokenIdentifier& value) { m_tokenIdentifierHasBeenSet = true; m_tokenIdentifier = value; }

    /**
     * <p>The container for the identifier for the token, including the unique token ID
     * and its blockchain network.</p>
     */
    inline void SetTokenIdentifier(TokenIdentifier&& value) { m_tokenIdentifierHasBeenSet = true; m_tokenIdentifier = std::move(value); }

    /**
     * <p>The container for the identifier for the token, including the unique token ID
     * and its blockchain network.</p>
     */
    inline GetTokenBalanceRequest& WithTokenIdentifier(const TokenIdentifier& value) { SetTokenIdentifier(value); return *this;}

    /**
     * <p>The container for the identifier for the token, including the unique token ID
     * and its blockchain network.</p>
     */
    inline GetTokenBalanceRequest& WithTokenIdentifier(TokenIdentifier&& value) { SetTokenIdentifier(std::move(value)); return *this;}


    /**
     * <p>The container for the identifier for the owner.</p>
     */
    inline const OwnerIdentifier& GetOwnerIdentifier() const{ return m_ownerIdentifier; }

    /**
     * <p>The container for the identifier for the owner.</p>
     */
    inline bool OwnerIdentifierHasBeenSet() const { return m_ownerIdentifierHasBeenSet; }

    /**
     * <p>The container for the identifier for the owner.</p>
     */
    inline void SetOwnerIdentifier(const OwnerIdentifier& value) { m_ownerIdentifierHasBeenSet = true; m_ownerIdentifier = value; }

    /**
     * <p>The container for the identifier for the owner.</p>
     */
    inline void SetOwnerIdentifier(OwnerIdentifier&& value) { m_ownerIdentifierHasBeenSet = true; m_ownerIdentifier = std::move(value); }

    /**
     * <p>The container for the identifier for the owner.</p>
     */
    inline GetTokenBalanceRequest& WithOwnerIdentifier(const OwnerIdentifier& value) { SetOwnerIdentifier(value); return *this;}

    /**
     * <p>The container for the identifier for the owner.</p>
     */
    inline GetTokenBalanceRequest& WithOwnerIdentifier(OwnerIdentifier&& value) { SetOwnerIdentifier(std::move(value)); return *this;}


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
    inline GetTokenBalanceRequest& WithAtBlockchainInstant(const BlockchainInstant& value) { SetAtBlockchainInstant(value); return *this;}

    /**
     * <p>The time for when the TokenBalance is requested or the current time if a time
     * is not provided in the request.</p>  <p>This time will only be recorded up
     * to the second.</p> 
     */
    inline GetTokenBalanceRequest& WithAtBlockchainInstant(BlockchainInstant&& value) { SetAtBlockchainInstant(std::move(value)); return *this;}

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
