﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/managedblockchain/ManagedBlockchain_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/managedblockchain/model/NetworkSummary.h>
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
namespace ManagedBlockchain
{
namespace Model
{
  class ListNetworksResult
  {
  public:
    AWS_MANAGEDBLOCKCHAIN_API ListNetworksResult();
    AWS_MANAGEDBLOCKCHAIN_API ListNetworksResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MANAGEDBLOCKCHAIN_API ListNetworksResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array of <code>NetworkSummary</code> objects that contain configuration
     * properties for each network.</p>
     */
    inline const Aws::Vector<NetworkSummary>& GetNetworks() const{ return m_networks; }
    inline void SetNetworks(const Aws::Vector<NetworkSummary>& value) { m_networks = value; }
    inline void SetNetworks(Aws::Vector<NetworkSummary>&& value) { m_networks = std::move(value); }
    inline ListNetworksResult& WithNetworks(const Aws::Vector<NetworkSummary>& value) { SetNetworks(value); return *this;}
    inline ListNetworksResult& WithNetworks(Aws::Vector<NetworkSummary>&& value) { SetNetworks(std::move(value)); return *this;}
    inline ListNetworksResult& AddNetworks(const NetworkSummary& value) { m_networks.push_back(value); return *this; }
    inline ListNetworksResult& AddNetworks(NetworkSummary&& value) { m_networks.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The pagination token that indicates the next set of results to retrieve.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListNetworksResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListNetworksResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListNetworksResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListNetworksResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListNetworksResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListNetworksResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<NetworkSummary> m_networks;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ManagedBlockchain
} // namespace Aws
