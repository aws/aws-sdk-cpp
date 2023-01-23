/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
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
namespace Pinpoint
{
namespace Model
{

  /**
   * <p>List of OpenHours Rules.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/OpenHoursRule">AWS
   * API Reference</a></p>
   */
  class OpenHoursRule
  {
  public:
    AWS_PINPOINT_API OpenHoursRule();
    AWS_PINPOINT_API OpenHoursRule(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API OpenHoursRule& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Local start time in ISO 8601 format.</p>
     */
    inline const Aws::String& GetStartTime() const{ return m_startTime; }

    /**
     * <p>Local start time in ISO 8601 format.</p>
     */
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }

    /**
     * <p>Local start time in ISO 8601 format.</p>
     */
    inline void SetStartTime(const Aws::String& value) { m_startTimeHasBeenSet = true; m_startTime = value; }

    /**
     * <p>Local start time in ISO 8601 format.</p>
     */
    inline void SetStartTime(Aws::String&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }

    /**
     * <p>Local start time in ISO 8601 format.</p>
     */
    inline void SetStartTime(const char* value) { m_startTimeHasBeenSet = true; m_startTime.assign(value); }

    /**
     * <p>Local start time in ISO 8601 format.</p>
     */
    inline OpenHoursRule& WithStartTime(const Aws::String& value) { SetStartTime(value); return *this;}

    /**
     * <p>Local start time in ISO 8601 format.</p>
     */
    inline OpenHoursRule& WithStartTime(Aws::String&& value) { SetStartTime(std::move(value)); return *this;}

    /**
     * <p>Local start time in ISO 8601 format.</p>
     */
    inline OpenHoursRule& WithStartTime(const char* value) { SetStartTime(value); return *this;}


    /**
     * <p>Local start time in ISO 8601 format.</p>
     */
    inline const Aws::String& GetEndTime() const{ return m_endTime; }

    /**
     * <p>Local start time in ISO 8601 format.</p>
     */
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }

    /**
     * <p>Local start time in ISO 8601 format.</p>
     */
    inline void SetEndTime(const Aws::String& value) { m_endTimeHasBeenSet = true; m_endTime = value; }

    /**
     * <p>Local start time in ISO 8601 format.</p>
     */
    inline void SetEndTime(Aws::String&& value) { m_endTimeHasBeenSet = true; m_endTime = std::move(value); }

    /**
     * <p>Local start time in ISO 8601 format.</p>
     */
    inline void SetEndTime(const char* value) { m_endTimeHasBeenSet = true; m_endTime.assign(value); }

    /**
     * <p>Local start time in ISO 8601 format.</p>
     */
    inline OpenHoursRule& WithEndTime(const Aws::String& value) { SetEndTime(value); return *this;}

    /**
     * <p>Local start time in ISO 8601 format.</p>
     */
    inline OpenHoursRule& WithEndTime(Aws::String&& value) { SetEndTime(std::move(value)); return *this;}

    /**
     * <p>Local start time in ISO 8601 format.</p>
     */
    inline OpenHoursRule& WithEndTime(const char* value) { SetEndTime(value); return *this;}

  private:

    Aws::String m_startTime;
    bool m_startTimeHasBeenSet = false;

    Aws::String m_endTime;
    bool m_endTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
