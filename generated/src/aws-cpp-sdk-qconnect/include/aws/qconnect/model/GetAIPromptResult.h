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
    AWS_QCONNECT_API GetAIPromptResult() = default;
    AWS_QCONNECT_API GetAIPromptResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QCONNECT_API GetAIPromptResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The data of the AI Prompt.</p>
     */
    inline const AIPromptData& GetAiPrompt() const { return m_aiPrompt; }
    template<typename AiPromptT = AIPromptData>
    void SetAiPrompt(AiPromptT&& value) { m_aiPromptHasBeenSet = true; m_aiPrompt = std::forward<AiPromptT>(value); }
    template<typename AiPromptT = AIPromptData>
    GetAIPromptResult& WithAiPrompt(AiPromptT&& value) { SetAiPrompt(std::forward<AiPromptT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version number of the AI Prompt version (returned if an AI Prompt version
     * was specified via use of a qualifier for the <code>aiPromptId</code> on the
     * request). </p>
     */
    inline long long GetVersionNumber() const { return m_versionNumber; }
    inline void SetVersionNumber(long long value) { m_versionNumberHasBeenSet = true; m_versionNumber = value; }
    inline GetAIPromptResult& WithVersionNumber(long long value) { SetVersionNumber(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetAIPromptResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    AIPromptData m_aiPrompt;
    bool m_aiPromptHasBeenSet = false;

    long long m_versionNumber{0};
    bool m_versionNumberHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace QConnect
} // namespace Aws
