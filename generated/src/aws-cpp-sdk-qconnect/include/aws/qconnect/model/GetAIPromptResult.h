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
  class GetAIPromptResult
  {
  public:
    AWS_QCONNECT_API GetAIPromptResult();
    AWS_QCONNECT_API GetAIPromptResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QCONNECT_API GetAIPromptResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The data of the AI Prompt.</p>
     */
    inline const AIPromptData& GetAiPrompt() const{ return m_aiPrompt; }
    inline void SetAiPrompt(const AIPromptData& value) { m_aiPrompt = value; }
    inline void SetAiPrompt(AIPromptData&& value) { m_aiPrompt = std::move(value); }
    inline GetAIPromptResult& WithAiPrompt(const AIPromptData& value) { SetAiPrompt(value); return *this;}
    inline GetAIPromptResult& WithAiPrompt(AIPromptData&& value) { SetAiPrompt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version number of the AI Prompt version (returned if an AI Prompt version
     * was specified via use of a qualifier for the <code>aiPromptId</code> on the
     * request). </p>
     */
    inline long long GetVersionNumber() const{ return m_versionNumber; }
    inline void SetVersionNumber(long long value) { m_versionNumber = value; }
    inline GetAIPromptResult& WithVersionNumber(long long value) { SetVersionNumber(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetAIPromptResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetAIPromptResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetAIPromptResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    AIPromptData m_aiPrompt;

    long long m_versionNumber;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace QConnect
} // namespace Aws
