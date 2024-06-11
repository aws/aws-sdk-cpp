﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/networkmanager/NetworkManager_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/networkmanager/model/NetworkResource.h>
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
  class GetNetworkResourcesResult
  {
  public:
    AWS_NETWORKMANAGER_API GetNetworkResourcesResult();
    AWS_NETWORKMANAGER_API GetNetworkResourcesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_NETWORKMANAGER_API GetNetworkResourcesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The network resources.</p>
     */
    inline const Aws::Vector<NetworkResource>& GetNetworkResources() const{ return m_networkResources; }
    inline void SetNetworkResources(const Aws::Vector<NetworkResource>& value) { m_networkResources = value; }
    inline void SetNetworkResources(Aws::Vector<NetworkResource>&& value) { m_networkResources = std::move(value); }
    inline GetNetworkResourcesResult& WithNetworkResources(const Aws::Vector<NetworkResource>& value) { SetNetworkResources(value); return *this;}
    inline GetNetworkResourcesResult& WithNetworkResources(Aws::Vector<NetworkResource>&& value) { SetNetworkResources(std::move(value)); return *this;}
    inline GetNetworkResourcesResult& AddNetworkResources(const NetworkResource& value) { m_networkResources.push_back(value); return *this; }
    inline GetNetworkResourcesResult& AddNetworkResources(NetworkResource&& value) { m_networkResources.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token for the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline GetNetworkResourcesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline GetNetworkResourcesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline GetNetworkResourcesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetNetworkResourcesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetNetworkResourcesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetNetworkResourcesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<NetworkResource> m_networkResources;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace NetworkManager
} // namespace Aws
