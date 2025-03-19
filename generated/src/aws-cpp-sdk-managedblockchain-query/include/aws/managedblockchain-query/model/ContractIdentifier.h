/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/managedblockchain-query/ManagedBlockchainQuery_EXPORTS.h>
#include <aws/managedblockchain-query/model/QueryNetwork.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>Container for the blockchain address and network information about a
   * contract.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/managedblockchain-query-2023-05-04/ContractIdentifier">AWS
   * API Reference</a></p>
   */
  class ContractIdentifier
  {
  public:
    AWS_MANAGEDBLOCKCHAINQUERY_API ContractIdentifier() = default;
    AWS_MANAGEDBLOCKCHAINQUERY_API ContractIdentifier(Aws::Utils::Json::JsonView jsonValue);
    AWS_MANAGEDBLOCKCHAINQUERY_API ContractIdentifier& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MANAGEDBLOCKCHAINQUERY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The blockchain network of the contract.</p>
     */
    inline QueryNetwork GetNetwork() const { return m_network; }
    inline bool NetworkHasBeenSet() const { return m_networkHasBeenSet; }
    inline void SetNetwork(QueryNetwork value) { m_networkHasBeenSet = true; m_network = value; }
    inline ContractIdentifier& WithNetwork(QueryNetwork value) { SetNetwork(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Container for the blockchain address about a contract.</p>
     */
    inline const Aws::String& GetContractAddress() const { return m_contractAddress; }
    inline bool ContractAddressHasBeenSet() const { return m_contractAddressHasBeenSet; }
    template<typename ContractAddressT = Aws::String>
    void SetContractAddress(ContractAddressT&& value) { m_contractAddressHasBeenSet = true; m_contractAddress = std::forward<ContractAddressT>(value); }
    template<typename ContractAddressT = Aws::String>
    ContractIdentifier& WithContractAddress(ContractAddressT&& value) { SetContractAddress(std::forward<ContractAddressT>(value)); return *this;}
    ///@}
  private:

    QueryNetwork m_network{QueryNetwork::NOT_SET};
    bool m_networkHasBeenSet = false;

    Aws::String m_contractAddress;
    bool m_contractAddressHasBeenSet = false;
  };

} // namespace Model
} // namespace ManagedBlockchainQuery
} // namespace Aws
