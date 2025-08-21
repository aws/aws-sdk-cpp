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
    AWS_SSMCONTACTS_API UpdateRotationRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateRotation"; }

    AWS_SSMCONTACTS_API Aws::String SerializePayload() const override;

    AWS_SSMCONTACTS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the rotation to update.</p>
     */
    inline const Aws::String& GetRotationId() const { return m_rotationId; }
    inline bool RotationIdHasBeenSet() const { return m_rotationIdHasBeenSet; }
    template<typename RotationIdT = Aws::String>
    void SetRotationId(RotationIdT&& value) { m_rotationIdHasBeenSet = true; m_rotationId = std::forward<RotationIdT>(value); }
    template<typename RotationIdT = Aws::String>
    UpdateRotationRequest& WithRotationId(RotationIdT&& value) { SetRotationId(std::forward<RotationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Names (ARNs) of the contacts to include in the updated
     * rotation. </p>  <p>Only the <code>PERSONAL</code> contact type is
     * supported. The contact types <code>ESCALATION</code> and
     * <code>ONCALL_SCHEDULE</code> are not supported for this operation. </p> 
     * <p>The order in which you list the contacts is their shift order in the rotation
     * schedule.</p>
     */
    inline const Aws::Vector<Aws::String>& GetContactIds() const { return m_contactIds; }
    inline bool ContactIdsHasBeenSet() const { return m_contactIdsHasBeenSet; }
    template<typename ContactIdsT = Aws::Vector<Aws::String>>
    void SetContactIds(ContactIdsT&& value) { m_contactIdsHasBeenSet = true; m_contactIds = std::forward<ContactIdsT>(value); }
    template<typename ContactIdsT = Aws::Vector<Aws::String>>
    UpdateRotationRequest& WithContactIds(ContactIdsT&& value) { SetContactIds(std::forward<ContactIdsT>(value)); return *this;}
    template<typename ContactIdsT = Aws::String>
    UpdateRotationRequest& AddContactIds(ContactIdsT&& value) { m_contactIdsHasBeenSet = true; m_contactIds.emplace_back(std::forward<ContactIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The date and time the rotation goes into effect.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const { return m_startTime; }
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
    template<typename StartTimeT = Aws::Utils::DateTime>
    void SetStartTime(StartTimeT&& value) { m_startTimeHasBeenSet = true; m_startTime = std::forward<StartTimeT>(value); }
    template<typename StartTimeT = Aws::Utils::DateTime>
    UpdateRotationRequest& WithStartTime(StartTimeT&& value) { SetStartTime(std::forward<StartTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time zone to base the updated rotation’s activity on, in Internet
     * Assigned Numbers Authority (IANA) format. For example: "America/Los_Angeles",
     * "UTC", or "Asia/Seoul". For more information, see the <a
     * href="https://www.iana.org/time-zones">Time Zone Database</a> on the IANA
     * website.</p>  <p>Designators for time zones that don’t support Daylight
     * Savings Time Rules, such as Pacific Standard Time (PST), aren't supported.</p>
     * 
     */
    inline const Aws::String& GetTimeZoneId() const { return m_timeZoneId; }
    inline bool TimeZoneIdHasBeenSet() const { return m_timeZoneIdHasBeenSet; }
    template<typename TimeZoneIdT = Aws::String>
    void SetTimeZoneId(TimeZoneIdT&& value) { m_timeZoneIdHasBeenSet = true; m_timeZoneId = std::forward<TimeZoneIdT>(value); }
    template<typename TimeZoneIdT = Aws::String>
    UpdateRotationRequest& WithTimeZoneId(TimeZoneIdT&& value) { SetTimeZoneId(std::forward<TimeZoneIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about how long the updated rotation lasts before restarting at
     * the beginning of the shift order.</p>
     */
    inline const RecurrenceSettings& GetRecurrence() const { return m_recurrence; }
    inline bool RecurrenceHasBeenSet() const { return m_recurrenceHasBeenSet; }
    template<typename RecurrenceT = RecurrenceSettings>
    void SetRecurrence(RecurrenceT&& value) { m_recurrenceHasBeenSet = true; m_recurrence = std::forward<RecurrenceT>(value); }
    template<typename RecurrenceT = RecurrenceSettings>
    UpdateRotationRequest& WithRecurrence(RecurrenceT&& value) { SetRecurrence(std::forward<RecurrenceT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_rotationId;
    bool m_rotationIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_contactIds;
    bool m_contactIdsHasBeenSet = false;

    Aws::Utils::DateTime m_startTime{};
    bool m_startTimeHasBeenSet = false;

    Aws::String m_timeZoneId;
    bool m_timeZoneIdHasBeenSet = false;

    RecurrenceSettings m_recurrence;
    bool m_recurrenceHasBeenSet = false;
  };

} // namespace Model
} // namespace SSMContacts
} // namespace Aws
