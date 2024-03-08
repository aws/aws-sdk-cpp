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
    AWS_MANAGEDBLOCKCHAINQUERY_API TokenIdentifier();
    AWS_MANAGEDBLOCKCHAINQUERY_API TokenIdentifier(Aws::Utils::Json::JsonView jsonValue);
    AWS_MANAGEDBLOCKCHAINQUERY_API TokenIdentifier& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MANAGEDBLOCKCHAINQUERY_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The blockchain network of the token.</p>
     */
    inline const QueryNetwork& GetNetwork() const{ return m_network; }

    /**
     * <p>The blockchain network of the token.</p>
     */
    inline bool NetworkHasBeenSet() const { return m_networkHasBeenSet; }

    /**
     * <p>The blockchain network of the token.</p>
     */
    inline void SetNetwork(const QueryNetwork& value) { m_networkHasBeenSet = true; m_network = value; }

    /**
     * <p>The blockchain network of the token.</p>
     */
    inline void SetNetwork(QueryNetwork&& value) { m_networkHasBeenSet = true; m_network = std::move(value); }

    /**
     * <p>The blockchain network of the token.</p>
     */
    inline TokenIdentifier& WithNetwork(const QueryNetwork& value) { SetNetwork(value); return *this;}

    /**
     * <p>The blockchain network of the token.</p>
     */
    inline TokenIdentifier& WithNetwork(QueryNetwork&& value) { SetNetwork(std::move(value)); return *this;}


    /**
     * <p>This is the token's contract address.</p>
     */
    inline const Aws::String& GetContractAddress() const{ return m_contractAddress; }

    /**
     * <p>This is the token's contract address.</p>
     */
    inline bool ContractAddressHasBeenSet() const { return m_contractAddressHasBeenSet; }

    /**
     * <p>This is the token's contract address.</p>
     */
    inline void SetContractAddress(const Aws::String& value) { m_contractAddressHasBeenSet = true; m_contractAddress = value; }

    /**
     * <p>This is the token's contract address.</p>
     */
    inline void SetContractAddress(Aws::String&& value) { m_contractAddressHasBeenSet = true; m_contractAddress = std::move(value); }

    /**
     * <p>This is the token's contract address.</p>
     */
    inline void SetContractAddress(const char* value) { m_contractAddressHasBeenSet = true; m_contractAddress.assign(value); }

    /**
     * <p>This is the token's contract address.</p>
     */
    inline TokenIdentifier& WithContractAddress(const Aws::String& value) { SetContractAddress(value); return *this;}

    /**
     * <p>This is the token's contract address.</p>
     */
    inline TokenIdentifier& WithContractAddress(Aws::String&& value) { SetContractAddress(std::move(value)); return *this;}

    /**
     * <p>This is the token's contract address.</p>
     */
    inline TokenIdentifier& WithContractAddress(const char* value) { SetContractAddress(value); return *this;}


    /**
     * <p>The unique identifier of the token.</p>  <p>For native tokens, use the
     * 3 character abbreviation that best matches your token. For example, btc for
     * Bitcoin, eth for Ether, etc. For all other token types you must specify the
     * <code>tokenId</code> in the 64 character hexadecimal <code>tokenid</code>
     * format.</p> 
     */
    inline const Aws::String& GetTokenId() const{ return m_tokenId; }

    /**
     * <p>The unique identifier of the token.</p>  <p>For native tokens, use the
     * 3 character abbreviation that best matches your token. For example, btc for
     * Bitcoin, eth for Ether, etc. For all other token types you must specify the
     * <code>tokenId</code> in the 64 character hexadecimal <code>tokenid</code>
     * format.</p> 
     */
    inline bool TokenIdHasBeenSet() const { return m_tokenIdHasBeenSet; }

    /**
     * <p>The unique identifier of the token.</p>  <p>For native tokens, use the
     * 3 character abbreviation that best matches your token. For example, btc for
     * Bitcoin, eth for Ether, etc. For all other token types you must specify the
     * <code>tokenId</code> in the 64 character hexadecimal <code>tokenid</code>
     * format.</p> 
     */
    inline void SetTokenId(const Aws::String& value) { m_tokenIdHasBeenSet = true; m_tokenId = value; }

    /**
     * <p>The unique identifier of the token.</p>  <p>For native tokens, use the
     * 3 character abbreviation that best matches your token. For example, btc for
     * Bitcoin, eth for Ether, etc. For all other token types you must specify the
     * <code>tokenId</code> in the 64 character hexadecimal <code>tokenid</code>
     * format.</p> 
     */
    inline void SetTokenId(Aws::String&& value) { m_tokenIdHasBeenSet = true; m_tokenId = std::move(value); }

    /**
     * <p>The unique identifier of the token.</p>  <p>For native tokens, use the
     * 3 character abbreviation that best matches your token. For example, btc for
     * Bitcoin, eth for Ether, etc. For all other token types you must specify the
     * <code>tokenId</code> in the 64 character hexadecimal <code>tokenid</code>
     * format.</p> 
     */
    inline void SetTokenId(const char* value) { m_tokenIdHasBeenSet = true; m_tokenId.assign(value); }

    /**
     * <p>The unique identifier of the token.</p>  <p>For native tokens, use the
     * 3 character abbreviation that best matches your token. For example, btc for
     * Bitcoin, eth for Ether, etc. For all other token types you must specify the
     * <code>tokenId</code> in the 64 character hexadecimal <code>tokenid</code>
     * format.</p> 
     */
    inline TokenIdentifier& WithTokenId(const Aws::String& value) { SetTokenId(value); return *this;}

    /**
     * <p>The unique identifier of the token.</p>  <p>For native tokens, use the
     * 3 character abbreviation that best matches your token. For example, btc for
     * Bitcoin, eth for Ether, etc. For all other token types you must specify the
     * <code>tokenId</code> in the 64 character hexadecimal <code>tokenid</code>
     * format.</p> 
     */
    inline TokenIdentifier& WithTokenId(Aws::String&& value) { SetTokenId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the token.</p>  <p>For native tokens, use the
     * 3 character abbreviation that best matches your token. For example, btc for
     * Bitcoin, eth for Ether, etc. For all other token types you must specify the
     * <code>tokenId</code> in the 64 character hexadecimal <code>tokenid</code>
     * format.</p> 
     */
    inline TokenIdentifier& WithTokenId(const char* value) { SetTokenId(value); return *this;}

  private:

    QueryNetwork m_network;
    bool m_networkHasBeenSet = false;

    Aws::String m_contractAddress;
    bool m_contractAddressHasBeenSet = false;

    Aws::String m_tokenId;
    bool m_tokenIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ManagedBlockchainQuery
} // namespace Aws
