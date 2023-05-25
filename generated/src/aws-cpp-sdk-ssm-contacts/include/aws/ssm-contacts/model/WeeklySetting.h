/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm-contacts/SSMContacts_EXPORTS.h>
#include <aws/ssm-contacts/model/DayOfWeek.h>
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
   * <p>Information about rotations that recur weekly.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-contacts-2021-05-03/WeeklySetting">AWS
   * API Reference</a></p>
   */
  class WeeklySetting
  {
  public:
    AWS_SSMCONTACTS_API WeeklySetting();
    AWS_SSMCONTACTS_API WeeklySetting(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSMCONTACTS_API WeeklySetting& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSMCONTACTS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The day of the week when weekly recurring on-call shift rotations begins.</p>
     */
    inline const DayOfWeek& GetDayOfWeek() const{ return m_dayOfWeek; }

    /**
     * <p>The day of the week when weekly recurring on-call shift rotations begins.</p>
     */
    inline bool DayOfWeekHasBeenSet() const { return m_dayOfWeekHasBeenSet; }

    /**
     * <p>The day of the week when weekly recurring on-call shift rotations begins.</p>
     */
    inline void SetDayOfWeek(const DayOfWeek& value) { m_dayOfWeekHasBeenSet = true; m_dayOfWeek = value; }

    /**
     * <p>The day of the week when weekly recurring on-call shift rotations begins.</p>
     */
    inline void SetDayOfWeek(DayOfWeek&& value) { m_dayOfWeekHasBeenSet = true; m_dayOfWeek = std::move(value); }

    /**
     * <p>The day of the week when weekly recurring on-call shift rotations begins.</p>
     */
    inline WeeklySetting& WithDayOfWeek(const DayOfWeek& value) { SetDayOfWeek(value); return *this;}

    /**
     * <p>The day of the week when weekly recurring on-call shift rotations begins.</p>
     */
    inline WeeklySetting& WithDayOfWeek(DayOfWeek&& value) { SetDayOfWeek(std::move(value)); return *this;}


    /**
     * <p>The time of day when a weekly recurring on-call shift rotation begins.</p>
     */
    inline const HandOffTime& GetHandOffTime() const{ return m_handOffTime; }

    /**
     * <p>The time of day when a weekly recurring on-call shift rotation begins.</p>
     */
    inline bool HandOffTimeHasBeenSet() const { return m_handOffTimeHasBeenSet; }

    /**
     * <p>The time of day when a weekly recurring on-call shift rotation begins.</p>
     */
    inline void SetHandOffTime(const HandOffTime& value) { m_handOffTimeHasBeenSet = true; m_handOffTime = value; }

    /**
     * <p>The time of day when a weekly recurring on-call shift rotation begins.</p>
     */
    inline void SetHandOffTime(HandOffTime&& value) { m_handOffTimeHasBeenSet = true; m_handOffTime = std::move(value); }

    /**
     * <p>The time of day when a weekly recurring on-call shift rotation begins.</p>
     */
    inline WeeklySetting& WithHandOffTime(const HandOffTime& value) { SetHandOffTime(value); return *this;}

    /**
     * <p>The time of day when a weekly recurring on-call shift rotation begins.</p>
     */
    inline WeeklySetting& WithHandOffTime(HandOffTime&& value) { SetHandOffTime(std::move(value)); return *this;}

  private:

    DayOfWeek m_dayOfWeek;
    bool m_dayOfWeekHasBeenSet = false;

    HandOffTime m_handOffTime;
    bool m_handOffTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace SSMContacts
} // namespace Aws
