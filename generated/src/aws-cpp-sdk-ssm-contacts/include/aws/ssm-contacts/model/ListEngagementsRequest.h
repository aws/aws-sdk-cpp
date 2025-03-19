/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm-contacts/SSMContacts_EXPORTS.h>
#include <aws/ssm-contacts/SSMContactsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ssm-contacts/model/TimeRange.h>
#include <utility>

namespace Aws
{
namespace SSMContacts
{
namespace Model
{

  /**
   */
  class ListEngagementsRequest : public SSMContactsRequest
  {
  public:
    AWS_SSMCONTACTS_API ListEngagementsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListEngagements"; }

    AWS_SSMCONTACTS_API Aws::String SerializePayload() const override;

    AWS_SSMCONTACTS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The pagination token to continue to the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListEngagementsRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of engagements per page of results.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListEngagementsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the incident you're listing engagements
     * for.</p>
     */
    inline const Aws::String& GetIncidentId() const { return m_incidentId; }
    inline bool IncidentIdHasBeenSet() const { return m_incidentIdHasBeenSet; }
    template<typename IncidentIdT = Aws::String>
    void SetIncidentId(IncidentIdT&& value) { m_incidentIdHasBeenSet = true; m_incidentId = std::forward<IncidentIdT>(value); }
    template<typename IncidentIdT = Aws::String>
    ListEngagementsRequest& WithIncidentId(IncidentIdT&& value) { SetIncidentId(std::forward<IncidentIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time range to lists engagements for an incident.</p>
     */
    inline const TimeRange& GetTimeRangeValue() const { return m_timeRangeValue; }
    inline bool TimeRangeValueHasBeenSet() const { return m_timeRangeValueHasBeenSet; }
    template<typename TimeRangeValueT = TimeRange>
    void SetTimeRangeValue(TimeRangeValueT&& value) { m_timeRangeValueHasBeenSet = true; m_timeRangeValue = std::forward<TimeRangeValueT>(value); }
    template<typename TimeRangeValueT = TimeRange>
    ListEngagementsRequest& WithTimeRangeValue(TimeRangeValueT&& value) { SetTimeRangeValue(std::forward<TimeRangeValueT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_incidentId;
    bool m_incidentIdHasBeenSet = false;

    TimeRange m_timeRangeValue;
    bool m_timeRangeValueHasBeenSet = false;
  };

} // namespace Model
} // namespace SSMContacts
} // namespace Aws
