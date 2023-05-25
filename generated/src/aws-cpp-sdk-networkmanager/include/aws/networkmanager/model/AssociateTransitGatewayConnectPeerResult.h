/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/networkmanager/NetworkManager_EXPORTS.h>
#include <aws/networkmanager/model/TransitGatewayConnectPeerAssociation.h>
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
  class AssociateTransitGatewayConnectPeerResult
  {
  public:
    AWS_NETWORKMANAGER_API AssociateTransitGatewayConnectPeerResult();
    AWS_NETWORKMANAGER_API AssociateTransitGatewayConnectPeerResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_NETWORKMANAGER_API AssociateTransitGatewayConnectPeerResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The transit gateway Connect peer association.</p>
     */
    inline const TransitGatewayConnectPeerAssociation& GetTransitGatewayConnectPeerAssociation() const{ return m_transitGatewayConnectPeerAssociation; }

    /**
     * <p>The transit gateway Connect peer association.</p>
     */
    inline void SetTransitGatewayConnectPeerAssociation(const TransitGatewayConnectPeerAssociation& value) { m_transitGatewayConnectPeerAssociation = value; }

    /**
     * <p>The transit gateway Connect peer association.</p>
     */
    inline void SetTransitGatewayConnectPeerAssociation(TransitGatewayConnectPeerAssociation&& value) { m_transitGatewayConnectPeerAssociation = std::move(value); }

    /**
     * <p>The transit gateway Connect peer association.</p>
     */
    inline AssociateTransitGatewayConnectPeerResult& WithTransitGatewayConnectPeerAssociation(const TransitGatewayConnectPeerAssociation& value) { SetTransitGatewayConnectPeerAssociation(value); return *this;}

    /**
     * <p>The transit gateway Connect peer association.</p>
     */
    inline AssociateTransitGatewayConnectPeerResult& WithTransitGatewayConnectPeerAssociation(TransitGatewayConnectPeerAssociation&& value) { SetTransitGatewayConnectPeerAssociation(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline AssociateTransitGatewayConnectPeerResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline AssociateTransitGatewayConnectPeerResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline AssociateTransitGatewayConnectPeerResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    TransitGatewayConnectPeerAssociation m_transitGatewayConnectPeerAssociation;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace NetworkManager
} // namespace Aws
