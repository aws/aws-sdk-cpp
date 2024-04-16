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
    AWS_MEDIAPACKAGEV2_API DashUtcTiming();
    AWS_MEDIAPACKAGEV2_API DashUtcTiming(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIAPACKAGEV2_API DashUtcTiming& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIAPACKAGEV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The UTC timing mode.</p>
     */
    inline const DashUtcTimingMode& GetTimingMode() const{ return m_timingMode; }

    /**
     * <p>The UTC timing mode.</p>
     */
    inline bool TimingModeHasBeenSet() const { return m_timingModeHasBeenSet; }

    /**
     * <p>The UTC timing mode.</p>
     */
    inline void SetTimingMode(const DashUtcTimingMode& value) { m_timingModeHasBeenSet = true; m_timingMode = value; }

    /**
     * <p>The UTC timing mode.</p>
     */
    inline void SetTimingMode(DashUtcTimingMode&& value) { m_timingModeHasBeenSet = true; m_timingMode = std::move(value); }

    /**
     * <p>The UTC timing mode.</p>
     */
    inline DashUtcTiming& WithTimingMode(const DashUtcTimingMode& value) { SetTimingMode(value); return *this;}

    /**
     * <p>The UTC timing mode.</p>
     */
    inline DashUtcTiming& WithTimingMode(DashUtcTimingMode&& value) { SetTimingMode(std::move(value)); return *this;}


    /**
     * <p>The the method that the player uses to synchronize to coordinated universal
     * time (UTC) wall clock time.</p>
     */
    inline const Aws::String& GetTimingSource() const{ return m_timingSource; }

    /**
     * <p>The the method that the player uses to synchronize to coordinated universal
     * time (UTC) wall clock time.</p>
     */
    inline bool TimingSourceHasBeenSet() const { return m_timingSourceHasBeenSet; }

    /**
     * <p>The the method that the player uses to synchronize to coordinated universal
     * time (UTC) wall clock time.</p>
     */
    inline void SetTimingSource(const Aws::String& value) { m_timingSourceHasBeenSet = true; m_timingSource = value; }

    /**
     * <p>The the method that the player uses to synchronize to coordinated universal
     * time (UTC) wall clock time.</p>
     */
    inline void SetTimingSource(Aws::String&& value) { m_timingSourceHasBeenSet = true; m_timingSource = std::move(value); }

    /**
     * <p>The the method that the player uses to synchronize to coordinated universal
     * time (UTC) wall clock time.</p>
     */
    inline void SetTimingSource(const char* value) { m_timingSourceHasBeenSet = true; m_timingSource.assign(value); }

    /**
     * <p>The the method that the player uses to synchronize to coordinated universal
     * time (UTC) wall clock time.</p>
     */
    inline DashUtcTiming& WithTimingSource(const Aws::String& value) { SetTimingSource(value); return *this;}

    /**
     * <p>The the method that the player uses to synchronize to coordinated universal
     * time (UTC) wall clock time.</p>
     */
    inline DashUtcTiming& WithTimingSource(Aws::String&& value) { SetTimingSource(std::move(value)); return *this;}

    /**
     * <p>The the method that the player uses to synchronize to coordinated universal
     * time (UTC) wall clock time.</p>
     */
    inline DashUtcTiming& WithTimingSource(const char* value) { SetTimingSource(value); return *this;}

  private:

    DashUtcTimingMode m_timingMode;
    bool m_timingModeHasBeenSet = false;

    Aws::String m_timingSource;
    bool m_timingSourceHasBeenSet = false;
  };

} // namespace Model
} // namespace mediapackagev2
} // namespace Aws
