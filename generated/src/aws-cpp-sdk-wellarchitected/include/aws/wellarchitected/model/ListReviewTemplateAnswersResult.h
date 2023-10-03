/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wellarchitected/WellArchitected_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/wellarchitected/model/ReviewTemplateAnswerSummary.h>
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
namespace WellArchitected
{
namespace Model
{
  class ListReviewTemplateAnswersResult
  {
  public:
    AWS_WELLARCHITECTED_API ListReviewTemplateAnswersResult();
    AWS_WELLARCHITECTED_API ListReviewTemplateAnswersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WELLARCHITECTED_API ListReviewTemplateAnswersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ARN of the review template.</p>
     */
    inline const Aws::String& GetTemplateArn() const{ return m_templateArn; }

    /**
     * <p>The ARN of the review template.</p>
     */
    inline void SetTemplateArn(const Aws::String& value) { m_templateArn = value; }

    /**
     * <p>The ARN of the review template.</p>
     */
    inline void SetTemplateArn(Aws::String&& value) { m_templateArn = std::move(value); }

    /**
     * <p>The ARN of the review template.</p>
     */
    inline void SetTemplateArn(const char* value) { m_templateArn.assign(value); }

    /**
     * <p>The ARN of the review template.</p>
     */
    inline ListReviewTemplateAnswersResult& WithTemplateArn(const Aws::String& value) { SetTemplateArn(value); return *this;}

    /**
     * <p>The ARN of the review template.</p>
     */
    inline ListReviewTemplateAnswersResult& WithTemplateArn(Aws::String&& value) { SetTemplateArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the review template.</p>
     */
    inline ListReviewTemplateAnswersResult& WithTemplateArn(const char* value) { SetTemplateArn(value); return *this;}


    
    inline const Aws::String& GetLensAlias() const{ return m_lensAlias; }

    
    inline void SetLensAlias(const Aws::String& value) { m_lensAlias = value; }

    
    inline void SetLensAlias(Aws::String&& value) { m_lensAlias = std::move(value); }

    
    inline void SetLensAlias(const char* value) { m_lensAlias.assign(value); }

    
    inline ListReviewTemplateAnswersResult& WithLensAlias(const Aws::String& value) { SetLensAlias(value); return *this;}

    
    inline ListReviewTemplateAnswersResult& WithLensAlias(Aws::String&& value) { SetLensAlias(std::move(value)); return *this;}

    
    inline ListReviewTemplateAnswersResult& WithLensAlias(const char* value) { SetLensAlias(value); return *this;}


    /**
     * <p>List of answer summaries of a lens review in a review template.</p>
     */
    inline const Aws::Vector<ReviewTemplateAnswerSummary>& GetAnswerSummaries() const{ return m_answerSummaries; }

    /**
     * <p>List of answer summaries of a lens review in a review template.</p>
     */
    inline void SetAnswerSummaries(const Aws::Vector<ReviewTemplateAnswerSummary>& value) { m_answerSummaries = value; }

    /**
     * <p>List of answer summaries of a lens review in a review template.</p>
     */
    inline void SetAnswerSummaries(Aws::Vector<ReviewTemplateAnswerSummary>&& value) { m_answerSummaries = std::move(value); }

    /**
     * <p>List of answer summaries of a lens review in a review template.</p>
     */
    inline ListReviewTemplateAnswersResult& WithAnswerSummaries(const Aws::Vector<ReviewTemplateAnswerSummary>& value) { SetAnswerSummaries(value); return *this;}

    /**
     * <p>List of answer summaries of a lens review in a review template.</p>
     */
    inline ListReviewTemplateAnswersResult& WithAnswerSummaries(Aws::Vector<ReviewTemplateAnswerSummary>&& value) { SetAnswerSummaries(std::move(value)); return *this;}

    /**
     * <p>List of answer summaries of a lens review in a review template.</p>
     */
    inline ListReviewTemplateAnswersResult& AddAnswerSummaries(const ReviewTemplateAnswerSummary& value) { m_answerSummaries.push_back(value); return *this; }

    /**
     * <p>List of answer summaries of a lens review in a review template.</p>
     */
    inline ListReviewTemplateAnswersResult& AddAnswerSummaries(ReviewTemplateAnswerSummary&& value) { m_answerSummaries.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    
    inline ListReviewTemplateAnswersResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    
    inline ListReviewTemplateAnswersResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    
    inline ListReviewTemplateAnswersResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListReviewTemplateAnswersResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListReviewTemplateAnswersResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListReviewTemplateAnswersResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_templateArn;

    Aws::String m_lensAlias;

    Aws::Vector<ReviewTemplateAnswerSummary> m_answerSummaries;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace WellArchitected
} // namespace Aws
