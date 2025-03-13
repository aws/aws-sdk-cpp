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
    AWS_WELLARCHITECTED_API ListReviewTemplateAnswersResult() = default;
    AWS_WELLARCHITECTED_API ListReviewTemplateAnswersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WELLARCHITECTED_API ListReviewTemplateAnswersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ARN of the review template.</p>
     */
    inline const Aws::String& GetTemplateArn() const { return m_templateArn; }
    template<typename TemplateArnT = Aws::String>
    void SetTemplateArn(TemplateArnT&& value) { m_templateArnHasBeenSet = true; m_templateArn = std::forward<TemplateArnT>(value); }
    template<typename TemplateArnT = Aws::String>
    ListReviewTemplateAnswersResult& WithTemplateArn(TemplateArnT&& value) { SetTemplateArn(std::forward<TemplateArnT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetLensAlias() const { return m_lensAlias; }
    template<typename LensAliasT = Aws::String>
    void SetLensAlias(LensAliasT&& value) { m_lensAliasHasBeenSet = true; m_lensAlias = std::forward<LensAliasT>(value); }
    template<typename LensAliasT = Aws::String>
    ListReviewTemplateAnswersResult& WithLensAlias(LensAliasT&& value) { SetLensAlias(std::forward<LensAliasT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>List of answer summaries of a lens review in a review template.</p>
     */
    inline const Aws::Vector<ReviewTemplateAnswerSummary>& GetAnswerSummaries() const { return m_answerSummaries; }
    template<typename AnswerSummariesT = Aws::Vector<ReviewTemplateAnswerSummary>>
    void SetAnswerSummaries(AnswerSummariesT&& value) { m_answerSummariesHasBeenSet = true; m_answerSummaries = std::forward<AnswerSummariesT>(value); }
    template<typename AnswerSummariesT = Aws::Vector<ReviewTemplateAnswerSummary>>
    ListReviewTemplateAnswersResult& WithAnswerSummaries(AnswerSummariesT&& value) { SetAnswerSummaries(std::forward<AnswerSummariesT>(value)); return *this;}
    template<typename AnswerSummariesT = ReviewTemplateAnswerSummary>
    ListReviewTemplateAnswersResult& AddAnswerSummaries(AnswerSummariesT&& value) { m_answerSummariesHasBeenSet = true; m_answerSummaries.emplace_back(std::forward<AnswerSummariesT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListReviewTemplateAnswersResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListReviewTemplateAnswersResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_templateArn;
    bool m_templateArnHasBeenSet = false;

    Aws::String m_lensAlias;
    bool m_lensAliasHasBeenSet = false;

    Aws::Vector<ReviewTemplateAnswerSummary> m_answerSummaries;
    bool m_answerSummariesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace WellArchitected
} // namespace Aws
