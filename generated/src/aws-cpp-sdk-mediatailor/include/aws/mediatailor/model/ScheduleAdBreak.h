/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediatailor/MediaTailor_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
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
namespace MediaTailor
{
namespace Model
{

  /**
   * <p>The schedule's ad break properties.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediatailor-2018-04-23/ScheduleAdBreak">AWS
   * API Reference</a></p>
   */
  class ScheduleAdBreak
  {
  public:
    AWS_MEDIATAILOR_API ScheduleAdBreak() = default;
    AWS_MEDIATAILOR_API ScheduleAdBreak(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIATAILOR_API ScheduleAdBreak& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIATAILOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The approximate duration of the ad break, in seconds.</p>
     */
    inline long long GetApproximateDurationSeconds() const { return m_approximateDurationSeconds; }
    inline bool ApproximateDurationSecondsHasBeenSet() const { return m_approximateDurationSecondsHasBeenSet; }
    inline void SetApproximateDurationSeconds(long long value) { m_approximateDurationSecondsHasBeenSet = true; m_approximateDurationSeconds = value; }
    inline ScheduleAdBreak& WithApproximateDurationSeconds(long long value) { SetApproximateDurationSeconds(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The approximate time that the ad will start playing.</p>
     */
    inline const Aws::Utils::DateTime& GetApproximateStartTime() const { return m_approximateStartTime; }
    inline bool ApproximateStartTimeHasBeenSet() const { return m_approximateStartTimeHasBeenSet; }
    template<typename ApproximateStartTimeT = Aws::Utils::DateTime>
    void SetApproximateStartTime(ApproximateStartTimeT&& value) { m_approximateStartTimeHasBeenSet = true; m_approximateStartTime = std::forward<ApproximateStartTimeT>(value); }
    template<typename ApproximateStartTimeT = Aws::Utils::DateTime>
    ScheduleAdBreak& WithApproximateStartTime(ApproximateStartTimeT&& value) { SetApproximateStartTime(std::forward<ApproximateStartTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the source location containing the VOD source used for the ad
     * break.</p>
     */
    inline const Aws::String& GetSourceLocationName() const { return m_sourceLocationName; }
    inline bool SourceLocationNameHasBeenSet() const { return m_sourceLocationNameHasBeenSet; }
    template<typename SourceLocationNameT = Aws::String>
    void SetSourceLocationName(SourceLocationNameT&& value) { m_sourceLocationNameHasBeenSet = true; m_sourceLocationName = std::forward<SourceLocationNameT>(value); }
    template<typename SourceLocationNameT = Aws::String>
    ScheduleAdBreak& WithSourceLocationName(SourceLocationNameT&& value) { SetSourceLocationName(std::forward<SourceLocationNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the VOD source used for the ad break.</p>
     */
    inline const Aws::String& GetVodSourceName() const { return m_vodSourceName; }
    inline bool VodSourceNameHasBeenSet() const { return m_vodSourceNameHasBeenSet; }
    template<typename VodSourceNameT = Aws::String>
    void SetVodSourceName(VodSourceNameT&& value) { m_vodSourceNameHasBeenSet = true; m_vodSourceName = std::forward<VodSourceNameT>(value); }
    template<typename VodSourceNameT = Aws::String>
    ScheduleAdBreak& WithVodSourceName(VodSourceNameT&& value) { SetVodSourceName(std::forward<VodSourceNameT>(value)); return *this;}
    ///@}
  private:

    long long m_approximateDurationSeconds{0};
    bool m_approximateDurationSecondsHasBeenSet = false;

    Aws::Utils::DateTime m_approximateStartTime{};
    bool m_approximateStartTimeHasBeenSet = false;

    Aws::String m_sourceLocationName;
    bool m_sourceLocationNameHasBeenSet = false;

    Aws::String m_vodSourceName;
    bool m_vodSourceNameHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaTailor
} // namespace Aws
