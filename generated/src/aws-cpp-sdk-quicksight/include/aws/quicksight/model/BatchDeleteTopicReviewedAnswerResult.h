/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/quicksight/model/SucceededTopicReviewedAnswer.h>
#include <aws/quicksight/model/InvalidTopicReviewedAnswer.h>
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
namespace QuickSight
{
namespace Model
{
  class BatchDeleteTopicReviewedAnswerResult
  {
  public:
    AWS_QUICKSIGHT_API BatchDeleteTopicReviewedAnswerResult() = default;
    AWS_QUICKSIGHT_API BatchDeleteTopicReviewedAnswerResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QUICKSIGHT_API BatchDeleteTopicReviewedAnswerResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ID of the topic reviewed answer that you want to delete. This ID is
     * unique per Amazon Web Services Region for each Amazon Web Services account.</p>
     */
    inline const Aws::String& GetTopicId() const { return m_topicId; }
    template<typename TopicIdT = Aws::String>
    void SetTopicId(TopicIdT&& value) { m_topicIdHasBeenSet = true; m_topicId = std::forward<TopicIdT>(value); }
    template<typename TopicIdT = Aws::String>
    BatchDeleteTopicReviewedAnswerResult& WithTopicId(TopicIdT&& value) { SetTopicId(std::forward<TopicIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the topic.</p>
     */
    inline const Aws::String& GetTopicArn() const { return m_topicArn; }
    template<typename TopicArnT = Aws::String>
    void SetTopicArn(TopicArnT&& value) { m_topicArnHasBeenSet = true; m_topicArn = std::forward<TopicArnT>(value); }
    template<typename TopicArnT = Aws::String>
    BatchDeleteTopicReviewedAnswerResult& WithTopicArn(TopicArnT&& value) { SetTopicArn(std::forward<TopicArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The definition of Answers that are successfully deleted.</p>
     */
    inline const Aws::Vector<SucceededTopicReviewedAnswer>& GetSucceededAnswers() const { return m_succeededAnswers; }
    template<typename SucceededAnswersT = Aws::Vector<SucceededTopicReviewedAnswer>>
    void SetSucceededAnswers(SucceededAnswersT&& value) { m_succeededAnswersHasBeenSet = true; m_succeededAnswers = std::forward<SucceededAnswersT>(value); }
    template<typename SucceededAnswersT = Aws::Vector<SucceededTopicReviewedAnswer>>
    BatchDeleteTopicReviewedAnswerResult& WithSucceededAnswers(SucceededAnswersT&& value) { SetSucceededAnswers(std::forward<SucceededAnswersT>(value)); return *this;}
    template<typename SucceededAnswersT = SucceededTopicReviewedAnswer>
    BatchDeleteTopicReviewedAnswerResult& AddSucceededAnswers(SucceededAnswersT&& value) { m_succeededAnswersHasBeenSet = true; m_succeededAnswers.emplace_back(std::forward<SucceededAnswersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The definition of Answers that are invalid and not deleted.</p>
     */
    inline const Aws::Vector<InvalidTopicReviewedAnswer>& GetInvalidAnswers() const { return m_invalidAnswers; }
    template<typename InvalidAnswersT = Aws::Vector<InvalidTopicReviewedAnswer>>
    void SetInvalidAnswers(InvalidAnswersT&& value) { m_invalidAnswersHasBeenSet = true; m_invalidAnswers = std::forward<InvalidAnswersT>(value); }
    template<typename InvalidAnswersT = Aws::Vector<InvalidTopicReviewedAnswer>>
    BatchDeleteTopicReviewedAnswerResult& WithInvalidAnswers(InvalidAnswersT&& value) { SetInvalidAnswers(std::forward<InvalidAnswersT>(value)); return *this;}
    template<typename InvalidAnswersT = InvalidTopicReviewedAnswer>
    BatchDeleteTopicReviewedAnswerResult& AddInvalidAnswers(InvalidAnswersT&& value) { m_invalidAnswersHasBeenSet = true; m_invalidAnswers.emplace_back(std::forward<InvalidAnswersT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    BatchDeleteTopicReviewedAnswerResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The HTTP status of the request.</p>
     */
    inline int GetStatus() const { return m_status; }
    inline void SetStatus(int value) { m_statusHasBeenSet = true; m_status = value; }
    inline BatchDeleteTopicReviewedAnswerResult& WithStatus(int value) { SetStatus(value); return *this;}
    ///@}
  private:

    Aws::String m_topicId;
    bool m_topicIdHasBeenSet = false;

    Aws::String m_topicArn;
    bool m_topicArnHasBeenSet = false;

    Aws::Vector<SucceededTopicReviewedAnswer> m_succeededAnswers;
    bool m_succeededAnswersHasBeenSet = false;

    Aws::Vector<InvalidTopicReviewedAnswer> m_invalidAnswers;
    bool m_invalidAnswersHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;

    int m_status{0};
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
