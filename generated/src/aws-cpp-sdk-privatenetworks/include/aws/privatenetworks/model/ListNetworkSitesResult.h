/**
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
    AWS_PRIVATENETWORKS_API ListNetworkSitesResult() = default;
    AWS_PRIVATENETWORKS_API ListNetworkSitesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PRIVATENETWORKS_API ListNetworkSitesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about the network sites.</p>
     */
    inline const Aws::Vector<NetworkSite>& GetNetworkSites() const { return m_networkSites; }
    template<typename NetworkSitesT = Aws::Vector<NetworkSite>>
    void SetNetworkSites(NetworkSitesT&& value) { m_networkSitesHasBeenSet = true; m_networkSites = std::forward<NetworkSitesT>(value); }
    template<typename NetworkSitesT = Aws::Vector<NetworkSite>>
    ListNetworkSitesResult& WithNetworkSites(NetworkSitesT&& value) { SetNetworkSites(std::forward<NetworkSitesT>(value)); return *this;}
    template<typename NetworkSitesT = NetworkSite>
    ListNetworkSitesResult& AddNetworkSites(NetworkSitesT&& value) { m_networkSitesHasBeenSet = true; m_networkSites.emplace_back(std::forward<NetworkSitesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token for the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListNetworkSitesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListNetworkSitesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<NetworkSite> m_networkSites;
    bool m_networkSitesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace PrivateNetworks
} // namespace Aws
