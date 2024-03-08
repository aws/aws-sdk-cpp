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


    /**
     * <p>The identifier of the Amazon Q assistant.</p>
     */
    inline const Aws::String& GetAssistantId() const{ return m_assistantId; }

    /**
     * <p>The identifier of the Amazon Q assistant.</p>
     */
    inline bool AssistantIdHasBeenSet() const { return m_assistantIdHasBeenSet; }

    /**
     * <p>The identifier of the Amazon Q assistant.</p>
     */
    inline void SetAssistantId(const Aws::String& value) { m_assistantIdHasBeenSet = true; m_assistantId = value; }

    /**
     * <p>The identifier of the Amazon Q assistant.</p>
     */
    inline void SetAssistantId(Aws::String&& value) { m_assistantIdHasBeenSet = true; m_assistantId = std::move(value); }

    /**
     * <p>The identifier of the Amazon Q assistant.</p>
     */
    inline void SetAssistantId(const char* value) { m_assistantIdHasBeenSet = true; m_assistantId.assign(value); }

    /**
     * <p>The identifier of the Amazon Q assistant.</p>
     */
    inline PutFeedbackRequest& WithAssistantId(const Aws::String& value) { SetAssistantId(value); return *this;}

    /**
     * <p>The identifier of the Amazon Q assistant.</p>
     */
    inline PutFeedbackRequest& WithAssistantId(Aws::String&& value) { SetAssistantId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the Amazon Q assistant.</p>
     */
    inline PutFeedbackRequest& WithAssistantId(const char* value) { SetAssistantId(value); return *this;}


    /**
     * <p>Information about the feedback provided.</p>
     */
    inline const ContentFeedbackData& GetContentFeedback() const{ return m_contentFeedback; }

    /**
     * <p>Information about the feedback provided.</p>
     */
    inline bool ContentFeedbackHasBeenSet() const { return m_contentFeedbackHasBeenSet; }

    /**
     * <p>Information about the feedback provided.</p>
     */
    inline void SetContentFeedback(const ContentFeedbackData& value) { m_contentFeedbackHasBeenSet = true; m_contentFeedback = value; }

    /**
     * <p>Information about the feedback provided.</p>
     */
    inline void SetContentFeedback(ContentFeedbackData&& value) { m_contentFeedbackHasBeenSet = true; m_contentFeedback = std::move(value); }

    /**
     * <p>Information about the feedback provided.</p>
     */
    inline PutFeedbackRequest& WithContentFeedback(const ContentFeedbackData& value) { SetContentFeedback(value); return *this;}

    /**
     * <p>Information about the feedback provided.</p>
     */
    inline PutFeedbackRequest& WithContentFeedback(ContentFeedbackData&& value) { SetContentFeedback(std::move(value)); return *this;}


    /**
     * <p>The identifier of the feedback target.</p>
     */
    inline const Aws::String& GetTargetId() const{ return m_targetId; }

    /**
     * <p>The identifier of the feedback target.</p>
     */
    inline bool TargetIdHasBeenSet() const { return m_targetIdHasBeenSet; }

    /**
     * <p>The identifier of the feedback target.</p>
     */
    inline void SetTargetId(const Aws::String& value) { m_targetIdHasBeenSet = true; m_targetId = value; }

    /**
     * <p>The identifier of the feedback target.</p>
     */
    inline void SetTargetId(Aws::String&& value) { m_targetIdHasBeenSet = true; m_targetId = std::move(value); }

    /**
     * <p>The identifier of the feedback target.</p>
     */
    inline void SetTargetId(const char* value) { m_targetIdHasBeenSet = true; m_targetId.assign(value); }

    /**
     * <p>The identifier of the feedback target.</p>
     */
    inline PutFeedbackRequest& WithTargetId(const Aws::String& value) { SetTargetId(value); return *this;}

    /**
     * <p>The identifier of the feedback target.</p>
     */
    inline PutFeedbackRequest& WithTargetId(Aws::String&& value) { SetTargetId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the feedback target.</p>
     */
    inline PutFeedbackRequest& WithTargetId(const char* value) { SetTargetId(value); return *this;}


    /**
     * <p>The type of the feedback target.</p>
     */
    inline const TargetType& GetTargetType() const{ return m_targetType; }

    /**
     * <p>The type of the feedback target.</p>
     */
    inline bool TargetTypeHasBeenSet() const { return m_targetTypeHasBeenSet; }

    /**
     * <p>The type of the feedback target.</p>
     */
    inline void SetTargetType(const TargetType& value) { m_targetTypeHasBeenSet = true; m_targetType = value; }

    /**
     * <p>The type of the feedback target.</p>
     */
    inline void SetTargetType(TargetType&& value) { m_targetTypeHasBeenSet = true; m_targetType = std::move(value); }

    /**
     * <p>The type of the feedback target.</p>
     */
    inline PutFeedbackRequest& WithTargetType(const TargetType& value) { SetTargetType(value); return *this;}

    /**
     * <p>The type of the feedback target.</p>
     */
    inline PutFeedbackRequest& WithTargetType(TargetType&& value) { SetTargetType(std::move(value)); return *this;}

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
