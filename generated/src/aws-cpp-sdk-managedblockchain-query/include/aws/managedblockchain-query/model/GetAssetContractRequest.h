/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/managedblockchain-query/ManagedBlockchainQuery_EXPORTS.h>
#include <aws/managedblockchain-query/ManagedBlockchainQueryRequest.h>
#include <aws/managedblockchain-query/model/ContractIdentifier.h>
#include <utility>

namespace Aws
{
namespace ManagedBlockchainQuery
{
namespace Model
{

  /**
   */
  class GetAssetContractRequest : public ManagedBlockchainQueryRequest
  {
  public:
    AWS_MANAGEDBLOCKCHAINQUERY_API GetAssetContractRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetAssetContract"; }

    AWS_MANAGEDBLOCKCHAINQUERY_API Aws::String SerializePayload() const override;


    /**
     * <p>Contains the blockchain address and network information about the
     * contract.</p>
     */
    inline const ContractIdentifier& GetContractIdentifier() const{ return m_contractIdentifier; }

    /**
     * <p>Contains the blockchain address and network information about the
     * contract.</p>
     */
    inline bool ContractIdentifierHasBeenSet() const { return m_contractIdentifierHasBeenSet; }

    /**
     * <p>Contains the blockchain address and network information about the
     * contract.</p>
     */
    inline void SetContractIdentifier(const ContractIdentifier& value) { m_contractIdentifierHasBeenSet = true; m_contractIdentifier = value; }

    /**
     * <p>Contains the blockchain address and network information about the
     * contract.</p>
     */
    inline void SetContractIdentifier(ContractIdentifier&& value) { m_contractIdentifierHasBeenSet = true; m_contractIdentifier = std::move(value); }

    /**
     * <p>Contains the blockchain address and network information about the
     * contract.</p>
     */
    inline GetAssetContractRequest& WithContractIdentifier(const ContractIdentifier& value) { SetContractIdentifier(value); return *this;}

    /**
     * <p>Contains the blockchain address and network information about the
     * contract.</p>
     */
    inline GetAssetContractRequest& WithContractIdentifier(ContractIdentifier&& value) { SetContractIdentifier(std::move(value)); return *this;}

  private:

    ContractIdentifier m_contractIdentifier;
    bool m_contractIdentifierHasBeenSet = false;
  };

} // namespace Model
} // namespace ManagedBlockchainQuery
} // namespace Aws
