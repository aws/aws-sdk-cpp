/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/managedblockchain/ManagedBlockchain_EXPORTS.h>
#include <aws/managedblockchain/model/NodeFabricAttributes.h>
#include <aws/managedblockchain/model/NodeEthereumAttributes.h>
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
   * <p>Attributes relevant to a node on a Managed Blockchain network for the
   * blockchain framework that the network uses.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/managedblockchain-2018-09-24/NodeFrameworkAttributes">AWS
   * API Reference</a></p>
   */
  class NodeFrameworkAttributes
  {
  public:
    AWS_MANAGEDBLOCKCHAIN_API NodeFrameworkAttributes() = default;
    AWS_MANAGEDBLOCKCHAIN_API NodeFrameworkAttributes(Aws::Utils::Json::JsonView jsonValue);
    AWS_MANAGEDBLOCKCHAIN_API NodeFrameworkAttributes& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MANAGEDBLOCKCHAIN_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Attributes of Hyperledger Fabric for a peer node on a Managed Blockchain
     * network that uses Hyperledger Fabric.</p>
     */
    inline const NodeFabricAttributes& GetFabric() const { return m_fabric; }
    inline bool FabricHasBeenSet() const { return m_fabricHasBeenSet; }
    template<typename FabricT = NodeFabricAttributes>
    void SetFabric(FabricT&& value) { m_fabricHasBeenSet = true; m_fabric = std::forward<FabricT>(value); }
    template<typename FabricT = NodeFabricAttributes>
    NodeFrameworkAttributes& WithFabric(FabricT&& value) { SetFabric(std::forward<FabricT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Attributes of Ethereum for a node on a Managed Blockchain network that uses
     * Ethereum. </p>
     */
    inline const NodeEthereumAttributes& GetEthereum() const { return m_ethereum; }
    inline bool EthereumHasBeenSet() const { return m_ethereumHasBeenSet; }
    template<typename EthereumT = NodeEthereumAttributes>
    void SetEthereum(EthereumT&& value) { m_ethereumHasBeenSet = true; m_ethereum = std::forward<EthereumT>(value); }
    template<typename EthereumT = NodeEthereumAttributes>
    NodeFrameworkAttributes& WithEthereum(EthereumT&& value) { SetEthereum(std::forward<EthereumT>(value)); return *this;}
    ///@}
  private:

    NodeFabricAttributes m_fabric;
    bool m_fabricHasBeenSet = false;

    NodeEthereumAttributes m_ethereum;
    bool m_ethereumHasBeenSet = false;
  };

} // namespace Model
} // namespace ManagedBlockchain
} // namespace Aws
