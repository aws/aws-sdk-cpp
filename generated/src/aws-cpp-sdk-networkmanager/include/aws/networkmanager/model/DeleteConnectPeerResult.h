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
    AWS_NETWORKMANAGER_API DeleteConnectPeerResult();
    AWS_NETWORKMANAGER_API DeleteConnectPeerResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_NETWORKMANAGER_API DeleteConnectPeerResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about the deleted Connect peer.</p>
     */
    inline const ConnectPeer& GetConnectPeer() const{ return m_connectPeer; }

    /**
     * <p>Information about the deleted Connect peer.</p>
     */
    inline void SetConnectPeer(const ConnectPeer& value) { m_connectPeer = value; }

    /**
     * <p>Information about the deleted Connect peer.</p>
     */
    inline void SetConnectPeer(ConnectPeer&& value) { m_connectPeer = std::move(value); }

    /**
     * <p>Information about the deleted Connect peer.</p>
     */
    inline DeleteConnectPeerResult& WithConnectPeer(const ConnectPeer& value) { SetConnectPeer(value); return *this;}

    /**
     * <p>Information about the deleted Connect peer.</p>
     */
    inline DeleteConnectPeerResult& WithConnectPeer(ConnectPeer&& value) { SetConnectPeer(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DeleteConnectPeerResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DeleteConnectPeerResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DeleteConnectPeerResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    ConnectPeer m_connectPeer;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace NetworkManager
} // namespace Aws
