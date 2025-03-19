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
  class CreateDirectConnectGatewayAttachmentResult
  {
  public:
    AWS_NETWORKMANAGER_API CreateDirectConnectGatewayAttachmentResult() = default;
    AWS_NETWORKMANAGER_API CreateDirectConnectGatewayAttachmentResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_NETWORKMANAGER_API CreateDirectConnectGatewayAttachmentResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Describes the details of a <code>CreateDirectConnectGatewayAttachment</code>
     * request.</p>
     */
    inline const DirectConnectGatewayAttachment& GetDirectConnectGatewayAttachment() const { return m_directConnectGatewayAttachment; }
    template<typename DirectConnectGatewayAttachmentT = DirectConnectGatewayAttachment>
    void SetDirectConnectGatewayAttachment(DirectConnectGatewayAttachmentT&& value) { m_directConnectGatewayAttachmentHasBeenSet = true; m_directConnectGatewayAttachment = std::forward<DirectConnectGatewayAttachmentT>(value); }
    template<typename DirectConnectGatewayAttachmentT = DirectConnectGatewayAttachment>
    CreateDirectConnectGatewayAttachmentResult& WithDirectConnectGatewayAttachment(DirectConnectGatewayAttachmentT&& value) { SetDirectConnectGatewayAttachment(std::forward<DirectConnectGatewayAttachmentT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateDirectConnectGatewayAttachmentResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
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
