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
    AWS_SSMCONTACTS_API ListEngagementsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListEngagements"; }

    AWS_SSMCONTACTS_API Aws::String SerializePayload() const override;

    AWS_SSMCONTACTS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The pagination token to continue to the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The pagination token to continue to the next page of results.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The pagination token to continue to the next page of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The pagination token to continue to the next page of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The pagination token to continue to the next page of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The pagination token to continue to the next page of results.</p>
     */
    inline ListEngagementsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The pagination token to continue to the next page of results.</p>
     */
    inline ListEngagementsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The pagination token to continue to the next page of results.</p>
     */
    inline ListEngagementsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The maximum number of engagements per page of results.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of engagements per page of results.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of engagements per page of results.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of engagements per page of results.</p>
     */
    inline ListEngagementsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the incident you're listing engagements
     * for.</p>
     */
    inline const Aws::String& GetIncidentId() const{ return m_incidentId; }

    /**
     * <p>The Amazon Resource Name (ARN) of the incident you're listing engagements
     * for.</p>
     */
    inline bool IncidentIdHasBeenSet() const { return m_incidentIdHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the incident you're listing engagements
     * for.</p>
     */
    inline void SetIncidentId(const Aws::String& value) { m_incidentIdHasBeenSet = true; m_incidentId = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the incident you're listing engagements
     * for.</p>
     */
    inline void SetIncidentId(Aws::String&& value) { m_incidentIdHasBeenSet = true; m_incidentId = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the incident you're listing engagements
     * for.</p>
     */
    inline void SetIncidentId(const char* value) { m_incidentIdHasBeenSet = true; m_incidentId.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the incident you're listing engagements
     * for.</p>
     */
    inline ListEngagementsRequest& WithIncidentId(const Aws::String& value) { SetIncidentId(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the incident you're listing engagements
     * for.</p>
     */
    inline ListEngagementsRequest& WithIncidentId(Aws::String&& value) { SetIncidentId(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the incident you're listing engagements
     * for.</p>
     */
    inline ListEngagementsRequest& WithIncidentId(const char* value) { SetIncidentId(value); return *this;}


    /**
     * <p>The time range to lists engagements for an incident.</p>
     */
    inline const TimeRange& GetTimeRangeValue() const{ return m_timeRangeValue; }

    /**
     * <p>The time range to lists engagements for an incident.</p>
     */
    inline bool TimeRangeValueHasBeenSet() const { return m_timeRangeValueHasBeenSet; }

    /**
     * <p>The time range to lists engagements for an incident.</p>
     */
    inline void SetTimeRangeValue(const TimeRange& value) { m_timeRangeValueHasBeenSet = true; m_timeRangeValue = value; }

    /**
     * <p>The time range to lists engagements for an incident.</p>
     */
    inline void SetTimeRangeValue(TimeRange&& value) { m_timeRangeValueHasBeenSet = true; m_timeRangeValue = std::move(value); }

    /**
     * <p>The time range to lists engagements for an incident.</p>
     */
    inline ListEngagementsRequest& WithTimeRangeValue(const TimeRange& value) { SetTimeRangeValue(value); return *this;}

    /**
     * <p>The time range to lists engagements for an incident.</p>
     */
    inline ListEngagementsRequest& WithTimeRangeValue(TimeRange&& value) { SetTimeRangeValue(std::move(value)); return *this;}

  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_incidentId;
    bool m_incidentIdHasBeenSet = false;

    TimeRange m_timeRangeValue;
    bool m_timeRangeValueHasBeenSet = false;
  };

} // namespace Model
} // namespace SSMContacts
} // namespace Aws
