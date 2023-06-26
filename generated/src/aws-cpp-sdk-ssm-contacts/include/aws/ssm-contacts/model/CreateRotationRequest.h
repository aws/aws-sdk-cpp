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
#include <aws/ssm-contacts/model/Tag.h>
#include <utility>

namespace Aws
{
namespace SSMContacts
{
namespace Model
{

  /**
   */
  class CreateRotationRequest : public SSMContactsRequest
  {
  public:
    AWS_SSMCONTACTS_API CreateRotationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateRotation"; }

    AWS_SSMCONTACTS_API Aws::String SerializePayload() const override;

    AWS_SSMCONTACTS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the rotation.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the rotation.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the rotation.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the rotation.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the rotation.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the rotation.</p>
     */
    inline CreateRotationRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the rotation.</p>
     */
    inline CreateRotationRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the rotation.</p>
     */
    inline CreateRotationRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The Amazon Resource Names (ARNs) of the contacts to add to the rotation.</p>
     * <p>The order that you list the contacts in is their shift order in the rotation
     * schedule. To change the order of the contact's shifts, use the
     * <a>UpdateRotation</a> operation.</p>
     */
    inline const Aws::Vector<Aws::String>& GetContactIds() const{ return m_contactIds; }

    /**
     * <p>The Amazon Resource Names (ARNs) of the contacts to add to the rotation.</p>
     * <p>The order that you list the contacts in is their shift order in the rotation
     * schedule. To change the order of the contact's shifts, use the
     * <a>UpdateRotation</a> operation.</p>
     */
    inline bool ContactIdsHasBeenSet() const { return m_contactIdsHasBeenSet; }

    /**
     * <p>The Amazon Resource Names (ARNs) of the contacts to add to the rotation.</p>
     * <p>The order that you list the contacts in is their shift order in the rotation
     * schedule. To change the order of the contact's shifts, use the
     * <a>UpdateRotation</a> operation.</p>
     */
    inline void SetContactIds(const Aws::Vector<Aws::String>& value) { m_contactIdsHasBeenSet = true; m_contactIds = value; }

    /**
     * <p>The Amazon Resource Names (ARNs) of the contacts to add to the rotation.</p>
     * <p>The order that you list the contacts in is their shift order in the rotation
     * schedule. To change the order of the contact's shifts, use the
     * <a>UpdateRotation</a> operation.</p>
     */
    inline void SetContactIds(Aws::Vector<Aws::String>&& value) { m_contactIdsHasBeenSet = true; m_contactIds = std::move(value); }

    /**
     * <p>The Amazon Resource Names (ARNs) of the contacts to add to the rotation.</p>
     * <p>The order that you list the contacts in is their shift order in the rotation
     * schedule. To change the order of the contact's shifts, use the
     * <a>UpdateRotation</a> operation.</p>
     */
    inline CreateRotationRequest& WithContactIds(const Aws::Vector<Aws::String>& value) { SetContactIds(value); return *this;}

    /**
     * <p>The Amazon Resource Names (ARNs) of the contacts to add to the rotation.</p>
     * <p>The order that you list the contacts in is their shift order in the rotation
     * schedule. To change the order of the contact's shifts, use the
     * <a>UpdateRotation</a> operation.</p>
     */
    inline CreateRotationRequest& WithContactIds(Aws::Vector<Aws::String>&& value) { SetContactIds(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Names (ARNs) of the contacts to add to the rotation.</p>
     * <p>The order that you list the contacts in is their shift order in the rotation
     * schedule. To change the order of the contact's shifts, use the
     * <a>UpdateRotation</a> operation.</p>
     */
    inline CreateRotationRequest& AddContactIds(const Aws::String& value) { m_contactIdsHasBeenSet = true; m_contactIds.push_back(value); return *this; }

    /**
     * <p>The Amazon Resource Names (ARNs) of the contacts to add to the rotation.</p>
     * <p>The order that you list the contacts in is their shift order in the rotation
     * schedule. To change the order of the contact's shifts, use the
     * <a>UpdateRotation</a> operation.</p>
     */
    inline CreateRotationRequest& AddContactIds(Aws::String&& value) { m_contactIdsHasBeenSet = true; m_contactIds.push_back(std::move(value)); return *this; }

    /**
     * <p>The Amazon Resource Names (ARNs) of the contacts to add to the rotation.</p>
     * <p>The order that you list the contacts in is their shift order in the rotation
     * schedule. To change the order of the contact's shifts, use the
     * <a>UpdateRotation</a> operation.</p>
     */
    inline CreateRotationRequest& AddContactIds(const char* value) { m_contactIdsHasBeenSet = true; m_contactIds.push_back(value); return *this; }


    /**
     * <p>The date and time that the rotation goes into effect.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }

    /**
     * <p>The date and time that the rotation goes into effect.</p>
     */
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }

    /**
     * <p>The date and time that the rotation goes into effect.</p>
     */
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTimeHasBeenSet = true; m_startTime = value; }

