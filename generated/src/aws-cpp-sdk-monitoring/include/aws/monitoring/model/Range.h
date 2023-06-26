/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/monitoring/CloudWatch_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/DateTime.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace CloudWatch
{
namespace Model
{

  /**
   * <p>Specifies one range of days or times to exclude from use for training an
   * anomaly detection model.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/monitoring-2010-08-01/Range">AWS
   * API Reference</a></p>
   */
  class Range
  {
  public:
    AWS_CLOUDWATCH_API Range();
    AWS_CLOUDWATCH_API Range(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_CLOUDWATCH_API Range& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_CLOUDWATCH_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_CLOUDWATCH_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The start time of the range to exclude. The format is
     * <code>yyyy-MM-dd'T'HH:mm:ss</code>. For example,
     * <code>2019-07-01T23:59:59</code>.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }

    /**
     * <p>The start time of the range to exclude. The format is
     * <code>yyyy-MM-dd'T'HH:mm:ss</code>. For example,
     * <code>2019-07-01T23:59:59</code>.</p>
     */
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }

    /**
     * <p>The start time of the range to exclude. The format is
     * <code>yyyy-MM-dd'T'HH:mm:ss</code>. For example,
     * <code>2019-07-01T23:59:59</code>.</p>
     */
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTimeHasBeenSet = true; m_startTime = value; }

    /**
     * <p>The start time of the range to exclude. The format is
     * <code>yyyy-MM-dd'T'HH:mm:ss</code>. For example,
     * <code>2019-07-01T23:59:59</code>.</p>
     */
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }

    /**
     * <p>The start time of the range to exclude. The format is
     * <code>yyyy-MM-dd'T'HH:mm:ss</code>. For example,
     * <code>2019-07-01T23:59:59</code>.</p>
     */
    inline Range& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}

    /**
     * <p>The start time of the range to exclude. The format is
     * <code>yyyy-MM-dd'T'HH:mm:ss</code>. For example,
     * <code>2019-07-01T23:59:59</code>.</p>
     */
    inline Range& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}


    /**
     * <p>The end time of the range to exclude. The format is
     * <code>yyyy-MM-dd'T'HH:mm:ss</code>. For example,
     * <code>2019-07-01T23:59:59</code>.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const{ return m_endTime; }

    /**
     * <p>The end time of the range to exclude. The format is
     * <code>yyyy-MM-dd'T'HH:mm:ss</code>. For example,
     * <code>2019-07-01T23:59:59</code>.</p>
     */
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }

    /**
     * <p>The end time of the range to exclude. The format is
     * <code>yyyy-MM-dd'T'HH:mm:ss</code>. For example,
     * <code>2019-07-01T23:59:59</code>.</p>
     */
    inline void SetEndTime(const Aws::Utils::DateTime& value) { m_endTimeHasBeenSet = true; m_endTime = value; }

    /**
     * <p>The end time of the range to exclude. The format is
     * <code>yyyy-MM-dd'T'HH:mm:ss</code>. For example,
     * <code>2019-07-01T23:59:59</code>.</p>
     */
    inline void SetEndTime(Aws::Utils::DateTime&& value) { m_endTimeHasBeenSet = true; m_endTime = std::move(value); }

    /**
     * <p>The end time of the range to exclude. The format is
     * <code>yyyy-MM-dd'T'HH:mm:ss</code>. For example,
     * <code>2019-07-01T23:59:59</code>.</p>
     */
    inline Range& WithEndTime(const Aws::Utils::DateTime& value) { SetEndTime(value); return *this;}

    /**
     * <p>The end time of the range to exclude. The format is
     * <code>yyyy-MM-dd'T'HH:mm:ss</code>. For example,
     * <code>2019-07-01T23:59:59</code>.</p>
     */
    inline Range& WithEndTime(Aws::Utils::DateTime&& value) { SetEndTime(std::move(value)); return *this;}

  private:

    Aws::Utils::DateTime m_startTime;
    bool m_startTimeHasBeenSet = false;

    Aws::Utils::DateTime m_endTime;
    bool m_endTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatch
} // namespace Aws
