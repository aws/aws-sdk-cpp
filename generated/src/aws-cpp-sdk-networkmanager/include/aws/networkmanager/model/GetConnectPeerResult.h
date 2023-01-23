/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/networkmanager/NetworkManager_EXPORTS.h>
#include <aws/networkmanager/model/ConnectPeer.h>
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
  class GetConnectPeerResult
  {
  public:
    AWS_NETWORKMANAGER_API GetConnectPeerResult();
    AWS_NETWORKMANAGER_API GetConnectPeerResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_NETWORKMANAGER_API GetConnectPeerResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Returns information about a core network Connect peer.</p>
     */
    inline const ConnectPeer& GetConnectPeer() const{ return m_connectPeer; }

    /**
     * <p>Returns information about a core network Connect peer.</p>
     */
    inline void SetConnectPeer(const ConnectPeer& value) { m_connectPeer = value; }

    /**
     * <p>Returns information about a core network Connect peer.</p>
     */
    inline void SetConnectPeer(ConnectPeer&& value) { m_connectPeer = std::move(value); }

    /**
     * <p>Returns information about a core network Connect peer.</p>
     */
    inline GetConnectPeerResult& WithConnectPeer(const ConnectPeer& value) { SetConnectPeer(value); return *this;}

    /**
     * <p>Returns information about a core network Connect peer.</p>
     */
    inline GetConnectPeerResult& WithConnectPeer(ConnectPeer&& value) { SetConnectPeer(std::move(value)); return *this;}

  private:

    ConnectPeer m_connectPeer;
  };

} // namespace Model
} // namespace NetworkManager
} // namespace Aws
