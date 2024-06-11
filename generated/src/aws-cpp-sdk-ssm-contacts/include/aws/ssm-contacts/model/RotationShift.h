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


    ///@{
    /**
     * <p>The Amazon Resource Names (ARNs) of the contacts who are part of the shift
     * rotation. </p>
     */
    inline const Aws::Vector<Aws::String>& GetContactIds() const{ return m_contactIds; }
    inline bool ContactIdsHasBeenSet() const { return m_contactIdsHasBeenSet; }
    inline void SetContactIds(const Aws::Vector<Aws::String>& value) { m_contactIdsHasBeenSet = true; m_contactIds = value; }
    inline void SetContactIds(Aws::Vector<Aws::String>&& value) { m_contactIdsHasBeenSet = true; m_contactIds = std::move(value); }
    inline RotationShift& WithContactIds(const Aws::Vector<Aws::String>& value) { SetContactIds(value); return *this;}
    inline RotationShift& WithContactIds(Aws::Vector<Aws::String>&& value) { SetContactIds(std::move(value)); return *this;}
    inline RotationShift& AddContactIds(const Aws::String& value) { m_contactIdsHasBeenSet = true; m_contactIds.push_back(value); return *this; }
    inline RotationShift& AddContactIds(Aws::String&& value) { m_contactIdsHasBeenSet = true; m_contactIds.push_back(std::move(value)); return *this; }
    inline RotationShift& AddContactIds(const char* value) { m_contactIdsHasBeenSet = true; m_contactIds.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The time a shift rotation begins.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTimeHasBeenSet = true; m_startTime = value; }
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }
    inline RotationShift& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}
    inline RotationShift& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time a shift rotation ends.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const{ return m_endTime; }
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }
    inline void SetEndTime(const Aws::Utils::DateTime& value) { m_endTimeHasBeenSet = true; m_endTime = value; }
    inline void SetEndTime(Aws::Utils::DateTime&& value) { m_endTimeHasBeenSet = true; m_endTime = std::move(value); }
    inline RotationShift& WithEndTime(const Aws::Utils::DateTime& value) { SetEndTime(value); return *this;}
    inline RotationShift& WithEndTime(Aws::Utils::DateTime&& value) { SetEndTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of shift rotation.</p>
     */
    inline const ShiftType& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const ShiftType& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(ShiftType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline RotationShift& WithType(const ShiftType& value) { SetType(value); return *this;}
    inline RotationShift& WithType(ShiftType&& value) { SetType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Additional information about an on-call rotation shift.</p>
     */
    inline const ShiftDetails& GetShiftDetails() const{ return m_shiftDetails; }
    inline bool ShiftDetailsHasBeenSet() const { return m_shiftDetailsHasBeenSet; }
    inline void SetShiftDetails(const ShiftDetails& value) { m_shiftDetailsHasBeenSet = true; m_shiftDetails = value; }
    inline void SetShiftDetails(ShiftDetails&& value) { m_shiftDetailsHasBeenSet = true; m_shiftDetails = std::move(value); }
    inline RotationShift& WithShiftDetails(const ShiftDetails& value) { SetShiftDetails(value); return *this;}
    inline RotationShift& WithShiftDetails(ShiftDetails&& value) { SetShiftDetails(std::move(value)); return *this;}
    ///@}
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
