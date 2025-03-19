/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/networkmanager/NetworkManager_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/networkmanager/model/ConnectPeerSummary.h>
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
  class ListConnectPeersResult
  {
  public:
    AWS_NETWORKMANAGER_API ListConnectPeersResult() = default;
    AWS_NETWORKMANAGER_API ListConnectPeersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_NETWORKMANAGER_API ListConnectPeersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Describes the Connect peers.</p>
     */
    inline const Aws::Vector<ConnectPeerSummary>& GetConnectPeers() const { return m_connectPeers; }
    template<typename ConnectPeersT = Aws::Vector<ConnectPeerSummary>>
    void SetConnectPeers(ConnectPeersT&& value) { m_connectPeersHasBeenSet = true; m_connectPeers = std::forward<ConnectPeersT>(value); }
    template<typename ConnectPeersT = Aws::Vector<ConnectPeerSummary>>
    ListConnectPeersResult& WithConnectPeers(ConnectPeersT&& value) { SetConnectPeers(std::forward<ConnectPeersT>(value)); return *this;}
    template<typename ConnectPeersT = ConnectPeerSummary>
    ListConnectPeersResult& AddConnectPeers(ConnectPeersT&& value) { m_connectPeersHasBeenSet = true; m_connectPeers.emplace_back(std::forward<ConnectPeersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token for the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListConnectPeersResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListConnectPeersResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ConnectPeerSummary> m_connectPeers;
    bool m_connectPeersHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkManager
} // namespace Aws
