/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/managedblockchain/ManagedBlockchain_EXPORTS.h>
#include <aws/managedblockchain/ManagedBlockchainRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/managedblockchain/model/AccessorNetworkType.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace ManagedBlockchain
{
namespace Model
{

  /**
   */
  class ListAccessorsRequest : public ManagedBlockchainRequest
  {
  public:
    AWS_MANAGEDBLOCKCHAIN_API ListAccessorsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListAccessors"; }

    AWS_MANAGEDBLOCKCHAIN_API Aws::String SerializePayload() const override;

    AWS_MANAGEDBLOCKCHAIN_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p> The maximum number of accessors to list.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p> The maximum number of accessors to list.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p> The maximum number of accessors to list.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p> The maximum number of accessors to list.</p>
     */
    inline ListAccessorsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p> The pagination token that indicates the next set of results to retrieve.
     * </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p> The pagination token that indicates the next set of results to retrieve.
     * </p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p> The pagination token that indicates the next set of results to retrieve.
     * </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p> The pagination token that indicates the next set of results to retrieve.
     * </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p> The pagination token that indicates the next set of results to retrieve.
     * </p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p> The pagination token that indicates the next set of results to retrieve.
     * </p>
     */
    inline ListAccessorsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p> The pagination token that indicates the next set of results to retrieve.
     * </p>
     */
    inline ListAccessorsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p> The pagination token that indicates the next set of results to retrieve.
     * </p>
     */
    inline ListAccessorsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The blockchain network that the <code>Accessor</code> token is created
     * for.</p>  <p>Use the value <code>ETHEREUM_MAINNET_AND_GOERLI</code> for
     * all existing <code>Accessors</code> tokens that were created before the
     * <code>networkType</code> property was introduced.</p> 
     */
    inline const AccessorNetworkType& GetNetworkType() const{ return m_networkType; }

    /**
     * <p>The blockchain network that the <code>Accessor</code> token is created
     * for.</p>  <p>Use the value <code>ETHEREUM_MAINNET_AND_GOERLI</code> for
     * all existing <code>Accessors</code> tokens that were created before the
     * <code>networkType</code> property was introduced.</p> 
     */
    inline bool NetworkTypeHasBeenSet() const { return m_networkTypeHasBeenSet; }

    /**
     * <p>The blockchain network that the <code>Accessor</code> token is created
     * for.</p>  <p>Use the value <code>ETHEREUM_MAINNET_AND_GOERLI</code> for
     * all existing <code>Accessors</code> tokens that were created before the
     * <code>networkType</code> property was introduced.</p> 
     */
    inline void SetNetworkType(const AccessorNetworkType& value) { m_networkTypeHasBeenSet = true; m_networkType = value; }

    /**
     * <p>The blockchain network that the <code>Accessor</code> token is created
     * for.</p>  <p>Use the value <code>ETHEREUM_MAINNET_AND_GOERLI</code> for
     * all existing <code>Accessors</code> tokens that were created before the
     * <code>networkType</code> property was introduced.</p> 
     */
    inline void SetNetworkType(AccessorNetworkType&& value) { m_networkTypeHasBeenSet = true; m_networkType = std::move(value); }

    /**
     * <p>The blockchain network that the <code>Accessor</code> token is created
     * for.</p>  <p>Use the value <code>ETHEREUM_MAINNET_AND_GOERLI</code> for
     * all existing <code>Accessors</code> tokens that were created before the
     * <code>networkType</code> property was introduced.</p> 
     */
    inline ListAccessorsRequest& WithNetworkType(const AccessorNetworkType& value) { SetNetworkType(value); return *this;}

    /**
     * <p>The blockchain network that the <code>Accessor</code> token is created
     * for.</p>  <p>Use the value <code>ETHEREUM_MAINNET_AND_GOERLI</code> for
     * all existing <code>Accessors</code> tokens that were created before the
     * <code>networkType</code> property was introduced.</p> 
     */
    inline ListAccessorsRequest& WithNetworkType(AccessorNetworkType&& value) { SetNetworkType(std::move(value)); return *this;}

  private:

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    AccessorNetworkType m_networkType;
    bool m_networkTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace ManagedBlockchain
} // namespace Aws
