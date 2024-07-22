/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/quicksight/model/TopicReviewedAnswer.h>
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
  class ListTopicReviewedAnswersResult
  {
  public:
    AWS_QUICKSIGHT_API ListTopicReviewedAnswersResult();
    AWS_QUICKSIGHT_API ListTopicReviewedAnswersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QUICKSIGHT_API ListTopicReviewedAnswersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ID for the topic that contains the reviewed answer that you want to list.
     * This ID is unique per Amazon Web Services Region for each Amazon Web Services
     * account.</p>
     */
    inline const Aws::String& GetTopicId() const{ return m_topicId; }
    inline void SetTopicId(const Aws::String& value) { m_topicId = value; }
    inline void SetTopicId(Aws::String&& value) { m_topicId = std::move(value); }
    inline void SetTopicId(const char* value) { m_topicId.assign(value); }
    inline ListTopicReviewedAnswersResult& WithTopicId(const Aws::String& value) { SetTopicId(value); return *this;}
    inline ListTopicReviewedAnswersResult& WithTopicId(Aws::String&& value) { SetTopicId(std::move(value)); return *this;}
    inline ListTopicReviewedAnswersResult& WithTopicId(const char* value) { SetTopicId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the topic.</p>
     */
    inline const Aws::String& GetTopicArn() const{ return m_topicArn; }
    inline void SetTopicArn(const Aws::String& value) { m_topicArn = value; }
    inline void SetTopicArn(Aws::String&& value) { m_topicArn = std::move(value); }
    inline void SetTopicArn(const char* value) { m_topicArn.assign(value); }
    inline ListTopicReviewedAnswersResult& WithTopicArn(const Aws::String& value) { SetTopicArn(value); return *this;}
    inline ListTopicReviewedAnswersResult& WithTopicArn(Aws::String&& value) { SetTopicArn(std::move(value)); return *this;}
    inline ListTopicReviewedAnswersResult& WithTopicArn(const char* value) { SetTopicArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The definition of all Answers in the topic.</p>
     */
    inline const Aws::Vector<TopicReviewedAnswer>& GetAnswers() const{ return m_answers; }
    inline void SetAnswers(const Aws::Vector<TopicReviewedAnswer>& value) { m_answers = value; }
    inline void SetAnswers(Aws::Vector<TopicReviewedAnswer>&& value) { m_answers = std::move(value); }
    inline ListTopicReviewedAnswersResult& WithAnswers(const Aws::Vector<TopicReviewedAnswer>& value) { SetAnswers(value); return *this;}
    inline ListTopicReviewedAnswersResult& WithAnswers(Aws::Vector<TopicReviewedAnswer>&& value) { SetAnswers(std::move(value)); return *this;}
    inline ListTopicReviewedAnswersResult& AddAnswers(const TopicReviewedAnswer& value) { m_answers.push_back(value); return *this; }
    inline ListTopicReviewedAnswersResult& AddAnswers(TopicReviewedAnswer&& value) { m_answers.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The HTTP status of the request.</p>
     */
    inline int GetStatus() const{ return m_status; }
    inline void SetStatus(int value) { m_status = value; }
    inline ListTopicReviewedAnswersResult& WithStatus(int value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListTopicReviewedAnswersResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListTopicReviewedAnswersResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListTopicReviewedAnswersResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_topicId;

    Aws::String m_topicArn;

    Aws::Vector<TopicReviewedAnswer> m_answers;

    int m_status;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
