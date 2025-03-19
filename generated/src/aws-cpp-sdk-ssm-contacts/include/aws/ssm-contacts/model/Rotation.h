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
    AWS_SSMCONTACTS_API Rotation() = default;
    AWS_SSMCONTACTS_API Rotation(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSMCONTACTS_API Rotation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSMCONTACTS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the rotation.</p>
     */
    inline const Aws::String& GetRotationArn() const { return m_rotationArn; }
    inline bool RotationArnHasBeenSet() const { return m_rotationArnHasBeenSet; }
    template<typename RotationArnT = Aws::String>
    void SetRotationArn(RotationArnT&& value) { m_rotationArnHasBeenSet = true; m_rotationArn = std::forward<RotationArnT>(value); }
    template<typename RotationArnT = Aws::String>
    Rotation& WithRotationArn(RotationArnT&& value) { SetRotationArn(std::forward<RotationArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the rotation.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    Rotation& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Names (ARNs) of the contacts assigned to the rotation
     * team.</p>
     */
    inline const Aws::Vector<Aws::String>& GetContactIds() const { return m_contactIds; }
    inline bool ContactIdsHasBeenSet() const { return m_contactIdsHasBeenSet; }
    template<typename ContactIdsT = Aws::Vector<Aws::String>>
    void SetContactIds(ContactIdsT&& value) { m_contactIdsHasBeenSet = true; m_contactIds = std::forward<ContactIdsT>(value); }
    template<typename ContactIdsT = Aws::Vector<Aws::String>>
    Rotation& WithContactIds(ContactIdsT&& value) { SetContactIds(std::forward<ContactIdsT>(value)); return *this;}
    template<typename ContactIdsT = Aws::String>
    Rotation& AddContactIds(ContactIdsT&& value) { m_contactIdsHasBeenSet = true; m_contactIds.emplace_back(std::forward<ContactIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The date and time the rotation becomes active.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const { return m_startTime; }
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
    template<typename StartTimeT = Aws::Utils::DateTime>
    void SetStartTime(StartTimeT&& value) { m_startTimeHasBeenSet = true; m_startTime = std::forward<StartTimeT>(value); }
    template<typename StartTimeT = Aws::Utils::DateTime>
    Rotation& WithStartTime(StartTimeT&& value) { SetStartTime(std::forward<StartTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time zone the rotation’s activity is based on, in Internet Assigned
     * Numbers Authority (IANA) format. For example: "America/Los_Angeles", "UTC", or
     * "Asia/Seoul". </p>
     */
    inline const Aws::String& GetTimeZoneId() const { return m_timeZoneId; }
    inline bool TimeZoneIdHasBeenSet() const { return m_timeZoneIdHasBeenSet; }
    template<typename TimeZoneIdT = Aws::String>
    void SetTimeZoneId(TimeZoneIdT&& value) { m_timeZoneIdHasBeenSet = true; m_timeZoneId = std::forward<TimeZoneIdT>(value); }
    template<typename TimeZoneIdT = Aws::String>
    Rotation& WithTimeZoneId(TimeZoneIdT&& value) { SetTimeZoneId(std::forward<TimeZoneIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about when an on-call rotation is in effect and how long the
     * rotation period lasts.</p>
     */
    inline const RecurrenceSettings& GetRecurrence() const { return m_recurrence; }
    inline bool RecurrenceHasBeenSet() const { return m_recurrenceHasBeenSet; }
    template<typename RecurrenceT = RecurrenceSettings>
    void SetRecurrence(RecurrenceT&& value) { m_recurrenceHasBeenSet = true; m_recurrence = std::forward<RecurrenceT>(value); }
    template<typename RecurrenceT = RecurrenceSettings>
    Rotation& WithRecurrence(RecurrenceT&& value) { SetRecurrence(std::forward<RecurrenceT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_rotationArn;
    bool m_rotationArnHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

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
