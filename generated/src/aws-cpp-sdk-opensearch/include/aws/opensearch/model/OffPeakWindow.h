/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearch/OpenSearchService_EXPORTS.h>
#include <aws/opensearch/model/WindowStartTime.h>
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
namespace OpenSearchService
{
namespace Model
{

  /**
   * <p>A custom 10-hour, low-traffic window during which OpenSearch Service can
   * perform mandatory configuration changes on the domain. These actions can include
   * scheduled service software updates and blue/green Auto-Tune enhancements.
   * OpenSearch Service will schedule these actions during the window that you
   * specify.</p> <p>If you don't specify a window start time, it defaults to 10:00
   * P.M. local time.</p> <p>For more information, see <a
   * href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/off-peak.html">Defining
   * off-peak maintenance windows for Amazon OpenSearch Service</a>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/OffPeakWindow">AWS
   * API Reference</a></p>
   */
  class OffPeakWindow
  {
  public:
    AWS_OPENSEARCHSERVICE_API OffPeakWindow();
    AWS_OPENSEARCHSERVICE_API OffPeakWindow(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVICE_API OffPeakWindow& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A custom start time for the off-peak window, in Coordinated Universal Time
     * (UTC). The window length will always be 10 hours, so you can't specify an end
     * time. For example, if you specify 11:00 P.M. UTC as a start time, the end time
     * will automatically be set to 9:00 A.M.</p>
     */
    inline const WindowStartTime& GetWindowStartTime() const{ return m_windowStartTime; }

    /**
     * <p>A custom start time for the off-peak window, in Coordinated Universal Time
     * (UTC). The window length will always be 10 hours, so you can't specify an end
     * time. For example, if you specify 11:00 P.M. UTC as a start time, the end time
     * will automatically be set to 9:00 A.M.</p>
     */
    inline bool WindowStartTimeHasBeenSet() const { return m_windowStartTimeHasBeenSet; }

    /**
     * <p>A custom start time for the off-peak window, in Coordinated Universal Time
     * (UTC). The window length will always be 10 hours, so you can't specify an end
     * time. For example, if you specify 11:00 P.M. UTC as a start time, the end time
     * will automatically be set to 9:00 A.M.</p>
     */
    inline void SetWindowStartTime(const WindowStartTime& value) { m_windowStartTimeHasBeenSet = true; m_windowStartTime = value; }

    /**
     * <p>A custom start time for the off-peak window, in Coordinated Universal Time
     * (UTC). The window length will always be 10 hours, so you can't specify an end
     * time. For example, if you specify 11:00 P.M. UTC as a start time, the end time
     * will automatically be set to 9:00 A.M.</p>
     */
    inline void SetWindowStartTime(WindowStartTime&& value) { m_windowStartTimeHasBeenSet = true; m_windowStartTime = std::move(value); }

    /**
     * <p>A custom start time for the off-peak window, in Coordinated Universal Time
     * (UTC). The window length will always be 10 hours, so you can't specify an end
     * time. For example, if you specify 11:00 P.M. UTC as a start time, the end time
     * will automatically be set to 9:00 A.M.</p>
     */
    inline OffPeakWindow& WithWindowStartTime(const WindowStartTime& value) { SetWindowStartTime(value); return *this;}

    /**
     * <p>A custom start time for the off-peak window, in Coordinated Universal Time
     * (UTC). The window length will always be 10 hours, so you can't specify an end
     * time. For example, if you specify 11:00 P.M. UTC as a start time, the end time
     * will automatically be set to 9:00 A.M.</p>
     */
    inline OffPeakWindow& WithWindowStartTime(WindowStartTime&& value) { SetWindowStartTime(std::move(value)); return *this;}

  private:

    WindowStartTime m_windowStartTime;
    bool m_windowStartTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
