/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/pinpoint/model/DayOfWeek.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/pinpoint/model/OpenHoursRule.h>
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
namespace Pinpoint
{
namespace Model
{

  /**
   * <p>Specifies the times when message are allowed to be sent to
   * endpoints.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/OpenHours">AWS
   * API Reference</a></p>
   */
  class OpenHours
  {
  public:
    AWS_PINPOINT_API OpenHours() = default;
    AWS_PINPOINT_API OpenHours(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API OpenHours& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specifies the schedule settings for the email channel.</p>
     */
    inline const Aws::Map<DayOfWeek, Aws::Vector<OpenHoursRule>>& GetEMAIL() const { return m_eMAIL; }
    inline bool EMAILHasBeenSet() const { return m_eMAILHasBeenSet; }
    template<typename EMAILT = Aws::Map<DayOfWeek, Aws::Vector<OpenHoursRule>>>
    void SetEMAIL(EMAILT&& value) { m_eMAILHasBeenSet = true; m_eMAIL = std::forward<EMAILT>(value); }
    template<typename EMAILT = Aws::Map<DayOfWeek, Aws::Vector<OpenHoursRule>>>
    OpenHours& WithEMAIL(EMAILT&& value) { SetEMAIL(std::forward<EMAILT>(value)); return *this;}
    inline OpenHours& AddEMAIL(DayOfWeek key, Aws::Vector<OpenHoursRule> value) {
      m_eMAILHasBeenSet = true; m_eMAIL.emplace(key, value); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>Specifies the schedule settings for the SMS channel.</p>
     */
    inline const Aws::Map<DayOfWeek, Aws::Vector<OpenHoursRule>>& GetSMS() const { return m_sMS; }
    inline bool SMSHasBeenSet() const { return m_sMSHasBeenSet; }
    template<typename SMST = Aws::Map<DayOfWeek, Aws::Vector<OpenHoursRule>>>
    void SetSMS(SMST&& value) { m_sMSHasBeenSet = true; m_sMS = std::forward<SMST>(value); }
    template<typename SMST = Aws::Map<DayOfWeek, Aws::Vector<OpenHoursRule>>>
    OpenHours& WithSMS(SMST&& value) { SetSMS(std::forward<SMST>(value)); return *this;}
    inline OpenHours& AddSMS(DayOfWeek key, Aws::Vector<OpenHoursRule> value) {
      m_sMSHasBeenSet = true; m_sMS.emplace(key, value); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>Specifies the schedule settings for the push channel.</p>
     */
    inline const Aws::Map<DayOfWeek, Aws::Vector<OpenHoursRule>>& GetPUSH() const { return m_pUSH; }
    inline bool PUSHHasBeenSet() const { return m_pUSHHasBeenSet; }
    template<typename PUSHT = Aws::Map<DayOfWeek, Aws::Vector<OpenHoursRule>>>
    void SetPUSH(PUSHT&& value) { m_pUSHHasBeenSet = true; m_pUSH = std::forward<PUSHT>(value); }
    template<typename PUSHT = Aws::Map<DayOfWeek, Aws::Vector<OpenHoursRule>>>
    OpenHours& WithPUSH(PUSHT&& value) { SetPUSH(std::forward<PUSHT>(value)); return *this;}
    inline OpenHours& AddPUSH(DayOfWeek key, Aws::Vector<OpenHoursRule> value) {
      m_pUSHHasBeenSet = true; m_pUSH.emplace(key, value); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>Specifies the schedule settings for the voice channel.</p>
     */
    inline const Aws::Map<DayOfWeek, Aws::Vector<OpenHoursRule>>& GetVOICE() const { return m_vOICE; }
    inline bool VOICEHasBeenSet() const { return m_vOICEHasBeenSet; }
    template<typename VOICET = Aws::Map<DayOfWeek, Aws::Vector<OpenHoursRule>>>
    void SetVOICE(VOICET&& value) { m_vOICEHasBeenSet = true; m_vOICE = std::forward<VOICET>(value); }
    template<typename VOICET = Aws::Map<DayOfWeek, Aws::Vector<OpenHoursRule>>>
    OpenHours& WithVOICE(VOICET&& value) { SetVOICE(std::forward<VOICET>(value)); return *this;}
    inline OpenHours& AddVOICE(DayOfWeek key, Aws::Vector<OpenHoursRule> value) {
      m_vOICEHasBeenSet = true; m_vOICE.emplace(key, value); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>Specifies the schedule settings for the custom channel.</p>
     */
    inline const Aws::Map<DayOfWeek, Aws::Vector<OpenHoursRule>>& GetCUSTOM() const { return m_cUSTOM; }
    inline bool CUSTOMHasBeenSet() const { return m_cUSTOMHasBeenSet; }
    template<typename CUSTOMT = Aws::Map<DayOfWeek, Aws::Vector<OpenHoursRule>>>
    void SetCUSTOM(CUSTOMT&& value) { m_cUSTOMHasBeenSet = true; m_cUSTOM = std::forward<CUSTOMT>(value); }
    template<typename CUSTOMT = Aws::Map<DayOfWeek, Aws::Vector<OpenHoursRule>>>
    OpenHours& WithCUSTOM(CUSTOMT&& value) { SetCUSTOM(std::forward<CUSTOMT>(value)); return *this;}
    inline OpenHours& AddCUSTOM(DayOfWeek key, Aws::Vector<OpenHoursRule> value) {
      m_cUSTOMHasBeenSet = true; m_cUSTOM.emplace(key, value); return *this;
    }
    ///@}
  private:

    Aws::Map<DayOfWeek, Aws::Vector<OpenHoursRule>> m_eMAIL;
    bool m_eMAILHasBeenSet = false;

    Aws::Map<DayOfWeek, Aws::Vector<OpenHoursRule>> m_sMS;
    bool m_sMSHasBeenSet = false;

    Aws::Map<DayOfWeek, Aws::Vector<OpenHoursRule>> m_pUSH;
    bool m_pUSHHasBeenSet = false;

    Aws::Map<DayOfWeek, Aws::Vector<OpenHoursRule>> m_vOICE;
    bool m_vOICEHasBeenSet = false;

    Aws::Map<DayOfWeek, Aws::Vector<OpenHoursRule>> m_cUSTOM;
    bool m_cUSTOMHasBeenSet = false;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
