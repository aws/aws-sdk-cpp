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
    AWS_MEDIAPACKAGEV2_API FilterConfiguration();
    AWS_MEDIAPACKAGEV2_API FilterConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIAPACKAGEV2_API FilterConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIAPACKAGEV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Optionally specify one or more manifest filters for all of your manifest
     * egress requests. When you include a manifest filter, note that you cannot use an
     * identical manifest filter query parameter for this manifest's endpoint URL.</p>
     */
    inline const Aws::String& GetManifestFilter() const{ return m_manifestFilter; }

    /**
     * <p>Optionally specify one or more manifest filters for all of your manifest
     * egress requests. When you include a manifest filter, note that you cannot use an
     * identical manifest filter query parameter for this manifest's endpoint URL.</p>
     */
    inline bool ManifestFilterHasBeenSet() const { return m_manifestFilterHasBeenSet; }

    /**
     * <p>Optionally specify one or more manifest filters for all of your manifest
     * egress requests. When you include a manifest filter, note that you cannot use an
     * identical manifest filter query parameter for this manifest's endpoint URL.</p>
     */
    inline void SetManifestFilter(const Aws::String& value) { m_manifestFilterHasBeenSet = true; m_manifestFilter = value; }

    /**
     * <p>Optionally specify one or more manifest filters for all of your manifest
     * egress requests. When you include a manifest filter, note that you cannot use an
     * identical manifest filter query parameter for this manifest's endpoint URL.</p>
     */
    inline void SetManifestFilter(Aws::String&& value) { m_manifestFilterHasBeenSet = true; m_manifestFilter = std::move(value); }

    /**
     * <p>Optionally specify one or more manifest filters for all of your manifest
     * egress requests. When you include a manifest filter, note that you cannot use an
     * identical manifest filter query parameter for this manifest's endpoint URL.</p>
     */
    inline void SetManifestFilter(const char* value) { m_manifestFilterHasBeenSet = true; m_manifestFilter.assign(value); }

    /**
     * <p>Optionally specify one or more manifest filters for all of your manifest
     * egress requests. When you include a manifest filter, note that you cannot use an
     * identical manifest filter query parameter for this manifest's endpoint URL.</p>
     */
    inline FilterConfiguration& WithManifestFilter(const Aws::String& value) { SetManifestFilter(value); return *this;}

    /**
     * <p>Optionally specify one or more manifest filters for all of your manifest
     * egress requests. When you include a manifest filter, note that you cannot use an
     * identical manifest filter query parameter for this manifest's endpoint URL.</p>
     */
    inline FilterConfiguration& WithManifestFilter(Aws::String&& value) { SetManifestFilter(std::move(value)); return *this;}

    /**
     * <p>Optionally specify one or more manifest filters for all of your manifest
     * egress requests. When you include a manifest filter, note that you cannot use an
     * identical manifest filter query parameter for this manifest's endpoint URL.</p>
     */
    inline FilterConfiguration& WithManifestFilter(const char* value) { SetManifestFilter(value); return *this;}


    /**
     * <p>Optionally specify the start time for all of your manifest egress requests.
     * When you include start time, note that you cannot use start time query
     * parameters for this manifest's endpoint URL.</p>
     */
    inline const Aws::Utils::DateTime& GetStart() const{ return m_start; }

    /**
     * <p>Optionally specify the start time for all of your manifest egress requests.
     * When you include start time, note that you cannot use start time query
     * parameters for this manifest's endpoint URL.</p>
     */
    inline bool StartHasBeenSet() const { return m_startHasBeenSet; }

    /**
     * <p>Optionally specify the start time for all of your manifest egress requests.
     * When you include start time, note that you cannot use start time query
     * parameters for this manifest's endpoint URL.</p>
     */
    inline void SetStart(const Aws::Utils::DateTime& value) { m_startHasBeenSet = true; m_start = value; }

    /**
     * <p>Optionally specify the start time for all of your manifest egress requests.
     * When you include start time, note that you cannot use start time query
     * parameters for this manifest's endpoint URL.</p>
     */
    inline void SetStart(Aws::Utils::DateTime&& value) { m_startHasBeenSet = true; m_start = std::move(value); }

    /**
     * <p>Optionally specify the start time for all of your manifest egress requests.
     * When you include start time, note that you cannot use start time query
     * parameters for this manifest's endpoint URL.</p>
     */
    inline FilterConfiguration& WithStart(const Aws::Utils::DateTime& value) { SetStart(value); return *this;}

    /**
     * <p>Optionally specify the start time for all of your manifest egress requests.
     * When you include start time, note that you cannot use start time query
     * parameters for this manifest's endpoint URL.</p>
     */
    inline FilterConfiguration& WithStart(Aws::Utils::DateTime&& value) { SetStart(std::move(value)); return *this;}


    /**
     * <p>Optionally specify the end time for all of your manifest egress requests.
     * When you include end time, note that you cannot use end time query parameters
     * for this manifest's endpoint URL.</p>
     */
    inline const Aws::Utils::DateTime& GetEnd() const{ return m_end; }

    /**
     * <p>Optionally specify the end time for all of your manifest egress requests.
     * When you include end time, note that you cannot use end time query parameters
     * for this manifest's endpoint URL.</p>
     */
    inline bool EndHasBeenSet() const { return m_endHasBeenSet; }

    /**
     * <p>Optionally specify the end time for all of your manifest egress requests.
     * When you include end time, note that you cannot use end time query parameters
     * for this manifest's endpoint URL.</p>
     */
    inline void SetEnd(const Aws::Utils::DateTime& value) { m_endHasBeenSet = true; m_end = value; }

    /**
     * <p>Optionally specify the end time for all of your manifest egress requests.
     * When you include end time, note that you cannot use end time query parameters
     * for this manifest's endpoint URL.</p>
     */
    inline void SetEnd(Aws::Utils::DateTime&& value) { m_endHasBeenSet = true; m_end = std::move(value); }

    /**
     * <p>Optionally specify the end time for all of your manifest egress requests.
     * When you include end time, note that you cannot use end time query parameters
     * for this manifest's endpoint URL.</p>
     */
    inline FilterConfiguration& WithEnd(const Aws::Utils::DateTime& value) { SetEnd(value); return *this;}

    /**
     * <p>Optionally specify the end time for all of your manifest egress requests.
     * When you include end time, note that you cannot use end time query parameters
     * for this manifest's endpoint URL.</p>
     */
    inline FilterConfiguration& WithEnd(Aws::Utils::DateTime&& value) { SetEnd(std::move(value)); return *this;}


    /**
     * <p>Optionally specify the time delay for all of your manifest egress requests.
     * Enter a value that is smaller than your endpoint's startover window. When you
     * include time delay, note that you cannot use time delay query parameters for
     * this manifest's endpoint URL.</p>
     */
    inline int GetTimeDelaySeconds() const{ return m_timeDelaySeconds; }

    /**
     * <p>Optionally specify the time delay for all of your manifest egress requests.
     * Enter a value that is smaller than your endpoint's startover window. When you
     * include time delay, note that you cannot use time delay query parameters for
     * this manifest's endpoint URL.</p>
     */
    inline bool TimeDelaySecondsHasBeenSet() const { return m_timeDelaySecondsHasBeenSet; }

    /**
     * <p>Optionally specify the time delay for all of your manifest egress requests.
     * Enter a value that is smaller than your endpoint's startover window. When you
     * include time delay, note that you cannot use time delay query parameters for
     * this manifest's endpoint URL.</p>
     */
    inline void SetTimeDelaySeconds(int value) { m_timeDelaySecondsHasBeenSet = true; m_timeDelaySeconds = value; }

    /**
     * <p>Optionally specify the time delay for all of your manifest egress requests.
     * Enter a value that is smaller than your endpoint's startover window. When you
     * include time delay, note that you cannot use time delay query parameters for
     * this manifest's endpoint URL.</p>
     */
    inline FilterConfiguration& WithTimeDelaySeconds(int value) { SetTimeDelaySeconds(value); return *this;}

  private:

    Aws::String m_manifestFilter;
    bool m_manifestFilterHasBeenSet = false;

    Aws::Utils::DateTime m_start;
    bool m_startHasBeenSet = false;

    Aws::Utils::DateTime m_end;
    bool m_endHasBeenSet = false;

    int m_timeDelaySeconds;
    bool m_timeDelaySecondsHasBeenSet = false;
  };

} // namespace Model
} // namespace mediapackagev2
} // namespace Aws
