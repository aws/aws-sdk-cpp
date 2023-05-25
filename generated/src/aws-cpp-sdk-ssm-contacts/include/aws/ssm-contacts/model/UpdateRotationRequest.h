/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm-contacts/SSMContacts_EXPORTS.h>
#include <aws/ssm-contacts/SSMContactsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
#include <aws/ssm-contacts/model/RecurrenceSettings.h>
#include <utility>

namespace Aws
{
namespace SSMContacts
{
namespace Model
{

  /**
   */
  class UpdateRotationRequest : public SSMContactsRequest
  {
  public:
    AWS_SSMCONTACTS_API UpdateRotationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateRotation"; }

    AWS_SSMCONTACTS_API Aws::String SerializePayload() const override;

    AWS_SSMCONTACTS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The Amazon Resource Name (ARN) of the rotation to update.</p>
     */
    inline const Aws::String& GetRotationId() const{ return m_rotationId; }

    /**
     * <p>The Amazon Resource Name (ARN) of the rotation to update.</p>
     */
    inline bool RotationIdHasBeenSet() const { return m_rotationIdHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the rotation to update.</p>
     */
    inline void SetRotationId(const Aws::String& value) { m_rotationIdHasBeenSet = true; m_rotationId = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the rotation to update.</p>
     */
    inline void SetRotationId(Aws::String&& value) { m_rotationIdHasBeenSet = true; m_rotationId = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the rotation to update.</p>
     */
    inline void SetRotationId(const char* value) { m_rotationIdHasBeenSet = true; m_rotationId.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the rotation to update.</p>
     */
    inline UpdateRotationRequest& WithRotationId(const Aws::String& value) { SetRotationId(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the rotation to update.</p>
     */
    inline UpdateRotationRequest& WithRotationId(Aws::String&& value) { SetRotationId(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the rotation to update.</p>
     */
    inline UpdateRotationRequest& WithRotationId(const char* value) { SetRotationId(value); return *this;}


    /**
     * <p>The Amazon Resource Names (ARNs) of the contacts to include in the updated
     * rotation. </p> <p>The order in which you list the contacts is their shift order
     * in the rotation schedule.</p>
     */
    inline const Aws::Vector<Aws::String>& GetContactIds() const{ return m_contactIds; }

    /**
     * <p>The Amazon Resource Names (ARNs) of the contacts to include in the updated
     * rotation. </p> <p>The order in which you list the contacts is their shift order
     * in the rotation schedule.</p>
     */
    inline bool ContactIdsHasBeenSet() const { return m_contactIdsHasBeenSet; }

    /**
     * <p>The Amazon Resource Names (ARNs) of the contacts to include in the updated
     * rotation. </p> <p>The order in which you list the contacts is their shift order
     * in the rotation schedule.</p>
     */
    inline void SetContactIds(const Aws::Vector<Aws::String>& value) { m_contactIdsHasBeenSet = true; m_contactIds = value; }

    /**
     * <p>The Amazon Resource Names (ARNs) of the contacts to include in the updated
     * rotation. </p> <p>The order in which you list the contacts is their shift order
     * in the rotation schedule.</p>
     */
    inline void SetContactIds(Aws::Vector<Aws::String>&& value) { m_contactIdsHasBeenSet = true; m_contactIds = std::move(value); }

    /**
     * <p>The Amazon Resource Names (ARNs) of the contacts to include in the updated
     * rotation. </p> <p>The order in which you list the contacts is their shift order
     * in the rotation schedule.</p>
     */
    inline UpdateRotationRequest& WithContactIds(const Aws::Vector<Aws::String>& value) { SetContactIds(value); return *this;}

    /**
     * <p>The Amazon Resource Names (ARNs) of the contacts to include in the updated
     * rotation. </p> <p>The order in which you list the contacts is their shift order
     * in the rotation schedule.</p>
     */
    inline UpdateRotationRequest& WithContactIds(Aws::Vector<Aws::String>&& value) { SetContactIds(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Names (ARNs) of the contacts to include in the updated
     * rotation. </p> <p>The order in which you list the contacts is their shift order
     * in the rotation schedule.</p>
     */
    inline UpdateRotationRequest& AddContactIds(const Aws::String& value) { m_contactIdsHasBeenSet = true; m_contactIds.push_back(value); return *this; }

    /**
     * <p>The Amazon Resource Names (ARNs) of the contacts to include in the updated
     * rotation. </p> <p>The order in which you list the contacts is their shift order
     * in the rotation schedule.</p>
     */
    inline UpdateRotationRequest& AddContactIds(Aws::String&& value) { m_contactIdsHasBeenSet = true; m_contactIds.push_back(std::move(value)); return *this; }

    /**
     * <p>The Amazon Resource Names (ARNs) of the contacts to include in the updated
     * rotation. </p> <p>The order in which you list the contacts is their shift order
     * in the rotation schedule.</p>
     */
    inline UpdateRotationRequest& AddContactIds(const char* value) { m_contactIdsHasBeenSet = true; m_contactIds.push_back(value); return *this; }


    /**
     * <p>The date and time the rotation goes into effect.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }

    /**
     * <p>The date and time the rotation goes into effect.</p>
     */
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }

    /**
     * <p>The date and time the rotation goes into effect.</p>
     */
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTimeHasBeenSet = true; m_startTime = value; }

    /**
     * <p>The date and time the rotation goes into effect.</p>
     */
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }

    /**
     * <p>The date and time the rotation goes into effect.</p>
     */
    inline UpdateRotationRequest& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}

    /**
     * <p>The date and time the rotation goes into effect.</p>
     */
    inline UpdateRotationRequest& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}


    /**
     * <p>The time zone to base the updated rotation’s activity on, in Internet
     * Assigned Numbers Authority (IANA) format. For example: "America/Los_Angeles",
     * "UTC", or "Asia/Seoul". For more information, see the <a
     * href="https://www.iana.org/time-zones">Time Zone Database</a> on the IANA
     * website.</p>  <p>Designators for time zones that don’t support Daylight
     * Savings Time Rules, such as Pacific Standard Time (PST) and Pacific Daylight
     * Time (PDT), aren't supported.</p> 
     */
    inline const Aws::String& GetTimeZoneId() const{ return m_timeZoneId; }

    /**
     * <p>The time zone to base the updated rotation’s activity on, in Internet
     * Assigned Numbers Authority (IANA) format. For example: "America/Los_Angeles",
     * "UTC", or "Asia/Seoul". For more information, see the <a
     * href="https://www.iana.org/time-zones">Time Zone Database</a> on the IANA
     * website.</p>  <p>Designators for time zones that don’t support Daylight
     * Savings Time Rules, such as Pacific Standard Time (PST) and Pacific Daylight
     * Time (PDT), aren't supported.</p> 
     */
    inline bool TimeZoneIdHasBeenSet() const { return m_timeZoneIdHasBeenSet; }

    /**
     * <p>The time zone to base the updated rotation’s activity on, in Internet
     * Assigned Numbers Authority (IANA) format. For example: "America/Los_Angeles",
     * "UTC", or "Asia/Seoul". For more information, see the <a
     * href="https://www.iana.org/time-zones">Time Zone Database</a> on the IANA
     * website.</p>  <p>Designators for time zones that don’t support Daylight
     * Savings Time Rules, such as Pacific Standard Time (PST) and Pacific Daylight
     * Time (PDT), aren't supported.</p> 
     */
    inline void SetTimeZoneId(const Aws::String& value) { m_timeZoneIdHasBeenSet = true; m_timeZoneId = value; }

    /**
     * <p>The time zone to base the updated rotation’s activity on, in Internet
     * Assigned Numbers Authority (IANA) format. For example: "America/Los_Angeles",
     * "UTC", or "Asia/Seoul". For more information, see the <a
     * href="https://www.iana.org/time-zones">Time Zone Database</a> on the IANA
     * website.</p>  <p>Designators for time zones that don’t support Daylight
     * Savings Time Rules, such as Pacific Standard Time (PST) and Pacific Daylight
     * Time (PDT), aren't supported.</p> 
     */
    inline void SetTimeZoneId(Aws::String&& value) { m_timeZoneIdHasBeenSet = true; m_timeZoneId = std::move(value); }

    /**
     * <p>The time zone to base the updated rotation’s activity on, in Internet
     * Assigned Numbers Authority (IANA) format. For example: "America/Los_Angeles",
     * "UTC", or "Asia/Seoul". For more information, see the <a
     * href="https://www.iana.org/time-zones">Time Zone Database</a> on the IANA
     * website.</p>  <p>Designators for time zones that don’t support Daylight
     * Savings Time Rules, such as Pacific Standard Time (PST) and Pacific Daylight
     * Time (PDT), aren't supported.</p> 
     */
    inline void SetTimeZoneId(const char* value) { m_timeZoneIdHasBeenSet = true; m_timeZoneId.assign(value); }

    /**
     * <p>The time zone to base the updated rotation’s activity on, in Internet
     * Assigned Numbers Authority (IANA) format. For example: "America/Los_Angeles",
     * "UTC", or "Asia/Seoul". For more information, see the <a
     * href="https://www.iana.org/time-zones">Time Zone Database</a> on the IANA
     * website.</p>  <p>Designators for time zones that don’t support Daylight
     * Savings Time Rules, such as Pacific Standard Time (PST) and Pacific Daylight
     * Time (PDT), aren't supported.</p> 
     */
    inline UpdateRotationRequest& WithTimeZoneId(const Aws::String& value) { SetTimeZoneId(value); return *this;}

    /**
     * <p>The time zone to base the updated rotation’s activity on, in Internet
     * Assigned Numbers Authority (IANA) format. For example: "America/Los_Angeles",
     * "UTC", or "Asia/Seoul". For more information, see the <a
     * href="https://www.iana.org/time-zones">Time Zone Database</a> on the IANA
     * website.</p>  <p>Designators for time zones that don’t support Daylight
     * Savings Time Rules, such as Pacific Standard Time (PST) and Pacific Daylight
     * Time (PDT), aren't supported.</p> 
     */
    inline UpdateRotationRequest& WithTimeZoneId(Aws::String&& value) { SetTimeZoneId(std::move(value)); return *this;}

    /**
     * <p>The time zone to base the updated rotation’s activity on, in Internet
     * Assigned Numbers Authority (IANA) format. For example: "America/Los_Angeles",
     * "UTC", or "Asia/Seoul". For more information, see the <a
     * href="https://www.iana.org/time-zones">Time Zone Database</a> on the IANA
     * website.</p>  <p>Designators for time zones that don’t support Daylight
     * Savings Time Rules, such as Pacific Standard Time (PST) and Pacific Daylight
     * Time (PDT), aren't supported.</p> 
     */
    inline UpdateRotationRequest& WithTimeZoneId(const char* value) { SetTimeZoneId(value); return *this;}


    /**
     * <p>Information about how long the updated rotation lasts before restarting at
     * the beginning of the shift order.</p>
     */
    inline const RecurrenceSettings& GetRecurrence() const{ return m_recurrence; }

    /**
     * <p>Information about how long the updated rotation lasts before restarting at
     * the beginning of the shift order.</p>
     */
    inline bool RecurrenceHasBeenSet() const { return m_recurrenceHasBeenSet; }

    /**
     * <p>Information about how long the updated rotation lasts before restarting at
     * the beginning of the shift order.</p>
     */
    inline void SetRecurrence(const RecurrenceSettings& value) { m_recurrenceHasBeenSet = true; m_recurrence = value; }

    /**
     * <p>Information about how long the updated rotation lasts before restarting at
     * the beginning of the shift order.</p>
     */
    inline void SetRecurrence(RecurrenceSettings&& value) { m_recurrenceHasBeenSet = true; m_recurrence = std::move(value); }

    /**
     * <p>Information about how long the updated rotation lasts before restarting at
     * the beginning of the shift order.</p>
     */
    inline UpdateRotationRequest& WithRecurrence(const RecurrenceSettings& value) { SetRecurrence(value); return *this;}

    /**
     * <p>Information about how long the updated rotation lasts before restarting at
     * the beginning of the shift order.</p>
     */
    inline UpdateRotationRequest& WithRecurrence(RecurrenceSettings&& value) { SetRecurrence(std::move(value)); return *this;}

  private:

    Aws::String m_rotationId;
    bool m_rotationIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_contactIds;
    bool m_contactIdsHasBeenSet = false;

    Aws::Utils::DateTime m_startTime;
    bool m_startTimeHasBeenSet = false;

    Aws::String m_timeZoneId;
    bool m_timeZoneIdHasBeenSet = false;

    RecurrenceSettings m_recurrence;
    bool m_recurrenceHasBeenSet = false;
  };

} // namespace Model
} // namespace SSMContacts
} // namespace Aws
