/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm-contacts/SSMContacts_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
#include <aws/ssm-contacts/model/RecurrenceSettings.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace SSMContacts
{
namespace Model
{

  /**
   * <p>Information about a rotation in an on-call schedule.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-contacts-2021-05-03/Rotation">AWS
   * API Reference</a></p>
   */
  class Rotation
  {
  public:
    AWS_SSMCONTACTS_API Rotation();
    AWS_SSMCONTACTS_API Rotation(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSMCONTACTS_API Rotation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSMCONTACTS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) of the rotation.</p>
     */
    inline const Aws::String& GetRotationArn() const{ return m_rotationArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the rotation.</p>
     */
    inline bool RotationArnHasBeenSet() const { return m_rotationArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the rotation.</p>
     */
    inline void SetRotationArn(const Aws::String& value) { m_rotationArnHasBeenSet = true; m_rotationArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the rotation.</p>
     */
    inline void SetRotationArn(Aws::String&& value) { m_rotationArnHasBeenSet = true; m_rotationArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the rotation.</p>
     */
    inline void SetRotationArn(const char* value) { m_rotationArnHasBeenSet = true; m_rotationArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the rotation.</p>
     */
    inline Rotation& WithRotationArn(const Aws::String& value) { SetRotationArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the rotation.</p>
     */
    inline Rotation& WithRotationArn(Aws::String&& value) { SetRotationArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the rotation.</p>
     */
    inline Rotation& WithRotationArn(const char* value) { SetRotationArn(value); return *this;}


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
    inline Rotation& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the rotation.</p>
     */
    inline Rotation& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the rotation.</p>
     */
    inline Rotation& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The Amazon Resource Names (ARNs) of the contacts assigned to the rotation
     * team.</p>
     */
    inline const Aws::Vector<Aws::String>& GetContactIds() const{ return m_contactIds; }

    /**
     * <p>The Amazon Resource Names (ARNs) of the contacts assigned to the rotation
     * team.</p>
     */
    inline bool ContactIdsHasBeenSet() const { return m_contactIdsHasBeenSet; }

    /**
     * <p>The Amazon Resource Names (ARNs) of the contacts assigned to the rotation
     * team.</p>
     */
    inline void SetContactIds(const Aws::Vector<Aws::String>& value) { m_contactIdsHasBeenSet = true; m_contactIds = value; }

    /**
     * <p>The Amazon Resource Names (ARNs) of the contacts assigned to the rotation
     * team.</p>
     */
    inline void SetContactIds(Aws::Vector<Aws::String>&& value) { m_contactIdsHasBeenSet = true; m_contactIds = std::move(value); }

    /**
     * <p>The Amazon Resource Names (ARNs) of the contacts assigned to the rotation
     * team.</p>
     */
    inline Rotation& WithContactIds(const Aws::Vector<Aws::String>& value) { SetContactIds(value); return *this;}

    /**
     * <p>The Amazon Resource Names (ARNs) of the contacts assigned to the rotation
     * team.</p>
     */
    inline Rotation& WithContactIds(Aws::Vector<Aws::String>&& value) { SetContactIds(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Names (ARNs) of the contacts assigned to the rotation
     * team.</p>
     */
    inline Rotation& AddContactIds(const Aws::String& value) { m_contactIdsHasBeenSet = true; m_contactIds.push_back(value); return *this; }

    /**
     * <p>The Amazon Resource Names (ARNs) of the contacts assigned to the rotation
     * team.</p>
     */
    inline Rotation& AddContactIds(Aws::String&& value) { m_contactIdsHasBeenSet = true; m_contactIds.push_back(std::move(value)); return *this; }

    /**
     * <p>The Amazon Resource Names (ARNs) of the contacts assigned to the rotation
     * team.</p>
     */
    inline Rotation& AddContactIds(const char* value) { m_contactIdsHasBeenSet = true; m_contactIds.push_back(value); return *this; }


    /**
     * <p>The date and time the rotation becomes active.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }

    /**
     * <p>The date and time the rotation becomes active.</p>
     */
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }

    /**
     * <p>The date and time the rotation becomes active.</p>
     */
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTimeHasBeenSet = true; m_startTime = value; }

    /**
     * <p>The date and time the rotation becomes active.</p>
     */
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }

    /**
     * <p>The date and time the rotation becomes active.</p>
     */
    inline Rotation& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}

    /**
     * <p>The date and time the rotation becomes active.</p>
     */
    inline Rotation& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}


    /**
     * <p>The time zone the rotation’s activity is based on, in Internet Assigned
     * Numbers Authority (IANA) format. For example: "America/Los_Angeles", "UTC", or
     * "Asia/Seoul". </p>
     */
    inline const Aws::String& GetTimeZoneId() const{ return m_timeZoneId; }

    /**
     * <p>The time zone the rotation’s activity is based on, in Internet Assigned
     * Numbers Authority (IANA) format. For example: "America/Los_Angeles", "UTC", or
     * "Asia/Seoul". </p>
     */
    inline bool TimeZoneIdHasBeenSet() const { return m_timeZoneIdHasBeenSet; }

    /**
     * <p>The time zone the rotation’s activity is based on, in Internet Assigned
     * Numbers Authority (IANA) format. For example: "America/Los_Angeles", "UTC", or
     * "Asia/Seoul". </p>
     */
    inline void SetTimeZoneId(const Aws::String& value) { m_timeZoneIdHasBeenSet = true; m_timeZoneId = value; }

    /**
     * <p>The time zone the rotation’s activity is based on, in Internet Assigned
     * Numbers Authority (IANA) format. For example: "America/Los_Angeles", "UTC", or
     * "Asia/Seoul". </p>
     */
    inline void SetTimeZoneId(Aws::String&& value) { m_timeZoneIdHasBeenSet = true; m_timeZoneId = std::move(value); }

    /**
     * <p>The time zone the rotation’s activity is based on, in Internet Assigned
     * Numbers Authority (IANA) format. For example: "America/Los_Angeles", "UTC", or
     * "Asia/Seoul". </p>
     */
    inline void SetTimeZoneId(const char* value) { m_timeZoneIdHasBeenSet = true; m_timeZoneId.assign(value); }

    /**
     * <p>The time zone the rotation’s activity is based on, in Internet Assigned
     * Numbers Authority (IANA) format. For example: "America/Los_Angeles", "UTC", or
     * "Asia/Seoul". </p>
     */
    inline Rotation& WithTimeZoneId(const Aws::String& value) { SetTimeZoneId(value); return *this;}

    /**
     * <p>The time zone the rotation’s activity is based on, in Internet Assigned
     * Numbers Authority (IANA) format. For example: "America/Los_Angeles", "UTC", or
     * "Asia/Seoul". </p>
     */
    inline Rotation& WithTimeZoneId(Aws::String&& value) { SetTimeZoneId(std::move(value)); return *this;}

    /**
     * <p>The time zone the rotation’s activity is based on, in Internet Assigned
     * Numbers Authority (IANA) format. For example: "America/Los_Angeles", "UTC", or
     * "Asia/Seoul". </p>
     */
    inline Rotation& WithTimeZoneId(const char* value) { SetTimeZoneId(value); return *this;}


    /**
     * <p>Information about when an on-call rotation is in effect and how long the
     * rotation period lasts.</p>
     */
    inline const RecurrenceSettings& GetRecurrence() const{ return m_recurrence; }

    /**
     * <p>Information about when an on-call rotation is in effect and how long the
     * rotation period lasts.</p>
     */
    inline bool RecurrenceHasBeenSet() const { return m_recurrenceHasBeenSet; }

    /**
     * <p>Information about when an on-call rotation is in effect and how long the
     * rotation period lasts.</p>
     */
    inline void SetRecurrence(const RecurrenceSettings& value) { m_recurrenceHasBeenSet = true; m_recurrence = value; }

    /**
     * <p>Information about when an on-call rotation is in effect and how long the
     * rotation period lasts.</p>
     */
    inline void SetRecurrence(RecurrenceSettings&& value) { m_recurrenceHasBeenSet = true; m_recurrence = std::move(value); }

    /**
     * <p>Information about when an on-call rotation is in effect and how long the
     * rotation period lasts.</p>
     */
    inline Rotation& WithRecurrence(const RecurrenceSettings& value) { SetRecurrence(value); return *this;}

    /**
     * <p>Information about when an on-call rotation is in effect and how long the
     * rotation period lasts.</p>
     */
    inline Rotation& WithRecurrence(RecurrenceSettings&& value) { SetRecurrence(std::move(value)); return *this;}

  private:

    Aws::String m_rotationArn;
    bool m_rotationArnHasBeenSet = false;

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
  };

} // namespace Model
} // namespace SSMContacts
} // namespace Aws
