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
    AWS_MTURK_API ListAssignmentsForHITRequest();

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
    inline const Aws::String& GetHITId() const{ return m_hITId; }
    inline bool HITIdHasBeenSet() const { return m_hITIdHasBeenSet; }
    inline void SetHITId(const Aws::String& value) { m_hITIdHasBeenSet = true; m_hITId = value; }
    inline void SetHITId(Aws::String&& value) { m_hITIdHasBeenSet = true; m_hITId = std::move(value); }
    inline void SetHITId(const char* value) { m_hITIdHasBeenSet = true; m_hITId.assign(value); }
    inline ListAssignmentsForHITRequest& WithHITId(const Aws::String& value) { SetHITId(value); return *this;}
    inline ListAssignmentsForHITRequest& WithHITId(Aws::String&& value) { SetHITId(std::move(value)); return *this;}
    inline ListAssignmentsForHITRequest& WithHITId(const char* value) { SetHITId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Pagination token</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }
    inline ListAssignmentsForHITRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListAssignmentsForHITRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListAssignmentsForHITRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline int GetMaxResults() const{ return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListAssignmentsForHITRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the assignments to return: Submitted | Approved | Rejected</p>
     */
    inline const Aws::Vector<AssignmentStatus>& GetAssignmentStatuses() const{ return m_assignmentStatuses; }
    inline bool AssignmentStatusesHasBeenSet() const { return m_assignmentStatusesHasBeenSet; }
    inline void SetAssignmentStatuses(const Aws::Vector<AssignmentStatus>& value) { m_assignmentStatusesHasBeenSet = true; m_assignmentStatuses = value; }
    inline void SetAssignmentStatuses(Aws::Vector<AssignmentStatus>&& value) { m_assignmentStatusesHasBeenSet = true; m_assignmentStatuses = std::move(value); }
    inline ListAssignmentsForHITRequest& WithAssignmentStatuses(const Aws::Vector<AssignmentStatus>& value) { SetAssignmentStatuses(value); return *this;}
    inline ListAssignmentsForHITRequest& WithAssignmentStatuses(Aws::Vector<AssignmentStatus>&& value) { SetAssignmentStatuses(std::move(value)); return *this;}
    inline ListAssignmentsForHITRequest& AddAssignmentStatuses(const AssignmentStatus& value) { m_assignmentStatusesHasBeenSet = true; m_assignmentStatuses.push_back(value); return *this; }
    inline ListAssignmentsForHITRequest& AddAssignmentStatuses(AssignmentStatus&& value) { m_assignmentStatusesHasBeenSet = true; m_assignmentStatuses.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_hITId;
    bool m_hITIdHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::Vector<AssignmentStatus> m_assignmentStatuses;
    bool m_assignmentStatusesHasBeenSet = false;
  };

} // namespace Model
} // namespace MTurk
} // namespace Aws
