/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qconnect/QConnect_EXPORTS.h>
#include <aws/qconnect/model/ExtendedMessageTemplateData.h>
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
  class CreateMessageTemplateVersionResult
  {
  public:
    AWS_QCONNECT_API CreateMessageTemplateVersionResult() = default;
    AWS_QCONNECT_API CreateMessageTemplateVersionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QCONNECT_API CreateMessageTemplateVersionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The message template.</p>
     */
    inline const ExtendedMessageTemplateData& GetMessageTemplate() const { return m_messageTemplate; }
    template<typename MessageTemplateT = ExtendedMessageTemplateData>
    void SetMessageTemplate(MessageTemplateT&& value) { m_messageTemplateHasBeenSet = true; m_messageTemplate = std::forward<MessageTemplateT>(value); }
    template<typename MessageTemplateT = ExtendedMessageTemplateData>
    CreateMessageTemplateVersionResult& WithMessageTemplate(MessageTemplateT&& value) { SetMessageTemplate(std::forward<MessageTemplateT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateMessageTemplateVersionResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    ExtendedMessageTemplateData m_messageTemplate;
    bool m_messageTemplateHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace QConnect
} // namespace Aws
