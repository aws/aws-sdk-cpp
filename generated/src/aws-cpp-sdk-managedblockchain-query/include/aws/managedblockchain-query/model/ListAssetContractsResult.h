/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/managedblockchain-query/ManagedBlockchainQuery_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/managedblockchain-query/model/AssetContract.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace ManagedBlockchainQuery
{
namespace Model
{
  class ListAssetContractsResult
  {
  public:
    AWS_MANAGEDBLOCKCHAINQUERY_API ListAssetContractsResult();
    AWS_MANAGEDBLOCKCHAINQUERY_API ListAssetContractsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MANAGEDBLOCKCHAINQUERY_API ListAssetContractsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An array of contract objects that contain the properties for each
     * contract.</p>
     */
    inline const Aws::Vector<AssetContract>& GetContracts() const{ return m_contracts; }

    /**
     * <p>An array of contract objects that contain the properties for each
     * contract.</p>
     */
    inline void SetContracts(const Aws::Vector<AssetContract>& value) { m_contracts = value; }

    /**
     * <p>An array of contract objects that contain the properties for each
     * contract.</p>
     */
    inline void SetContracts(Aws::Vector<AssetContract>&& value) { m_contracts = std::move(value); }

    /**
     * <p>An array of contract objects that contain the properties for each
     * contract.</p>
     */
    inline ListAssetContractsResult& WithContracts(const Aws::Vector<AssetContract>& value) { SetContracts(value); return *this;}

    /**
     * <p>An array of contract objects that contain the properties for each
     * contract.</p>
     */
    inline ListAssetContractsResult& WithContracts(Aws::Vector<AssetContract>&& value) { SetContracts(std::move(value)); return *this;}

    /**
     * <p>An array of contract objects that contain the properties for each
     * contract.</p>
     */
    inline ListAssetContractsResult& AddContracts(const AssetContract& value) { m_contracts.push_back(value); return *this; }

    /**
     * <p>An array of contract objects that contain the properties for each
     * contract.</p>
     */
    inline ListAssetContractsResult& AddContracts(AssetContract&& value) { m_contracts.push_back(std::move(value)); return *this; }


    /**
     * <p>The pagination token that indicates the next set of results to retrieve. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The pagination token that indicates the next set of results to retrieve. </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The pagination token that indicates the next set of results to retrieve. </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The pagination token that indicates the next set of results to retrieve. </p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The pagination token that indicates the next set of results to retrieve. </p>
     */
    inline ListAssetContractsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The pagination token that indicates the next set of results to retrieve. </p>
     */
    inline ListAssetContractsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The pagination token that indicates the next set of results to retrieve. </p>
     */
    inline ListAssetContractsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListAssetContractsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListAssetContractsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListAssetContractsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<AssetContract> m_contracts;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ManagedBlockchainQuery
} // namespace Aws
