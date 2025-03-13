/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wellarchitected/WellArchitected_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/wellarchitected/model/ReviewTemplateSummary.h>
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
  class ListReviewTemplatesResult
  {
  public:
    AWS_WELLARCHITECTED_API ListReviewTemplatesResult() = default;
    AWS_WELLARCHITECTED_API ListReviewTemplatesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WELLARCHITECTED_API ListReviewTemplatesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>List of review templates.</p>
     */
    inline const Aws::Vector<ReviewTemplateSummary>& GetReviewTemplates() const { return m_reviewTemplates; }
    template<typename ReviewTemplatesT = Aws::Vector<ReviewTemplateSummary>>
    void SetReviewTemplates(ReviewTemplatesT&& value) { m_reviewTemplatesHasBeenSet = true; m_reviewTemplates = std::forward<ReviewTemplatesT>(value); }
    template<typename ReviewTemplatesT = Aws::Vector<ReviewTemplateSummary>>
    ListReviewTemplatesResult& WithReviewTemplates(ReviewTemplatesT&& value) { SetReviewTemplates(std::forward<ReviewTemplatesT>(value)); return *this;}
    template<typename ReviewTemplatesT = ReviewTemplateSummary>
    ListReviewTemplatesResult& AddReviewTemplates(ReviewTemplatesT&& value) { m_reviewTemplatesHasBeenSet = true; m_reviewTemplates.emplace_back(std::forward<ReviewTemplatesT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListReviewTemplatesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListReviewTemplatesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ReviewTemplateSummary> m_reviewTemplates;
    bool m_reviewTemplatesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace WellArchitected
} // namespace Aws
