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
    AWS_MANAGEDBLOCKCHAINQUERY_API TokenFilter();
    AWS_MANAGEDBLOCKCHAINQUERY_API TokenFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_MANAGEDBLOCKCHAINQUERY_API TokenFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
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
    inline TokenFilter& WithNetwork(const QueryNetwork& value) { SetNetwork(value); return *this;}

    /**
     * <p>The blockchain network of the token.</p>
     */
    inline TokenFilter& WithNetwork(QueryNetwork&& value) { SetNetwork(std::move(value)); return *this;}


    /**
     * <p>This is the address of the contract.</p>
     */
    inline const Aws::String& GetContractAddress() const{ return m_contractAddress; }

    /**
     * <p>This is the address of the contract.</p>
     */
    inline bool ContractAddressHasBeenSet() const { return m_contractAddressHasBeenSet; }

    /**
     * <p>This is the address of the contract.</p>
     */
    inline void SetContractAddress(const Aws::String& value) { m_contractAddressHasBeenSet = true; m_contractAddress = value; }

    /**
     * <p>This is the address of the contract.</p>
     */
    inline void SetContractAddress(Aws::String&& value) { m_contractAddressHasBeenSet = true; m_contractAddress = std::move(value); }

    /**
     * <p>This is the address of the contract.</p>
     */
    inline void SetContractAddress(const char* value) { m_contractAddressHasBeenSet = true; m_contractAddress.assign(value); }

    /**
     * <p>This is the address of the contract.</p>
     */
    inline TokenFilter& WithContractAddress(const Aws::String& value) { SetContractAddress(value); return *this;}

    /**
     * <p>This is the address of the contract.</p>
     */
    inline TokenFilter& WithContractAddress(Aws::String&& value) { SetContractAddress(std::move(value)); return *this;}

    /**
     * <p>This is the address of the contract.</p>
     */
    inline TokenFilter& WithContractAddress(const char* value) { SetContractAddress(value); return *this;}


    /**
     * <p>The unique identifier of the token.</p>
     */
    inline const Aws::String& GetTokenId() const{ return m_tokenId; }

    /**
     * <p>The unique identifier of the token.</p>
     */
    inline bool TokenIdHasBeenSet() const { return m_tokenIdHasBeenSet; }

    /**
     * <p>The unique identifier of the token.</p>
     */
    inline void SetTokenId(const Aws::String& value) { m_tokenIdHasBeenSet = true; m_tokenId = value; }

    /**
     * <p>The unique identifier of the token.</p>
     */
    inline void SetTokenId(Aws::String&& value) { m_tokenIdHasBeenSet = true; m_tokenId = std::move(value); }

    /**
     * <p>The unique identifier of the token.</p>
     */
    inline void SetTokenId(const char* value) { m_tokenIdHasBeenSet = true; m_tokenId.assign(value); }

    /**
     * <p>The unique identifier of the token.</p>
     */
    inline TokenFilter& WithTokenId(const Aws::String& value) { SetTokenId(value); return *this;}

    /**
     * <p>The unique identifier of the token.</p>
     */
    inline TokenFilter& WithTokenId(Aws::String&& value) { SetTokenId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the token.</p>
     */
    inline TokenFilter& WithTokenId(const char* value) { SetTokenId(value); return *this;}

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
