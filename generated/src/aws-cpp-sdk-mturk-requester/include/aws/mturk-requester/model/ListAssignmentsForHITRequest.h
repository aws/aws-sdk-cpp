/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mturk-requester/MTurk_EXPORTS.h>
#include <aws/mturk-requester/MTurkRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/mturk-requester/model/AssignmentStatus.h>
#include <utility>

namespace Aws
{
namespace MTurk
{
namespace Model
{

  /**
   */
  class ListAssignmentsForHITRequest : public MTurkRequest
  {
  public:
    AWS_MTURK_API ListAssignmentsForHITRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListAssignmentsForHIT"; }

    AWS_MTURK_API Aws::String SerializePayload() const override;

    AWS_MTURK_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The ID of the HIT.</p>
     */
    inline const Aws::String& GetHITId() const { return m_hITId; }
    inline bool HITIdHasBeenSet() const { return m_hITIdHasBeenSet; }
    template<typename HITIdT = Aws::String>
    void SetHITId(HITIdT&& value) { m_hITIdHasBeenSet = true; m_hITId = std::forward<HITIdT>(value); }
    template<typename HITIdT = Aws::String>
    ListAssignmentsForHITRequest& WithHITId(HITIdT&& value) { SetHITId(std::forward<HITIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Pagination token</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListAssignmentsForHITRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListAssignmentsForHITRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the assignments to return: Submitted | Approved | Rejected</p>
     */
    inline const Aws::Vector<AssignmentStatus>& GetAssignmentStatuses() const { return m_assignmentStatuses; }
    inline bool AssignmentStatusesHasBeenSet() const { return m_assignmentStatusesHasBeenSet; }
    template<typename AssignmentStatusesT = Aws::Vector<AssignmentStatus>>
    void SetAssignmentStatuses(AssignmentStatusesT&& value) { m_assignmentStatusesHasBeenSet = true; m_assignmentStatuses = std::forward<AssignmentStatusesT>(value); }
    template<typename AssignmentStatusesT = Aws::Vector<AssignmentStatus>>
    ListAssignmentsForHITRequest& WithAssignmentStatuses(AssignmentStatusesT&& value) { SetAssignmentStatuses(std::forward<AssignmentStatusesT>(value)); return *this;}
    inline ListAssignmentsForHITRequest& AddAssignmentStatuses(AssignmentStatus value) { m_assignmentStatusesHasBeenSet = true; m_assignmentStatuses.push_back(value); return *this; }
    ///@}
  private:

    Aws::String m_hITId;
    bool m_hITIdHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    Aws::Vector<AssignmentStatus> m_assignmentStatuses;
    bool m_assignmentStatusesHasBeenSet = false;
  };

} // namespace Model
} // namespace MTurk
} // namespace Aws
