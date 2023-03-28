/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm-contacts/SSMContacts_EXPORTS.h>
#include <aws/ssm-contacts/SSMContactsRequest.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ssm-contacts/model/RecurrenceSettings.h>
#include <aws/ssm-contacts/model/PreviewOverride.h>
#include <utility>

namespace Aws
{
namespace SSMContacts
{
namespace Model
{

  /**
   */
  class ListPreviewRotationShiftsRequest : public SSMContactsRequest
  {
  public:
    AWS_SSMCONTACTS_API ListPreviewRotationShiftsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListPreviewRotationShifts"; }

    AWS_SSMCONTACTS_API Aws::String SerializePayload() const override;

    AWS_SSMCONTACTS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The date and time a rotation would begin. The first shift is calculated from
     * this date and time.</p>
     */
    inline const Aws::Utils::DateTime& GetRotationStartTime() const{ return m_rotationStartTime; }

    /**
     * <p>The date and time a rotation would begin. The first shift is calculated from
     * this date and time.</p>
     */
    inline bool RotationStartTimeHasBeenSet() const { return m_rotationStartTimeHasBeenSet; }

    /**
     * <p>The date and time a rotation would begin. The first shift is calculated from
     * this date and time.</p>
     */
    inline void SetRotationStartTime(const Aws::Utils::DateTime& value) { m_rotationStartTimeHasBeenSet = true; m_rotationStartTime = value; }

    /**
     * <p>The date and time a rotation would begin. The first shift is calculated from
     * this date and time.</p>
     */
    inline void SetRotationStartTime(Aws::Utils::DateTime&& value) { m_rotationStartTimeHasBeenSet = true; m_rotationStartTime = std::move(value); }

    /**
     * <p>The date and time a rotation would begin. The first shift is calculated from
     * this date and time.</p>
     */
    inline ListPreviewRotationShiftsRequest& WithRotationStartTime(const Aws::Utils::DateTime& value) { SetRotationStartTime(value); return *this;}

    /**
     * <p>The date and time a rotation would begin. The first shift is calculated from
     * this date and time.</p>
     */
    inline ListPreviewRotationShiftsRequest& WithRotationStartTime(Aws::Utils::DateTime&& value) { SetRotationStartTime(std::move(value)); return *this;}


    /**
     * <p>Used to filter the range of calculated shifts before sending the response
     * back to the user. </p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }

    /**
     * <p>Used to filter the range of calculated shifts before sending the response
     * back to the user. </p>
     */
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }

    /**
     * <p>Used to filter the range of calculated shifts before sending the response
     * back to the user. </p>
     */
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTimeHasBeenSet = true; m_startTime = value; }

    /**
     * <p>Used to filter the range of calculated shifts before sending the response
     * back to the user. </p>
     */
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }

