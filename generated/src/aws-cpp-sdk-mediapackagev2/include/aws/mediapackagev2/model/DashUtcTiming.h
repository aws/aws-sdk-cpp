/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediapackagev2/Mediapackagev2_EXPORTS.h>
#include <aws/mediapackagev2/model/DashUtcTimingMode.h>
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
namespace mediapackagev2
{
namespace Model
{

  /**
   * <p>Determines the type of UTC timing included in the DASH Media Presentation
   * Description (MPD).</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediapackagev2-2022-12-25/DashUtcTiming">AWS
   * API Reference</a></p>
   */
  class DashUtcTiming
  {
  public:
    AWS_MEDIAPACKAGEV2_API DashUtcTiming() = default;
    AWS_MEDIAPACKAGEV2_API DashUtcTiming(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIAPACKAGEV2_API DashUtcTiming& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIAPACKAGEV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The UTC timing mode.</p>
     */
    inline DashUtcTimingMode GetTimingMode() const { return m_timingMode; }
    inline bool TimingModeHasBeenSet() const { return m_timingModeHasBeenSet; }
    inline void SetTimingMode(DashUtcTimingMode value) { m_timingModeHasBeenSet = true; m_timingMode = value; }
    inline DashUtcTiming& WithTimingMode(DashUtcTimingMode value) { SetTimingMode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The the method that the player uses to synchronize to coordinated universal
     * time (UTC) wall clock time.</p>
     */
    inline const Aws::String& GetTimingSource() const { return m_timingSource; }
    inline bool TimingSourceHasBeenSet() const { return m_timingSourceHasBeenSet; }
    template<typename TimingSourceT = Aws::String>
    void SetTimingSource(TimingSourceT&& value) { m_timingSourceHasBeenSet = true; m_timingSource = std::forward<TimingSourceT>(value); }
    template<typename TimingSourceT = Aws::String>
    DashUtcTiming& WithTimingSource(TimingSourceT&& value) { SetTimingSource(std::forward<TimingSourceT>(value)); return *this;}
    ///@}
  private:

    DashUtcTimingMode m_timingMode{DashUtcTimingMode::NOT_SET};
    bool m_timingModeHasBeenSet = false;

    Aws::String m_timingSource;
    bool m_timingSourceHasBeenSet = false;
  };

} // namespace Model
} // namespace mediapackagev2
} // namespace Aws