    /**
     * <p>The date and time that the rotation goes into effect.</p>
     */
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }

    /**
     * <p>The date and time that the rotation goes into effect.</p>
     */
    inline CreateRotationRequest& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}

    /**
     * <p>The date and time that the rotation goes into effect.</p>
     */
    inline CreateRotationRequest& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}


    /**
     * <p>The time zone to base the rotation’s activity on in Internet Assigned Numbers
     * Authority (IANA) format. For example: "America/Los_Angeles", "UTC", or
     * "Asia/Seoul". For more information, see the <a
     * href="https://www.iana.org/time-zones">Time Zone Database</a> on the IANA
     * website.</p>  <p>Designators for time zones that don’t support Daylight
     * Savings Time rules, such as Pacific Standard Time (PST) and Pacific Daylight
     * Time (PDT), are not supported.</p> 
     */
    inline const Aws::String& GetTimeZoneId() const{ return m_timeZoneId; }

    /**
     * <p>The time zone to base the rotation’s activity on in Internet Assigned Numbers
     * Authority (IANA) format. For example: "America/Los_Angeles", "UTC", or
     * "Asia/Seoul". For more information, see the <a
     * href="https://www.iana.org/time-zones">Time Zone Database</a> on the IANA
     * website.</p>  <p>Designators for time zones that don’t support Daylight
     * Savings Time rules, such as Pacific Standard Time (PST) and Pacific Daylight
     * Time (PDT), are not supported.</p> 
     */
    inline bool TimeZoneIdHasBeenSet() const { return m_timeZoneIdHasBeenSet; }

    /**
     * <p>The time zone to base the rotation’s activity on in Internet Assigned Numbers
     * Authority (IANA) format. For example: "America/Los_Angeles", "UTC", or
     * "Asia/Seoul". For more information, see the <a
     * href="https://www.iana.org/time-zones">Time Zone Database</a> on the IANA
     * website.</p>  <p>Designators for time zones that don’t support Daylight
     * Savings Time rules, such as Pacific Standard Time (PST) and Pacific Daylight
     * Time (PDT), are not supported.</p> 
     */
    inline void SetTimeZoneId(const Aws::String& value) { m_timeZoneIdHasBeenSet = true; m_timeZoneId = value; }

    /**
     * <p>The time zone to base the rotation’s activity on in Internet Assigned Numbers
     * Authority (IANA) format. For example: "America/Los_Angeles", "UTC", or
     * "Asia/Seoul". For more information, see the <a
     * href="https://www.iana.org/time-zones">Time Zone Database</a> on the IANA
     * website.</p>  <p>Designators for time zones that don’t support Daylight
     * Savings Time rules, such as Pacific Standard Time (PST) and Pacific Daylight
     * Time (PDT), are not supported.</p> 
     */
    inline void SetTimeZoneId(Aws::String&& value) { m_timeZoneIdHasBeenSet = true; m_timeZoneId = std::move(value); }

    /**
     * <p>The time zone to base the rotation’s activity on in Internet Assigned Numbers
     * Authority (IANA) format. For example: "America/Los_Angeles", "UTC", or
     * "Asia/Seoul". For more information, see the <a
     * href="https://www.iana.org/time-zones">Time Zone Database</a> on the IANA
     * website.</p>  <p>Designators for time zones that don’t support Daylight
     * Savings Time rules, such as Pacific Standard Time (PST) and Pacific Daylight
     * Time (PDT), are not supported.</p> 
     */
    inline void SetTimeZoneId(const char* value) { m_timeZoneIdHasBeenSet = true; m_timeZoneId.assign(value); }

