/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/networkmanager/NetworkManager_EXPORTS.h>
#include <aws/networkmanager/model/DirectConnectGatewayAttachment.h>
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
  class GetDirectConnectGatewayAttachmentResult
  {
  public:
    AWS_NETWORKMANAGER_API GetDirectConnectGatewayAttachmentResult() = default;
    AWS_NETWORKMANAGER_API GetDirectConnectGatewayAttachmentResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_NETWORKMANAGER_API GetDirectConnectGatewayAttachmentResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Shows details about the Direct Connect gateway attachment. </p>
     */
    inline const DirectConnectGatewayAttachment& GetDirectConnectGatewayAttachment() const { return m_directConnectGatewayAttachment; }
    template<typename DirectConnectGatewayAttachmentT = DirectConnectGatewayAttachment>
    void SetDirectConnectGatewayAttachment(DirectConnectGatewayAttachmentT&& value) { m_directConnectGatewayAttachmentHasBeenSet = true; m_directConnectGatewayAttachment = std::forward<DirectConnectGatewayAttachmentT>(value); }
    template<typename DirectConnectGatewayAttachmentT = DirectConnectGatewayAttachment>
    GetDirectConnectGatewayAttachmentResult& WithDirectConnectGatewayAttachment(DirectConnectGatewayAttachmentT&& value) { SetDirectConnectGatewayAttachment(std::forward<DirectConnectGatewayAttachmentT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetDirectConnectGatewayAttachmentResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    DirectConnectGatewayAttachment m_directConnectGatewayAttachment;
    bool m_directConnectGatewayAttachmentHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkManager
} // namespace Aws
