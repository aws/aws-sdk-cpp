﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53/Route53_EXPORTS.h>
#include <aws/route53/model/CloudWatchRegion.h>
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
namespace Route53
{
namespace Model
{

  /**
   * <p>A complex type that identifies the CloudWatch alarm that you want Amazon
   * Route 53 health checkers to use to determine whether the specified health check
   * is healthy.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53-2013-04-01/AlarmIdentifier">AWS
   * API Reference</a></p>
   */
  class AlarmIdentifier
  {
  public:
    AWS_ROUTE53_API AlarmIdentifier() = default;
    AWS_ROUTE53_API AlarmIdentifier(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_ROUTE53_API AlarmIdentifier& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_ROUTE53_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    ///@{
    /**
     * <p>For the CloudWatch alarm that you want Route 53 health checkers to use to
     * determine whether this health check is healthy, the region that the alarm was
     * created in.</p> <p>For the current list of CloudWatch regions, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/cw_region.html">Amazon
     * CloudWatch endpoints and quotas</a> in the <i>Amazon Web Services General
     * Reference</i>.</p>
     */
    inline CloudWatchRegion GetRegion() const { return m_region; }
    inline bool RegionHasBeenSet() const { return m_regionHasBeenSet; }
    inline void SetRegion(CloudWatchRegion value) { m_regionHasBeenSet = true; m_region = value; }
    inline AlarmIdentifier& WithRegion(CloudWatchRegion value) { SetRegion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the CloudWatch alarm that you want Amazon Route 53 health
     * checkers to use to determine whether this health check is healthy.</p> 
     * <p>Route 53 supports CloudWatch alarms with the following features:</p> <ul>
     * <li> <p>Standard-resolution metrics. High-resolution metrics aren't supported.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/DeveloperGuide/publishingMetrics.html#high-resolution-metrics">High-Resolution
     * Metrics</a> in the <i>Amazon CloudWatch User Guide</i>.</p> </li> <li>
     * <p>Statistics: Average, Minimum, Maximum, Sum, and SampleCount. Extended
     * statistics aren't supported.</p> </li> </ul> 
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    AlarmIdentifier& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}
  private:

    CloudWatchRegion m_region{CloudWatchRegion::NOT_SET};
    bool m_regionHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53
} // namespace Aws
