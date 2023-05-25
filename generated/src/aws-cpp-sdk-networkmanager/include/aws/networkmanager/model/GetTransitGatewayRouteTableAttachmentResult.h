/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/networkmanager/NetworkManager_EXPORTS.h>
#include <aws/networkmanager/model/TransitGatewayRouteTableAttachment.h>
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
  class GetTransitGatewayRouteTableAttachmentResult
  {
  public:
    AWS_NETWORKMANAGER_API GetTransitGatewayRouteTableAttachmentResult();
    AWS_NETWORKMANAGER_API GetTransitGatewayRouteTableAttachmentResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_NETWORKMANAGER_API GetTransitGatewayRouteTableAttachmentResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Returns information about the transit gateway route table attachment.</p>
     */
    inline const TransitGatewayRouteTableAttachment& GetTransitGatewayRouteTableAttachment() const{ return m_transitGatewayRouteTableAttachment; }

    /**
     * <p>Returns information about the transit gateway route table attachment.</p>
     */
    inline void SetTransitGatewayRouteTableAttachment(const TransitGatewayRouteTableAttachment& value) { m_transitGatewayRouteTableAttachment = value; }

    /**
     * <p>Returns information about the transit gateway route table attachment.</p>
     */
    inline void SetTransitGatewayRouteTableAttachment(TransitGatewayRouteTableAttachment&& value) { m_transitGatewayRouteTableAttachment = std::move(value); }

    /**
     * <p>Returns information about the transit gateway route table attachment.</p>
     */
    inline GetTransitGatewayRouteTableAttachmentResult& WithTransitGatewayRouteTableAttachment(const TransitGatewayRouteTableAttachment& value) { SetTransitGatewayRouteTableAttachment(value); return *this;}

    /**
     * <p>Returns information about the transit gateway route table attachment.</p>
     */
    inline GetTransitGatewayRouteTableAttachmentResult& WithTransitGatewayRouteTableAttachment(TransitGatewayRouteTableAttachment&& value) { SetTransitGatewayRouteTableAttachment(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetTransitGatewayRouteTableAttachmentResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetTransitGatewayRouteTableAttachmentResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetTransitGatewayRouteTableAttachmentResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    TransitGatewayRouteTableAttachment m_transitGatewayRouteTableAttachment;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace NetworkManager
} // namespace Aws