    /**
     * <p>Used to filter the range of calculated shifts before sending the response
     * back to the user. </p>
     */
    inline ListPreviewRotationShiftsRequest& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}

    /**
     * <p>Used to filter the range of calculated shifts before sending the response
     * back to the user. </p>
     */
    inline ListPreviewRotationShiftsRequest& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}


    /**
     * <p>The date and time a rotation shift would end.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const{ return m_endTime; }

    /**
     * <p>The date and time a rotation shift would end.</p>
     */
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }

    /**
     * <p>The date and time a rotation shift would end.</p>
     */
    inline void SetEndTime(const Aws::Utils::DateTime& value) { m_endTimeHasBeenSet = true; m_endTime = value; }

    /**
     * <p>The date and time a rotation shift would end.</p>
     */
    inline void SetEndTime(Aws::Utils::DateTime&& value) { m_endTimeHasBeenSet = true; m_endTime = std::move(value); }

    /**
     * <p>The date and time a rotation shift would end.</p>
     */
    inline ListPreviewRotationShiftsRequest& WithEndTime(const Aws::Utils::DateTime& value) { SetEndTime(value); return *this;}

    /**
     * <p>The date and time a rotation shift would end.</p>
     */
    inline ListPreviewRotationShiftsRequest& WithEndTime(Aws::Utils::DateTime&& value) { SetEndTime(std::move(value)); return *this;}


    /**
     * <p>The contacts that would be assigned to a rotation.</p>
     */
    inline const Aws::Vector<Aws::String>& GetMembers() const{ return m_members; }

    /**
     * <p>The contacts that would be assigned to a rotation.</p>
     */
    inline bool MembersHasBeenSet() const { return m_membersHasBeenSet; }

    /**
     * <p>The contacts that would be assigned to a rotation.</p>
     */
    inline void SetMembers(const Aws::Vector<Aws::String>& value) { m_membersHasBeenSet = true; m_members = value; }

    /**
     * <p>The contacts that would be assigned to a rotation.</p>
     */
    inline void SetMembers(Aws::Vector<Aws::String>&& value) { m_membersHasBeenSet = true; m_members = std::move(value); }

    /**
     * <p>The contacts that would be assigned to a rotation.</p>
     */
    inline ListPreviewRotationShiftsRequest& WithMembers(const Aws::Vector<Aws::String>& value) { SetMembers(value); return *this;}

    /**
     * <p>The contacts that would be assigned to a rotation.</p>
     */
    inline ListPreviewRotationShiftsRequest& WithMembers(Aws::Vector<Aws::String>&& value) { SetMembers(std::move(value)); return *this;}

    /**
     * <p>The contacts that would be assigned to a rotation.</p>
     */
    inline ListPreviewRotationShiftsRequest& AddMembers(const Aws::String& value) { m_membersHasBeenSet = true; m_members.push_back(value); return *this; }

    /**
     * <p>The contacts that would be assigned to a rotation.</p>
     */
    inline ListPreviewRotationShiftsRequest& AddMembers(Aws::String&& value) { m_membersHasBeenSet = true; m_members.push_back(std::move(value)); return *this; }

    /**
     * <p>The contacts that would be assigned to a rotation.</p>
     */
    inline ListPreviewRotationShiftsRequest& AddMembers(const char* value) { m_membersHasBeenSet = true; m_members.push_back(value); return *this; }


    /**
     * <p>The time zone the rotation’s activity would be based on, in Internet Assigned
     * Numbers Authority (IANA) format. For example: "America/Los_Angeles", "UTC", or
     * "Asia/Seoul". </p>
     */
    inline const Aws::String& GetTimeZoneId() const{ return m_timeZoneId; }

    /**
     * <p>The time zone the rotation’s activity would be based on, in Internet Assigned
     * Numbers Authority (IANA) format. For example: "America/Los_Angeles", "UTC", or
     * "Asia/Seoul". </p>
     */
    inline bool TimeZoneIdHasBeenSet() const { return m_timeZoneIdHasBeenSet; }

    /**
     * <p>The time zone the rotation’s activity would be based on, in Internet Assigned
     * Numbers Authority (IANA) format. For example: "America/Los_Angeles", "UTC", or
     * "Asia/Seoul". </p>
     */
    inline void SetTimeZoneId(const Aws::String& value) { m_timeZoneIdHasBeenSet = true; m_timeZoneId = value; }

    /**
     * <p>The time zone the rotation’s activity would be based on, in Internet Assigned
     * Numbers Authority (IANA) format. For example: "America/Los_Angeles", "UTC", or
     * "Asia/Seoul". </p>
     */
    inline void SetTimeZoneId(Aws::String&& value) { m_timeZoneIdHasBeenSet = true; m_timeZoneId = std::move(value); }

    /**
     * <p>The time zone the rotation’s activity would be based on, in Internet Assigned
     * Numbers Authority (IANA) format. For example: "America/Los_Angeles", "UTC", or
     * "Asia/Seoul". </p>
     */
    inline void SetTimeZoneId(const char* value) { m_timeZoneIdHasBeenSet = true; m_timeZoneId.assign(value); }

    /**
     * <p>The time zone the rotation’s activity would be based on, in Internet Assigned
     * Numbers Authority (IANA) format. For example: "America/Los_Angeles", "UTC", or
     * "Asia/Seoul". </p>
     */
    inline ListPreviewRotationShiftsRequest& WithTimeZoneId(const Aws::String& value) { SetTimeZoneId(value); return *this;}

    /**
     * <p>The time zone the rotation’s activity would be based on, in Internet Assigned
     * Numbers Authority (IANA) format. For example: "America/Los_Angeles", "UTC", or
     * "Asia/Seoul". </p>
     */
    inline ListPreviewRotationShiftsRequest& WithTimeZoneId(Aws::String&& value) { SetTimeZoneId(std::move(value)); return *this;}

    /**
     * <p>The time zone the rotation’s activity would be based on, in Internet Assigned
     * Numbers Authority (IANA) format. For example: "America/Los_Angeles", "UTC", or
     * "Asia/Seoul". </p>
     */
    inline ListPreviewRotationShiftsRequest& WithTimeZoneId(const char* value) { SetTimeZoneId(value); return *this;}


    /**
     * <p>Information about how long a rotation would last before restarting at the
     * beginning of the shift order.</p>
     */
    inline const RecurrenceSettings& GetRecurrence() const{ return m_recurrence; }

    /**
     * <p>Information about how long a rotation would last before restarting at the
     * beginning of the shift order.</p>
     */
    inline bool RecurrenceHasBeenSet() const { return m_recurrenceHasBeenSet; }

    /**
     * <p>Information about how long a rotation would last before restarting at the
     * beginning of the shift order.</p>
     */
    inline void SetRecurrence(const RecurrenceSettings& value) { m_recurrenceHasBeenSet = true; m_recurrence = value; }

    /**
     * <p>Information about how long a rotation would last before restarting at the
     * beginning of the shift order.</p>
     */
    inline void SetRecurrence(RecurrenceSettings&& value) { m_recurrenceHasBeenSet = true; m_recurrence = std::move(value); }

    /**
     * <p>Information about how long a rotation would last before restarting at the
     * beginning of the shift order.</p>
     */
    inline ListPreviewRotationShiftsRequest& WithRecurrence(const RecurrenceSettings& value) { SetRecurrence(value); return *this;}

    /**
     * <p>Information about how long a rotation would last before restarting at the
     * beginning of the shift order.</p>
     */
    inline ListPreviewRotationShiftsRequest& WithRecurrence(RecurrenceSettings&& value) { SetRecurrence(std::move(value)); return *this;}


    /**
     * <p>Information about changes that would be made in a rotation override.</p>
     */
    inline const Aws::Vector<PreviewOverride>& GetOverrides() const{ return m_overrides; }

    /**
     * <p>Information about changes that would be made in a rotation override.</p>
     */
    inline bool OverridesHasBeenSet() const { return m_overridesHasBeenSet; }

    /**
     * <p>Information about changes that would be made in a rotation override.</p>
     */
    inline void SetOverrides(const Aws::Vector<PreviewOverride>& value) { m_overridesHasBeenSet = true; m_overrides = value; }

    /**
     * <p>Information about changes that would be made in a rotation override.</p>
     */
    inline void SetOverrides(Aws::Vector<PreviewOverride>&& value) { m_overridesHasBeenSet = true; m_overrides = std::move(value); }

    /**
     * <p>Information about changes that would be made in a rotation override.</p>
     */
    inline ListPreviewRotationShiftsRequest& WithOverrides(const Aws::Vector<PreviewOverride>& value) { SetOverrides(value); return *this;}

    /**
     * <p>Information about changes that would be made in a rotation override.</p>
     */
    inline ListPreviewRotationShiftsRequest& WithOverrides(Aws::Vector<PreviewOverride>&& value) { SetOverrides(std::move(value)); return *this;}

    /**
     * <p>Information about changes that would be made in a rotation override.</p>
     */
    inline ListPreviewRotationShiftsRequest& AddOverrides(const PreviewOverride& value) { m_overridesHasBeenSet = true; m_overrides.push_back(value); return *this; }

    /**
     * <p>Information about changes that would be made in a rotation override.</p>
     */
    inline ListPreviewRotationShiftsRequest& AddOverrides(PreviewOverride&& value) { m_overridesHasBeenSet = true; m_overrides.push_back(std::move(value)); return *this; }


    /**
     * <p>A token to start the list. This token is used to get the next set of
     * results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A token to start the list. This token is used to get the next set of
     * results.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>A token to start the list. This token is used to get the next set of
     * results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>A token to start the list. This token is used to get the next set of
     * results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>A token to start the list. This token is used to get the next set of
     * results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>A token to start the list. This token is used to get the next set of
     * results.</p>
     */
    inline ListPreviewRotationShiftsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A token to start the list. This token is used to get the next set of
     * results.</p>
     */
    inline ListPreviewRotationShiftsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A token to start the list. This token is used to get the next set of
     * results.</p>
     */
    inline ListPreviewRotationShiftsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The maximum number of items to return for this call. The call also returns a
     * token that can be specified in a subsequent call to get the next set of
     * results.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of items to return for this call. The call also returns a
     * token that can be specified in a subsequent call to get the next set of
     * results.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of items to return for this call. The call also returns a
     * token that can be specified in a subsequent call to get the next set of
     * results.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of items to return for this call. The call also returns a
     * token that can be specified in a subsequent call to get the next set of
     * results.</p>
     */
    inline ListPreviewRotationShiftsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}

  private:

    Aws::Utils::DateTime m_rotationStartTime;
    bool m_rotationStartTimeHasBeenSet = false;

    Aws::Utils::DateTime m_startTime;
    bool m_startTimeHasBeenSet = false;

    Aws::Utils::DateTime m_endTime;
    bool m_endTimeHasBeenSet = false;

    Aws::Vector<Aws::String> m_members;
    bool m_membersHasBeenSet = false;

    Aws::String m_timeZoneId;
    bool m_timeZoneIdHasBeenSet = false;

    RecurrenceSettings m_recurrence;
    bool m_recurrenceHasBeenSet = false;

    Aws::Vector<PreviewOverride> m_overrides;
    bool m_overridesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace SSMContacts
} // namespace Aws
