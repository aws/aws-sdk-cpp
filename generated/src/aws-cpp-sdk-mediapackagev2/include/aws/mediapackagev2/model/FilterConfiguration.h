/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediapackagev2/Mediapackagev2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>Filter configuration includes settings for manifest filtering, start and end
   * times, and time delay that apply to all of your egress requests for this
   * manifest. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediapackagev2-2022-12-25/FilterConfiguration">AWS
   * API Reference</a></p>
   */
  class FilterConfiguration
  {
  public:
    AWS_MEDIAPACKAGEV2_API FilterConfiguration() = default;
    AWS_MEDIAPACKAGEV2_API FilterConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIAPACKAGEV2_API FilterConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIAPACKAGEV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Optionally specify one or more manifest filters for all of your manifest
     * egress requests. When you include a manifest filter, note that you cannot use an
     * identical manifest filter query parameter for this manifest's endpoint URL.</p>
     */
    inline const Aws::String& GetManifestFilter() const { return m_manifestFilter; }
    inline bool ManifestFilterHasBeenSet() const { return m_manifestFilterHasBeenSet; }
    template<typename ManifestFilterT = Aws::String>
    void SetManifestFilter(ManifestFilterT&& value) { m_manifestFilterHasBeenSet = true; m_manifestFilter = std::forward<ManifestFilterT>(value); }
    template<typename ManifestFilterT = Aws::String>
    FilterConfiguration& WithManifestFilter(ManifestFilterT&& value) { SetManifestFilter(std::forward<ManifestFilterT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Optionally specify the start time for all of your manifest egress requests.
     * When you include start time, note that you cannot use start time query
     * parameters for this manifest's endpoint URL.</p>
     */
    inline const Aws::Utils::DateTime& GetStart() const { return m_start; }
    inline bool StartHasBeenSet() const { return m_startHasBeenSet; }
    template<typename StartT = Aws::Utils::DateTime>
    void SetStart(StartT&& value) { m_startHasBeenSet = true; m_start = std::forward<StartT>(value); }
    template<typename StartT = Aws::Utils::DateTime>
    FilterConfiguration& WithStart(StartT&& value) { SetStart(std::forward<StartT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Optionally specify the end time for all of your manifest egress requests.
     * When you include end time, note that you cannot use end time query parameters
     * for this manifest's endpoint URL.</p>
     */
    inline const Aws::Utils::DateTime& GetEnd() const { return m_end; }
    inline bool EndHasBeenSet() const { return m_endHasBeenSet; }
    template<typename EndT = Aws::Utils::DateTime>
    void SetEnd(EndT&& value) { m_endHasBeenSet = true; m_end = std::forward<EndT>(value); }
    template<typename EndT = Aws::Utils::DateTime>
    FilterConfiguration& WithEnd(EndT&& value) { SetEnd(std::forward<EndT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Optionally specify the time delay for all of your manifest egress requests.
     * Enter a value that is smaller than your endpoint's startover window. When you
     * include time delay, note that you cannot use time delay query parameters for
     * this manifest's endpoint URL.</p>
     */
    inline int GetTimeDelaySeconds() const { return m_timeDelaySeconds; }
    inline bool TimeDelaySecondsHasBeenSet() const { return m_timeDelaySecondsHasBeenSet; }
    inline void SetTimeDelaySeconds(int value) { m_timeDelaySecondsHasBeenSet = true; m_timeDelaySeconds = value; }
    inline FilterConfiguration& WithTimeDelaySeconds(int value) { SetTimeDelaySeconds(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Optionally specify the clip start time for all of your manifest egress
     * requests. When you include clip start time, note that you cannot use clip start
     * time query parameters for this manifest's endpoint URL.</p>
     */
    inline const Aws::Utils::DateTime& GetClipStartTime() const { return m_clipStartTime; }
    inline bool ClipStartTimeHasBeenSet() const { return m_clipStartTimeHasBeenSet; }
    template<typename ClipStartTimeT = Aws::Utils::DateTime>
    void SetClipStartTime(ClipStartTimeT&& value) { m_clipStartTimeHasBeenSet = true; m_clipStartTime = std::forward<ClipStartTimeT>(value); }
    template<typename ClipStartTimeT = Aws::Utils::DateTime>
    FilterConfiguration& WithClipStartTime(ClipStartTimeT&& value) { SetClipStartTime(std::forward<ClipStartTimeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_manifestFilter;
    bool m_manifestFilterHasBeenSet = false;

    Aws::Utils::DateTime m_start{};
    bool m_startHasBeenSet = false;

    Aws::Utils::DateTime m_end{};
    bool m_endHasBeenSet = false;

    int m_timeDelaySeconds{0};
    bool m_timeDelaySecondsHasBeenSet = false;

    Aws::Utils::DateTime m_clipStartTime{};
    bool m_clipStartTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace mediapackagev2
} // namespace Aws
