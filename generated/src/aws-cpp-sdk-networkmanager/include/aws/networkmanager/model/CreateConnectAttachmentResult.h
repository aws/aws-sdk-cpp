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
  class CreateConnectAttachmentResult
  {
  public:
    AWS_NETWORKMANAGER_API CreateConnectAttachmentResult();
    AWS_NETWORKMANAGER_API CreateConnectAttachmentResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_NETWORKMANAGER_API CreateConnectAttachmentResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The response to a Connect attachment request.</p>
     */
    inline const ConnectAttachment& GetConnectAttachment() const{ return m_connectAttachment; }

    /**
     * <p>The response to a Connect attachment request.</p>
     */
    inline void SetConnectAttachment(const ConnectAttachment& value) { m_connectAttachment = value; }

    /**
     * <p>The response to a Connect attachment request.</p>
     */
    inline void SetConnectAttachment(ConnectAttachment&& value) { m_connectAttachment = std::move(value); }

    /**
     * <p>The response to a Connect attachment request.</p>
     */
    inline CreateConnectAttachmentResult& WithConnectAttachment(const ConnectAttachment& value) { SetConnectAttachment(value); return *this;}

    /**
     * <p>The response to a Connect attachment request.</p>
     */
    inline CreateConnectAttachmentResult& WithConnectAttachment(ConnectAttachment&& value) { SetConnectAttachment(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline CreateConnectAttachmentResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline CreateConnectAttachmentResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline CreateConnectAttachmentResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    ConnectAttachment m_connectAttachment;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace NetworkManager
} // namespace Aws
