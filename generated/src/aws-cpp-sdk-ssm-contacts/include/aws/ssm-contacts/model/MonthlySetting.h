/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm-contacts/SSMContacts_EXPORTS.h>
#include <aws/ssm-contacts/model/HandOffTime.h>
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
   * <p>Information about on-call rotations that recur monthly.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-contacts-2021-05-03/MonthlySetting">AWS
   * API Reference</a></p>
   */
  class MonthlySetting
  {
  public:
    AWS_SSMCONTACTS_API MonthlySetting() = default;
    AWS_SSMCONTACTS_API MonthlySetting(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSMCONTACTS_API MonthlySetting& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSMCONTACTS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The day of the month when monthly recurring on-call rotations begin.</p>
     */
    inline int GetDayOfMonth() const { return m_dayOfMonth; }
    inline bool DayOfMonthHasBeenSet() const { return m_dayOfMonthHasBeenSet; }
    inline void SetDayOfMonth(int value) { m_dayOfMonthHasBeenSet = true; m_dayOfMonth = value; }
    inline MonthlySetting& WithDayOfMonth(int value) { SetDayOfMonth(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time of day when a monthly recurring on-call shift rotation begins.</p>
     */
    inline const HandOffTime& GetHandOffTime() const { return m_handOffTime; }
    inline bool HandOffTimeHasBeenSet() const { return m_handOffTimeHasBeenSet; }
    template<typename HandOffTimeT = HandOffTime>
    void SetHandOffTime(HandOffTimeT&& value) { m_handOffTimeHasBeenSet = true; m_handOffTime = std::forward<HandOffTimeT>(value); }
    template<typename HandOffTimeT = HandOffTime>
    MonthlySetting& WithHandOffTime(HandOffTimeT&& value) { SetHandOffTime(std::forward<HandOffTimeT>(value)); return *this;}
    ///@}
  private:

    int m_dayOfMonth{0};
    bool m_dayOfMonthHasBeenSet = false;

    HandOffTime m_handOffTime;
    bool m_handOffTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace SSMContacts
} // namespace Aws
