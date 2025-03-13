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
    AWS_NETWORKMANAGER_API GetTransitGatewayRouteTableAttachmentResult() = default;
    AWS_NETWORKMANAGER_API GetTransitGatewayRouteTableAttachmentResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_NETWORKMANAGER_API GetTransitGatewayRouteTableAttachmentResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Returns information about the transit gateway route table attachment.</p>
     */
    inline const TransitGatewayRouteTableAttachment& GetTransitGatewayRouteTableAttachment() const { return m_transitGatewayRouteTableAttachment; }
    template<typename TransitGatewayRouteTableAttachmentT = TransitGatewayRouteTableAttachment>
    void SetTransitGatewayRouteTableAttachment(TransitGatewayRouteTableAttachmentT&& value) { m_transitGatewayRouteTableAttachmentHasBeenSet = true; m_transitGatewayRouteTableAttachment = std::forward<TransitGatewayRouteTableAttachmentT>(value); }
    template<typename TransitGatewayRouteTableAttachmentT = TransitGatewayRouteTableAttachment>
    GetTransitGatewayRouteTableAttachmentResult& WithTransitGatewayRouteTableAttachment(TransitGatewayRouteTableAttachmentT&& value) { SetTransitGatewayRouteTableAttachment(std::forward<TransitGatewayRouteTableAttachmentT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetTransitGatewayRouteTableAttachmentResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    TransitGatewayRouteTableAttachment m_transitGatewayRouteTableAttachment;
    bool m_transitGatewayRouteTableAttachmentHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkManager
} // namespace Aws
