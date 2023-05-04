/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/securityhub/SecurityHubRequest.h>
#include <aws/securityhub/model/AwsSecurityFindingIdentifier.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace SecurityHub
{
namespace Model
{

  /**
   */
  class GetFindingHistoryRequest : public SecurityHubRequest
  {
  public:
    AWS_SECURITYHUB_API GetFindingHistoryRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetFindingHistory"; }

    AWS_SECURITYHUB_API Aws::String SerializePayload() const override;


    
    inline const AwsSecurityFindingIdentifier& GetFindingIdentifier() const{ return m_findingIdentifier; }

    
    inline bool FindingIdentifierHasBeenSet() const { return m_findingIdentifierHasBeenSet; }

    
    inline void SetFindingIdentifier(const AwsSecurityFindingIdentifier& value) { m_findingIdentifierHasBeenSet = true; m_findingIdentifier = value; }

    
    inline void SetFindingIdentifier(AwsSecurityFindingIdentifier&& value) { m_findingIdentifierHasBeenSet = true; m_findingIdentifier = std::move(value); }

    
    inline GetFindingHistoryRequest& WithFindingIdentifier(const AwsSecurityFindingIdentifier& value) { SetFindingIdentifier(value); return *this;}

    
    inline GetFindingHistoryRequest& WithFindingIdentifier(AwsSecurityFindingIdentifier&& value) { SetFindingIdentifier(std::move(value)); return *this;}


    /**
     * <p> An ISO 8601-formatted timestamp that indicates the start time of the
     * requested finding history. A correctly formatted example is
     * <code>2020-05-21T20:16:34.724Z</code>. The value cannot contain spaces, and date
     * and time should be separated by <code>T</code>. For more information, see <a
     * href="https://www.rfc-editor.org/rfc/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>.</p> <p>If you provide values for both
     * <code>StartTime</code> and <code>EndTime</code>, Security Hub returns finding
     * history for the specified time period. If you provide a value for
     * <code>StartTime</code> but not for <code>EndTime</code>, Security Hub returns
     * finding history from the <code>StartTime</code> to the time at which the API is
     * called. If you provide a value for <code>EndTime</code> but not for
     * <code>StartTime</code>, Security Hub returns finding history from the <a
     * href="https://docs.aws.amazon.com/securityhub/1.0/APIReference/API_AwsSecurityFindingFilters.html#securityhub-Type-AwsSecurityFindingFilters-CreatedAt">CreatedAt</a>
     * timestamp of the finding to the <code>EndTime</code>. If you provide neither
     * <code>StartTime</code> nor <code>EndTime</code>, Security Hub returns finding
     * history from the CreatedAt timestamp of the finding to the time at which the API
     * is called. In all of these scenarios, the response is limited to 100 results,
     * and the maximum time period is limited to 90 days. </p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }

    /**
     * <p> An ISO 8601-formatted timestamp that indicates the start time of the
     * requested finding history. A correctly formatted example is
     * <code>2020-05-21T20:16:34.724Z</code>. The value cannot contain spaces, and date
     * and time should be separated by <code>T</code>. For more information, see <a
     * href="https://www.rfc-editor.org/rfc/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>.</p> <p>If you provide values for both
     * <code>StartTime</code> and <code>EndTime</code>, Security Hub returns finding
     * history for the specified time period. If you provide a value for
     * <code>StartTime</code> but not for <code>EndTime</code>, Security Hub returns
     * finding history from the <code>StartTime</code> to the time at which the API is
     * called. If you provide a value for <code>EndTime</code> but not for
     * <code>StartTime</code>, Security Hub returns finding history from the <a
     * href="https://docs.aws.amazon.com/securityhub/1.0/APIReference/API_AwsSecurityFindingFilters.html#securityhub-Type-AwsSecurityFindingFilters-CreatedAt">CreatedAt</a>
     * timestamp of the finding to the <code>EndTime</code>. If you provide neither
     * <code>StartTime</code> nor <code>EndTime</code>, Security Hub returns finding
     * history from the CreatedAt timestamp of the finding to the time at which the API
     * is called. In all of these scenarios, the response is limited to 100 results,
     * and the maximum time period is limited to 90 days. </p>
     */
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }

    /**
     * <p> An ISO 8601-formatted timestamp that indicates the start time of the
     * requested finding history. A correctly formatted example is
     * <code>2020-05-21T20:16:34.724Z</code>. The value cannot contain spaces, and date
     * and time should be separated by <code>T</code>. For more information, see <a
     * href="https://www.rfc-editor.org/rfc/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>.</p> <p>If you provide values for both
     * <code>StartTime</code> and <code>EndTime</code>, Security Hub returns finding
     * history for the specified time period. If you provide a value for
     * <code>StartTime</code> but not for <code>EndTime</code>, Security Hub returns
     * finding history from the <code>StartTime</code> to the time at which the API is
     * called. If you provide a value for <code>EndTime</code> but not for
     * <code>StartTime</code>, Security Hub returns finding history from the <a
     * href="https://docs.aws.amazon.com/securityhub/1.0/APIReference/API_AwsSecurityFindingFilters.html#securityhub-Type-AwsSecurityFindingFilters-CreatedAt">CreatedAt</a>
     * timestamp of the finding to the <code>EndTime</code>. If you provide neither
     * <code>StartTime</code> nor <code>EndTime</code>, Security Hub returns finding
     * history from the CreatedAt timestamp of the finding to the time at which the API
     * is called. In all of these scenarios, the response is limited to 100 results,
     * and the maximum time period is limited to 90 days. </p>
     */
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTimeHasBeenSet = true; m_startTime = value; }

    /**
     * <p> An ISO 8601-formatted timestamp that indicates the start time of the
     * requested finding history. A correctly formatted example is
     * <code>2020-05-21T20:16:34.724Z</code>. The value cannot contain spaces, and date
     * and time should be separated by <code>T</code>. For more information, see <a
     * href="https://www.rfc-editor.org/rfc/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>.</p> <p>If you provide values for both
     * <code>StartTime</code> and <code>EndTime</code>, Security Hub returns finding
     * history for the specified time period. If you provide a value for
     * <code>StartTime</code> but not for <code>EndTime</code>, Security Hub returns
     * finding history from the <code>StartTime</code> to the time at which the API is
     * called. If you provide a value for <code>EndTime</code> but not for
     * <code>StartTime</code>, Security Hub returns finding history from the <a
     * href="https://docs.aws.amazon.com/securityhub/1.0/APIReference/API_AwsSecurityFindingFilters.html#securityhub-Type-AwsSecurityFindingFilters-CreatedAt">CreatedAt</a>
     * timestamp of the finding to the <code>EndTime</code>. If you provide neither
     * <code>StartTime</code> nor <code>EndTime</code>, Security Hub returns finding
     * history from the CreatedAt timestamp of the finding to the time at which the API
     * is called. In all of these scenarios, the response is limited to 100 results,
     * and the maximum time period is limited to 90 days. </p>
     */
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }

    /**
     * <p> An ISO 8601-formatted timestamp that indicates the start time of the
     * requested finding history. A correctly formatted example is
     * <code>2020-05-21T20:16:34.724Z</code>. The value cannot contain spaces, and date
     * and time should be separated by <code>T</code>. For more information, see <a
     * href="https://www.rfc-editor.org/rfc/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>.</p> <p>If you provide values for both
     * <code>StartTime</code> and <code>EndTime</code>, Security Hub returns finding
     * history for the specified time period. If you provide a value for
     * <code>StartTime</code> but not for <code>EndTime</code>, Security Hub returns
     * finding history from the <code>StartTime</code> to the time at which the API is
     * called. If you provide a value for <code>EndTime</code> but not for
     * <code>StartTime</code>, Security Hub returns finding history from the <a
     * href="https://docs.aws.amazon.com/securityhub/1.0/APIReference/API_AwsSecurityFindingFilters.html#securityhub-Type-AwsSecurityFindingFilters-CreatedAt">CreatedAt</a>
     * timestamp of the finding to the <code>EndTime</code>. If you provide neither
     * <code>StartTime</code> nor <code>EndTime</code>, Security Hub returns finding
     * history from the CreatedAt timestamp of the finding to the time at which the API
     * is called. In all of these scenarios, the response is limited to 100 results,
     * and the maximum time period is limited to 90 days. </p>
     */
    inline GetFindingHistoryRequest& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}

    /**
     * <p> An ISO 8601-formatted timestamp that indicates the start time of the
     * requested finding history. A correctly formatted example is
     * <code>2020-05-21T20:16:34.724Z</code>. The value cannot contain spaces, and date
     * and time should be separated by <code>T</code>. For more information, see <a
     * href="https://www.rfc-editor.org/rfc/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>.</p> <p>If you provide values for both
     * <code>StartTime</code> and <code>EndTime</code>, Security Hub returns finding
     * history for the specified time period. If you provide a value for
     * <code>StartTime</code> but not for <code>EndTime</code>, Security Hub returns
     * finding history from the <code>StartTime</code> to the time at which the API is
     * called. If you provide a value for <code>EndTime</code> but not for
     * <code>StartTime</code>, Security Hub returns finding history from the <a
     * href="https://docs.aws.amazon.com/securityhub/1.0/APIReference/API_AwsSecurityFindingFilters.html#securityhub-Type-AwsSecurityFindingFilters-CreatedAt">CreatedAt</a>
     * timestamp of the finding to the <code>EndTime</code>. If you provide neither
     * <code>StartTime</code> nor <code>EndTime</code>, Security Hub returns finding
     * history from the CreatedAt timestamp of the finding to the time at which the API
     * is called. In all of these scenarios, the response is limited to 100 results,
     * and the maximum time period is limited to 90 days. </p>
     */
    inline GetFindingHistoryRequest& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}


    /**
     * <p> An ISO 8601-formatted timestamp that indicates the end time of the requested
     * finding history. A correctly formatted example is
     * <code>2020-05-21T20:16:34.724Z</code>. The value cannot contain spaces, and date
     * and time should be separated by <code>T</code>. For more information, see <a
     * href="https://www.rfc-editor.org/rfc/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>.</p> <p>If you provide values for both
     * <code>StartTime</code> and <code>EndTime</code>, Security Hub returns finding
     * history for the specified time period. If you provide a value for
     * <code>StartTime</code> but not for <code>EndTime</code>, Security Hub returns
     * finding history from the <code>StartTime</code> to the time at which the API is
     * called. If you provide a value for <code>EndTime</code> but not for
     * <code>StartTime</code>, Security Hub returns finding history from the <a
     * href="https://docs.aws.amazon.com/securityhub/1.0/APIReference/API_AwsSecurityFindingFilters.html#securityhub-Type-AwsSecurityFindingFilters-CreatedAt">CreatedAt</a>
     * timestamp of the finding to the <code>EndTime</code>. If you provide neither
     * <code>StartTime</code> nor <code>EndTime</code>, Security Hub returns finding
     * history from the CreatedAt timestamp of the finding to the time at which the API
     * is called. In all of these scenarios, the response is limited to 100 results,
     * and the maximum time period is limited to 90 days.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const{ return m_endTime; }

    /**
     * <p> An ISO 8601-formatted timestamp that indicates the end time of the requested
     * finding history. A correctly formatted example is
     * <code>2020-05-21T20:16:34.724Z</code>. The value cannot contain spaces, and date
     * and time should be separated by <code>T</code>. For more information, see <a
     * href="https://www.rfc-editor.org/rfc/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>.</p> <p>If you provide values for both
     * <code>StartTime</code> and <code>EndTime</code>, Security Hub returns finding
     * history for the specified time period. If you provide a value for
     * <code>StartTime</code> but not for <code>EndTime</code>, Security Hub returns
     * finding history from the <code>StartTime</code> to the time at which the API is
     * called. If you provide a value for <code>EndTime</code> but not for
     * <code>StartTime</code>, Security Hub returns finding history from the <a
     * href="https://docs.aws.amazon.com/securityhub/1.0/APIReference/API_AwsSecurityFindingFilters.html#securityhub-Type-AwsSecurityFindingFilters-CreatedAt">CreatedAt</a>
     * timestamp of the finding to the <code>EndTime</code>. If you provide neither
     * <code>StartTime</code> nor <code>EndTime</code>, Security Hub returns finding
     * history from the CreatedAt timestamp of the finding to the time at which the API
     * is called. In all of these scenarios, the response is limited to 100 results,
     * and the maximum time period is limited to 90 days.</p>
     */
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }

    /**
     * <p> An ISO 8601-formatted timestamp that indicates the end time of the requested
     * finding history. A correctly formatted example is
     * <code>2020-05-21T20:16:34.724Z</code>. The value cannot contain spaces, and date
     * and time should be separated by <code>T</code>. For more information, see <a
     * href="https://www.rfc-editor.org/rfc/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>.</p> <p>If you provide values for both
     * <code>StartTime</code> and <code>EndTime</code>, Security Hub returns finding
     * history for the specified time period. If you provide a value for
     * <code>StartTime</code> but not for <code>EndTime</code>, Security Hub returns
     * finding history from the <code>StartTime</code> to the time at which the API is
     * called. If you provide a value for <code>EndTime</code> but not for
     * <code>StartTime</code>, Security Hub returns finding history from the <a
     * href="https://docs.aws.amazon.com/securityhub/1.0/APIReference/API_AwsSecurityFindingFilters.html#securityhub-Type-AwsSecurityFindingFilters-CreatedAt">CreatedAt</a>
     * timestamp of the finding to the <code>EndTime</code>. If you provide neither
     * <code>StartTime</code> nor <code>EndTime</code>, Security Hub returns finding
     * history from the CreatedAt timestamp of the finding to the time at which the API
     * is called. In all of these scenarios, the response is limited to 100 results,
     * and the maximum time period is limited to 90 days.</p>
     */
    inline void SetEndTime(const Aws::Utils::DateTime& value) { m_endTimeHasBeenSet = true; m_endTime = value; }

    /**
     * <p> An ISO 8601-formatted timestamp that indicates the end time of the requested
     * finding history. A correctly formatted example is
     * <code>2020-05-21T20:16:34.724Z</code>. The value cannot contain spaces, and date
     * and time should be separated by <code>T</code>. For more information, see <a
     * href="https://www.rfc-editor.org/rfc/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>.</p> <p>If you provide values for both
     * <code>StartTime</code> and <code>EndTime</code>, Security Hub returns finding
     * history for the specified time period. If you provide a value for
     * <code>StartTime</code> but not for <code>EndTime</code>, Security Hub returns
     * finding history from the <code>StartTime</code> to the time at which the API is
     * called. If you provide a value for <code>EndTime</code> but not for
     * <code>StartTime</code>, Security Hub returns finding history from the <a
     * href="https://docs.aws.amazon.com/securityhub/1.0/APIReference/API_AwsSecurityFindingFilters.html#securityhub-Type-AwsSecurityFindingFilters-CreatedAt">CreatedAt</a>
     * timestamp of the finding to the <code>EndTime</code>. If you provide neither
     * <code>StartTime</code> nor <code>EndTime</code>, Security Hub returns finding
     * history from the CreatedAt timestamp of the finding to the time at which the API
     * is called. In all of these scenarios, the response is limited to 100 results,
     * and the maximum time period is limited to 90 days.</p>
     */
    inline void SetEndTime(Aws::Utils::DateTime&& value) { m_endTimeHasBeenSet = true; m_endTime = std::move(value); }

    /**
     * <p> An ISO 8601-formatted timestamp that indicates the end time of the requested
     * finding history. A correctly formatted example is
     * <code>2020-05-21T20:16:34.724Z</code>. The value cannot contain spaces, and date
     * and time should be separated by <code>T</code>. For more information, see <a
     * href="https://www.rfc-editor.org/rfc/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>.</p> <p>If you provide values for both
     * <code>StartTime</code> and <code>EndTime</code>, Security Hub returns finding
     * history for the specified time period. If you provide a value for
     * <code>StartTime</code> but not for <code>EndTime</code>, Security Hub returns
     * finding history from the <code>StartTime</code> to the time at which the API is
     * called. If you provide a value for <code>EndTime</code> but not for
     * <code>StartTime</code>, Security Hub returns finding history from the <a
     * href="https://docs.aws.amazon.com/securityhub/1.0/APIReference/API_AwsSecurityFindingFilters.html#securityhub-Type-AwsSecurityFindingFilters-CreatedAt">CreatedAt</a>
     * timestamp of the finding to the <code>EndTime</code>. If you provide neither
     * <code>StartTime</code> nor <code>EndTime</code>, Security Hub returns finding
     * history from the CreatedAt timestamp of the finding to the time at which the API
     * is called. In all of these scenarios, the response is limited to 100 results,
     * and the maximum time period is limited to 90 days.</p>
     */
    inline GetFindingHistoryRequest& WithEndTime(const Aws::Utils::DateTime& value) { SetEndTime(value); return *this;}

    /**
     * <p> An ISO 8601-formatted timestamp that indicates the end time of the requested
     * finding history. A correctly formatted example is
     * <code>2020-05-21T20:16:34.724Z</code>. The value cannot contain spaces, and date
     * and time should be separated by <code>T</code>. For more information, see <a
     * href="https://www.rfc-editor.org/rfc/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>.</p> <p>If you provide values for both
     * <code>StartTime</code> and <code>EndTime</code>, Security Hub returns finding
     * history for the specified time period. If you provide a value for
     * <code>StartTime</code> but not for <code>EndTime</code>, Security Hub returns
     * finding history from the <code>StartTime</code> to the time at which the API is
     * called. If you provide a value for <code>EndTime</code> but not for
     * <code>StartTime</code>, Security Hub returns finding history from the <a
     * href="https://docs.aws.amazon.com/securityhub/1.0/APIReference/API_AwsSecurityFindingFilters.html#securityhub-Type-AwsSecurityFindingFilters-CreatedAt">CreatedAt</a>
     * timestamp of the finding to the <code>EndTime</code>. If you provide neither
     * <code>StartTime</code> nor <code>EndTime</code>, Security Hub returns finding
     * history from the CreatedAt timestamp of the finding to the time at which the API
     * is called. In all of these scenarios, the response is limited to 100 results,
     * and the maximum time period is limited to 90 days.</p>
     */
    inline GetFindingHistoryRequest& WithEndTime(Aws::Utils::DateTime&& value) { SetEndTime(std::move(value)); return *this;}


    /**
     * <p> A token for pagination purposes. Provide <code>NULL</code> as the initial
     * value. In subsequent requests, provide the token included in the response to get
     * up to an additional 100 results of finding history. If you don’t provide
     * <code>NextToken</code>, Security Hub returns up to 100 results of finding
     * history for each request. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p> A token for pagination purposes. Provide <code>NULL</code> as the initial
     * value. In subsequent requests, provide the token included in the response to get
     * up to an additional 100 results of finding history. If you don’t provide
     * <code>NextToken</code>, Security Hub returns up to 100 results of finding
     * history for each request. </p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p> A token for pagination purposes. Provide <code>NULL</code> as the initial
     * value. In subsequent requests, provide the token included in the response to get
     * up to an additional 100 results of finding history. If you don’t provide
     * <code>NextToken</code>, Security Hub returns up to 100 results of finding
     * history for each request. </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p> A token for pagination purposes. Provide <code>NULL</code> as the initial
     * value. In subsequent requests, provide the token included in the response to get
     * up to an additional 100 results of finding history. If you don’t provide
     * <code>NextToken</code>, Security Hub returns up to 100 results of finding
     * history for each request. </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p> A token for pagination purposes. Provide <code>NULL</code> as the initial
     * value. In subsequent requests, provide the token included in the response to get
     * up to an additional 100 results of finding history. If you don’t provide
     * <code>NextToken</code>, Security Hub returns up to 100 results of finding
     * history for each request. </p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p> A token for pagination purposes. Provide <code>NULL</code> as the initial
     * value. In subsequent requests, provide the token included in the response to get
     * up to an additional 100 results of finding history. If you don’t provide
     * <code>NextToken</code>, Security Hub returns up to 100 results of finding
     * history for each request. </p>
     */
    inline GetFindingHistoryRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p> A token for pagination purposes. Provide <code>NULL</code> as the initial
     * value. In subsequent requests, provide the token included in the response to get
     * up to an additional 100 results of finding history. If you don’t provide
     * <code>NextToken</code>, Security Hub returns up to 100 results of finding
     * history for each request. </p>
     */
    inline GetFindingHistoryRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p> A token for pagination purposes. Provide <code>NULL</code> as the initial
     * value. In subsequent requests, provide the token included in the response to get
     * up to an additional 100 results of finding history. If you don’t provide
     * <code>NextToken</code>, Security Hub returns up to 100 results of finding
     * history for each request. </p>
     */
    inline GetFindingHistoryRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p> The maximum number of results to be returned. If you don’t provide it,
     * Security Hub returns up to 100 results of finding history. </p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p> The maximum number of results to be returned. If you don’t provide it,
     * Security Hub returns up to 100 results of finding history. </p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p> The maximum number of results to be returned. If you don’t provide it,
     * Security Hub returns up to 100 results of finding history. </p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p> The maximum number of results to be returned. If you don’t provide it,
     * Security Hub returns up to 100 results of finding history. </p>
     */
    inline GetFindingHistoryRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}

  private:

    AwsSecurityFindingIdentifier m_findingIdentifier;
    bool m_findingIdentifierHasBeenSet = false;

    Aws::Utils::DateTime m_startTime;
    bool m_startTimeHasBeenSet = false;

    Aws::Utils::DateTime m_endTime;
    bool m_endTimeHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
