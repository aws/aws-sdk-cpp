/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qconnect/QConnect_EXPORTS.h>
#include <aws/qconnect/model/MessageTemplateContentProvider.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
    AWS_QCONNECT_API RenderMessageTemplateResult() = default;
    AWS_QCONNECT_API RenderMessageTemplateResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QCONNECT_API RenderMessageTemplateResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The content of the message template.</p>
     */
    inline const MessageTemplateContentProvider& GetContent() const { return m_content; }
    template<typename ContentT = MessageTemplateContentProvider>
    void SetContent(ContentT&& value) { m_contentHasBeenSet = true; m_content = std::forward<ContentT>(value); }
    template<typename ContentT = MessageTemplateContentProvider>
    RenderMessageTemplateResult& WithContent(ContentT&& value) { SetContent(std::forward<ContentT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The attribute keys that are not resolved.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAttributesNotInterpolated() const { return m_attributesNotInterpolated; }
    template<typename AttributesNotInterpolatedT = Aws::Vector<Aws::String>>
    void SetAttributesNotInterpolated(AttributesNotInterpolatedT&& value) { m_attributesNotInterpolatedHasBeenSet = true; m_attributesNotInterpolated = std::forward<AttributesNotInterpolatedT>(value); }
    template<typename AttributesNotInterpolatedT = Aws::Vector<Aws::String>>
    RenderMessageTemplateResult& WithAttributesNotInterpolated(AttributesNotInterpolatedT&& value) { SetAttributesNotInterpolated(std::forward<AttributesNotInterpolatedT>(value)); return *this;}
    template<typename AttributesNotInterpolatedT = Aws::String>
    RenderMessageTemplateResult& AddAttributesNotInterpolated(AttributesNotInterpolatedT&& value) { m_attributesNotInterpolatedHasBeenSet = true; m_attributesNotInterpolated.emplace_back(std::forward<AttributesNotInterpolatedT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The message template attachments.</p>
     */
    inline const Aws::Vector<MessageTemplateAttachment>& GetAttachments() const { return m_attachments; }
    template<typename AttachmentsT = Aws::Vector<MessageTemplateAttachment>>
    void SetAttachments(AttachmentsT&& value) { m_attachmentsHasBeenSet = true; m_attachments = std::forward<AttachmentsT>(value); }
    template<typename AttachmentsT = Aws::Vector<MessageTemplateAttachment>>
    RenderMessageTemplateResult& WithAttachments(AttachmentsT&& value) { SetAttachments(std::forward<AttachmentsT>(value)); return *this;}
    template<typename AttachmentsT = MessageTemplateAttachment>
    RenderMessageTemplateResult& AddAttachments(AttachmentsT&& value) { m_attachmentsHasBeenSet = true; m_attachments.emplace_back(std::forward<AttachmentsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    RenderMessageTemplateResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    MessageTemplateContentProvider m_content;
    bool m_contentHasBeenSet = false;

    Aws::Vector<Aws::String> m_attributesNotInterpolated;
    bool m_attributesNotInterpolatedHasBeenSet = false;

    Aws::Vector<MessageTemplateAttachment> m_attachments;
    bool m_attachmentsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace QConnect
} // namespace Aws
