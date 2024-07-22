/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/QuickSightRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace QuickSight
{
namespace Model
{

  /**
   */
  class BatchDeleteTopicReviewedAnswerRequest : public QuickSightRequest
  {
  public:
    AWS_QUICKSIGHT_API BatchDeleteTopicReviewedAnswerRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "BatchDeleteTopicReviewedAnswer"; }

    AWS_QUICKSIGHT_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The ID of the Amazon Web Services account that you want to delete a reviewed
     * answers in.</p>
     */
    inline const Aws::String& GetAwsAccountId() const{ return m_awsAccountId; }
    inline bool AwsAccountIdHasBeenSet() const { return m_awsAccountIdHasBeenSet; }
    inline void SetAwsAccountId(const Aws::String& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = value; }
    inline void SetAwsAccountId(Aws::String&& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = std::move(value); }
    inline void SetAwsAccountId(const char* value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId.assign(value); }
    inline BatchDeleteTopicReviewedAnswerRequest& WithAwsAccountId(const Aws::String& value) { SetAwsAccountId(value); return *this;}
    inline BatchDeleteTopicReviewedAnswerRequest& WithAwsAccountId(Aws::String&& value) { SetAwsAccountId(std::move(value)); return *this;}
    inline BatchDeleteTopicReviewedAnswerRequest& WithAwsAccountId(const char* value) { SetAwsAccountId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID for the topic reviewed answer that you want to delete. This ID is
     * unique per Amazon Web Services Region for each Amazon Web Services account.</p>
     */
    inline const Aws::String& GetTopicId() const{ return m_topicId; }
    inline bool TopicIdHasBeenSet() const { return m_topicIdHasBeenSet; }
    inline void SetTopicId(const Aws::String& value) { m_topicIdHasBeenSet = true; m_topicId = value; }
    inline void SetTopicId(Aws::String&& value) { m_topicIdHasBeenSet = true; m_topicId = std::move(value); }
    inline void SetTopicId(const char* value) { m_topicIdHasBeenSet = true; m_topicId.assign(value); }
    inline BatchDeleteTopicReviewedAnswerRequest& WithTopicId(const Aws::String& value) { SetTopicId(value); return *this;}
    inline BatchDeleteTopicReviewedAnswerRequest& WithTopicId(Aws::String&& value) { SetTopicId(std::move(value)); return *this;}
    inline BatchDeleteTopicReviewedAnswerRequest& WithTopicId(const char* value) { SetTopicId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Answer IDs of the Answers to be deleted.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAnswerIds() const{ return m_answerIds; }
    inline bool AnswerIdsHasBeenSet() const { return m_answerIdsHasBeenSet; }
    inline void SetAnswerIds(const Aws::Vector<Aws::String>& value) { m_answerIdsHasBeenSet = true; m_answerIds = value; }
    inline void SetAnswerIds(Aws::Vector<Aws::String>&& value) { m_answerIdsHasBeenSet = true; m_answerIds = std::move(value); }
    inline BatchDeleteTopicReviewedAnswerRequest& WithAnswerIds(const Aws::Vector<Aws::String>& value) { SetAnswerIds(value); return *this;}
    inline BatchDeleteTopicReviewedAnswerRequest& WithAnswerIds(Aws::Vector<Aws::String>&& value) { SetAnswerIds(std::move(value)); return *this;}
    inline BatchDeleteTopicReviewedAnswerRequest& AddAnswerIds(const Aws::String& value) { m_answerIdsHasBeenSet = true; m_answerIds.push_back(value); return *this; }
    inline BatchDeleteTopicReviewedAnswerRequest& AddAnswerIds(Aws::String&& value) { m_answerIdsHasBeenSet = true; m_answerIds.push_back(std::move(value)); return *this; }
    inline BatchDeleteTopicReviewedAnswerRequest& AddAnswerIds(const char* value) { m_answerIdsHasBeenSet = true; m_answerIds.push_back(value); return *this; }
    ///@}
  private:

    Aws::String m_awsAccountId;
    bool m_awsAccountIdHasBeenSet = false;

    Aws::String m_topicId;
    bool m_topicIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_answerIds;
    bool m_answerIdsHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
