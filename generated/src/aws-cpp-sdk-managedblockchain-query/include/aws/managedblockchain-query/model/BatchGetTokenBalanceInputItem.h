/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/managedblockchain-query/ManagedBlockchainQuery_EXPORTS.h>
#include <aws/managedblockchain-query/model/TokenIdentifier.h>
#include <aws/managedblockchain-query/model/OwnerIdentifier.h>
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
   * <p>The container for the input for getting a token balance.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/managedblockchain-query-2023-05-04/BatchGetTokenBalanceInputItem">AWS
   * API Reference</a></p>
   */
  class BatchGetTokenBalanceInputItem
  {
  public:
    AWS_MANAGEDBLOCKCHAINQUERY_API BatchGetTokenBalanceInputItem();
    AWS_MANAGEDBLOCKCHAINQUERY_API BatchGetTokenBalanceInputItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_MANAGEDBLOCKCHAINQUERY_API BatchGetTokenBalanceInputItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MANAGEDBLOCKCHAINQUERY_API Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const TokenIdentifier& GetTokenIdentifier() const{ return m_tokenIdentifier; }

    
    inline bool TokenIdentifierHasBeenSet() const { return m_tokenIdentifierHasBeenSet; }

    
    inline void SetTokenIdentifier(const TokenIdentifier& value) { m_tokenIdentifierHasBeenSet = true; m_tokenIdentifier = value; }

    
    inline void SetTokenIdentifier(TokenIdentifier&& value) { m_tokenIdentifierHasBeenSet = true; m_tokenIdentifier = std::move(value); }

    
    inline BatchGetTokenBalanceInputItem& WithTokenIdentifier(const TokenIdentifier& value) { SetTokenIdentifier(value); return *this;}

    
    inline BatchGetTokenBalanceInputItem& WithTokenIdentifier(TokenIdentifier&& value) { SetTokenIdentifier(std::move(value)); return *this;}


    
    inline const OwnerIdentifier& GetOwnerIdentifier() const{ return m_ownerIdentifier; }

    
    inline bool OwnerIdentifierHasBeenSet() const { return m_ownerIdentifierHasBeenSet; }

    
    inline void SetOwnerIdentifier(const OwnerIdentifier& value) { m_ownerIdentifierHasBeenSet = true; m_ownerIdentifier = value; }

    
    inline void SetOwnerIdentifier(OwnerIdentifier&& value) { m_ownerIdentifierHasBeenSet = true; m_ownerIdentifier = std::move(value); }

    
    inline BatchGetTokenBalanceInputItem& WithOwnerIdentifier(const OwnerIdentifier& value) { SetOwnerIdentifier(value); return *this;}

    
    inline BatchGetTokenBalanceInputItem& WithOwnerIdentifier(OwnerIdentifier&& value) { SetOwnerIdentifier(std::move(value)); return *this;}


    
    inline const BlockchainInstant& GetAtBlockchainInstant() const{ return m_atBlockchainInstant; }

    
    inline bool AtBlockchainInstantHasBeenSet() const { return m_atBlockchainInstantHasBeenSet; }

    
    inline void SetAtBlockchainInstant(const BlockchainInstant& value) { m_atBlockchainInstantHasBeenSet = true; m_atBlockchainInstant = value; }

    
    inline void SetAtBlockchainInstant(BlockchainInstant&& value) { m_atBlockchainInstantHasBeenSet = true; m_atBlockchainInstant = std::move(value); }

    
    inline BatchGetTokenBalanceInputItem& WithAtBlockchainInstant(const BlockchainInstant& value) { SetAtBlockchainInstant(value); return *this;}

    
    inline BatchGetTokenBalanceInputItem& WithAtBlockchainInstant(BlockchainInstant&& value) { SetAtBlockchainInstant(std::move(value)); return *this;}

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