    /**
     * <p>The time zone to base the rotation’s activity on in Internet Assigned Numbers
     * Authority (IANA) format. For example: "America/Los_Angeles", "UTC", or
     * "Asia/Seoul". For more information, see the <a
     * href="https://www.iana.org/time-zones">Time Zone Database</a> on the IANA
     * website.</p>  <p>Designators for time zones that don’t support Daylight
     * Savings Time rules, such as Pacific Standard Time (PST) and Pacific Daylight
     * Time (PDT), are not supported.</p> 
     */
    inline CreateRotationRequest& WithTimeZoneId(const Aws::String& value) { SetTimeZoneId(value); return *this;}

    /**
     * <p>The time zone to base the rotation’s activity on in Internet Assigned Numbers
     * Authority (IANA) format. For example: "America/Los_Angeles", "UTC", or
     * "Asia/Seoul". For more information, see the <a
     * href="https://www.iana.org/time-zones">Time Zone Database</a> on the IANA
     * website.</p>  <p>Designators for time zones that don’t support Daylight
     * Savings Time rules, such as Pacific Standard Time (PST) and Pacific Daylight
     * Time (PDT), are not supported.</p> 
     */
    inline CreateRotationRequest& WithTimeZoneId(Aws::String&& value) { SetTimeZoneId(std::move(value)); return *this;}

    /**
     * <p>The time zone to base the rotation’s activity on in Internet Assigned Numbers
     * Authority (IANA) format. For example: "America/Los_Angeles", "UTC", or
     * "Asia/Seoul". For more information, see the <a
     * href="https://www.iana.org/time-zones">Time Zone Database</a> on the IANA
     * website.</p>  <p>Designators for time zones that don’t support Daylight
     * Savings Time rules, such as Pacific Standard Time (PST) and Pacific Daylight
     * Time (PDT), are not supported.</p> 
     */
    inline CreateRotationRequest& WithTimeZoneId(const char* value) { SetTimeZoneId(value); return *this;}


    /**
     * <p>Information about the rule that specifies when a shift's team members
     * rotate.</p>
     */
    inline const RecurrenceSettings& GetRecurrence() const{ return m_recurrence; }

    /**
     * <p>Information about the rule that specifies when a shift's team members
     * rotate.</p>
     */
    inline bool RecurrenceHasBeenSet() const { return m_recurrenceHasBeenSet; }

    /**
     * <p>Information about the rule that specifies when a shift's team members
     * rotate.</p>
     */
    inline void SetRecurrence(const RecurrenceSettings& value) { m_recurrenceHasBeenSet = true; m_recurrence = value; }

    /**
     * <p>Information about the rule that specifies when a shift's team members
     * rotate.</p>
     */
    inline void SetRecurrence(RecurrenceSettings&& value) { m_recurrenceHasBeenSet = true; m_recurrence = std::move(value); }

    /**
     * <p>Information about the rule that specifies when a shift's team members
     * rotate.</p>
     */
    inline CreateRotationRequest& WithRecurrence(const RecurrenceSettings& value) { SetRecurrence(value); return *this;}

    /**
     * <p>Information about the rule that specifies when a shift's team members
     * rotate.</p>
     */
    inline CreateRotationRequest& WithRecurrence(RecurrenceSettings&& value) { SetRecurrence(std::move(value)); return *this;}


