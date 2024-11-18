/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qconnect/QConnect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/qconnect/model/MessageTemplateContentProvider.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/qconnect/model/MessageTemplateAttachment.h>
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
  class RenderMessageTemplateResult
  {
  public:
    AWS_QCONNECT_API RenderMessageTemplateResult();
    AWS_QCONNECT_API RenderMessageTemplateResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QCONNECT_API RenderMessageTemplateResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The message template attachments.</p>
     */
    inline const Aws::Vector<MessageTemplateAttachment>& GetAttachments() const{ return m_attachments; }
    inline void SetAttachments(const Aws::Vector<MessageTemplateAttachment>& value) { m_attachments = value; }
    inline void SetAttachments(Aws::Vector<MessageTemplateAttachment>&& value) { m_attachments = std::move(value); }
    inline RenderMessageTemplateResult& WithAttachments(const Aws::Vector<MessageTemplateAttachment>& value) { SetAttachments(value); return *this;}
    inline RenderMessageTemplateResult& WithAttachments(Aws::Vector<MessageTemplateAttachment>&& value) { SetAttachments(std::move(value)); return *this;}
    inline RenderMessageTemplateResult& AddAttachments(const MessageTemplateAttachment& value) { m_attachments.push_back(value); return *this; }
    inline RenderMessageTemplateResult& AddAttachments(MessageTemplateAttachment&& value) { m_attachments.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The attribute keys that are not resolved.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAttributesNotInterpolated() const{ return m_attributesNotInterpolated; }
    inline void SetAttributesNotInterpolated(const Aws::Vector<Aws::String>& value) { m_attributesNotInterpolated = value; }
    inline void SetAttributesNotInterpolated(Aws::Vector<Aws::String>&& value) { m_attributesNotInterpolated = std::move(value); }
    inline RenderMessageTemplateResult& WithAttributesNotInterpolated(const Aws::Vector<Aws::String>& value) { SetAttributesNotInterpolated(value); return *this;}
    inline RenderMessageTemplateResult& WithAttributesNotInterpolated(Aws::Vector<Aws::String>&& value) { SetAttributesNotInterpolated(std::move(value)); return *this;}
    inline RenderMessageTemplateResult& AddAttributesNotInterpolated(const Aws::String& value) { m_attributesNotInterpolated.push_back(value); return *this; }
    inline RenderMessageTemplateResult& AddAttributesNotInterpolated(Aws::String&& value) { m_attributesNotInterpolated.push_back(std::move(value)); return *this; }
    inline RenderMessageTemplateResult& AddAttributesNotInterpolated(const char* value) { m_attributesNotInterpolated.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The content of the message template.</p>
     */
    inline const MessageTemplateContentProvider& GetContent() const{ return m_content; }
    inline void SetContent(const MessageTemplateContentProvider& value) { m_content = value; }
    inline void SetContent(MessageTemplateContentProvider&& value) { m_content = std::move(value); }
    inline RenderMessageTemplateResult& WithContent(const MessageTemplateContentProvider& value) { SetContent(value); return *this;}
    inline RenderMessageTemplateResult& WithContent(MessageTemplateContentProvider&& value) { SetContent(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline RenderMessageTemplateResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline RenderMessageTemplateResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline RenderMessageTemplateResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<MessageTemplateAttachment> m_attachments;

    Aws::Vector<Aws::String> m_attributesNotInterpolated;

    MessageTemplateContentProvider m_content;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace QConnect
} // namespace Aws
