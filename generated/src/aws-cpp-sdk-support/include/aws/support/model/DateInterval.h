/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/support/Support_EXPORTS.h>
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
namespace Support
{
namespace Model
{

  /**
   * <p>Date and time (UTC) format in RFC 3339 :
   * 'yyyy-MM-dd'T'HH:mm:ss.SSSZZ'.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/support-2013-04-15/DateInterval">AWS
   * API Reference</a></p>
   */
  class DateInterval
  {
  public:
    AWS_SUPPORT_API DateInterval();
    AWS_SUPPORT_API DateInterval(Aws::Utils::Json::JsonView jsonValue);
    AWS_SUPPORT_API DateInterval& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SUPPORT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> A JSON object containing start and date time (UTC). Date and time format is
     * RFC 3339 : 'yyyy-MM-dd'T'HH:mm:ss.SSSZZ'. </p>
     */
    inline const Aws::String& GetStartDateTime() const{ return m_startDateTime; }

    /**
     * <p> A JSON object containing start and date time (UTC). Date and time format is
     * RFC 3339 : 'yyyy-MM-dd'T'HH:mm:ss.SSSZZ'. </p>
     */
    inline bool StartDateTimeHasBeenSet() const { return m_startDateTimeHasBeenSet; }

    /**
     * <p> A JSON object containing start and date time (UTC). Date and time format is
     * RFC 3339 : 'yyyy-MM-dd'T'HH:mm:ss.SSSZZ'. </p>
     */
    inline void SetStartDateTime(const Aws::String& value) { m_startDateTimeHasBeenSet = true; m_startDateTime = value; }

    /**
     * <p> A JSON object containing start and date time (UTC). Date and time format is
     * RFC 3339 : 'yyyy-MM-dd'T'HH:mm:ss.SSSZZ'. </p>
     */
    inline void SetStartDateTime(Aws::String&& value) { m_startDateTimeHasBeenSet = true; m_startDateTime = std::move(value); }

    /**
     * <p> A JSON object containing start and date time (UTC). Date and time format is
     * RFC 3339 : 'yyyy-MM-dd'T'HH:mm:ss.SSSZZ'. </p>
     */
    inline void SetStartDateTime(const char* value) { m_startDateTimeHasBeenSet = true; m_startDateTime.assign(value); }

    /**
     * <p> A JSON object containing start and date time (UTC). Date and time format is
     * RFC 3339 : 'yyyy-MM-dd'T'HH:mm:ss.SSSZZ'. </p>
     */
    inline DateInterval& WithStartDateTime(const Aws::String& value) { SetStartDateTime(value); return *this;}

    /**
     * <p> A JSON object containing start and date time (UTC). Date and time format is
     * RFC 3339 : 'yyyy-MM-dd'T'HH:mm:ss.SSSZZ'. </p>
     */
    inline DateInterval& WithStartDateTime(Aws::String&& value) { SetStartDateTime(std::move(value)); return *this;}

    /**
     * <p> A JSON object containing start and date time (UTC). Date and time format is
     * RFC 3339 : 'yyyy-MM-dd'T'HH:mm:ss.SSSZZ'. </p>
     */
    inline DateInterval& WithStartDateTime(const char* value) { SetStartDateTime(value); return *this;}


    /**
     * <p> End Date Time (UTC). RFC 3339 format : 'yyyy-MM-dd'T'HH:mm:ss.SSSZZ'. </p>
     */
    inline const Aws::String& GetEndDateTime() const{ return m_endDateTime; }

    /**
     * <p> End Date Time (UTC). RFC 3339 format : 'yyyy-MM-dd'T'HH:mm:ss.SSSZZ'. </p>
     */
    inline bool EndDateTimeHasBeenSet() const { return m_endDateTimeHasBeenSet; }

    /**
     * <p> End Date Time (UTC). RFC 3339 format : 'yyyy-MM-dd'T'HH:mm:ss.SSSZZ'. </p>
     */
    inline void SetEndDateTime(const Aws::String& value) { m_endDateTimeHasBeenSet = true; m_endDateTime = value; }

    /**
     * <p> End Date Time (UTC). RFC 3339 format : 'yyyy-MM-dd'T'HH:mm:ss.SSSZZ'. </p>
     */
    inline void SetEndDateTime(Aws::String&& value) { m_endDateTimeHasBeenSet = true; m_endDateTime = std::move(value); }

    /**
     * <p> End Date Time (UTC). RFC 3339 format : 'yyyy-MM-dd'T'HH:mm:ss.SSSZZ'. </p>
     */
    inline void SetEndDateTime(const char* value) { m_endDateTimeHasBeenSet = true; m_endDateTime.assign(value); }

    /**
     * <p> End Date Time (UTC). RFC 3339 format : 'yyyy-MM-dd'T'HH:mm:ss.SSSZZ'. </p>
     */
    inline DateInterval& WithEndDateTime(const Aws::String& value) { SetEndDateTime(value); return *this;}

    /**
     * <p> End Date Time (UTC). RFC 3339 format : 'yyyy-MM-dd'T'HH:mm:ss.SSSZZ'. </p>
     */
    inline DateInterval& WithEndDateTime(Aws::String&& value) { SetEndDateTime(std::move(value)); return *this;}

    /**
     * <p> End Date Time (UTC). RFC 3339 format : 'yyyy-MM-dd'T'HH:mm:ss.SSSZZ'. </p>
     */
    inline DateInterval& WithEndDateTime(const char* value) { SetEndDateTime(value); return *this;}

  private:

    Aws::String m_startDateTime;
    bool m_startDateTimeHasBeenSet = false;

    Aws::String m_endDateTime;
    bool m_endDateTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace Support
} // namespace Aws
