/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qconnect/QConnect_EXPORTS.h>
#include <aws/qconnect/model/AIGuardrailData.h>
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
  class GetAIGuardrailResult
  {
  public:
    AWS_QCONNECT_API GetAIGuardrailResult();
    AWS_QCONNECT_API GetAIGuardrailResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QCONNECT_API GetAIGuardrailResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The data of the AI Guardrail.</p>
     */
    inline const AIGuardrailData& GetAiGuardrail() const{ return m_aiGuardrail; }
    inline void SetAiGuardrail(const AIGuardrailData& value) { m_aiGuardrail = value; }
    inline void SetAiGuardrail(AIGuardrailData&& value) { m_aiGuardrail = std::move(value); }
    inline GetAIGuardrailResult& WithAiGuardrail(const AIGuardrailData& value) { SetAiGuardrail(value); return *this;}
    inline GetAIGuardrailResult& WithAiGuardrail(AIGuardrailData&& value) { SetAiGuardrail(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version number of the AI Guardrail version (returned if an AI Guardrail
     * version was specified via use of a qualifier for the <code>aiGuardrailId</code>
     * on the request). </p>
     */
    inline long long GetVersionNumber() const{ return m_versionNumber; }
    inline void SetVersionNumber(long long value) { m_versionNumber = value; }
    inline GetAIGuardrailResult& WithVersionNumber(long long value) { SetVersionNumber(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetAIGuardrailResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetAIGuardrailResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetAIGuardrailResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    AIGuardrailData m_aiGuardrail;

    long long m_versionNumber;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace QConnect
} // namespace Aws
