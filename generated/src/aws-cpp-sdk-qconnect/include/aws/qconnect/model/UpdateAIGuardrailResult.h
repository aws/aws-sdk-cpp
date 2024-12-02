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
  class UpdateAIGuardrailResult
  {
  public:
    AWS_QCONNECT_API UpdateAIGuardrailResult();
    AWS_QCONNECT_API UpdateAIGuardrailResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QCONNECT_API UpdateAIGuardrailResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The data of the updated Amazon Q in Connect AI Guardrail.</p>
     */
    inline const AIGuardrailData& GetAiGuardrail() const{ return m_aiGuardrail; }
    inline void SetAiGuardrail(const AIGuardrailData& value) { m_aiGuardrail = value; }
    inline void SetAiGuardrail(AIGuardrailData&& value) { m_aiGuardrail = std::move(value); }
    inline UpdateAIGuardrailResult& WithAiGuardrail(const AIGuardrailData& value) { SetAiGuardrail(value); return *this;}
    inline UpdateAIGuardrailResult& WithAiGuardrail(AIGuardrailData&& value) { SetAiGuardrail(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline UpdateAIGuardrailResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline UpdateAIGuardrailResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline UpdateAIGuardrailResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    AIGuardrailData m_aiGuardrail;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace QConnect
} // namespace Aws
