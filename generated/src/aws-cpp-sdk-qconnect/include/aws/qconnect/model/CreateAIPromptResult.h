/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qconnect/QConnect_EXPORTS.h>
#include <aws/qconnect/model/AIPromptData.h>
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
  class CreateAIPromptResult
  {
  public:
    AWS_QCONNECT_API CreateAIPromptResult();
    AWS_QCONNECT_API CreateAIPromptResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QCONNECT_API CreateAIPromptResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The data of the AI Prompt.</p>
     */
    inline const AIPromptData& GetAiPrompt() const{ return m_aiPrompt; }
    inline void SetAiPrompt(const AIPromptData& value) { m_aiPrompt = value; }
    inline void SetAiPrompt(AIPromptData&& value) { m_aiPrompt = std::move(value); }
    inline CreateAIPromptResult& WithAiPrompt(const AIPromptData& value) { SetAiPrompt(value); return *this;}
    inline CreateAIPromptResult& WithAiPrompt(AIPromptData&& value) { SetAiPrompt(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreateAIPromptResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreateAIPromptResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreateAIPromptResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    AIPromptData m_aiPrompt;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace QConnect
} // namespace Aws
