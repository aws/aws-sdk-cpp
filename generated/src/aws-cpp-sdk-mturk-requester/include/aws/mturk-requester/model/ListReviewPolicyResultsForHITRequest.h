/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mturk-requester/MTurk_EXPORTS.h>
#include <aws/mturk-requester/MTurkRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/mturk-requester/model/ReviewPolicyLevel.h>
#include <utility>

namespace Aws
{
namespace MTurk
{
namespace Model
{

  /**
   */
  class ListReviewPolicyResultsForHITRequest : public MTurkRequest
  {
  public:
    AWS_MTURK_API ListReviewPolicyResultsForHITRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListReviewPolicyResultsForHIT"; }

    AWS_MTURK_API Aws::String SerializePayload() const override;

    AWS_MTURK_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The unique identifier of the HIT to retrieve review results for.</p>
     */
    inline const Aws::String& GetHITId() const { return m_hITId; }
    inline bool HITIdHasBeenSet() const { return m_hITIdHasBeenSet; }
    template<typename HITIdT = Aws::String>
    void SetHITId(HITIdT&& value) { m_hITIdHasBeenSet = true; m_hITId = std::forward<HITIdT>(value); }
    template<typename HITIdT = Aws::String>
    ListReviewPolicyResultsForHITRequest& WithHITId(HITIdT&& value) { SetHITId(std::forward<HITIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The Policy Level(s) to retrieve review results for - HIT or Assignment. If
     * omitted, the default behavior is to retrieve all data for both policy levels.
     * For a list of all the described policies, see Review Policies. </p>
     */
    inline const Aws::Vector<ReviewPolicyLevel>& GetPolicyLevels() const { return m_policyLevels; }
    inline bool PolicyLevelsHasBeenSet() const { return m_policyLevelsHasBeenSet; }
    template<typename PolicyLevelsT = Aws::Vector<ReviewPolicyLevel>>
    void SetPolicyLevels(PolicyLevelsT&& value) { m_policyLevelsHasBeenSet = true; m_policyLevels = std::forward<PolicyLevelsT>(value); }
    template<typename PolicyLevelsT = Aws::Vector<ReviewPolicyLevel>>
    ListReviewPolicyResultsForHITRequest& WithPolicyLevels(PolicyLevelsT&& value) { SetPolicyLevels(std::forward<PolicyLevelsT>(value)); return *this;}
    inline ListReviewPolicyResultsForHITRequest& AddPolicyLevels(ReviewPolicyLevel value) { m_policyLevelsHasBeenSet = true; m_policyLevels.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p> Specify if the operation should retrieve a list of the actions taken
     * executing the Review Policies and their outcomes. </p>
     */
    inline bool GetRetrieveActions() const { return m_retrieveActions; }
    inline bool RetrieveActionsHasBeenSet() const { return m_retrieveActionsHasBeenSet; }
    inline void SetRetrieveActions(bool value) { m_retrieveActionsHasBeenSet = true; m_retrieveActions = value; }
    inline ListReviewPolicyResultsForHITRequest& WithRetrieveActions(bool value) { SetRetrieveActions(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Specify if the operation should retrieve a list of the results computed by
     * the Review Policies. </p>
     */
    inline bool GetRetrieveResults() const { return m_retrieveResults; }
    inline bool RetrieveResultsHasBeenSet() const { return m_retrieveResultsHasBeenSet; }
    inline void SetRetrieveResults(bool value) { m_retrieveResultsHasBeenSet = true; m_retrieveResults = value; }
    inline ListReviewPolicyResultsForHITRequest& WithRetrieveResults(bool value) { SetRetrieveResults(value); return *this;}
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
    ListReviewPolicyResultsForHITRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Limit the number of results returned.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListReviewPolicyResultsForHITRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}
  private:

    Aws::String m_hITId;
    bool m_hITIdHasBeenSet = false;

    Aws::Vector<ReviewPolicyLevel> m_policyLevels;
    bool m_policyLevelsHasBeenSet = false;

    bool m_retrieveActions{false};
    bool m_retrieveActionsHasBeenSet = false;

    bool m_retrieveResults{false};
    bool m_retrieveResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace MTurk
} // namespace Aws
