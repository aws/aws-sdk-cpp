/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/networkmanager/NetworkManager_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/networkmanager/model/Peering.h>
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
  class ListPeeringsResult
  {
  public:
    AWS_NETWORKMANAGER_API ListPeeringsResult() = default;
    AWS_NETWORKMANAGER_API ListPeeringsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_NETWORKMANAGER_API ListPeeringsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Lists the transit gateway peerings for the <code>ListPeerings</code>
     * request.</p>
     */
    inline const Aws::Vector<Peering>& GetPeerings() const { return m_peerings; }
    template<typename PeeringsT = Aws::Vector<Peering>>
    void SetPeerings(PeeringsT&& value) { m_peeringsHasBeenSet = true; m_peerings = std::forward<PeeringsT>(value); }
    template<typename PeeringsT = Aws::Vector<Peering>>
    ListPeeringsResult& WithPeerings(PeeringsT&& value) { SetPeerings(std::forward<PeeringsT>(value)); return *this;}
    template<typename PeeringsT = Peering>
    ListPeeringsResult& AddPeerings(PeeringsT&& value) { m_peeringsHasBeenSet = true; m_peerings.emplace_back(std::forward<PeeringsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token for the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListPeeringsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListPeeringsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Peering> m_peerings;
    bool m_peeringsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkManager
} // namespace Aws
