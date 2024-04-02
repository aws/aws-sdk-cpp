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
     * <p>A timestamp that indicates the start time of the requested finding
     * history.</p> <p>If you provide values for both <code>StartTime</code> and
     * <code>EndTime</code>, Security Hub returns finding history for the specified
     * time period. If you provide a value for <code>StartTime</code> but not for
     * <code>EndTime</code>, Security Hub returns finding history from the
     * <code>StartTime</code> to the time at which the API is called. If you provide a
     * value for <code>EndTime</code> but not for <code>StartTime</code>, Security Hub
     * returns finding history from the <a
     * href="https://docs.aws.amazon.com/securityhub/1.0/APIReference/API_AwsSecurityFindingFilters.html#securityhub-Type-AwsSecurityFindingFilters-CreatedAt">CreatedAt</a>
     * timestamp of the finding to the <code>EndTime</code>. If you provide neither
     * <code>StartTime</code> nor <code>EndTime</code>, Security Hub returns finding
     * history from the CreatedAt timestamp of the finding to the time at which the API
     * is called. In all of these scenarios, the response is limited to 100 results,
     * and the maximum time period is limited to 90 days.</p> <p>This field accepts
     * only the specified formats. Timestamps can end with <code>Z</code> or <code>("+"
     * / "-") time-hour [":" time-minute]</code>. The time-secfrac after seconds is
     * limited to a maximum of 9 digits. The offset is bounded by +/-18:00. Here are
     * valid timestamp formats with examples:</p> <ul> <li> <p>
     * <code>YYYY-MM-DDTHH:MM:SSZ</code> (for example,
     * <code>2019-01-31T23:00:00Z</code>)</p> </li> <li> <p>
     * <code>YYYY-MM-DDTHH:MM:SS.mmmmmmmmmZ</code> (for example,
     * <code>2019-01-31T23:00:00.123456789Z</code>)</p> </li> <li> <p>
     * <code>YYYY-MM-DDTHH:MM:SS+HH:MM</code> (for example,
     * <code>2024-01-04T15:25:10+17:59</code>)</p> </li> <li> <p>
     * <code>YYYY-MM-DDTHH:MM:SS-HHMM</code> (for example,
     * <code>2024-01-04T15:25:10-1759</code>)</p> </li> <li> <p>
     * <code>YYYY-MM-DDTHH:MM:SS.mmmmmmmmm+HH:MM</code> (for example,
     * <code>2024-01-04T15:25:10.123456789+17:59</code>)</p> </li> </ul>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }

    /**
     * <p>A timestamp that indicates the start time of the requested finding
     * history.</p> <p>If you provide values for both <code>StartTime</code> and
     * <code>EndTime</code>, Security Hub returns finding history for the specified
     * time period. If you provide a value for <code>StartTime</code> but not for
     * <code>EndTime</code>, Security Hub returns finding history from the
     * <code>StartTime</code> to the time at which the API is called. If you provide a
     * value for <code>EndTime</code> but not for <code>StartTime</code>, Security Hub
     * returns finding history from the <a
     * href="https://docs.aws.amazon.com/securityhub/1.0/APIReference/API_AwsSecurityFindingFilters.html#securityhub-Type-AwsSecurityFindingFilters-CreatedAt">CreatedAt</a>
     * timestamp of the finding to the <code>EndTime</code>. If you provide neither
     * <code>StartTime</code> nor <code>EndTime</code>, Security Hub returns finding
     * history from the CreatedAt timestamp of the finding to the time at which the API
     * is called. In all of these scenarios, the response is limited to 100 results,
     * and the maximum time period is limited to 90 days.</p> <p>This field accepts
     * only the specified formats. Timestamps can end with <code>Z</code> or <code>("+"
     * / "-") time-hour [":" time-minute]</code>. The time-secfrac after seconds is
     * limited to a maximum of 9 digits. The offset is bounded by +/-18:00. Here are
     * valid timestamp formats with examples:</p> <ul> <li> <p>
     * <code>YYYY-MM-DDTHH:MM:SSZ</code> (for example,
     * <code>2019-01-31T23:00:00Z</code>)</p> </li> <li> <p>
     * <code>YYYY-MM-DDTHH:MM:SS.mmmmmmmmmZ</code> (for example,
     * <code>2019-01-31T23:00:00.123456789Z</code>)</p> </li> <li> <p>
     * <code>YYYY-MM-DDTHH:MM:SS+HH:MM</code> (for example,
     * <code>2024-01-04T15:25:10+17:59</code>)</p> </li> <li> <p>
     * <code>YYYY-MM-DDTHH:MM:SS-HHMM</code> (for example,
     * <code>2024-01-04T15:25:10-1759</code>)</p> </li> <li> <p>
     * <code>YYYY-MM-DDTHH:MM:SS.mmmmmmmmm+HH:MM</code> (for example,
     * <code>2024-01-04T15:25:10.123456789+17:59</code>)</p> </li> </ul>
     */
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }

    /**
     * <p>A timestamp that indicates the start time of the requested finding
     * history.</p> <p>If you provide values for both <code>StartTime</code> and
     * <code>EndTime</code>, Security Hub returns finding history for the specified
     * time period. If you provide a value for <code>StartTime</code> but not for
     * <code>EndTime</code>, Security Hub returns finding history from the
     * <code>StartTime</code> to the time at which the API is called. If you provide a
     * value for <code>EndTime</code> but not for <code>StartTime</code>, Security Hub
     * returns finding history from the <a
     * href="https://docs.aws.amazon.com/securityhub/1.0/APIReference/API_AwsSecurityFindingFilters.html#securityhub-Type-AwsSecurityFindingFilters-CreatedAt">CreatedAt</a>
     * timestamp of the finding to the <code>EndTime</code>. If you provide neither
     * <code>StartTime</code> nor <code>EndTime</code>, Security Hub returns finding
     * history from the CreatedAt timestamp of the finding to the time at which the API
     * is called. In all of these scenarios, the response is limited to 100 results,
     * and the maximum time period is limited to 90 days.</p> <p>This field accepts
     * only the specified formats. Timestamps can end with <code>Z</code> or <code>("+"
     * / "-") time-hour [":" time-minute]</code>. The time-secfrac after seconds is
     * limited to a maximum of 9 digits. The offset is bounded by +/-18:00. Here are
     * valid timestamp formats with examples:</p> <ul> <li> <p>
     * <code>YYYY-MM-DDTHH:MM:SSZ</code> (for example,
     * <code>2019-01-31T23:00:00Z</code>)</p> </li> <li> <p>
     * <code>YYYY-MM-DDTHH:MM:SS.mmmmmmmmmZ</code> (for example,
     * <code>2019-01-31T23:00:00.123456789Z</code>)</p> </li> <li> <p>
     * <code>YYYY-MM-DDTHH:MM:SS+HH:MM</code> (for example,
     * <code>2024-01-04T15:25:10+17:59</code>)</p> </li> <li> <p>
     * <code>YYYY-MM-DDTHH:MM:SS-HHMM</code> (for example,
     * <code>2024-01-04T15:25:10-1759</code>)</p> </li> <li> <p>
     * <code>YYYY-MM-DDTHH:MM:SS.mmmmmmmmm+HH:MM</code> (for example,
     * <code>2024-01-04T15:25:10.123456789+17:59</code>)</p> </li> </ul>
     */
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTimeHasBeenSet = true; m_startTime = value; }

    /**
     * <p>A timestamp that indicates the start time of the requested finding
     * history.</p> <p>If you provide values for both <code>StartTime</code> and
     * <code>EndTime</code>, Security Hub returns finding history for the specified
     * time period. If you provide a value for <code>StartTime</code> but not for
     * <code>EndTime</code>, Security Hub returns finding history from the
     * <code>StartTime</code> to the time at which the API is called. If you provide a
     * value for <code>EndTime</code> but not for <code>StartTime</code>, Security Hub
     * returns finding history from the <a
     * href="https://docs.aws.amazon.com/securityhub/1.0/APIReference/API_AwsSecurityFindingFilters.html#securityhub-Type-AwsSecurityFindingFilters-CreatedAt">CreatedAt</a>
     * timestamp of the finding to the <code>EndTime</code>. If you provide neither
     * <code>StartTime</code> nor <code>EndTime</code>, Security Hub returns finding
     * history from the CreatedAt timestamp of the finding to the time at which the API
     * is called. In all of these scenarios, the response is limited to 100 results,
     * and the maximum time period is limited to 90 days.</p> <p>This field accepts
     * only the specified formats. Timestamps can end with <code>Z</code> or <code>("+"
     * / "-") time-hour [":" time-minute]</code>. The time-secfrac after seconds is
     * limited to a maximum of 9 digits. The offset is bounded by +/-18:00. Here are
     * valid timestamp formats with examples:</p> <ul> <li> <p>
     * <code>YYYY-MM-DDTHH:MM:SSZ</code> (for example,
     * <code>2019-01-31T23:00:00Z</code>)</p> </li> <li> <p>
     * <code>YYYY-MM-DDTHH:MM:SS.mmmmmmmmmZ</code> (for example,
     * <code>2019-01-31T23:00:00.123456789Z</code>)</p> </li> <li> <p>
     * <code>YYYY-MM-DDTHH:MM:SS+HH:MM</code> (for example,
     * <code>2024-01-04T15:25:10+17:59</code>)</p> </li> <li> <p>
     * <code>YYYY-MM-DDTHH:MM:SS-HHMM</code> (for example,
     * <code>2024-01-04T15:25:10-1759</code>)</p> </li> <li> <p>
     * <code>YYYY-MM-DDTHH:MM:SS.mmmmmmmmm+HH:MM</code> (for example,
     * <code>2024-01-04T15:25:10.123456789+17:59</code>)</p> </li> </ul>
     */
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }

    /**
     * <p>A timestamp that indicates the start time of the requested finding
     * history.</p> <p>If you provide values for both <code>StartTime</code> and
     * <code>EndTime</code>, Security Hub returns finding history for the specified
     * time period. If you provide a value for <code>StartTime</code> but not for
     * <code>EndTime</code>, Security Hub returns finding history from the
     * <code>StartTime</code> to the time at which the API is called. If you provide a
     * value for <code>EndTime</code> but not for <code>StartTime</code>, Security Hub
     * returns finding history from the <a
     * href="https://docs.aws.amazon.com/securityhub/1.0/APIReference/API_AwsSecurityFindingFilters.html#securityhub-Type-AwsSecurityFindingFilters-CreatedAt">CreatedAt</a>
     * timestamp of the finding to the <code>EndTime</code>. If you provide neither
     * <code>StartTime</code> nor <code>EndTime</code>, Security Hub returns finding
     * history from the CreatedAt timestamp of the finding to the time at which the API
     * is called. In all of these scenarios, the response is limited to 100 results,
     * and the maximum time period is limited to 90 days.</p> <p>This field accepts
     * only the specified formats. Timestamps can end with <code>Z</code> or <code>("+"
     * / "-") time-hour [":" time-minute]</code>. The time-secfrac after seconds is
     * limited to a maximum of 9 digits. The offset is bounded by +/-18:00. Here are
     * valid timestamp formats with examples:</p> <ul> <li> <p>
     * <code>YYYY-MM-DDTHH:MM:SSZ</code> (for example,
     * <code>2019-01-31T23:00:00Z</code>)</p> </li> <li> <p>
     * <code>YYYY-MM-DDTHH:MM:SS.mmmmmmmmmZ</code> (for example,
     * <code>2019-01-31T23:00:00.123456789Z</code>)</p> </li> <li> <p>
     * <code>YYYY-MM-DDTHH:MM:SS+HH:MM</code> (for example,
     * <code>2024-01-04T15:25:10+17:59</code>)</p> </li> <li> <p>
     * <code>YYYY-MM-DDTHH:MM:SS-HHMM</code> (for example,
     * <code>2024-01-04T15:25:10-1759</code>)</p> </li> <li> <p>
     * <code>YYYY-MM-DDTHH:MM:SS.mmmmmmmmm+HH:MM</code> (for example,
     * <code>2024-01-04T15:25:10.123456789+17:59</code>)</p> </li> </ul>
     */
    inline GetFindingHistoryRequest& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}

    /**
     * <p>A timestamp that indicates the start time of the requested finding
     * history.</p> <p>If you provide values for both <code>StartTime</code> and
     * <code>EndTime</code>, Security Hub returns finding history for the specified
     * time period. If you provide a value for <code>StartTime</code> but not for
     * <code>EndTime</code>, Security Hub returns finding history from the
     * <code>StartTime</code> to the time at which the API is called. If you provide a
     * value for <code>EndTime</code> but not for <code>StartTime</code>, Security Hub
     * returns finding history from the <a
     * href="https://docs.aws.amazon.com/securityhub/1.0/APIReference/API_AwsSecurityFindingFilters.html#securityhub-Type-AwsSecurityFindingFilters-CreatedAt">CreatedAt</a>
     * timestamp of the finding to the <code>EndTime</code>. If you provide neither
     * <code>StartTime</code> nor <code>EndTime</code>, Security Hub returns finding
     * history from the CreatedAt timestamp of the finding to the time at which the API
     * is called. In all of these scenarios, the response is limited to 100 results,
     * and the maximum time period is limited to 90 days.</p> <p>This field accepts
     * only the specified formats. Timestamps can end with <code>Z</code> or <code>("+"
     * / "-") time-hour [":" time-minute]</code>. The time-secfrac after seconds is
     * limited to a maximum of 9 digits. The offset is bounded by +/-18:00. Here are
     * valid timestamp formats with examples:</p> <ul> <li> <p>
     * <code>YYYY-MM-DDTHH:MM:SSZ</code> (for example,
     * <code>2019-01-31T23:00:00Z</code>)</p> </li> <li> <p>
     * <code>YYYY-MM-DDTHH:MM:SS.mmmmmmmmmZ</code> (for example,
     * <code>2019-01-31T23:00:00.123456789Z</code>)</p> </li> <li> <p>
     * <code>YYYY-MM-DDTHH:MM:SS+HH:MM</code> (for example,
     * <code>2024-01-04T15:25:10+17:59</code>)</p> </li> <li> <p>
     * <code>YYYY-MM-DDTHH:MM:SS-HHMM</code> (for example,
     * <code>2024-01-04T15:25:10-1759</code>)</p> </li> <li> <p>
     * <code>YYYY-MM-DDTHH:MM:SS.mmmmmmmmm+HH:MM</code> (for example,
     * <code>2024-01-04T15:25:10.123456789+17:59</code>)</p> </li> </ul>
     */
    inline GetFindingHistoryRequest& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}


    /**
     * <p> An ISO 8601-formatted timestamp that indicates the end time of the requested
     * finding history.</p> <p>If you provide values for both <code>StartTime</code>
     * and <code>EndTime</code>, Security Hub returns finding history for the specified
     * time period. If you provide a value for <code>StartTime</code> but not for
     * <code>EndTime</code>, Security Hub returns finding history from the
     * <code>StartTime</code> to the time at which the API is called. If you provide a
     * value for <code>EndTime</code> but not for <code>StartTime</code>, Security Hub
     * returns finding history from the <a
     * href="https://docs.aws.amazon.com/securityhub/1.0/APIReference/API_AwsSecurityFindingFilters.html#securityhub-Type-AwsSecurityFindingFilters-CreatedAt">CreatedAt</a>
     * timestamp of the finding to the <code>EndTime</code>. If you provide neither
     * <code>StartTime</code> nor <code>EndTime</code>, Security Hub returns finding
     * history from the CreatedAt timestamp of the finding to the time at which the API
     * is called. In all of these scenarios, the response is limited to 100 results,
     * and the maximum time period is limited to 90 days.</p> <p>This field accepts
     * only the specified formats. Timestamps can end with <code>Z</code> or <code>("+"
     * / "-") time-hour [":" time-minute]</code>. The time-secfrac after seconds is
     * limited to a maximum of 9 digits. The offset is bounded by +/-18:00. Here are
     * valid timestamp formats with examples:</p> <ul> <li> <p>
     * <code>YYYY-MM-DDTHH:MM:SSZ</code> (for example,
     * <code>2019-01-31T23:00:00Z</code>)</p> </li> <li> <p>
     * <code>YYYY-MM-DDTHH:MM:SS.mmmmmmmmmZ</code> (for example,
     * <code>2019-01-31T23:00:00.123456789Z</code>)</p> </li> <li> <p>
     * <code>YYYY-MM-DDTHH:MM:SS+HH:MM</code> (for example,
     * <code>2024-01-04T15:25:10+17:59</code>)</p> </li> <li> <p>
     * <code>YYYY-MM-DDTHH:MM:SS-HHMM</code> (for example,
     * <code>2024-01-04T15:25:10-1759</code>)</p> </li> <li> <p>
     * <code>YYYY-MM-DDTHH:MM:SS.mmmmmmmmm+HH:MM</code> (for example,
     * <code>2024-01-04T15:25:10.123456789+17:59</code>)</p> </li> </ul>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const{ return m_endTime; }

    /**
     * <p> An ISO 8601-formatted timestamp that indicates the end time of the requested
     * finding history.</p> <p>If you provide values for both <code>StartTime</code>
     * and <code>EndTime</code>, Security Hub returns finding history for the specified
     * time period. If you provide a value for <code>StartTime</code> but not for
     * <code>EndTime</code>, Security Hub returns finding history from the
     * <code>StartTime</code> to the time at which the API is called. If you provide a
     * value for <code>EndTime</code> but not for <code>StartTime</code>, Security Hub
     * returns finding history from the <a
     * href="https://docs.aws.amazon.com/securityhub/1.0/APIReference/API_AwsSecurityFindingFilters.html#securityhub-Type-AwsSecurityFindingFilters-CreatedAt">CreatedAt</a>
     * timestamp of the finding to the <code>EndTime</code>. If you provide neither
     * <code>StartTime</code> nor <code>EndTime</code>, Security Hub returns finding
     * history from the CreatedAt timestamp of the finding to the time at which the API
     * is called. In all of these scenarios, the response is limited to 100 results,
     * and the maximum time period is limited to 90 days.</p> <p>This field accepts
     * only the specified formats. Timestamps can end with <code>Z</code> or <code>("+"
     * / "-") time-hour [":" time-minute]</code>. The time-secfrac after seconds is
     * limited to a maximum of 9 digits. The offset is bounded by +/-18:00. Here are
     * valid timestamp formats with examples:</p> <ul> <li> <p>
     * <code>YYYY-MM-DDTHH:MM:SSZ</code> (for example,
     * <code>2019-01-31T23:00:00Z</code>)</p> </li> <li> <p>
     * <code>YYYY-MM-DDTHH:MM:SS.mmmmmmmmmZ</code> (for example,
     * <code>2019-01-31T23:00:00.123456789Z</code>)</p> </li> <li> <p>
     * <code>YYYY-MM-DDTHH:MM:SS+HH:MM</code> (for example,
     * <code>2024-01-04T15:25:10+17:59</code>)</p> </li> <li> <p>
     * <code>YYYY-MM-DDTHH:MM:SS-HHMM</code> (for example,
     * <code>2024-01-04T15:25:10-1759</code>)</p> </li> <li> <p>
     * <code>YYYY-MM-DDTHH:MM:SS.mmmmmmmmm+HH:MM</code> (for example,
     * <code>2024-01-04T15:25:10.123456789+17:59</code>)</p> </li> </ul>
     */
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }

    /**
     * <p> An ISO 8601-formatted timestamp that indicates the end time of the requested
     * finding history.</p> <p>If you provide values for both <code>StartTime</code>
     * and <code>EndTime</code>, Security Hub returns finding history for the specified
     * time period. If you provide a value for <code>StartTime</code> but not for
     * <code>EndTime</code>, Security Hub returns finding history from the
     * <code>StartTime</code> to the time at which the API is called. If you provide a
     * value for <code>EndTime</code> but not for <code>StartTime</code>, Security Hub
     * returns finding history from the <a
     * href="https://docs.aws.amazon.com/securityhub/1.0/APIReference/API_AwsSecurityFindingFilters.html#securityhub-Type-AwsSecurityFindingFilters-CreatedAt">CreatedAt</a>
     * timestamp of the finding to the <code>EndTime</code>. If you provide neither
     * <code>StartTime</code> nor <code>EndTime</code>, Security Hub returns finding
     * history from the CreatedAt timestamp of the finding to the time at which the API
     * is called. In all of these scenarios, the response is limited to 100 results,
     * and the maximum time period is limited to 90 days.</p> <p>This field accepts
     * only the specified formats. Timestamps can end with <code>Z</code> or <code>("+"
     * / "-") time-hour [":" time-minute]</code>. The time-secfrac after seconds is
     * limited to a maximum of 9 digits. The offset is bounded by +/-18:00. Here are
     * valid timestamp formats with examples:</p> <ul> <li> <p>
     * <code>YYYY-MM-DDTHH:MM:SSZ</code> (for example,
     * <code>2019-01-31T23:00:00Z</code>)</p> </li> <li> <p>
     * <code>YYYY-MM-DDTHH:MM:SS.mmmmmmmmmZ</code> (for example,
     * <code>2019-01-31T23:00:00.123456789Z</code>)</p> </li> <li> <p>
     * <code>YYYY-MM-DDTHH:MM:SS+HH:MM</code> (for example,
     * <code>2024-01-04T15:25:10+17:59</code>)</p> </li> <li> <p>
     * <code>YYYY-MM-DDTHH:MM:SS-HHMM</code> (for example,
     * <code>2024-01-04T15:25:10-1759</code>)</p> </li> <li> <p>
     * <code>YYYY-MM-DDTHH:MM:SS.mmmmmmmmm+HH:MM</code> (for example,
     * <code>2024-01-04T15:25:10.123456789+17:59</code>)</p> </li> </ul>
     */
    inline void SetEndTime(const Aws::Utils::DateTime& value) { m_endTimeHasBeenSet = true; m_endTime = value; }

    /**
     * <p> An ISO 8601-formatted timestamp that indicates the end time of the requested
     * finding history.</p> <p>If you provide values for both <code>StartTime</code>
     * and <code>EndTime</code>, Security Hub returns finding history for the specified
     * time period. If you provide a value for <code>StartTime</code> but not for
     * <code>EndTime</code>, Security Hub returns finding history from the
     * <code>StartTime</code> to the time at which the API is called. If you provide a
     * value for <code>EndTime</code> but not for <code>StartTime</code>, Security Hub
     * returns finding history from the <a
     * href="https://docs.aws.amazon.com/securityhub/1.0/APIReference/API_AwsSecurityFindingFilters.html#securityhub-Type-AwsSecurityFindingFilters-CreatedAt">CreatedAt</a>
     * timestamp of the finding to the <code>EndTime</code>. If you provide neither
     * <code>StartTime</code> nor <code>EndTime</code>, Security Hub returns finding
     * history from the CreatedAt timestamp of the finding to the time at which the API
     * is called. In all of these scenarios, the response is limited to 100 results,
     * and the maximum time period is limited to 90 days.</p> <p>This field accepts
     * only the specified formats. Timestamps can end with <code>Z</code> or <code>("+"
     * / "-") time-hour [":" time-minute]</code>. The time-secfrac after seconds is
     * limited to a maximum of 9 digits. The offset is bounded by +/-18:00. Here are
     * valid timestamp formats with examples:</p> <ul> <li> <p>
     * <code>YYYY-MM-DDTHH:MM:SSZ</code> (for example,
     * <code>2019-01-31T23:00:00Z</code>)</p> </li> <li> <p>
     * <code>YYYY-MM-DDTHH:MM:SS.mmmmmmmmmZ</code> (for example,
     * <code>2019-01-31T23:00:00.123456789Z</code>)</p> </li> <li> <p>
     * <code>YYYY-MM-DDTHH:MM:SS+HH:MM</code> (for example,
     * <code>2024-01-04T15:25:10+17:59</code>)</p> </li> <li> <p>
     * <code>YYYY-MM-DDTHH:MM:SS-HHMM</code> (for example,
     * <code>2024-01-04T15:25:10-1759</code>)</p> </li> <li> <p>
     * <code>YYYY-MM-DDTHH:MM:SS.mmmmmmmmm+HH:MM</code> (for example,
     * <code>2024-01-04T15:25:10.123456789+17:59</code>)</p> </li> </ul>
     */
    inline void SetEndTime(Aws::Utils::DateTime&& value) { m_endTimeHasBeenSet = true; m_endTime = std::move(value); }

    /**
     * <p> An ISO 8601-formatted timestamp that indicates the end time of the requested
     * finding history.</p> <p>If you provide values for both <code>StartTime</code>
     * and <code>EndTime</code>, Security Hub returns finding history for the specified
     * time period. If you provide a value for <code>StartTime</code> but not for
     * <code>EndTime</code>, Security Hub returns finding history from the
     * <code>StartTime</code> to the time at which the API is called. If you provide a
     * value for <code>EndTime</code> but not for <code>StartTime</code>, Security Hub
     * returns finding history from the <a
     * href="https://docs.aws.amazon.com/securityhub/1.0/APIReference/API_AwsSecurityFindingFilters.html#securityhub-Type-AwsSecurityFindingFilters-CreatedAt">CreatedAt</a>
     * timestamp of the finding to the <code>EndTime</code>. If you provide neither
     * <code>StartTime</code> nor <code>EndTime</code>, Security Hub returns finding
     * history from the CreatedAt timestamp of the finding to the time at which the API
     * is called. In all of these scenarios, the response is limited to 100 results,
     * and the maximum time period is limited to 90 days.</p> <p>This field accepts
     * only the specified formats. Timestamps can end with <code>Z</code> or <code>("+"
     * / "-") time-hour [":" time-minute]</code>. The time-secfrac after seconds is
     * limited to a maximum of 9 digits. The offset is bounded by +/-18:00. Here are
     * valid timestamp formats with examples:</p> <ul> <li> <p>
     * <code>YYYY-MM-DDTHH:MM:SSZ</code> (for example,
     * <code>2019-01-31T23:00:00Z</code>)</p> </li> <li> <p>
     * <code>YYYY-MM-DDTHH:MM:SS.mmmmmmmmmZ</code> (for example,
     * <code>2019-01-31T23:00:00.123456789Z</code>)</p> </li> <li> <p>
     * <code>YYYY-MM-DDTHH:MM:SS+HH:MM</code> (for example,
     * <code>2024-01-04T15:25:10+17:59</code>)</p> </li> <li> <p>
     * <code>YYYY-MM-DDTHH:MM:SS-HHMM</code> (for example,
     * <code>2024-01-04T15:25:10-1759</code>)</p> </li> <li> <p>
     * <code>YYYY-MM-DDTHH:MM:SS.mmmmmmmmm+HH:MM</code> (for example,
     * <code>2024-01-04T15:25:10.123456789+17:59</code>)</p> </li> </ul>
     */
    inline GetFindingHistoryRequest& WithEndTime(const Aws::Utils::DateTime& value) { SetEndTime(value); return *this;}

    /**
     * <p> An ISO 8601-formatted timestamp that indicates the end time of the requested
     * finding history.</p> <p>If you provide values for both <code>StartTime</code>
     * and <code>EndTime</code>, Security Hub returns finding history for the specified
     * time period. If you provide a value for <code>StartTime</code> but not for
     * <code>EndTime</code>, Security Hub returns finding history from the
     * <code>StartTime</code> to the time at which the API is called. If you provide a
     * value for <code>EndTime</code> but not for <code>StartTime</code>, Security Hub
     * returns finding history from the <a
     * href="https://docs.aws.amazon.com/securityhub/1.0/APIReference/API_AwsSecurityFindingFilters.html#securityhub-Type-AwsSecurityFindingFilters-CreatedAt">CreatedAt</a>
     * timestamp of the finding to the <code>EndTime</code>. If you provide neither
     * <code>StartTime</code> nor <code>EndTime</code>, Security Hub returns finding
     * history from the CreatedAt timestamp of the finding to the time at which the API
     * is called. In all of these scenarios, the response is limited to 100 results,
     * and the maximum time period is limited to 90 days.</p> <p>This field accepts
     * only the specified formats. Timestamps can end with <code>Z</code> or <code>("+"
     * / "-") time-hour [":" time-minute]</code>. The time-secfrac after seconds is
     * limited to a maximum of 9 digits. The offset is bounded by +/-18:00. Here are
     * valid timestamp formats with examples:</p> <ul> <li> <p>
     * <code>YYYY-MM-DDTHH:MM:SSZ</code> (for example,
     * <code>2019-01-31T23:00:00Z</code>)</p> </li> <li> <p>
     * <code>YYYY-MM-DDTHH:MM:SS.mmmmmmmmmZ</code> (for example,
     * <code>2019-01-31T23:00:00.123456789Z</code>)</p> </li> <li> <p>
     * <code>YYYY-MM-DDTHH:MM:SS+HH:MM</code> (for example,
     * <code>2024-01-04T15:25:10+17:59</code>)</p> </li> <li> <p>
     * <code>YYYY-MM-DDTHH:MM:SS-HHMM</code> (for example,
     * <code>2024-01-04T15:25:10-1759</code>)</p> </li> <li> <p>
     * <code>YYYY-MM-DDTHH:MM:SS.mmmmmmmmm+HH:MM</code> (for example,
     * <code>2024-01-04T15:25:10.123456789+17:59</code>)</p> </li> </ul>
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
