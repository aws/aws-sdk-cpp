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
  class UpdateDirectConnectGatewayAttachmentResult
  {
  public:
    AWS_NETWORKMANAGER_API UpdateDirectConnectGatewayAttachmentResult();
    AWS_NETWORKMANAGER_API UpdateDirectConnectGatewayAttachmentResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_NETWORKMANAGER_API UpdateDirectConnectGatewayAttachmentResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Returns details of the Direct Connect gateway attachment with the updated
     * edge locations.</p>
     */
    inline const DirectConnectGatewayAttachment& GetDirectConnectGatewayAttachment() const{ return m_directConnectGatewayAttachment; }
    inline void SetDirectConnectGatewayAttachment(const DirectConnectGatewayAttachment& value) { m_directConnectGatewayAttachment = value; }
    inline void SetDirectConnectGatewayAttachment(DirectConnectGatewayAttachment&& value) { m_directConnectGatewayAttachment = std::move(value); }
    inline UpdateDirectConnectGatewayAttachmentResult& WithDirectConnectGatewayAttachment(const DirectConnectGatewayAttachment& value) { SetDirectConnectGatewayAttachment(value); return *this;}
    inline UpdateDirectConnectGatewayAttachmentResult& WithDirectConnectGatewayAttachment(DirectConnectGatewayAttachment&& value) { SetDirectConnectGatewayAttachment(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline UpdateDirectConnectGatewayAttachmentResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline UpdateDirectConnectGatewayAttachmentResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline UpdateDirectConnectGatewayAttachmentResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    DirectConnectGatewayAttachment m_directConnectGatewayAttachment;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace NetworkManager
} // namespace Aws
