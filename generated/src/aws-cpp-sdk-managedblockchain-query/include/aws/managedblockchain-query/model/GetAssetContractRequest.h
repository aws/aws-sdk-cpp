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
    AWS_MANAGEDBLOCKCHAINQUERY_API GetAssetContractRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetAssetContract"; }

    AWS_MANAGEDBLOCKCHAINQUERY_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>Contains the blockchain address and network information about the
     * contract.</p>
     */
    inline const ContractIdentifier& GetContractIdentifier() const { return m_contractIdentifier; }
    inline bool ContractIdentifierHasBeenSet() const { return m_contractIdentifierHasBeenSet; }
    template<typename ContractIdentifierT = ContractIdentifier>
    void SetContractIdentifier(ContractIdentifierT&& value) { m_contractIdentifierHasBeenSet = true; m_contractIdentifier = std::forward<ContractIdentifierT>(value); }
    template<typename ContractIdentifierT = ContractIdentifier>
    GetAssetContractRequest& WithContractIdentifier(ContractIdentifierT&& value) { SetContractIdentifier(std::forward<ContractIdentifierT>(value)); return *this;}
    ///@}
  private:

    ContractIdentifier m_contractIdentifier;
    bool m_contractIdentifierHasBeenSet = false;
  };

} // namespace Model
} // namespace ManagedBlockchainQuery
} // namespace Aws
