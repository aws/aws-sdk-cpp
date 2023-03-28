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
    AWS_SSMCONTACTS_API MonthlySetting();
    AWS_SSMCONTACTS_API MonthlySetting(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSMCONTACTS_API MonthlySetting& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSMCONTACTS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The day of the month when monthly recurring on-call rotations begin.</p>
     */
    inline int GetDayOfMonth() const{ return m_dayOfMonth; }

    /**
     * <p>The day of the month when monthly recurring on-call rotations begin.</p>
     */
    inline bool DayOfMonthHasBeenSet() const { return m_dayOfMonthHasBeenSet; }

    /**
     * <p>The day of the month when monthly recurring on-call rotations begin.</p>
     */
    inline void SetDayOfMonth(int value) { m_dayOfMonthHasBeenSet = true; m_dayOfMonth = value; }

    /**
     * <p>The day of the month when monthly recurring on-call rotations begin.</p>
     */
    inline MonthlySetting& WithDayOfMonth(int value) { SetDayOfMonth(value); return *this;}


    /**
     * <p>The time of day when a monthly recurring on-call shift rotation begins.</p>
     */
    inline const HandOffTime& GetHandOffTime() const{ return m_handOffTime; }

    /**
     * <p>The time of day when a monthly recurring on-call shift rotation begins.</p>
     */
    inline bool HandOffTimeHasBeenSet() const { return m_handOffTimeHasBeenSet; }

    /**
     * <p>The time of day when a monthly recurring on-call shift rotation begins.</p>
     */
    inline void SetHandOffTime(const HandOffTime& value) { m_handOffTimeHasBeenSet = true; m_handOffTime = value; }

    /**
     * <p>The time of day when a monthly recurring on-call shift rotation begins.</p>
     */
    inline void SetHandOffTime(HandOffTime&& value) { m_handOffTimeHasBeenSet = true; m_handOffTime = std::move(value); }

    /**
     * <p>The time of day when a monthly recurring on-call shift rotation begins.</p>
     */
    inline MonthlySetting& WithHandOffTime(const HandOffTime& value) { SetHandOffTime(value); return *this;}

    /**
     * <p>The time of day when a monthly recurring on-call shift rotation begins.</p>
     */
    inline MonthlySetting& WithHandOffTime(HandOffTime&& value) { SetHandOffTime(std::move(value)); return *this;}

  private:

    int m_dayOfMonth;
    bool m_dayOfMonthHasBeenSet = false;

    HandOffTime m_handOffTime;
    bool m_handOffTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace SSMContacts
} // namespace Aws
