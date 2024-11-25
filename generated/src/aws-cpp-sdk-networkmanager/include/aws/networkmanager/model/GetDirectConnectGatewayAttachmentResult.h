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
    AWS_NETWORKMANAGER_API GetDirectConnectGatewayAttachmentResult();
    AWS_NETWORKMANAGER_API GetDirectConnectGatewayAttachmentResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_NETWORKMANAGER_API GetDirectConnectGatewayAttachmentResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Shows details about the Direct Connect gateway attachment. </p>
     */
    inline const DirectConnectGatewayAttachment& GetDirectConnectGatewayAttachment() const{ return m_directConnectGatewayAttachment; }
    inline void SetDirectConnectGatewayAttachment(const DirectConnectGatewayAttachment& value) { m_directConnectGatewayAttachment = value; }
    inline void SetDirectConnectGatewayAttachment(DirectConnectGatewayAttachment&& value) { m_directConnectGatewayAttachment = std::move(value); }
    inline GetDirectConnectGatewayAttachmentResult& WithDirectConnectGatewayAttachment(const DirectConnectGatewayAttachment& value) { SetDirectConnectGatewayAttachment(value); return *this;}
    inline GetDirectConnectGatewayAttachmentResult& WithDirectConnectGatewayAttachment(DirectConnectGatewayAttachment&& value) { SetDirectConnectGatewayAttachment(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetDirectConnectGatewayAttachmentResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetDirectConnectGatewayAttachmentResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetDirectConnectGatewayAttachmentResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    DirectConnectGatewayAttachment m_directConnectGatewayAttachment;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace NetworkManager
} // namespace Aws
