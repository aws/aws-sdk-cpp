/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qconnect/QConnect_EXPORTS.h>
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
  class ActivateMessageTemplateResult
  {
  public:
    AWS_QCONNECT_API ActivateMessageTemplateResult();
    AWS_QCONNECT_API ActivateMessageTemplateResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QCONNECT_API ActivateMessageTemplateResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the message template.</p>
     */
    inline const Aws::String& GetMessageTemplateArn() const{ return m_messageTemplateArn; }
    inline void SetMessageTemplateArn(const Aws::String& value) { m_messageTemplateArn = value; }
    inline void SetMessageTemplateArn(Aws::String&& value) { m_messageTemplateArn = std::move(value); }
    inline void SetMessageTemplateArn(const char* value) { m_messageTemplateArn.assign(value); }
    inline ActivateMessageTemplateResult& WithMessageTemplateArn(const Aws::String& value) { SetMessageTemplateArn(value); return *this;}
    inline ActivateMessageTemplateResult& WithMessageTemplateArn(Aws::String&& value) { SetMessageTemplateArn(std::move(value)); return *this;}
    inline ActivateMessageTemplateResult& WithMessageTemplateArn(const char* value) { SetMessageTemplateArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the message template.</p>
     */
    inline const Aws::String& GetMessageTemplateId() const{ return m_messageTemplateId; }
    inline void SetMessageTemplateId(const Aws::String& value) { m_messageTemplateId = value; }
    inline void SetMessageTemplateId(Aws::String&& value) { m_messageTemplateId = std::move(value); }
    inline void SetMessageTemplateId(const char* value) { m_messageTemplateId.assign(value); }
    inline ActivateMessageTemplateResult& WithMessageTemplateId(const Aws::String& value) { SetMessageTemplateId(value); return *this;}
    inline ActivateMessageTemplateResult& WithMessageTemplateId(Aws::String&& value) { SetMessageTemplateId(std::move(value)); return *this;}
    inline ActivateMessageTemplateResult& WithMessageTemplateId(const char* value) { SetMessageTemplateId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version number of the message template version that is activated.</p>
     */
    inline long long GetVersionNumber() const{ return m_versionNumber; }
    inline void SetVersionNumber(long long value) { m_versionNumber = value; }
    inline ActivateMessageTemplateResult& WithVersionNumber(long long value) { SetVersionNumber(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ActivateMessageTemplateResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ActivateMessageTemplateResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ActivateMessageTemplateResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_messageTemplateArn;

    Aws::String m_messageTemplateId;

    long long m_versionNumber;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace QConnect
} // namespace Aws
