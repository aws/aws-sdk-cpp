/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qconnect/QConnect_EXPORTS.h>
#include <aws/qconnect/QConnectRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/qconnect/model/ContentFeedbackData.h>
#include <aws/qconnect/model/TargetType.h>
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
    AWS_QCONNECT_API PutFeedbackRequest();

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
    inline const Aws::String& GetAssistantId() const{ return m_assistantId; }
    inline bool AssistantIdHasBeenSet() const { return m_assistantIdHasBeenSet; }
    inline void SetAssistantId(const Aws::String& value) { m_assistantIdHasBeenSet = true; m_assistantId = value; }
    inline void SetAssistantId(Aws::String&& value) { m_assistantIdHasBeenSet = true; m_assistantId = std::move(value); }
    inline void SetAssistantId(const char* value) { m_assistantIdHasBeenSet = true; m_assistantId.assign(value); }
    inline PutFeedbackRequest& WithAssistantId(const Aws::String& value) { SetAssistantId(value); return *this;}
    inline PutFeedbackRequest& WithAssistantId(Aws::String&& value) { SetAssistantId(std::move(value)); return *this;}
    inline PutFeedbackRequest& WithAssistantId(const char* value) { SetAssistantId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the feedback provided.</p>
     */
    inline const ContentFeedbackData& GetContentFeedback() const{ return m_contentFeedback; }
    inline bool ContentFeedbackHasBeenSet() const { return m_contentFeedbackHasBeenSet; }
    inline void SetContentFeedback(const ContentFeedbackData& value) { m_contentFeedbackHasBeenSet = true; m_contentFeedback = value; }
    inline void SetContentFeedback(ContentFeedbackData&& value) { m_contentFeedbackHasBeenSet = true; m_contentFeedback = std::move(value); }
    inline PutFeedbackRequest& WithContentFeedback(const ContentFeedbackData& value) { SetContentFeedback(value); return *this;}
    inline PutFeedbackRequest& WithContentFeedback(ContentFeedbackData&& value) { SetContentFeedback(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the feedback target.</p>
     */
    inline const Aws::String& GetTargetId() const{ return m_targetId; }
    inline bool TargetIdHasBeenSet() const { return m_targetIdHasBeenSet; }
    inline void SetTargetId(const Aws::String& value) { m_targetIdHasBeenSet = true; m_targetId = value; }
    inline void SetTargetId(Aws::String&& value) { m_targetIdHasBeenSet = true; m_targetId = std::move(value); }
    inline void SetTargetId(const char* value) { m_targetIdHasBeenSet = true; m_targetId.assign(value); }
    inline PutFeedbackRequest& WithTargetId(const Aws::String& value) { SetTargetId(value); return *this;}
    inline PutFeedbackRequest& WithTargetId(Aws::String&& value) { SetTargetId(std::move(value)); return *this;}
    inline PutFeedbackRequest& WithTargetId(const char* value) { SetTargetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the feedback target.</p>
     */
    inline const TargetType& GetTargetType() const{ return m_targetType; }
    inline bool TargetTypeHasBeenSet() const { return m_targetTypeHasBeenSet; }
    inline void SetTargetType(const TargetType& value) { m_targetTypeHasBeenSet = true; m_targetType = value; }
    inline void SetTargetType(TargetType&& value) { m_targetTypeHasBeenSet = true; m_targetType = std::move(value); }
    inline PutFeedbackRequest& WithTargetType(const TargetType& value) { SetTargetType(value); return *this;}
    inline PutFeedbackRequest& WithTargetType(TargetType&& value) { SetTargetType(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_assistantId;
    bool m_assistantIdHasBeenSet = false;

    ContentFeedbackData m_contentFeedback;
    bool m_contentFeedbackHasBeenSet = false;

    Aws::String m_targetId;
    bool m_targetIdHasBeenSet = false;

    TargetType m_targetType;
    bool m_targetTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace QConnect
} // namespace Aws
