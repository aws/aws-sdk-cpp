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
    AWS_QUICKSIGHT_API BatchDeleteTopicReviewedAnswerResult();
    AWS_QUICKSIGHT_API BatchDeleteTopicReviewedAnswerResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QUICKSIGHT_API BatchDeleteTopicReviewedAnswerResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ID of the topic reviewed answer that you want to delete. This ID is
     * unique per Amazon Web Services Region for each Amazon Web Services account.</p>
     */
    inline const Aws::String& GetTopicId() const{ return m_topicId; }
    inline void SetTopicId(const Aws::String& value) { m_topicId = value; }
    inline void SetTopicId(Aws::String&& value) { m_topicId = std::move(value); }
    inline void SetTopicId(const char* value) { m_topicId.assign(value); }
    inline BatchDeleteTopicReviewedAnswerResult& WithTopicId(const Aws::String& value) { SetTopicId(value); return *this;}
    inline BatchDeleteTopicReviewedAnswerResult& WithTopicId(Aws::String&& value) { SetTopicId(std::move(value)); return *this;}
    inline BatchDeleteTopicReviewedAnswerResult& WithTopicId(const char* value) { SetTopicId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the topic.</p>
     */
    inline const Aws::String& GetTopicArn() const{ return m_topicArn; }
    inline void SetTopicArn(const Aws::String& value) { m_topicArn = value; }
    inline void SetTopicArn(Aws::String&& value) { m_topicArn = std::move(value); }
    inline void SetTopicArn(const char* value) { m_topicArn.assign(value); }
    inline BatchDeleteTopicReviewedAnswerResult& WithTopicArn(const Aws::String& value) { SetTopicArn(value); return *this;}
    inline BatchDeleteTopicReviewedAnswerResult& WithTopicArn(Aws::String&& value) { SetTopicArn(std::move(value)); return *this;}
    inline BatchDeleteTopicReviewedAnswerResult& WithTopicArn(const char* value) { SetTopicArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The definition of Answers that are successfully deleted.</p>
     */
    inline const Aws::Vector<SucceededTopicReviewedAnswer>& GetSucceededAnswers() const{ return m_succeededAnswers; }
    inline void SetSucceededAnswers(const Aws::Vector<SucceededTopicReviewedAnswer>& value) { m_succeededAnswers = value; }
    inline void SetSucceededAnswers(Aws::Vector<SucceededTopicReviewedAnswer>&& value) { m_succeededAnswers = std::move(value); }
    inline BatchDeleteTopicReviewedAnswerResult& WithSucceededAnswers(const Aws::Vector<SucceededTopicReviewedAnswer>& value) { SetSucceededAnswers(value); return *this;}
    inline BatchDeleteTopicReviewedAnswerResult& WithSucceededAnswers(Aws::Vector<SucceededTopicReviewedAnswer>&& value) { SetSucceededAnswers(std::move(value)); return *this;}
    inline BatchDeleteTopicReviewedAnswerResult& AddSucceededAnswers(const SucceededTopicReviewedAnswer& value) { m_succeededAnswers.push_back(value); return *this; }
    inline BatchDeleteTopicReviewedAnswerResult& AddSucceededAnswers(SucceededTopicReviewedAnswer&& value) { m_succeededAnswers.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The definition of Answers that are invalid and not deleted.</p>
     */
    inline const Aws::Vector<InvalidTopicReviewedAnswer>& GetInvalidAnswers() const{ return m_invalidAnswers; }
    inline void SetInvalidAnswers(const Aws::Vector<InvalidTopicReviewedAnswer>& value) { m_invalidAnswers = value; }
    inline void SetInvalidAnswers(Aws::Vector<InvalidTopicReviewedAnswer>&& value) { m_invalidAnswers = std::move(value); }
    inline BatchDeleteTopicReviewedAnswerResult& WithInvalidAnswers(const Aws::Vector<InvalidTopicReviewedAnswer>& value) { SetInvalidAnswers(value); return *this;}
    inline BatchDeleteTopicReviewedAnswerResult& WithInvalidAnswers(Aws::Vector<InvalidTopicReviewedAnswer>&& value) { SetInvalidAnswers(std::move(value)); return *this;}
    inline BatchDeleteTopicReviewedAnswerResult& AddInvalidAnswers(const InvalidTopicReviewedAnswer& value) { m_invalidAnswers.push_back(value); return *this; }
    inline BatchDeleteTopicReviewedAnswerResult& AddInvalidAnswers(InvalidTopicReviewedAnswer&& value) { m_invalidAnswers.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline BatchDeleteTopicReviewedAnswerResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline BatchDeleteTopicReviewedAnswerResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline BatchDeleteTopicReviewedAnswerResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The HTTP status of the request.</p>
     */
    inline int GetStatus() const{ return m_status; }
    inline void SetStatus(int value) { m_status = value; }
    inline BatchDeleteTopicReviewedAnswerResult& WithStatus(int value) { SetStatus(value); return *this;}
    ///@}
  private:

    Aws::String m_topicId;

    Aws::String m_topicArn;

    Aws::Vector<SucceededTopicReviewedAnswer> m_succeededAnswers;

    Aws::Vector<InvalidTopicReviewedAnswer> m_invalidAnswers;

    Aws::String m_requestId;

    int m_status;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
