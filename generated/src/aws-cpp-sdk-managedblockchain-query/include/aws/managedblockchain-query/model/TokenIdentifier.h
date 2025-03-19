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
   * <p>The container for the identifier for the token including the unique token ID
   * and its blockchain network.</p>  <p>Only the native tokens BTC and ETH,
   * and the ERC-20, ERC-721, and ERC 1155 token standards are supported.</p>
   * <p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/managedblockchain-query-2023-05-04/TokenIdentifier">AWS
   * API Reference</a></p>
   */
  class TokenIdentifier
  {
  public:
    AWS_MANAGEDBLOCKCHAINQUERY_API TokenIdentifier() = default;
    AWS_MANAGEDBLOCKCHAINQUERY_API TokenIdentifier(Aws::Utils::Json::JsonView jsonValue);
    AWS_MANAGEDBLOCKCHAINQUERY_API TokenIdentifier& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MANAGEDBLOCKCHAINQUERY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The blockchain network of the token.</p>
     */
    inline QueryNetwork GetNetwork() const { return m_network; }
    inline bool NetworkHasBeenSet() const { return m_networkHasBeenSet; }
    inline void SetNetwork(QueryNetwork value) { m_networkHasBeenSet = true; m_network = value; }
    inline TokenIdentifier& WithNetwork(QueryNetwork value) { SetNetwork(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>This is the token's contract address.</p>
     */
    inline const Aws::String& GetContractAddress() const { return m_contractAddress; }
    inline bool ContractAddressHasBeenSet() const { return m_contractAddressHasBeenSet; }
    template<typename ContractAddressT = Aws::String>
    void SetContractAddress(ContractAddressT&& value) { m_contractAddressHasBeenSet = true; m_contractAddress = std::forward<ContractAddressT>(value); }
    template<typename ContractAddressT = Aws::String>
    TokenIdentifier& WithContractAddress(ContractAddressT&& value) { SetContractAddress(std::forward<ContractAddressT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the token.</p>  <p>For native tokens, use the
     * 3 character abbreviation that best matches your token. For example, btc for
     * Bitcoin, eth for Ether, etc. For all other token types you must specify the
     * <code>tokenId</code> in the 64 character hexadecimal <code>tokenid</code>
     * format.</p> 
     */
    inline const Aws::String& GetTokenId() const { return m_tokenId; }
    inline bool TokenIdHasBeenSet() const { return m_tokenIdHasBeenSet; }
    template<typename TokenIdT = Aws::String>
    void SetTokenId(TokenIdT&& value) { m_tokenIdHasBeenSet = true; m_tokenId = std::forward<TokenIdT>(value); }
    template<typename TokenIdT = Aws::String>
    TokenIdentifier& WithTokenId(TokenIdT&& value) { SetTokenId(std::forward<TokenIdT>(value)); return *this;}
    ///@}
  private:

    QueryNetwork m_network{QueryNetwork::NOT_SET};
    bool m_networkHasBeenSet = false;

    Aws::String m_contractAddress;
    bool m_contractAddressHasBeenSet = false;

    Aws::String m_tokenId;
    bool m_tokenIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ManagedBlockchainQuery
} // namespace Aws
