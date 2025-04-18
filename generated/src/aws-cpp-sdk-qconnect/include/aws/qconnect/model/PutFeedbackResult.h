/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qconnect/QConnect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/qconnect/model/TargetType.h>
#include <aws/qconnect/model/ContentFeedbackData.h>
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
  class PutFeedbackResult
  {
  public:
    AWS_QCONNECT_API PutFeedbackResult() = default;
    AWS_QCONNECT_API PutFeedbackResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QCONNECT_API PutFeedbackResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The identifier of the Amazon Q in Connect assistant.</p>
     */
    inline const Aws::String& GetAssistantId() const { return m_assistantId; }
    template<typename AssistantIdT = Aws::String>
    void SetAssistantId(AssistantIdT&& value) { m_assistantIdHasBeenSet = true; m_assistantId = std::forward<AssistantIdT>(value); }
    template<typename AssistantIdT = Aws::String>
    PutFeedbackResult& WithAssistantId(AssistantIdT&& value) { SetAssistantId(std::forward<AssistantIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon Q in Connect assistant.</p>
     */
    inline const Aws::String& GetAssistantArn() const { return m_assistantArn; }
    template<typename AssistantArnT = Aws::String>
    void SetAssistantArn(AssistantArnT&& value) { m_assistantArnHasBeenSet = true; m_assistantArn = std::forward<AssistantArnT>(value); }
    template<typename AssistantArnT = Aws::String>
    PutFeedbackResult& WithAssistantArn(AssistantArnT&& value) { SetAssistantArn(std::forward<AssistantArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the feedback target.</p>
     */
    inline const Aws::String& GetTargetId() const { return m_targetId; }
    template<typename TargetIdT = Aws::String>
    void SetTargetId(TargetIdT&& value) { m_targetIdHasBeenSet = true; m_targetId = std::forward<TargetIdT>(value); }
    template<typename TargetIdT = Aws::String>
    PutFeedbackResult& WithTargetId(TargetIdT&& value) { SetTargetId(std::forward<TargetIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the feedback target.</p>
     */
    inline TargetType GetTargetType() const { return m_targetType; }
    inline void SetTargetType(TargetType value) { m_targetTypeHasBeenSet = true; m_targetType = value; }
    inline PutFeedbackResult& WithTargetType(TargetType value) { SetTargetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the feedback provided.</p>
     */
    inline const ContentFeedbackData& GetContentFeedback() const { return m_contentFeedback; }
    template<typename ContentFeedbackT = ContentFeedbackData>
    void SetContentFeedback(ContentFeedbackT&& value) { m_contentFeedbackHasBeenSet = true; m_contentFeedback = std::forward<ContentFeedbackT>(value); }
    template<typename ContentFeedbackT = ContentFeedbackData>
    PutFeedbackResult& WithContentFeedback(ContentFeedbackT&& value) { SetContentFeedback(std::forward<ContentFeedbackT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    PutFeedbackResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_assistantId;
    bool m_assistantIdHasBeenSet = false;

    Aws::String m_assistantArn;
    bool m_assistantArnHasBeenSet = false;

    Aws::String m_targetId;
    bool m_targetIdHasBeenSet = false;

    TargetType m_targetType{TargetType::NOT_SET};
    bool m_targetTypeHasBeenSet = false;

    ContentFeedbackData m_contentFeedback;
    bool m_contentFeedbackHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace QConnect
} // namespace Aws
