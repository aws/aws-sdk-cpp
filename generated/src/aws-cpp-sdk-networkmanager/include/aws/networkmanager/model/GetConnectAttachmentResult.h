/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/networkmanager/NetworkManager_EXPORTS.h>
#include <aws/networkmanager/model/ConnectAttachment.h>
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
  class GetConnectAttachmentResult
  {
  public:
    AWS_NETWORKMANAGER_API GetConnectAttachmentResult();
    AWS_NETWORKMANAGER_API GetConnectAttachmentResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_NETWORKMANAGER_API GetConnectAttachmentResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Details about the Connect attachment.</p>
     */
    inline const ConnectAttachment& GetConnectAttachment() const{ return m_connectAttachment; }

    /**
     * <p>Details about the Connect attachment.</p>
     */
    inline void SetConnectAttachment(const ConnectAttachment& value) { m_connectAttachment = value; }

    /**
     * <p>Details about the Connect attachment.</p>
     */
    inline void SetConnectAttachment(ConnectAttachment&& value) { m_connectAttachment = std::move(value); }

    /**
     * <p>Details about the Connect attachment.</p>
     */
    inline GetConnectAttachmentResult& WithConnectAttachment(const ConnectAttachment& value) { SetConnectAttachment(value); return *this;}

    /**
     * <p>Details about the Connect attachment.</p>
     */
    inline GetConnectAttachmentResult& WithConnectAttachment(ConnectAttachment&& value) { SetConnectAttachment(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetConnectAttachmentResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetConnectAttachmentResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetConnectAttachmentResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    ConnectAttachment m_connectAttachment;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace NetworkManager
} // namespace Aws
