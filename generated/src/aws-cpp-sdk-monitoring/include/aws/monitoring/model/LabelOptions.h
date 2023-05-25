/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/monitoring/CloudWatch_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>This structure includes the <code>Timezone</code> parameter, which you can
   * use to specify your time zone so that the labels that are associated with
   * returned metrics display the correct time for your time zone. </p> <p>The
   * <code>Timezone</code> value affects a label only if you have a time-based
   * dynamic expression in the label. For more information about dynamic expressions
   * in labels, see <a
   * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/graph-dynamic-labels.html">Using
   * Dynamic Labels</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/monitoring-2010-08-01/LabelOptions">AWS
   * API Reference</a></p>
   */
  class LabelOptions
  {
  public:
    AWS_CLOUDWATCH_API LabelOptions();
    AWS_CLOUDWATCH_API LabelOptions(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_CLOUDWATCH_API LabelOptions& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_CLOUDWATCH_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_CLOUDWATCH_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The time zone to use for metric data return in this operation. The format is
     * <code>+</code> or <code>-</code> followed by four digits. The first two digits
     * indicate the number of hours ahead or behind of UTC, and the final two digits
     * are the number of minutes. For example, +0130 indicates a time zone that is 1
     * hour and 30 minutes ahead of UTC. The default is +0000. </p>
     */
    inline const Aws::String& GetTimezone() const{ return m_timezone; }

    /**
     * <p>The time zone to use for metric data return in this operation. The format is
     * <code>+</code> or <code>-</code> followed by four digits. The first two digits
     * indicate the number of hours ahead or behind of UTC, and the final two digits
     * are the number of minutes. For example, +0130 indicates a time zone that is 1
     * hour and 30 minutes ahead of UTC. The default is +0000. </p>
     */
    inline bool TimezoneHasBeenSet() const { return m_timezoneHasBeenSet; }

    /**
     * <p>The time zone to use for metric data return in this operation. The format is
     * <code>+</code> or <code>-</code> followed by four digits. The first two digits
     * indicate the number of hours ahead or behind of UTC, and the final two digits
     * are the number of minutes. For example, +0130 indicates a time zone that is 1
     * hour and 30 minutes ahead of UTC. The default is +0000. </p>
     */
    inline void SetTimezone(const Aws::String& value) { m_timezoneHasBeenSet = true; m_timezone = value; }

    /**
     * <p>The time zone to use for metric data return in this operation. The format is
     * <code>+</code> or <code>-</code> followed by four digits. The first two digits
     * indicate the number of hours ahead or behind of UTC, and the final two digits
     * are the number of minutes. For example, +0130 indicates a time zone that is 1
     * hour and 30 minutes ahead of UTC. The default is +0000. </p>
     */
    inline void SetTimezone(Aws::String&& value) { m_timezoneHasBeenSet = true; m_timezone = std::move(value); }

    /**
     * <p>The time zone to use for metric data return in this operation. The format is
     * <code>+</code> or <code>-</code> followed by four digits. The first two digits
     * indicate the number of hours ahead or behind of UTC, and the final two digits
     * are the number of minutes. For example, +0130 indicates a time zone that is 1
     * hour and 30 minutes ahead of UTC. The default is +0000. </p>
     */
    inline void SetTimezone(const char* value) { m_timezoneHasBeenSet = true; m_timezone.assign(value); }

    /**
     * <p>The time zone to use for metric data return in this operation. The format is
     * <code>+</code> or <code>-</code> followed by four digits. The first two digits
     * indicate the number of hours ahead or behind of UTC, and the final two digits
     * are the number of minutes. For example, +0130 indicates a time zone that is 1
     * hour and 30 minutes ahead of UTC. The default is +0000. </p>
     */
    inline LabelOptions& WithTimezone(const Aws::String& value) { SetTimezone(value); return *this;}

    /**
     * <p>The time zone to use for metric data return in this operation. The format is
     * <code>+</code> or <code>-</code> followed by four digits. The first two digits
     * indicate the number of hours ahead or behind of UTC, and the final two digits
     * are the number of minutes. For example, +0130 indicates a time zone that is 1
     * hour and 30 minutes ahead of UTC. The default is +0000. </p>
     */
    inline LabelOptions& WithTimezone(Aws::String&& value) { SetTimezone(std::move(value)); return *this;}

    /**
     * <p>The time zone to use for metric data return in this operation. The format is
     * <code>+</code> or <code>-</code> followed by four digits. The first two digits
     * indicate the number of hours ahead or behind of UTC, and the final two digits
     * are the number of minutes. For example, +0130 indicates a time zone that is 1
     * hour and 30 minutes ahead of UTC. The default is +0000. </p>
     */
    inline LabelOptions& WithTimezone(const char* value) { SetTimezone(value); return *this;}

  private:

    Aws::String m_timezone;
    bool m_timezoneHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatch
} // namespace Aws
