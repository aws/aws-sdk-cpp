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
   * <p>One data point related to one contributor.</p> <p>For more information, see
   * <a
   * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/APIReference/API_GetInsightRuleReport.html">GetInsightRuleReport</a>
   * and <a
   * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/APIReference/API_InsightRuleContributor.html">InsightRuleContributor</a>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/monitoring-2010-08-01/InsightRuleContributorDatapoint">AWS
   * API Reference</a></p>
   */
  class InsightRuleContributorDatapoint
  {
  public:
    AWS_CLOUDWATCH_API InsightRuleContributorDatapoint() = default;
    AWS_CLOUDWATCH_API InsightRuleContributorDatapoint(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_CLOUDWATCH_API InsightRuleContributorDatapoint& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_CLOUDWATCH_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_CLOUDWATCH_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The timestamp of the data point.</p>
     */
    inline const Aws::Utils::DateTime& GetTimestamp() const { return m_timestamp; }
    inline bool TimestampHasBeenSet() const { return m_timestampHasBeenSet; }
    template<typename TimestampT = Aws::Utils::DateTime>
    void SetTimestamp(TimestampT&& value) { m_timestampHasBeenSet = true; m_timestamp = std::forward<TimestampT>(value); }
    template<typename TimestampT = Aws::Utils::DateTime>
    InsightRuleContributorDatapoint& WithTimestamp(TimestampT&& value) { SetTimestamp(std::forward<TimestampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The approximate value that this contributor added during this timestamp.</p>
     */
    inline double GetApproximateValue() const { return m_approximateValue; }
    inline bool ApproximateValueHasBeenSet() const { return m_approximateValueHasBeenSet; }
    inline void SetApproximateValue(double value) { m_approximateValueHasBeenSet = true; m_approximateValue = value; }
    inline InsightRuleContributorDatapoint& WithApproximateValue(double value) { SetApproximateValue(value); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_timestamp{};
    bool m_timestampHasBeenSet = false;

    double m_approximateValue{0.0};
    bool m_approximateValueHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatch
} // namespace Aws
