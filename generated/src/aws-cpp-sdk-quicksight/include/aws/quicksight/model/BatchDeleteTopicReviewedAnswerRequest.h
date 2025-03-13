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
    AWS_QUICKSIGHT_API BatchDeleteTopicReviewedAnswerRequest() = default;

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
    inline const Aws::String& GetAwsAccountId() const { return m_awsAccountId; }
    inline bool AwsAccountIdHasBeenSet() const { return m_awsAccountIdHasBeenSet; }
    template<typename AwsAccountIdT = Aws::String>
    void SetAwsAccountId(AwsAccountIdT&& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = std::forward<AwsAccountIdT>(value); }
    template<typename AwsAccountIdT = Aws::String>
    BatchDeleteTopicReviewedAnswerRequest& WithAwsAccountId(AwsAccountIdT&& value) { SetAwsAccountId(std::forward<AwsAccountIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID for the topic reviewed answer that you want to delete. This ID is
     * unique per Amazon Web Services Region for each Amazon Web Services account.</p>
     */
    inline const Aws::String& GetTopicId() const { return m_topicId; }
    inline bool TopicIdHasBeenSet() const { return m_topicIdHasBeenSet; }
    template<typename TopicIdT = Aws::String>
    void SetTopicId(TopicIdT&& value) { m_topicIdHasBeenSet = true; m_topicId = std::forward<TopicIdT>(value); }
    template<typename TopicIdT = Aws::String>
    BatchDeleteTopicReviewedAnswerRequest& WithTopicId(TopicIdT&& value) { SetTopicId(std::forward<TopicIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Answer IDs of the Answers to be deleted.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAnswerIds() const { return m_answerIds; }
    inline bool AnswerIdsHasBeenSet() const { return m_answerIdsHasBeenSet; }
    template<typename AnswerIdsT = Aws::Vector<Aws::String>>
    void SetAnswerIds(AnswerIdsT&& value) { m_answerIdsHasBeenSet = true; m_answerIds = std::forward<AnswerIdsT>(value); }
    template<typename AnswerIdsT = Aws::Vector<Aws::String>>
    BatchDeleteTopicReviewedAnswerRequest& WithAnswerIds(AnswerIdsT&& value) { SetAnswerIds(std::forward<AnswerIdsT>(value)); return *this;}
    template<typename AnswerIdsT = Aws::String>
    BatchDeleteTopicReviewedAnswerRequest& AddAnswerIds(AnswerIdsT&& value) { m_answerIdsHasBeenSet = true; m_answerIds.emplace_back(std::forward<AnswerIdsT>(value)); return *this; }
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
