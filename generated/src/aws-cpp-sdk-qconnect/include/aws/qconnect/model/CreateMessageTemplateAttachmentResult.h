/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qconnect/QConnect_EXPORTS.h>
#include <aws/qconnect/model/MessageTemplateAttachment.h>
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
namespace QConnect
{
namespace Model
{
  class CreateMessageTemplateAttachmentResult
  {
  public:
    AWS_QCONNECT_API CreateMessageTemplateAttachmentResult();
    AWS_QCONNECT_API CreateMessageTemplateAttachmentResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QCONNECT_API CreateMessageTemplateAttachmentResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The message template attachment.</p>
     */
    inline const MessageTemplateAttachment& GetAttachment() const{ return m_attachment; }
    inline void SetAttachment(const MessageTemplateAttachment& value) { m_attachment = value; }
    inline void SetAttachment(MessageTemplateAttachment&& value) { m_attachment = std::move(value); }
    inline CreateMessageTemplateAttachmentResult& WithAttachment(const MessageTemplateAttachment& value) { SetAttachment(value); return *this;}
    inline CreateMessageTemplateAttachmentResult& WithAttachment(MessageTemplateAttachment&& value) { SetAttachment(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreateMessageTemplateAttachmentResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreateMessageTemplateAttachmentResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreateMessageTemplateAttachmentResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    MessageTemplateAttachment m_attachment;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace QConnect
} // namespace Aws
