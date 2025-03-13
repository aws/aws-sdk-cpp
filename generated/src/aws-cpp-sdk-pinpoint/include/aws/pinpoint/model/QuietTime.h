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
   * <p>Specifies the start and end times that define a time range when messages
   * aren't sent to endpoints.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/QuietTime">AWS
   * API Reference</a></p>
   */
  class QuietTime
  {
  public:
    AWS_PINPOINT_API QuietTime() = default;
    AWS_PINPOINT_API QuietTime(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API QuietTime& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The specific time when quiet time ends. This value has to use 24-hour
     * notation and be in HH:MM format, where HH is the hour (with a leading zero, if
     * applicable) and MM is the minutes. For example, use 02:30 to represent 2:30 AM,
     * or 14:30 to represent 2:30 PM.</p>
     */
    inline const Aws::String& GetEnd() const { return m_end; }
    inline bool EndHasBeenSet() const { return m_endHasBeenSet; }
    template<typename EndT = Aws::String>
    void SetEnd(EndT&& value) { m_endHasBeenSet = true; m_end = std::forward<EndT>(value); }
    template<typename EndT = Aws::String>
    QuietTime& WithEnd(EndT&& value) { SetEnd(std::forward<EndT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The specific time when quiet time begins. This value has to use 24-hour
     * notation and be in HH:MM format, where HH is the hour (with a leading zero, if
     * applicable) and MM is the minutes. For example, use 02:30 to represent 2:30 AM,
     * or 14:30 to represent 2:30 PM.</p>
     */
    inline const Aws::String& GetStart() const { return m_start; }
    inline bool StartHasBeenSet() const { return m_startHasBeenSet; }
    template<typename StartT = Aws::String>
    void SetStart(StartT&& value) { m_startHasBeenSet = true; m_start = std::forward<StartT>(value); }
    template<typename StartT = Aws::String>
    QuietTime& WithStart(StartT&& value) { SetStart(std::forward<StartT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_end;
    bool m_endHasBeenSet = false;

    Aws::String m_start;
    bool m_startHasBeenSet = false;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
