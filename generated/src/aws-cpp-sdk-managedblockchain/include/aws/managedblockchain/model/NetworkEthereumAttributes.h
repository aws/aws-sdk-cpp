/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/managedblockchain/ManagedBlockchain_EXPORTS.h>
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
namespace ManagedBlockchain
{
namespace Model
{

  /**
   * <p>Attributes of Ethereum for a network. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/managedblockchain-2018-09-24/NetworkEthereumAttributes">AWS
   * API Reference</a></p>
   */
  class NetworkEthereumAttributes
  {
  public:
    AWS_MANAGEDBLOCKCHAIN_API NetworkEthereumAttributes();
    AWS_MANAGEDBLOCKCHAIN_API NetworkEthereumAttributes(Aws::Utils::Json::JsonView jsonValue);
    AWS_MANAGEDBLOCKCHAIN_API NetworkEthereumAttributes& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MANAGEDBLOCKCHAIN_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Ethereum <code>CHAIN_ID</code> associated with the Ethereum network.
     * Chain IDs are as follows:</p> <ul> <li> <p>mainnet = <code>1</code> </p> </li>
     * <li> <p>goerli = <code>5</code> </p> </li> <li> <p>rinkeby = <code>4</code> </p>
     * </li> <li> <p>ropsten = <code>3</code> </p> </li> </ul>
     */
    inline const Aws::String& GetChainId() const{ return m_chainId; }

    /**
     * <p>The Ethereum <code>CHAIN_ID</code> associated with the Ethereum network.
     * Chain IDs are as follows:</p> <ul> <li> <p>mainnet = <code>1</code> </p> </li>
     * <li> <p>goerli = <code>5</code> </p> </li> <li> <p>rinkeby = <code>4</code> </p>
     * </li> <li> <p>ropsten = <code>3</code> </p> </li> </ul>
     */
    inline bool ChainIdHasBeenSet() const { return m_chainIdHasBeenSet; }

    /**
     * <p>The Ethereum <code>CHAIN_ID</code> associated with the Ethereum network.
     * Chain IDs are as follows:</p> <ul> <li> <p>mainnet = <code>1</code> </p> </li>
     * <li> <p>goerli = <code>5</code> </p> </li> <li> <p>rinkeby = <code>4</code> </p>
     * </li> <li> <p>ropsten = <code>3</code> </p> </li> </ul>
     */
    inline void SetChainId(const Aws::String& value) { m_chainIdHasBeenSet = true; m_chainId = value; }

    /**
     * <p>The Ethereum <code>CHAIN_ID</code> associated with the Ethereum network.
     * Chain IDs are as follows:</p> <ul> <li> <p>mainnet = <code>1</code> </p> </li>
     * <li> <p>goerli = <code>5</code> </p> </li> <li> <p>rinkeby = <code>4</code> </p>
     * </li> <li> <p>ropsten = <code>3</code> </p> </li> </ul>
     */
    inline void SetChainId(Aws::String&& value) { m_chainIdHasBeenSet = true; m_chainId = std::move(value); }

    /**
     * <p>The Ethereum <code>CHAIN_ID</code> associated with the Ethereum network.
     * Chain IDs are as follows:</p> <ul> <li> <p>mainnet = <code>1</code> </p> </li>
     * <li> <p>goerli = <code>5</code> </p> </li> <li> <p>rinkeby = <code>4</code> </p>
     * </li> <li> <p>ropsten = <code>3</code> </p> </li> </ul>
     */
    inline void SetChainId(const char* value) { m_chainIdHasBeenSet = true; m_chainId.assign(value); }

    /**
     * <p>The Ethereum <code>CHAIN_ID</code> associated with the Ethereum network.
     * Chain IDs are as follows:</p> <ul> <li> <p>mainnet = <code>1</code> </p> </li>
     * <li> <p>goerli = <code>5</code> </p> </li> <li> <p>rinkeby = <code>4</code> </p>
     * </li> <li> <p>ropsten = <code>3</code> </p> </li> </ul>
     */
    inline NetworkEthereumAttributes& WithChainId(const Aws::String& value) { SetChainId(value); return *this;}

    /**
     * <p>The Ethereum <code>CHAIN_ID</code> associated with the Ethereum network.
     * Chain IDs are as follows:</p> <ul> <li> <p>mainnet = <code>1</code> </p> </li>
     * <li> <p>goerli = <code>5</code> </p> </li> <li> <p>rinkeby = <code>4</code> </p>
     * </li> <li> <p>ropsten = <code>3</code> </p> </li> </ul>
     */
    inline NetworkEthereumAttributes& WithChainId(Aws::String&& value) { SetChainId(std::move(value)); return *this;}

    /**
     * <p>The Ethereum <code>CHAIN_ID</code> associated with the Ethereum network.
     * Chain IDs are as follows:</p> <ul> <li> <p>mainnet = <code>1</code> </p> </li>
     * <li> <p>goerli = <code>5</code> </p> </li> <li> <p>rinkeby = <code>4</code> </p>
     * </li> <li> <p>ropsten = <code>3</code> </p> </li> </ul>
     */
    inline NetworkEthereumAttributes& WithChainId(const char* value) { SetChainId(value); return *this;}

  private:

    Aws::String m_chainId;
    bool m_chainIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ManagedBlockchain
} // namespace Aws
