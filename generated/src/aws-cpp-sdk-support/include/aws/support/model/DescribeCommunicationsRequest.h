/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/support/Support_EXPORTS.h>
#include <aws/support/SupportRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Support
{
namespace Model
{

  /**
   */
  class DescribeCommunicationsRequest : public SupportRequest
  {
  public:
    AWS_SUPPORT_API DescribeCommunicationsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeCommunications"; }

    AWS_SUPPORT_API Aws::String SerializePayload() const override;

    AWS_SUPPORT_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The support case ID requested or returned in the call. The case ID is an
     * alphanumeric string formatted as shown in this example:
     * case-<i>12345678910-2013-c4c1d2bf33c5cf47</i> </p>
     */
    inline const Aws::String& GetCaseId() const { return m_caseId; }
    inline bool CaseIdHasBeenSet() const { return m_caseIdHasBeenSet; }
    template<typename CaseIdT = Aws::String>
    void SetCaseId(CaseIdT&& value) { m_caseIdHasBeenSet = true; m_caseId = std::forward<CaseIdT>(value); }
    template<typename CaseIdT = Aws::String>
    DescribeCommunicationsRequest& WithCaseId(CaseIdT&& value) { SetCaseId(std::forward<CaseIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The end date for a filtered date search on support case communications. Case
     * communications are available for 12 months after creation.</p>
     */
    inline const Aws::String& GetBeforeTime() const { return m_beforeTime; }
    inline bool BeforeTimeHasBeenSet() const { return m_beforeTimeHasBeenSet; }
    template<typename BeforeTimeT = Aws::String>
    void SetBeforeTime(BeforeTimeT&& value) { m_beforeTimeHasBeenSet = true; m_beforeTime = std::forward<BeforeTimeT>(value); }
    template<typename BeforeTimeT = Aws::String>
    DescribeCommunicationsRequest& WithBeforeTime(BeforeTimeT&& value) { SetBeforeTime(std::forward<BeforeTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The start date for a filtered date search on support case communications.
     * Case communications are available for 12 months after creation.</p>
     */
    inline const Aws::String& GetAfterTime() const { return m_afterTime; }
    inline bool AfterTimeHasBeenSet() const { return m_afterTimeHasBeenSet; }
    template<typename AfterTimeT = Aws::String>
    void SetAfterTime(AfterTimeT&& value) { m_afterTimeHasBeenSet = true; m_afterTime = std::forward<AfterTimeT>(value); }
    template<typename AfterTimeT = Aws::String>
    DescribeCommunicationsRequest& WithAfterTime(AfterTimeT&& value) { SetAfterTime(std::forward<AfterTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A resumption point for pagination.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    DescribeCommunicationsRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of results to return before paginating.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline DescribeCommunicationsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}
  private:

    Aws::String m_caseId;
    bool m_caseIdHasBeenSet = false;

    Aws::String m_beforeTime;
    bool m_beforeTimeHasBeenSet = false;

    Aws::String m_afterTime;
    bool m_afterTimeHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace Support
} // namespace Aws
