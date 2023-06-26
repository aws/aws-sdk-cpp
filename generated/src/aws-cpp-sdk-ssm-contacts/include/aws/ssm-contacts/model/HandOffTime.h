/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm-contacts/SSMContacts_EXPORTS.h>

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
   * <p>Details about when an on-call rotation shift begins or ends.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-contacts-2021-05-03/HandOffTime">AWS
   * API Reference</a></p>
   */
  class HandOffTime
  {
  public:
    AWS_SSMCONTACTS_API HandOffTime();
    AWS_SSMCONTACTS_API HandOffTime(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSMCONTACTS_API HandOffTime& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSMCONTACTS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The hour when an on-call rotation shift begins or ends.</p>
     */
    inline int GetHourOfDay() const{ return m_hourOfDay; }

    /**
     * <p>The hour when an on-call rotation shift begins or ends.</p>
     */
    inline bool HourOfDayHasBeenSet() const { return m_hourOfDayHasBeenSet; }

    /**
     * <p>The hour when an on-call rotation shift begins or ends.</p>
     */
    inline void SetHourOfDay(int value) { m_hourOfDayHasBeenSet = true; m_hourOfDay = value; }

    /**
     * <p>The hour when an on-call rotation shift begins or ends.</p>
     */
    inline HandOffTime& WithHourOfDay(int value) { SetHourOfDay(value); return *this;}


    /**
     * <p>The minute when an on-call rotation shift begins or ends.</p>
     */
    inline int GetMinuteOfHour() const{ return m_minuteOfHour; }

    /**
     * <p>The minute when an on-call rotation shift begins or ends.</p>
     */
    inline bool MinuteOfHourHasBeenSet() const { return m_minuteOfHourHasBeenSet; }

    /**
     * <p>The minute when an on-call rotation shift begins or ends.</p>
     */
    inline void SetMinuteOfHour(int value) { m_minuteOfHourHasBeenSet = true; m_minuteOfHour = value; }

    /**
     * <p>The minute when an on-call rotation shift begins or ends.</p>
     */
    inline HandOffTime& WithMinuteOfHour(int value) { SetMinuteOfHour(value); return *this;}

  private:

    int m_hourOfDay;
    bool m_hourOfDayHasBeenSet = false;

    int m_minuteOfHour;
    bool m_minuteOfHourHasBeenSet = false;
  };

} // namespace Model
} // namespace SSMContacts
} // namespace Aws
