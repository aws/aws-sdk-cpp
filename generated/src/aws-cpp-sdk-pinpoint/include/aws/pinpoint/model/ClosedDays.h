/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/pinpoint/model/ClosedDaysRule.h>
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
   * <p>The time when a journey will not send messages. QuietTime should be
   * configured first and SendingSchedule should be set to true.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/ClosedDays">AWS
   * API Reference</a></p>
   */
  class ClosedDays
  {
  public:
    AWS_PINPOINT_API ClosedDays() = default;
    AWS_PINPOINT_API ClosedDays(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API ClosedDays& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Rules for the Email channel.</p>
     */
    inline const Aws::Vector<ClosedDaysRule>& GetEMAIL() const { return m_eMAIL; }
    inline bool EMAILHasBeenSet() const { return m_eMAILHasBeenSet; }
    template<typename EMAILT = Aws::Vector<ClosedDaysRule>>
    void SetEMAIL(EMAILT&& value) { m_eMAILHasBeenSet = true; m_eMAIL = std::forward<EMAILT>(value); }
    template<typename EMAILT = Aws::Vector<ClosedDaysRule>>
    ClosedDays& WithEMAIL(EMAILT&& value) { SetEMAIL(std::forward<EMAILT>(value)); return *this;}
    template<typename EMAILT = ClosedDaysRule>
    ClosedDays& AddEMAIL(EMAILT&& value) { m_eMAILHasBeenSet = true; m_eMAIL.emplace_back(std::forward<EMAILT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Rules for the SMS channel.</p>
     */
    inline const Aws::Vector<ClosedDaysRule>& GetSMS() const { return m_sMS; }
    inline bool SMSHasBeenSet() const { return m_sMSHasBeenSet; }
    template<typename SMST = Aws::Vector<ClosedDaysRule>>
    void SetSMS(SMST&& value) { m_sMSHasBeenSet = true; m_sMS = std::forward<SMST>(value); }
    template<typename SMST = Aws::Vector<ClosedDaysRule>>
    ClosedDays& WithSMS(SMST&& value) { SetSMS(std::forward<SMST>(value)); return *this;}
    template<typename SMST = ClosedDaysRule>
    ClosedDays& AddSMS(SMST&& value) { m_sMSHasBeenSet = true; m_sMS.emplace_back(std::forward<SMST>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Rules for the Push channel.</p>
     */
    inline const Aws::Vector<ClosedDaysRule>& GetPUSH() const { return m_pUSH; }
    inline bool PUSHHasBeenSet() const { return m_pUSHHasBeenSet; }
    template<typename PUSHT = Aws::Vector<ClosedDaysRule>>
    void SetPUSH(PUSHT&& value) { m_pUSHHasBeenSet = true; m_pUSH = std::forward<PUSHT>(value); }
    template<typename PUSHT = Aws::Vector<ClosedDaysRule>>
    ClosedDays& WithPUSH(PUSHT&& value) { SetPUSH(std::forward<PUSHT>(value)); return *this;}
    template<typename PUSHT = ClosedDaysRule>
    ClosedDays& AddPUSH(PUSHT&& value) { m_pUSHHasBeenSet = true; m_pUSH.emplace_back(std::forward<PUSHT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Rules for the Voice channel.</p>
     */
    inline const Aws::Vector<ClosedDaysRule>& GetVOICE() const { return m_vOICE; }
    inline bool VOICEHasBeenSet() const { return m_vOICEHasBeenSet; }
    template<typename VOICET = Aws::Vector<ClosedDaysRule>>
    void SetVOICE(VOICET&& value) { m_vOICEHasBeenSet = true; m_vOICE = std::forward<VOICET>(value); }
    template<typename VOICET = Aws::Vector<ClosedDaysRule>>
    ClosedDays& WithVOICE(VOICET&& value) { SetVOICE(std::forward<VOICET>(value)); return *this;}
    template<typename VOICET = ClosedDaysRule>
    ClosedDays& AddVOICE(VOICET&& value) { m_vOICEHasBeenSet = true; m_vOICE.emplace_back(std::forward<VOICET>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Rules for the Custom channel.</p>
     */
    inline const Aws::Vector<ClosedDaysRule>& GetCUSTOM() const { return m_cUSTOM; }
    inline bool CUSTOMHasBeenSet() const { return m_cUSTOMHasBeenSet; }
    template<typename CUSTOMT = Aws::Vector<ClosedDaysRule>>
    void SetCUSTOM(CUSTOMT&& value) { m_cUSTOMHasBeenSet = true; m_cUSTOM = std::forward<CUSTOMT>(value); }
    template<typename CUSTOMT = Aws::Vector<ClosedDaysRule>>
    ClosedDays& WithCUSTOM(CUSTOMT&& value) { SetCUSTOM(std::forward<CUSTOMT>(value)); return *this;}
    template<typename CUSTOMT = ClosedDaysRule>
    ClosedDays& AddCUSTOM(CUSTOMT&& value) { m_cUSTOMHasBeenSet = true; m_cUSTOM.emplace_back(std::forward<CUSTOMT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<ClosedDaysRule> m_eMAIL;
    bool m_eMAILHasBeenSet = false;

    Aws::Vector<ClosedDaysRule> m_sMS;
    bool m_sMSHasBeenSet = false;

    Aws::Vector<ClosedDaysRule> m_pUSH;
    bool m_pUSHHasBeenSet = false;

    Aws::Vector<ClosedDaysRule> m_vOICE;
    bool m_vOICEHasBeenSet = false;

    Aws::Vector<ClosedDaysRule> m_cUSTOM;
    bool m_cUSTOMHasBeenSet = false;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
