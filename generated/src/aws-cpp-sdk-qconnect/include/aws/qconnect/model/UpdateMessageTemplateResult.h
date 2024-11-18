/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qconnect/QConnect_EXPORTS.h>
#include <aws/qconnect/model/MessageTemplateData.h>
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
  class UpdateMessageTemplateResult
  {
  public:
    AWS_QCONNECT_API UpdateMessageTemplateResult();
    AWS_QCONNECT_API UpdateMessageTemplateResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QCONNECT_API UpdateMessageTemplateResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The message template.</p>
     */
    inline const MessageTemplateData& GetMessageTemplate() const{ return m_messageTemplate; }
    inline void SetMessageTemplate(const MessageTemplateData& value) { m_messageTemplate = value; }
    inline void SetMessageTemplate(MessageTemplateData&& value) { m_messageTemplate = std::move(value); }
    inline UpdateMessageTemplateResult& WithMessageTemplate(const MessageTemplateData& value) { SetMessageTemplate(value); return *this;}
    inline UpdateMessageTemplateResult& WithMessageTemplate(MessageTemplateData&& value) { SetMessageTemplate(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline UpdateMessageTemplateResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline UpdateMessageTemplateResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline UpdateMessageTemplateResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    MessageTemplateData m_messageTemplate;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace QConnect
} // namespace Aws
