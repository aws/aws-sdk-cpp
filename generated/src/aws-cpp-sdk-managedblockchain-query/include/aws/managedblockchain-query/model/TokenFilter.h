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
   * <p>The container of the token filter like the contract address on a given
   * blockchain network or a unique token identifier on a given blockchain
   * network.</p>  <p>You must always specify the network property of this
   * container when using this operation.</p> <p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/managedblockchain-query-2023-05-04/TokenFilter">AWS
   * API Reference</a></p>
   */
  class TokenFilter
  {
  public:
    AWS_MANAGEDBLOCKCHAINQUERY_API TokenFilter() = default;
    AWS_MANAGEDBLOCKCHAINQUERY_API TokenFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_MANAGEDBLOCKCHAINQUERY_API TokenFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MANAGEDBLOCKCHAINQUERY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The blockchain network of the token.</p>
     */
    inline QueryNetwork GetNetwork() const { return m_network; }
    inline bool NetworkHasBeenSet() const { return m_networkHasBeenSet; }
    inline void SetNetwork(QueryNetwork value) { m_networkHasBeenSet = true; m_network = value; }
    inline TokenFilter& WithNetwork(QueryNetwork value) { SetNetwork(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>This is the address of the contract.</p>
     */
    inline const Aws::String& GetContractAddress() const { return m_contractAddress; }
    inline bool ContractAddressHasBeenSet() const { return m_contractAddressHasBeenSet; }
    template<typename ContractAddressT = Aws::String>
    void SetContractAddress(ContractAddressT&& value) { m_contractAddressHasBeenSet = true; m_contractAddress = std::forward<ContractAddressT>(value); }
    template<typename ContractAddressT = Aws::String>
    TokenFilter& WithContractAddress(ContractAddressT&& value) { SetContractAddress(std::forward<ContractAddressT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the token.</p>
     */
    inline const Aws::String& GetTokenId() const { return m_tokenId; }
    inline bool TokenIdHasBeenSet() const { return m_tokenIdHasBeenSet; }
    template<typename TokenIdT = Aws::String>
    void SetTokenId(TokenIdT&& value) { m_tokenIdHasBeenSet = true; m_tokenId = std::forward<TokenIdT>(value); }
    template<typename TokenIdT = Aws::String>
    TokenFilter& WithTokenId(TokenIdT&& value) { SetTokenId(std::forward<TokenIdT>(value)); return *this;}
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
