/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mturk-requester/MTurk_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mturk-requester/model/ReviewPolicy.h>
#include <aws/mturk-requester/model/ReviewReport.h>
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
namespace MTurk
{
namespace Model
{
  class ListReviewPolicyResultsForHITResult
  {
  public:
    AWS_MTURK_API ListReviewPolicyResultsForHITResult() = default;
    AWS_MTURK_API ListReviewPolicyResultsForHITResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MTURK_API ListReviewPolicyResultsForHITResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The HITId of the HIT for which results have been returned.</p>
     */
    inline const Aws::String& GetHITId() const { return m_hITId; }
    template<typename HITIdT = Aws::String>
    void SetHITId(HITIdT&& value) { m_hITIdHasBeenSet = true; m_hITId = std::forward<HITIdT>(value); }
    template<typename HITIdT = Aws::String>
    ListReviewPolicyResultsForHITResult& WithHITId(HITIdT&& value) { SetHITId(std::forward<HITIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The name of the Assignment-level Review Policy. This contains only the
     * PolicyName element. </p>
     */
    inline const ReviewPolicy& GetAssignmentReviewPolicy() const { return m_assignmentReviewPolicy; }
    template<typename AssignmentReviewPolicyT = ReviewPolicy>
    void SetAssignmentReviewPolicy(AssignmentReviewPolicyT&& value) { m_assignmentReviewPolicyHasBeenSet = true; m_assignmentReviewPolicy = std::forward<AssignmentReviewPolicyT>(value); }
    template<typename AssignmentReviewPolicyT = ReviewPolicy>
    ListReviewPolicyResultsForHITResult& WithAssignmentReviewPolicy(AssignmentReviewPolicyT&& value) { SetAssignmentReviewPolicy(std::forward<AssignmentReviewPolicyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the HIT-level Review Policy. This contains only the PolicyName
     * element.</p>
     */
    inline const ReviewPolicy& GetHITReviewPolicy() const { return m_hITReviewPolicy; }
    template<typename HITReviewPolicyT = ReviewPolicy>
    void SetHITReviewPolicy(HITReviewPolicyT&& value) { m_hITReviewPolicyHasBeenSet = true; m_hITReviewPolicy = std::forward<HITReviewPolicyT>(value); }
    template<typename HITReviewPolicyT = ReviewPolicy>
    ListReviewPolicyResultsForHITResult& WithHITReviewPolicy(HITReviewPolicyT&& value) { SetHITReviewPolicy(std::forward<HITReviewPolicyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Contains both ReviewResult and ReviewAction elements for an Assignment. </p>
     */
    inline const ReviewReport& GetAssignmentReviewReport() const { return m_assignmentReviewReport; }
    template<typename AssignmentReviewReportT = ReviewReport>
    void SetAssignmentReviewReport(AssignmentReviewReportT&& value) { m_assignmentReviewReportHasBeenSet = true; m_assignmentReviewReport = std::forward<AssignmentReviewReportT>(value); }
    template<typename AssignmentReviewReportT = ReviewReport>
    ListReviewPolicyResultsForHITResult& WithAssignmentReviewReport(AssignmentReviewReportT&& value) { SetAssignmentReviewReport(std::forward<AssignmentReviewReportT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains both ReviewResult and ReviewAction elements for a particular HIT.
     * </p>
     */
    inline const ReviewReport& GetHITReviewReport() const { return m_hITReviewReport; }
    template<typename HITReviewReportT = ReviewReport>
    void SetHITReviewReport(HITReviewReportT&& value) { m_hITReviewReportHasBeenSet = true; m_hITReviewReport = std::forward<HITReviewReportT>(value); }
    template<typename HITReviewReportT = ReviewReport>
    ListReviewPolicyResultsForHITResult& WithHITReviewReport(HITReviewReportT&& value) { SetHITReviewReport(std::forward<HITReviewReportT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListReviewPolicyResultsForHITResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListReviewPolicyResultsForHITResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_hITId;
    bool m_hITIdHasBeenSet = false;

    ReviewPolicy m_assignmentReviewPolicy;
    bool m_assignmentReviewPolicyHasBeenSet = false;

    ReviewPolicy m_hITReviewPolicy;
    bool m_hITReviewPolicyHasBeenSet = false;

    ReviewReport m_assignmentReviewReport;
    bool m_assignmentReviewReportHasBeenSet = false;

    ReviewReport m_hITReviewReport;
    bool m_hITReviewReportHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace MTurk
} // namespace Aws
