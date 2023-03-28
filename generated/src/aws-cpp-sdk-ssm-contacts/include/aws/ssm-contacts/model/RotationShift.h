/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm-contacts/SSMContacts_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
#include <aws/ssm-contacts/model/ShiftType.h>
#include <aws/ssm-contacts/model/ShiftDetails.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>Information about a shift that belongs to an on-call rotation.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-contacts-2021-05-03/RotationShift">AWS
   * API Reference</a></p>
   */
  class RotationShift
  {
  public:
    AWS_SSMCONTACTS_API RotationShift();
    AWS_SSMCONTACTS_API RotationShift(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSMCONTACTS_API RotationShift& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSMCONTACTS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Names (ARNs) of the contacts who are part of the shift
     * rotation. </p>
     */
    inline const Aws::Vector<Aws::String>& GetContactIds() const{ return m_contactIds; }

    /**
     * <p>The Amazon Resource Names (ARNs) of the contacts who are part of the shift
     * rotation. </p>
     */
    inline bool ContactIdsHasBeenSet() const { return m_contactIdsHasBeenSet; }

    /**
     * <p>The Amazon Resource Names (ARNs) of the contacts who are part of the shift
     * rotation. </p>
     */
    inline void SetContactIds(const Aws::Vector<Aws::String>& value) { m_contactIdsHasBeenSet = true; m_contactIds = value; }

    /**
     * <p>The Amazon Resource Names (ARNs) of the contacts who are part of the shift
     * rotation. </p>
     */
    inline void SetContactIds(Aws::Vector<Aws::String>&& value) { m_contactIdsHasBeenSet = true; m_contactIds = std::move(value); }

    /**
     * <p>The Amazon Resource Names (ARNs) of the contacts who are part of the shift
     * rotation. </p>
     */
    inline RotationShift& WithContactIds(const Aws::Vector<Aws::String>& value) { SetContactIds(value); return *this;}

    /**
     * <p>The Amazon Resource Names (ARNs) of the contacts who are part of the shift
     * rotation. </p>
     */
    inline RotationShift& WithContactIds(Aws::Vector<Aws::String>&& value) { SetContactIds(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Names (ARNs) of the contacts who are part of the shift
     * rotation. </p>
     */
    inline RotationShift& AddContactIds(const Aws::String& value) { m_contactIdsHasBeenSet = true; m_contactIds.push_back(value); return *this; }

    /**
     * <p>The Amazon Resource Names (ARNs) of the contacts who are part of the shift
     * rotation. </p>
     */
    inline RotationShift& AddContactIds(Aws::String&& value) { m_contactIdsHasBeenSet = true; m_contactIds.push_back(std::move(value)); return *this; }

    /**
     * <p>The Amazon Resource Names (ARNs) of the contacts who are part of the shift
     * rotation. </p>
     */
    inline RotationShift& AddContactIds(const char* value) { m_contactIdsHasBeenSet = true; m_contactIds.push_back(value); return *this; }


    /**
     * <p>The time a shift rotation begins.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }

    /**
     * <p>The time a shift rotation begins.</p>
     */
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }

    /**
     * <p>The time a shift rotation begins.</p>
     */
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTimeHasBeenSet = true; m_startTime = value; }

    /**
     * <p>The time a shift rotation begins.</p>
     */
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }

    /**
     * <p>The time a shift rotation begins.</p>
     */
    inline RotationShift& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}

    /**
     * <p>The time a shift rotation begins.</p>
     */
    inline RotationShift& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}


    /**
     * <p>The time a shift rotation ends.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const{ return m_endTime; }

    /**
     * <p>The time a shift rotation ends.</p>
     */
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }

    /**
     * <p>The time a shift rotation ends.</p>
     */
    inline void SetEndTime(const Aws::Utils::DateTime& value) { m_endTimeHasBeenSet = true; m_endTime = value; }

    /**
     * <p>The time a shift rotation ends.</p>
     */
    inline void SetEndTime(Aws::Utils::DateTime&& value) { m_endTimeHasBeenSet = true; m_endTime = std::move(value); }

    /**
     * <p>The time a shift rotation ends.</p>
     */
    inline RotationShift& WithEndTime(const Aws::Utils::DateTime& value) { SetEndTime(value); return *this;}

    /**
     * <p>The time a shift rotation ends.</p>
     */
    inline RotationShift& WithEndTime(Aws::Utils::DateTime&& value) { SetEndTime(std::move(value)); return *this;}


    /**
     * <p>The type of shift rotation.</p>
     */
    inline const ShiftType& GetType() const{ return m_type; }

    /**
     * <p>The type of shift rotation.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type of shift rotation.</p>
     */
    inline void SetType(const ShiftType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of shift rotation.</p>
     */
    inline void SetType(ShiftType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of shift rotation.</p>
     */
    inline RotationShift& WithType(const ShiftType& value) { SetType(value); return *this;}

    /**
     * <p>The type of shift rotation.</p>
     */
    inline RotationShift& WithType(ShiftType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>Additional information about an on-call rotation shift.</p>
     */
    inline const ShiftDetails& GetShiftDetails() const{ return m_shiftDetails; }

    /**
     * <p>Additional information about an on-call rotation shift.</p>
     */
    inline bool ShiftDetailsHasBeenSet() const { return m_shiftDetailsHasBeenSet; }

    /**
     * <p>Additional information about an on-call rotation shift.</p>
     */
    inline void SetShiftDetails(const ShiftDetails& value) { m_shiftDetailsHasBeenSet = true; m_shiftDetails = value; }

    /**
     * <p>Additional information about an on-call rotation shift.</p>
     */
    inline void SetShiftDetails(ShiftDetails&& value) { m_shiftDetailsHasBeenSet = true; m_shiftDetails = std::move(value); }

    /**
     * <p>Additional information about an on-call rotation shift.</p>
     */
    inline RotationShift& WithShiftDetails(const ShiftDetails& value) { SetShiftDetails(value); return *this;}

    /**
     * <p>Additional information about an on-call rotation shift.</p>
     */
    inline RotationShift& WithShiftDetails(ShiftDetails&& value) { SetShiftDetails(std::move(value)); return *this;}

  private:

    Aws::Vector<Aws::String> m_contactIds;
    bool m_contactIdsHasBeenSet = false;

    Aws::Utils::DateTime m_startTime;
    bool m_startTimeHasBeenSet = false;

    Aws::Utils::DateTime m_endTime;
    bool m_endTimeHasBeenSet = false;

    ShiftType m_type;
    bool m_typeHasBeenSet = false;

    ShiftDetails m_shiftDetails;
    bool m_shiftDetailsHasBeenSet = false;
  };

} // namespace Model
} // namespace SSMContacts
} // namespace Aws
