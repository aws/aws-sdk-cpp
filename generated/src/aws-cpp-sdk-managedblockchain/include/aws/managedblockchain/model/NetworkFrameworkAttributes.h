/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/managedblockchain/ManagedBlockchain_EXPORTS.h>
#include <aws/managedblockchain/model/NetworkFabricAttributes.h>
#include <aws/managedblockchain/model/NetworkEthereumAttributes.h>
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
namespace ManagedBlockchain
{
namespace Model
{

  /**
   * <p>Attributes relevant to the network for the blockchain framework that the
   * network uses.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/managedblockchain-2018-09-24/NetworkFrameworkAttributes">AWS
   * API Reference</a></p>
   */
  class NetworkFrameworkAttributes
  {
  public:
    AWS_MANAGEDBLOCKCHAIN_API NetworkFrameworkAttributes() = default;
    AWS_MANAGEDBLOCKCHAIN_API NetworkFrameworkAttributes(Aws::Utils::Json::JsonView jsonValue);
    AWS_MANAGEDBLOCKCHAIN_API NetworkFrameworkAttributes& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MANAGEDBLOCKCHAIN_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Attributes of Hyperledger Fabric for a Managed Blockchain network that uses
     * Hyperledger Fabric.</p>
     */
    inline const NetworkFabricAttributes& GetFabric() const { return m_fabric; }
    inline bool FabricHasBeenSet() const { return m_fabricHasBeenSet; }
    template<typename FabricT = NetworkFabricAttributes>
    void SetFabric(FabricT&& value) { m_fabricHasBeenSet = true; m_fabric = std::forward<FabricT>(value); }
    template<typename FabricT = NetworkFabricAttributes>
    NetworkFrameworkAttributes& WithFabric(FabricT&& value) { SetFabric(std::forward<FabricT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Attributes of an Ethereum network for Managed Blockchain resources
     * participating in an Ethereum network. </p>
     */
    inline const NetworkEthereumAttributes& GetEthereum() const { return m_ethereum; }
    inline bool EthereumHasBeenSet() const { return m_ethereumHasBeenSet; }
    template<typename EthereumT = NetworkEthereumAttributes>
    void SetEthereum(EthereumT&& value) { m_ethereumHasBeenSet = true; m_ethereum = std::forward<EthereumT>(value); }
    template<typename EthereumT = NetworkEthereumAttributes>
    NetworkFrameworkAttributes& WithEthereum(EthereumT&& value) { SetEthereum(std::forward<EthereumT>(value)); return *this;}
    ///@}
  private:

    NetworkFabricAttributes m_fabric;
    bool m_fabricHasBeenSet = false;

    NetworkEthereumAttributes m_ethereum;
    bool m_ethereumHasBeenSet = false;
  };

} // namespace Model
} // namespace ManagedBlockchain
} // namespace Aws
