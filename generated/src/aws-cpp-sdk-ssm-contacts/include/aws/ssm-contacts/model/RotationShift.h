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
    AWS_SSMCONTACTS_API RotationShift() = default;
    AWS_SSMCONTACTS_API RotationShift(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSMCONTACTS_API RotationShift& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSMCONTACTS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Names (ARNs) of the contacts who are part of the shift
     * rotation. </p>
     */
    inline const Aws::Vector<Aws::String>& GetContactIds() const { return m_contactIds; }
    inline bool ContactIdsHasBeenSet() const { return m_contactIdsHasBeenSet; }
    template<typename ContactIdsT = Aws::Vector<Aws::String>>
    void SetContactIds(ContactIdsT&& value) { m_contactIdsHasBeenSet = true; m_contactIds = std::forward<ContactIdsT>(value); }
    template<typename ContactIdsT = Aws::Vector<Aws::String>>
    RotationShift& WithContactIds(ContactIdsT&& value) { SetContactIds(std::forward<ContactIdsT>(value)); return *this;}
    template<typename ContactIdsT = Aws::String>
    RotationShift& AddContactIds(ContactIdsT&& value) { m_contactIdsHasBeenSet = true; m_contactIds.emplace_back(std::forward<ContactIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The time a shift rotation begins.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const { return m_startTime; }
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
    template<typename StartTimeT = Aws::Utils::DateTime>
    void SetStartTime(StartTimeT&& value) { m_startTimeHasBeenSet = true; m_startTime = std::forward<StartTimeT>(value); }
    template<typename StartTimeT = Aws::Utils::DateTime>
    RotationShift& WithStartTime(StartTimeT&& value) { SetStartTime(std::forward<StartTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time a shift rotation ends.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const { return m_endTime; }
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }
    template<typename EndTimeT = Aws::Utils::DateTime>
    void SetEndTime(EndTimeT&& value) { m_endTimeHasBeenSet = true; m_endTime = std::forward<EndTimeT>(value); }
    template<typename EndTimeT = Aws::Utils::DateTime>
    RotationShift& WithEndTime(EndTimeT&& value) { SetEndTime(std::forward<EndTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of shift rotation.</p>
     */
    inline ShiftType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(ShiftType value) { m_typeHasBeenSet = true; m_type = value; }
    inline RotationShift& WithType(ShiftType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Additional information about an on-call rotation shift.</p>
     */
    inline const ShiftDetails& GetShiftDetails() const { return m_shiftDetails; }
    inline bool ShiftDetailsHasBeenSet() const { return m_shiftDetailsHasBeenSet; }
    template<typename ShiftDetailsT = ShiftDetails>
    void SetShiftDetails(ShiftDetailsT&& value) { m_shiftDetailsHasBeenSet = true; m_shiftDetails = std::forward<ShiftDetailsT>(value); }
    template<typename ShiftDetailsT = ShiftDetails>
    RotationShift& WithShiftDetails(ShiftDetailsT&& value) { SetShiftDetails(std::forward<ShiftDetailsT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_contactIds;
    bool m_contactIdsHasBeenSet = false;

    Aws::Utils::DateTime m_startTime{};
    bool m_startTimeHasBeenSet = false;

    Aws::Utils::DateTime m_endTime{};
    bool m_endTimeHasBeenSet = false;

    ShiftType m_type{ShiftType::NOT_SET};
    bool m_typeHasBeenSet = false;

    ShiftDetails m_shiftDetails;
    bool m_shiftDetailsHasBeenSet = false;
  };

} // namespace Model
} // namespace SSMContacts
} // namespace Aws
