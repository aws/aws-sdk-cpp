﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/privatenetworks/PrivateNetworks_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/privatenetworks/model/NetworkSite.h>
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
namespace PrivateNetworks
{
namespace Model
{
  class ListNetworkSitesResult
  {
  public:
    AWS_PRIVATENETWORKS_API ListNetworkSitesResult();
    AWS_PRIVATENETWORKS_API ListNetworkSitesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PRIVATENETWORKS_API ListNetworkSitesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about the network sites.</p>
     */
    inline const Aws::Vector<NetworkSite>& GetNetworkSites() const{ return m_networkSites; }
    inline void SetNetworkSites(const Aws::Vector<NetworkSite>& value) { m_networkSites = value; }
    inline void SetNetworkSites(Aws::Vector<NetworkSite>&& value) { m_networkSites = std::move(value); }
    inline ListNetworkSitesResult& WithNetworkSites(const Aws::Vector<NetworkSite>& value) { SetNetworkSites(value); return *this;}
    inline ListNetworkSitesResult& WithNetworkSites(Aws::Vector<NetworkSite>&& value) { SetNetworkSites(std::move(value)); return *this;}
    inline ListNetworkSitesResult& AddNetworkSites(const NetworkSite& value) { m_networkSites.push_back(value); return *this; }
    inline ListNetworkSitesResult& AddNetworkSites(NetworkSite&& value) { m_networkSites.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token for the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListNetworkSitesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListNetworkSitesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListNetworkSitesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListNetworkSitesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListNetworkSitesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListNetworkSitesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<NetworkSite> m_networkSites;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace PrivateNetworks
} // namespace Aws
