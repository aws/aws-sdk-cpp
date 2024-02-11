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
    AWS_PINPOINT_API ClosedDays();
    AWS_PINPOINT_API ClosedDays(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API ClosedDays& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Rules for the Email channel.</p>
     */
    inline const Aws::Vector<ClosedDaysRule>& GetEMAIL() const{ return m_eMAIL; }

    /**
     * <p>Rules for the Email channel.</p>
     */
    inline bool EMAILHasBeenSet() const { return m_eMAILHasBeenSet; }

    /**
     * <p>Rules for the Email channel.</p>
     */
    inline void SetEMAIL(const Aws::Vector<ClosedDaysRule>& value) { m_eMAILHasBeenSet = true; m_eMAIL = value; }

    /**
     * <p>Rules for the Email channel.</p>
     */
    inline void SetEMAIL(Aws::Vector<ClosedDaysRule>&& value) { m_eMAILHasBeenSet = true; m_eMAIL = std::move(value); }

    /**
     * <p>Rules for the Email channel.</p>
     */
    inline ClosedDays& WithEMAIL(const Aws::Vector<ClosedDaysRule>& value) { SetEMAIL(value); return *this;}

    /**
     * <p>Rules for the Email channel.</p>
     */
    inline ClosedDays& WithEMAIL(Aws::Vector<ClosedDaysRule>&& value) { SetEMAIL(std::move(value)); return *this;}

    /**
     * <p>Rules for the Email channel.</p>
     */
    inline ClosedDays& AddEMAIL(const ClosedDaysRule& value) { m_eMAILHasBeenSet = true; m_eMAIL.push_back(value); return *this; }

    /**
     * <p>Rules for the Email channel.</p>
     */
    inline ClosedDays& AddEMAIL(ClosedDaysRule&& value) { m_eMAILHasBeenSet = true; m_eMAIL.push_back(std::move(value)); return *this; }


    /**
     * <p>Rules for the SMS channel.</p>
     */
    inline const Aws::Vector<ClosedDaysRule>& GetSMS() const{ return m_sMS; }

    /**
     * <p>Rules for the SMS channel.</p>
     */
    inline bool SMSHasBeenSet() const { return m_sMSHasBeenSet; }

    /**
     * <p>Rules for the SMS channel.</p>
     */
    inline void SetSMS(const Aws::Vector<ClosedDaysRule>& value) { m_sMSHasBeenSet = true; m_sMS = value; }

    /**
     * <p>Rules for the SMS channel.</p>
     */
    inline void SetSMS(Aws::Vector<ClosedDaysRule>&& value) { m_sMSHasBeenSet = true; m_sMS = std::move(value); }

    /**
     * <p>Rules for the SMS channel.</p>
     */
    inline ClosedDays& WithSMS(const Aws::Vector<ClosedDaysRule>& value) { SetSMS(value); return *this;}

    /**
     * <p>Rules for the SMS channel.</p>
     */
    inline ClosedDays& WithSMS(Aws::Vector<ClosedDaysRule>&& value) { SetSMS(std::move(value)); return *this;}

    /**
     * <p>Rules for the SMS channel.</p>
     */
    inline ClosedDays& AddSMS(const ClosedDaysRule& value) { m_sMSHasBeenSet = true; m_sMS.push_back(value); return *this; }

    /**
     * <p>Rules for the SMS channel.</p>
     */
    inline ClosedDays& AddSMS(ClosedDaysRule&& value) { m_sMSHasBeenSet = true; m_sMS.push_back(std::move(value)); return *this; }


    /**
     * <p>Rules for the Push channel.</p>
     */
    inline const Aws::Vector<ClosedDaysRule>& GetPUSH() const{ return m_pUSH; }

    /**
     * <p>Rules for the Push channel.</p>
     */
    inline bool PUSHHasBeenSet() const { return m_pUSHHasBeenSet; }

    /**
     * <p>Rules for the Push channel.</p>
     */
    inline void SetPUSH(const Aws::Vector<ClosedDaysRule>& value) { m_pUSHHasBeenSet = true; m_pUSH = value; }

    /**
     * <p>Rules for the Push channel.</p>
     */
    inline void SetPUSH(Aws::Vector<ClosedDaysRule>&& value) { m_pUSHHasBeenSet = true; m_pUSH = std::move(value); }

    /**
     * <p>Rules for the Push channel.</p>
     */
    inline ClosedDays& WithPUSH(const Aws::Vector<ClosedDaysRule>& value) { SetPUSH(value); return *this;}

    /**
     * <p>Rules for the Push channel.</p>
     */
    inline ClosedDays& WithPUSH(Aws::Vector<ClosedDaysRule>&& value) { SetPUSH(std::move(value)); return *this;}

    /**
     * <p>Rules for the Push channel.</p>
     */
    inline ClosedDays& AddPUSH(const ClosedDaysRule& value) { m_pUSHHasBeenSet = true; m_pUSH.push_back(value); return *this; }

    /**
     * <p>Rules for the Push channel.</p>
     */
    inline ClosedDays& AddPUSH(ClosedDaysRule&& value) { m_pUSHHasBeenSet = true; m_pUSH.push_back(std::move(value)); return *this; }


    /**
     * <p>Rules for the Voice channel.</p>
     */
    inline const Aws::Vector<ClosedDaysRule>& GetVOICE() const{ return m_vOICE; }

    /**
     * <p>Rules for the Voice channel.</p>
     */
    inline bool VOICEHasBeenSet() const { return m_vOICEHasBeenSet; }

    /**
     * <p>Rules for the Voice channel.</p>
     */
    inline void SetVOICE(const Aws::Vector<ClosedDaysRule>& value) { m_vOICEHasBeenSet = true; m_vOICE = value; }

    /**
     * <p>Rules for the Voice channel.</p>
     */
    inline void SetVOICE(Aws::Vector<ClosedDaysRule>&& value) { m_vOICEHasBeenSet = true; m_vOICE = std::move(value); }

    /**
     * <p>Rules for the Voice channel.</p>
     */
    inline ClosedDays& WithVOICE(const Aws::Vector<ClosedDaysRule>& value) { SetVOICE(value); return *this;}

    /**
     * <p>Rules for the Voice channel.</p>
     */
    inline ClosedDays& WithVOICE(Aws::Vector<ClosedDaysRule>&& value) { SetVOICE(std::move(value)); return *this;}

    /**
     * <p>Rules for the Voice channel.</p>
     */
    inline ClosedDays& AddVOICE(const ClosedDaysRule& value) { m_vOICEHasBeenSet = true; m_vOICE.push_back(value); return *this; }

    /**
     * <p>Rules for the Voice channel.</p>
     */
    inline ClosedDays& AddVOICE(ClosedDaysRule&& value) { m_vOICEHasBeenSet = true; m_vOICE.push_back(std::move(value)); return *this; }


    /**
     * <p>Rules for the Custom channel.</p>
     */
    inline const Aws::Vector<ClosedDaysRule>& GetCUSTOM() const{ return m_cUSTOM; }

    /**
     * <p>Rules for the Custom channel.</p>
     */
    inline bool CUSTOMHasBeenSet() const { return m_cUSTOMHasBeenSet; }

    /**
     * <p>Rules for the Custom channel.</p>
     */
    inline void SetCUSTOM(const Aws::Vector<ClosedDaysRule>& value) { m_cUSTOMHasBeenSet = true; m_cUSTOM = value; }

    /**
     * <p>Rules for the Custom channel.</p>
     */
    inline void SetCUSTOM(Aws::Vector<ClosedDaysRule>&& value) { m_cUSTOMHasBeenSet = true; m_cUSTOM = std::move(value); }

    /**
     * <p>Rules for the Custom channel.</p>
     */
    inline ClosedDays& WithCUSTOM(const Aws::Vector<ClosedDaysRule>& value) { SetCUSTOM(value); return *this;}

    /**
     * <p>Rules for the Custom channel.</p>
     */
    inline ClosedDays& WithCUSTOM(Aws::Vector<ClosedDaysRule>&& value) { SetCUSTOM(std::move(value)); return *this;}

    /**
     * <p>Rules for the Custom channel.</p>
     */
    inline ClosedDays& AddCUSTOM(const ClosedDaysRule& value) { m_cUSTOMHasBeenSet = true; m_cUSTOM.push_back(value); return *this; }

    /**
     * <p>Rules for the Custom channel.</p>
     */
    inline ClosedDays& AddCUSTOM(ClosedDaysRule&& value) { m_cUSTOMHasBeenSet = true; m_cUSTOM.push_back(std::move(value)); return *this; }

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