    /**
     * <p>Optional metadata to assign to the rotation. Tags enable you to categorize a
     * resource in different ways, such as by purpose, owner, or environment. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/incident-manager/latest/userguide/tagging.html">Tagging
     * Incident Manager resources</a> in the <i>Incident Manager User Guide</i>.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>Optional metadata to assign to the rotation. Tags enable you to categorize a
     * resource in different ways, such as by purpose, owner, or environment. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/incident-manager/latest/userguide/tagging.html">Tagging
     * Incident Manager resources</a> in the <i>Incident Manager User Guide</i>.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>Optional metadata to assign to the rotation. Tags enable you to categorize a
     * resource in different ways, such as by purpose, owner, or environment. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/incident-manager/latest/userguide/tagging.html">Tagging
     * Incident Manager resources</a> in the <i>Incident Manager User Guide</i>.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>Optional metadata to assign to the rotation. Tags enable you to categorize a
     * resource in different ways, such as by purpose, owner, or environment. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/incident-manager/latest/userguide/tagging.html">Tagging
     * Incident Manager resources</a> in the <i>Incident Manager User Guide</i>.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>Optional metadata to assign to the rotation. Tags enable you to categorize a
     * resource in different ways, such as by purpose, owner, or environment. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/incident-manager/latest/userguide/tagging.html">Tagging
     * Incident Manager resources</a> in the <i>Incident Manager User Guide</i>.</p>
     */
    inline CreateRotationRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>Optional metadata to assign to the rotation. Tags enable you to categorize a
     * resource in different ways, such as by purpose, owner, or environment. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/incident-manager/latest/userguide/tagging.html">Tagging
     * Incident Manager resources</a> in the <i>Incident Manager User Guide</i>.</p>
     */
    inline CreateRotationRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>Optional metadata to assign to the rotation. Tags enable you to categorize a
     * resource in different ways, such as by purpose, owner, or environment. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/incident-manager/latest/userguide/tagging.html">Tagging
     * Incident Manager resources</a> in the <i>Incident Manager User Guide</i>.</p>
     */
    inline CreateRotationRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>Optional metadata to assign to the rotation. Tags enable you to categorize a
     * resource in different ways, such as by purpose, owner, or environment. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/incident-manager/latest/userguide/tagging.html">Tagging
     * Incident Manager resources</a> in the <i>Incident Manager User Guide</i>.</p>
     */
    inline CreateRotationRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }


    /**
     * <p>A token that ensures that the operation is called only once with the
     * specified details.</p>
     */
    inline const Aws::String& GetIdempotencyToken() const{ return m_idempotencyToken; }

    /**
     * <p>A token that ensures that the operation is called only once with the
     * specified details.</p>
     */
    inline bool IdempotencyTokenHasBeenSet() const { return m_idempotencyTokenHasBeenSet; }

    /**
     * <p>A token that ensures that the operation is called only once with the
     * specified details.</p>
     */
    inline void SetIdempotencyToken(const Aws::String& value) { m_idempotencyTokenHasBeenSet = true; m_idempotencyToken = value; }

    /**
     * <p>A token that ensures that the operation is called only once with the
     * specified details.</p>
     */
    inline void SetIdempotencyToken(Aws::String&& value) { m_idempotencyTokenHasBeenSet = true; m_idempotencyToken = std::move(value); }

    /**
     * <p>A token that ensures that the operation is called only once with the
     * specified details.</p>
     */
    inline void SetIdempotencyToken(const char* value) { m_idempotencyTokenHasBeenSet = true; m_idempotencyToken.assign(value); }

    /**
     * <p>A token that ensures that the operation is called only once with the
     * specified details.</p>
     */
    inline CreateRotationRequest& WithIdempotencyToken(const Aws::String& value) { SetIdempotencyToken(value); return *this;}

    /**
     * <p>A token that ensures that the operation is called only once with the
     * specified details.</p>
     */
    inline CreateRotationRequest& WithIdempotencyToken(Aws::String&& value) { SetIdempotencyToken(std::move(value)); return *this;}

    /**
     * <p>A token that ensures that the operation is called only once with the
     * specified details.</p>
     */
    inline CreateRotationRequest& WithIdempotencyToken(const char* value) { SetIdempotencyToken(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Vector<Aws::String> m_contactIds;
    bool m_contactIdsHasBeenSet = false;

    Aws::Utils::DateTime m_startTime;
    bool m_startTimeHasBeenSet = false;

    Aws::String m_timeZoneId;
    bool m_timeZoneIdHasBeenSet = false;

    RecurrenceSettings m_recurrence;
    bool m_recurrenceHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_idempotencyToken;
    bool m_idempotencyTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace SSMContacts
} // namespace Aws
