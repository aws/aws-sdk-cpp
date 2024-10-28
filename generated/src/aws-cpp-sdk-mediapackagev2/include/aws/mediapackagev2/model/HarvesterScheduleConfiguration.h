/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediapackagev2/Mediapackagev2_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
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
namespace mediapackagev2
{
namespace Model
{

  /**
   * <p>Defines the schedule configuration for a harvest job.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediapackagev2-2022-12-25/HarvesterScheduleConfiguration">AWS
   * API Reference</a></p>
   */
  class HarvesterScheduleConfiguration
  {
  public:
    AWS_MEDIAPACKAGEV2_API HarvesterScheduleConfiguration();
    AWS_MEDIAPACKAGEV2_API HarvesterScheduleConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIAPACKAGEV2_API HarvesterScheduleConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIAPACKAGEV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The start time for the harvest job.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTimeHasBeenSet = true; m_startTime = value; }
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }
    inline HarvesterScheduleConfiguration& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}
    inline HarvesterScheduleConfiguration& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The end time for the harvest job.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const{ return m_endTime; }
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }
    inline void SetEndTime(const Aws::Utils::DateTime& value) { m_endTimeHasBeenSet = true; m_endTime = value; }
    inline void SetEndTime(Aws::Utils::DateTime&& value) { m_endTimeHasBeenSet = true; m_endTime = std::move(value); }
    inline HarvesterScheduleConfiguration& WithEndTime(const Aws::Utils::DateTime& value) { SetEndTime(value); return *this;}
    inline HarvesterScheduleConfiguration& WithEndTime(Aws::Utils::DateTime&& value) { SetEndTime(std::move(value)); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_startTime;
    bool m_startTimeHasBeenSet = false;

    Aws::Utils::DateTime m_endTime;
    bool m_endTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace mediapackagev2
} // namespace Aws
