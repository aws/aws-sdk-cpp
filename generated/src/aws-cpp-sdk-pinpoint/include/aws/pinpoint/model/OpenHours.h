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
    AWS_PINPOINT_API OpenHours();
    AWS_PINPOINT_API OpenHours(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API OpenHours& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specifies the schedule settings for the email channel.</p>
     */
    inline const Aws::Map<DayOfWeek, Aws::Vector<OpenHoursRule>>& GetEMAIL() const{ return m_eMAIL; }
    inline bool EMAILHasBeenSet() const { return m_eMAILHasBeenSet; }
    inline void SetEMAIL(const Aws::Map<DayOfWeek, Aws::Vector<OpenHoursRule>>& value) { m_eMAILHasBeenSet = true; m_eMAIL = value; }
    inline void SetEMAIL(Aws::Map<DayOfWeek, Aws::Vector<OpenHoursRule>>&& value) { m_eMAILHasBeenSet = true; m_eMAIL = std::move(value); }
    inline OpenHours& WithEMAIL(const Aws::Map<DayOfWeek, Aws::Vector<OpenHoursRule>>& value) { SetEMAIL(value); return *this;}
    inline OpenHours& WithEMAIL(Aws::Map<DayOfWeek, Aws::Vector<OpenHoursRule>>&& value) { SetEMAIL(std::move(value)); return *this;}
    inline OpenHours& AddEMAIL(const DayOfWeek& key, const Aws::Vector<OpenHoursRule>& value) { m_eMAILHasBeenSet = true; m_eMAIL.emplace(key, value); return *this; }
    inline OpenHours& AddEMAIL(DayOfWeek&& key, const Aws::Vector<OpenHoursRule>& value) { m_eMAILHasBeenSet = true; m_eMAIL.emplace(std::move(key), value); return *this; }
    inline OpenHours& AddEMAIL(const DayOfWeek& key, Aws::Vector<OpenHoursRule>&& value) { m_eMAILHasBeenSet = true; m_eMAIL.emplace(key, std::move(value)); return *this; }
    inline OpenHours& AddEMAIL(DayOfWeek&& key, Aws::Vector<OpenHoursRule>&& value) { m_eMAILHasBeenSet = true; m_eMAIL.emplace(std::move(key), std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies the schedule settings for the SMS channel.</p>
     */
    inline const Aws::Map<DayOfWeek, Aws::Vector<OpenHoursRule>>& GetSMS() const{ return m_sMS; }
    inline bool SMSHasBeenSet() const { return m_sMSHasBeenSet; }
    inline void SetSMS(const Aws::Map<DayOfWeek, Aws::Vector<OpenHoursRule>>& value) { m_sMSHasBeenSet = true; m_sMS = value; }
    inline void SetSMS(Aws::Map<DayOfWeek, Aws::Vector<OpenHoursRule>>&& value) { m_sMSHasBeenSet = true; m_sMS = std::move(value); }
    inline OpenHours& WithSMS(const Aws::Map<DayOfWeek, Aws::Vector<OpenHoursRule>>& value) { SetSMS(value); return *this;}
    inline OpenHours& WithSMS(Aws::Map<DayOfWeek, Aws::Vector<OpenHoursRule>>&& value) { SetSMS(std::move(value)); return *this;}
    inline OpenHours& AddSMS(const DayOfWeek& key, const Aws::Vector<OpenHoursRule>& value) { m_sMSHasBeenSet = true; m_sMS.emplace(key, value); return *this; }
    inline OpenHours& AddSMS(DayOfWeek&& key, const Aws::Vector<OpenHoursRule>& value) { m_sMSHasBeenSet = true; m_sMS.emplace(std::move(key), value); return *this; }
    inline OpenHours& AddSMS(const DayOfWeek& key, Aws::Vector<OpenHoursRule>&& value) { m_sMSHasBeenSet = true; m_sMS.emplace(key, std::move(value)); return *this; }
    inline OpenHours& AddSMS(DayOfWeek&& key, Aws::Vector<OpenHoursRule>&& value) { m_sMSHasBeenSet = true; m_sMS.emplace(std::move(key), std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies the schedule settings for the push channel.</p>
     */
    inline const Aws::Map<DayOfWeek, Aws::Vector<OpenHoursRule>>& GetPUSH() const{ return m_pUSH; }
    inline bool PUSHHasBeenSet() const { return m_pUSHHasBeenSet; }
    inline void SetPUSH(const Aws::Map<DayOfWeek, Aws::Vector<OpenHoursRule>>& value) { m_pUSHHasBeenSet = true; m_pUSH = value; }
    inline void SetPUSH(Aws::Map<DayOfWeek, Aws::Vector<OpenHoursRule>>&& value) { m_pUSHHasBeenSet = true; m_pUSH = std::move(value); }
    inline OpenHours& WithPUSH(const Aws::Map<DayOfWeek, Aws::Vector<OpenHoursRule>>& value) { SetPUSH(value); return *this;}
    inline OpenHours& WithPUSH(Aws::Map<DayOfWeek, Aws::Vector<OpenHoursRule>>&& value) { SetPUSH(std::move(value)); return *this;}
    inline OpenHours& AddPUSH(const DayOfWeek& key, const Aws::Vector<OpenHoursRule>& value) { m_pUSHHasBeenSet = true; m_pUSH.emplace(key, value); return *this; }
    inline OpenHours& AddPUSH(DayOfWeek&& key, const Aws::Vector<OpenHoursRule>& value) { m_pUSHHasBeenSet = true; m_pUSH.emplace(std::move(key), value); return *this; }
    inline OpenHours& AddPUSH(const DayOfWeek& key, Aws::Vector<OpenHoursRule>&& value) { m_pUSHHasBeenSet = true; m_pUSH.emplace(key, std::move(value)); return *this; }
    inline OpenHours& AddPUSH(DayOfWeek&& key, Aws::Vector<OpenHoursRule>&& value) { m_pUSHHasBeenSet = true; m_pUSH.emplace(std::move(key), std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies the schedule settings for the voice channel.</p>
     */
    inline const Aws::Map<DayOfWeek, Aws::Vector<OpenHoursRule>>& GetVOICE() const{ return m_vOICE; }
    inline bool VOICEHasBeenSet() const { return m_vOICEHasBeenSet; }
    inline void SetVOICE(const Aws::Map<DayOfWeek, Aws::Vector<OpenHoursRule>>& value) { m_vOICEHasBeenSet = true; m_vOICE = value; }
    inline void SetVOICE(Aws::Map<DayOfWeek, Aws::Vector<OpenHoursRule>>&& value) { m_vOICEHasBeenSet = true; m_vOICE = std::move(value); }
    inline OpenHours& WithVOICE(const Aws::Map<DayOfWeek, Aws::Vector<OpenHoursRule>>& value) { SetVOICE(value); return *this;}
    inline OpenHours& WithVOICE(Aws::Map<DayOfWeek, Aws::Vector<OpenHoursRule>>&& value) { SetVOICE(std::move(value)); return *this;}
    inline OpenHours& AddVOICE(const DayOfWeek& key, const Aws::Vector<OpenHoursRule>& value) { m_vOICEHasBeenSet = true; m_vOICE.emplace(key, value); return *this; }
    inline OpenHours& AddVOICE(DayOfWeek&& key, const Aws::Vector<OpenHoursRule>& value) { m_vOICEHasBeenSet = true; m_vOICE.emplace(std::move(key), value); return *this; }
    inline OpenHours& AddVOICE(const DayOfWeek& key, Aws::Vector<OpenHoursRule>&& value) { m_vOICEHasBeenSet = true; m_vOICE.emplace(key, std::move(value)); return *this; }
    inline OpenHours& AddVOICE(DayOfWeek&& key, Aws::Vector<OpenHoursRule>&& value) { m_vOICEHasBeenSet = true; m_vOICE.emplace(std::move(key), std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies the schedule settings for the custom channel.</p>
     */
    inline const Aws::Map<DayOfWeek, Aws::Vector<OpenHoursRule>>& GetCUSTOM() const{ return m_cUSTOM; }
    inline bool CUSTOMHasBeenSet() const { return m_cUSTOMHasBeenSet; }
    inline void SetCUSTOM(const Aws::Map<DayOfWeek, Aws::Vector<OpenHoursRule>>& value) { m_cUSTOMHasBeenSet = true; m_cUSTOM = value; }
    inline void SetCUSTOM(Aws::Map<DayOfWeek, Aws::Vector<OpenHoursRule>>&& value) { m_cUSTOMHasBeenSet = true; m_cUSTOM = std::move(value); }
    inline OpenHours& WithCUSTOM(const Aws::Map<DayOfWeek, Aws::Vector<OpenHoursRule>>& value) { SetCUSTOM(value); return *this;}
    inline OpenHours& WithCUSTOM(Aws::Map<DayOfWeek, Aws::Vector<OpenHoursRule>>&& value) { SetCUSTOM(std::move(value)); return *this;}
    inline OpenHours& AddCUSTOM(const DayOfWeek& key, const Aws::Vector<OpenHoursRule>& value) { m_cUSTOMHasBeenSet = true; m_cUSTOM.emplace(key, value); return *this; }
    inline OpenHours& AddCUSTOM(DayOfWeek&& key, const Aws::Vector<OpenHoursRule>& value) { m_cUSTOMHasBeenSet = true; m_cUSTOM.emplace(std::move(key), value); return *this; }
    inline OpenHours& AddCUSTOM(const DayOfWeek& key, Aws::Vector<OpenHoursRule>&& value) { m_cUSTOMHasBeenSet = true; m_cUSTOM.emplace(key, std::move(value)); return *this; }
    inline OpenHours& AddCUSTOM(DayOfWeek&& key, Aws::Vector<OpenHoursRule>&& value) { m_cUSTOMHasBeenSet = true; m_cUSTOM.emplace(std::move(key), std::move(value)); return *this; }
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
