/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wafv2/WAFV2_EXPORTS.h>
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
namespace WAFV2
{
namespace Model
{

  /**
   * <p>In a <a>GetSampledRequests</a> request, the <code>StartTime</code> and
   * <code>EndTime</code> objects specify the time range for which you want WAF to
   * return a sample of web requests.</p> <p>You must specify the times in
   * Coordinated Universal Time (UTC) format. UTC format includes the special
   * designator, <code>Z</code>. For example, <code>"2016-09-27T14:50Z"</code>. You
   * can specify any time range in the previous three hours.</p> <p>In a
   * <a>GetSampledRequests</a> response, the <code>StartTime</code> and
   * <code>EndTime</code> objects specify the time range for which WAF actually
   * returned a sample of web requests. WAF gets the specified number of requests
   * from among the first 5,000 requests that your Amazon Web Services resource
   * receives during the specified time period. If your resource receives more than
   * 5,000 requests during that period, WAF stops sampling after the 5,000th request.
   * In that case, <code>EndTime</code> is the time that WAF received the 5,000th
   * request.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/TimeWindow">AWS
   * API Reference</a></p>
   */
  class TimeWindow
  {
  public:
    AWS_WAFV2_API TimeWindow();
    AWS_WAFV2_API TimeWindow(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFV2_API TimeWindow& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The beginning of the time range from which you want
     * <code>GetSampledRequests</code> to return a sample of the requests that your
     * Amazon Web Services resource received. You must specify the times in Coordinated
     * Universal Time (UTC) format. UTC format includes the special designator,
     * <code>Z</code>. For example, <code>"2016-09-27T14:50Z"</code>. You can specify
     * any time range in the previous three hours.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }

    /**
     * <p>The beginning of the time range from which you want
     * <code>GetSampledRequests</code> to return a sample of the requests that your
     * Amazon Web Services resource received. You must specify the times in Coordinated
     * Universal Time (UTC) format. UTC format includes the special designator,
     * <code>Z</code>. For example, <code>"2016-09-27T14:50Z"</code>. You can specify
     * any time range in the previous three hours.</p>
     */
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }

    /**
     * <p>The beginning of the time range from which you want
     * <code>GetSampledRequests</code> to return a sample of the requests that your
     * Amazon Web Services resource received. You must specify the times in Coordinated
     * Universal Time (UTC) format. UTC format includes the special designator,
     * <code>Z</code>. For example, <code>"2016-09-27T14:50Z"</code>. You can specify
     * any time range in the previous three hours.</p>
     */
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTimeHasBeenSet = true; m_startTime = value; }

    /**
     * <p>The beginning of the time range from which you want
     * <code>GetSampledRequests</code> to return a sample of the requests that your
     * Amazon Web Services resource received. You must specify the times in Coordinated
     * Universal Time (UTC) format. UTC format includes the special designator,
     * <code>Z</code>. For example, <code>"2016-09-27T14:50Z"</code>. You can specify
     * any time range in the previous three hours.</p>
     */
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }

    /**
     * <p>The beginning of the time range from which you want
     * <code>GetSampledRequests</code> to return a sample of the requests that your
     * Amazon Web Services resource received. You must specify the times in Coordinated
     * Universal Time (UTC) format. UTC format includes the special designator,
     * <code>Z</code>. For example, <code>"2016-09-27T14:50Z"</code>. You can specify
     * any time range in the previous three hours.</p>
     */
    inline TimeWindow& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}

    /**
     * <p>The beginning of the time range from which you want
     * <code>GetSampledRequests</code> to return a sample of the requests that your
     * Amazon Web Services resource received. You must specify the times in Coordinated
     * Universal Time (UTC) format. UTC format includes the special designator,
     * <code>Z</code>. For example, <code>"2016-09-27T14:50Z"</code>. You can specify
     * any time range in the previous three hours.</p>
     */
    inline TimeWindow& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}


    /**
     * <p>The end of the time range from which you want <code>GetSampledRequests</code>
     * to return a sample of the requests that your Amazon Web Services resource
     * received. You must specify the times in Coordinated Universal Time (UTC) format.
     * UTC format includes the special designator, <code>Z</code>. For example,
     * <code>"2016-09-27T14:50Z"</code>. You can specify any time range in the previous
     * three hours.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const{ return m_endTime; }

    /**
     * <p>The end of the time range from which you want <code>GetSampledRequests</code>
     * to return a sample of the requests that your Amazon Web Services resource
     * received. You must specify the times in Coordinated Universal Time (UTC) format.
     * UTC format includes the special designator, <code>Z</code>. For example,
     * <code>"2016-09-27T14:50Z"</code>. You can specify any time range in the previous
     * three hours.</p>
     */
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }

    /**
     * <p>The end of the time range from which you want <code>GetSampledRequests</code>
     * to return a sample of the requests that your Amazon Web Services resource
     * received. You must specify the times in Coordinated Universal Time (UTC) format.
     * UTC format includes the special designator, <code>Z</code>. For example,
     * <code>"2016-09-27T14:50Z"</code>. You can specify any time range in the previous
     * three hours.</p>
     */
    inline void SetEndTime(const Aws::Utils::DateTime& value) { m_endTimeHasBeenSet = true; m_endTime = value; }

    /**
     * <p>The end of the time range from which you want <code>GetSampledRequests</code>
     * to return a sample of the requests that your Amazon Web Services resource
     * received. You must specify the times in Coordinated Universal Time (UTC) format.
     * UTC format includes the special designator, <code>Z</code>. For example,
     * <code>"2016-09-27T14:50Z"</code>. You can specify any time range in the previous
     * three hours.</p>
     */
    inline void SetEndTime(Aws::Utils::DateTime&& value) { m_endTimeHasBeenSet = true; m_endTime = std::move(value); }

    /**
     * <p>The end of the time range from which you want <code>GetSampledRequests</code>
     * to return a sample of the requests that your Amazon Web Services resource
     * received. You must specify the times in Coordinated Universal Time (UTC) format.
     * UTC format includes the special designator, <code>Z</code>. For example,
     * <code>"2016-09-27T14:50Z"</code>. You can specify any time range in the previous
     * three hours.</p>
     */
    inline TimeWindow& WithEndTime(const Aws::Utils::DateTime& value) { SetEndTime(value); return *this;}

    /**
     * <p>The end of the time range from which you want <code>GetSampledRequests</code>
     * to return a sample of the requests that your Amazon Web Services resource
     * received. You must specify the times in Coordinated Universal Time (UTC) format.
     * UTC format includes the special designator, <code>Z</code>. For example,
     * <code>"2016-09-27T14:50Z"</code>. You can specify any time range in the previous
     * three hours.</p>
     */
    inline TimeWindow& WithEndTime(Aws::Utils::DateTime&& value) { SetEndTime(std::move(value)); return *this;}

  private:

    Aws::Utils::DateTime m_startTime;
    bool m_startTimeHasBeenSet = false;

    Aws::Utils::DateTime m_endTime;
    bool m_endTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace WAFV2
} // namespace Aws
