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
   * <p>Time range object with <code>startTime</code> and <code>endTime</code> range
   * in RFC 3339 format. <code>'HH:mm:ss.SSS'</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/support-2013-04-15/SupportedHour">AWS
   * API Reference</a></p>
   */
  class SupportedHour
  {
  public:
    AWS_SUPPORT_API SupportedHour();
    AWS_SUPPORT_API SupportedHour(Aws::Utils::Json::JsonView jsonValue);
    AWS_SUPPORT_API SupportedHour& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SUPPORT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> Start Time. RFC 3339 format <code>'HH:mm:ss.SSS'</code>. </p>
     */
    inline const Aws::String& GetStartTime() const{ return m_startTime; }

    /**
     * <p> Start Time. RFC 3339 format <code>'HH:mm:ss.SSS'</code>. </p>
     */
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }

    /**
     * <p> Start Time. RFC 3339 format <code>'HH:mm:ss.SSS'</code>. </p>
     */
    inline void SetStartTime(const Aws::String& value) { m_startTimeHasBeenSet = true; m_startTime = value; }

    /**
     * <p> Start Time. RFC 3339 format <code>'HH:mm:ss.SSS'</code>. </p>
     */
    inline void SetStartTime(Aws::String&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }

    /**
     * <p> Start Time. RFC 3339 format <code>'HH:mm:ss.SSS'</code>. </p>
     */
    inline void SetStartTime(const char* value) { m_startTimeHasBeenSet = true; m_startTime.assign(value); }

    /**
     * <p> Start Time. RFC 3339 format <code>'HH:mm:ss.SSS'</code>. </p>
     */
    inline SupportedHour& WithStartTime(const Aws::String& value) { SetStartTime(value); return *this;}

    /**
     * <p> Start Time. RFC 3339 format <code>'HH:mm:ss.SSS'</code>. </p>
     */
    inline SupportedHour& WithStartTime(Aws::String&& value) { SetStartTime(std::move(value)); return *this;}

    /**
     * <p> Start Time. RFC 3339 format <code>'HH:mm:ss.SSS'</code>. </p>
     */
    inline SupportedHour& WithStartTime(const char* value) { SetStartTime(value); return *this;}


    /**
     * <p> End Time. RFC 3339 format <code>'HH:mm:ss.SSS'</code>. </p>
     */
    inline const Aws::String& GetEndTime() const{ return m_endTime; }

    /**
     * <p> End Time. RFC 3339 format <code>'HH:mm:ss.SSS'</code>. </p>
     */
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }

    /**
     * <p> End Time. RFC 3339 format <code>'HH:mm:ss.SSS'</code>. </p>
     */
    inline void SetEndTime(const Aws::String& value) { m_endTimeHasBeenSet = true; m_endTime = value; }

    /**
     * <p> End Time. RFC 3339 format <code>'HH:mm:ss.SSS'</code>. </p>
     */
    inline void SetEndTime(Aws::String&& value) { m_endTimeHasBeenSet = true; m_endTime = std::move(value); }

    /**
     * <p> End Time. RFC 3339 format <code>'HH:mm:ss.SSS'</code>. </p>
     */
    inline void SetEndTime(const char* value) { m_endTimeHasBeenSet = true; m_endTime.assign(value); }

    /**
     * <p> End Time. RFC 3339 format <code>'HH:mm:ss.SSS'</code>. </p>
     */
    inline SupportedHour& WithEndTime(const Aws::String& value) { SetEndTime(value); return *this;}

    /**
     * <p> End Time. RFC 3339 format <code>'HH:mm:ss.SSS'</code>. </p>
     */
    inline SupportedHour& WithEndTime(Aws::String&& value) { SetEndTime(std::move(value)); return *this;}

    /**
     * <p> End Time. RFC 3339 format <code>'HH:mm:ss.SSS'</code>. </p>
     */
    inline SupportedHour& WithEndTime(const char* value) { SetEndTime(value); return *this;}

  private:

    Aws::String m_startTime;
    bool m_startTimeHasBeenSet = false;

    Aws::String m_endTime;
    bool m_endTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace Support
} // namespace Aws
