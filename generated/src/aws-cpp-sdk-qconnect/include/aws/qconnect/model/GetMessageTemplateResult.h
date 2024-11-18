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
  class GetMessageTemplateResult
  {
  public:
    AWS_QCONNECT_API GetMessageTemplateResult();
    AWS_QCONNECT_API GetMessageTemplateResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QCONNECT_API GetMessageTemplateResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The message template.</p>
     */
    inline const ExtendedMessageTemplateData& GetMessageTemplate() const{ return m_messageTemplate; }
    inline void SetMessageTemplate(const ExtendedMessageTemplateData& value) { m_messageTemplate = value; }
    inline void SetMessageTemplate(ExtendedMessageTemplateData&& value) { m_messageTemplate = std::move(value); }
    inline GetMessageTemplateResult& WithMessageTemplate(const ExtendedMessageTemplateData& value) { SetMessageTemplate(value); return *this;}
    inline GetMessageTemplateResult& WithMessageTemplate(ExtendedMessageTemplateData&& value) { SetMessageTemplate(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetMessageTemplateResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetMessageTemplateResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetMessageTemplateResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    ExtendedMessageTemplateData m_messageTemplate;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace QConnect
} // namespace Aws
