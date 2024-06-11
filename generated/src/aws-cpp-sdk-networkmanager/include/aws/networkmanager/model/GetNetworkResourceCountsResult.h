﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/networkmanager/NetworkManager_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/networkmanager/model/NetworkResourceCount.h>
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
namespace NetworkManager
{
namespace Model
{
  class GetNetworkResourceCountsResult
  {
  public:
    AWS_NETWORKMANAGER_API GetNetworkResourceCountsResult();
    AWS_NETWORKMANAGER_API GetNetworkResourceCountsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_NETWORKMANAGER_API GetNetworkResourceCountsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The count of resources.</p>
     */
    inline const Aws::Vector<NetworkResourceCount>& GetNetworkResourceCounts() const{ return m_networkResourceCounts; }
    inline void SetNetworkResourceCounts(const Aws::Vector<NetworkResourceCount>& value) { m_networkResourceCounts = value; }
    inline void SetNetworkResourceCounts(Aws::Vector<NetworkResourceCount>&& value) { m_networkResourceCounts = std::move(value); }
    inline GetNetworkResourceCountsResult& WithNetworkResourceCounts(const Aws::Vector<NetworkResourceCount>& value) { SetNetworkResourceCounts(value); return *this;}
    inline GetNetworkResourceCountsResult& WithNetworkResourceCounts(Aws::Vector<NetworkResourceCount>&& value) { SetNetworkResourceCounts(std::move(value)); return *this;}
    inline GetNetworkResourceCountsResult& AddNetworkResourceCounts(const NetworkResourceCount& value) { m_networkResourceCounts.push_back(value); return *this; }
    inline GetNetworkResourceCountsResult& AddNetworkResourceCounts(NetworkResourceCount&& value) { m_networkResourceCounts.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token for the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline GetNetworkResourceCountsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline GetNetworkResourceCountsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline GetNetworkResourceCountsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetNetworkResourceCountsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetNetworkResourceCountsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetNetworkResourceCountsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<NetworkResourceCount> m_networkResourceCounts;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace NetworkManager
} // namespace Aws
