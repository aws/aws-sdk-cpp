/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qconnect/QConnect_EXPORTS.h>
#include <aws/qconnect/QConnectRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/qconnect/model/TargetType.h>
#include <aws/qconnect/model/ContentFeedbackData.h>
#include <utility>

namespace Aws
{
namespace QConnect
{
namespace Model
{

  /**
   */
  class PutFeedbackRequest : public QConnectRequest
  {
  public:
    AWS_QCONNECT_API PutFeedbackRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutFeedback"; }

    AWS_QCONNECT_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The identifier of the Amazon Q in Connect assistant.</p>
     */
    inline const Aws::String& GetAssistantId() const { return m_assistantId; }
    inline bool AssistantIdHasBeenSet() const { return m_assistantIdHasBeenSet; }
    template<typename AssistantIdT = Aws::String>
    void SetAssistantId(AssistantIdT&& value) { m_assistantIdHasBeenSet = true; m_assistantId = std::forward<AssistantIdT>(value); }
    template<typename AssistantIdT = Aws::String>
    PutFeedbackRequest& WithAssistantId(AssistantIdT&& value) { SetAssistantId(std::forward<AssistantIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the feedback target.</p>
     */
    inline const Aws::String& GetTargetId() const { return m_targetId; }
    inline bool TargetIdHasBeenSet() const { return m_targetIdHasBeenSet; }
    template<typename TargetIdT = Aws::String>
    void SetTargetId(TargetIdT&& value) { m_targetIdHasBeenSet = true; m_targetId = std::forward<TargetIdT>(value); }
    template<typename TargetIdT = Aws::String>
    PutFeedbackRequest& WithTargetId(TargetIdT&& value) { SetTargetId(std::forward<TargetIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the feedback target.</p>
     */
    inline TargetType GetTargetType() const { return m_targetType; }
    inline bool TargetTypeHasBeenSet() const { return m_targetTypeHasBeenSet; }
    inline void SetTargetType(TargetType value) { m_targetTypeHasBeenSet = true; m_targetType = value; }
    inline PutFeedbackRequest& WithTargetType(TargetType value) { SetTargetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the feedback provided.</p>
     */
    inline const ContentFeedbackData& GetContentFeedback() const { return m_contentFeedback; }
    inline bool ContentFeedbackHasBeenSet() const { return m_contentFeedbackHasBeenSet; }
    template<typename ContentFeedbackT = ContentFeedbackData>
    void SetContentFeedback(ContentFeedbackT&& value) { m_contentFeedbackHasBeenSet = true; m_contentFeedback = std::forward<ContentFeedbackT>(value); }
    template<typename ContentFeedbackT = ContentFeedbackData>
    PutFeedbackRequest& WithContentFeedback(ContentFeedbackT&& value) { SetContentFeedback(std::forward<ContentFeedbackT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_assistantId;
    bool m_assistantIdHasBeenSet = false;

    Aws::String m_targetId;
    bool m_targetIdHasBeenSet = false;

    TargetType m_targetType{TargetType::NOT_SET};
    bool m_targetTypeHasBeenSet = false;

    ContentFeedbackData m_contentFeedback;
    bool m_contentFeedbackHasBeenSet = false;
  };

} // namespace Model
} // namespace QConnect
} // namespace Aws
