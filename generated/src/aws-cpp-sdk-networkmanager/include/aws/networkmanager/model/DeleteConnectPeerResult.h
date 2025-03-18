/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/networkmanager/NetworkManager_EXPORTS.h>
#include <aws/networkmanager/model/ConnectPeer.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class DeleteConnectPeerResult
  {
  public:
    AWS_NETWORKMANAGER_API DeleteConnectPeerResult() = default;
    AWS_NETWORKMANAGER_API DeleteConnectPeerResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_NETWORKMANAGER_API DeleteConnectPeerResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about the deleted Connect peer.</p>
     */
    inline const ConnectPeer& GetConnectPeer() const { return m_connectPeer; }
    template<typename ConnectPeerT = ConnectPeer>
    void SetConnectPeer(ConnectPeerT&& value) { m_connectPeerHasBeenSet = true; m_connectPeer = std::forward<ConnectPeerT>(value); }
    template<typename ConnectPeerT = ConnectPeer>
    DeleteConnectPeerResult& WithConnectPeer(ConnectPeerT&& value) { SetConnectPeer(std::forward<ConnectPeerT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DeleteConnectPeerResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    ConnectPeer m_connectPeer;
    bool m_connectPeerHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkManager
} // namespace Aws
