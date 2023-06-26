/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/networkmanager/NetworkManager_EXPORTS.h>
#include <aws/networkmanager/model/ConnectPeerAssociation.h>
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
  class DisassociateConnectPeerResult
  {
  public:
    AWS_NETWORKMANAGER_API DisassociateConnectPeerResult();
    AWS_NETWORKMANAGER_API DisassociateConnectPeerResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_NETWORKMANAGER_API DisassociateConnectPeerResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Describes the Connect peer association.</p>
     */
    inline const ConnectPeerAssociation& GetConnectPeerAssociation() const{ return m_connectPeerAssociation; }

    /**
     * <p>Describes the Connect peer association.</p>
     */
    inline void SetConnectPeerAssociation(const ConnectPeerAssociation& value) { m_connectPeerAssociation = value; }

    /**
     * <p>Describes the Connect peer association.</p>
     */
    inline void SetConnectPeerAssociation(ConnectPeerAssociation&& value) { m_connectPeerAssociation = std::move(value); }

    /**
     * <p>Describes the Connect peer association.</p>
     */
    inline DisassociateConnectPeerResult& WithConnectPeerAssociation(const ConnectPeerAssociation& value) { SetConnectPeerAssociation(value); return *this;}

    /**
     * <p>Describes the Connect peer association.</p>
     */
    inline DisassociateConnectPeerResult& WithConnectPeerAssociation(ConnectPeerAssociation&& value) { SetConnectPeerAssociation(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DisassociateConnectPeerResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DisassociateConnectPeerResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DisassociateConnectPeerResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    ConnectPeerAssociation m_connectPeerAssociation;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace NetworkManager
} // namespace Aws
