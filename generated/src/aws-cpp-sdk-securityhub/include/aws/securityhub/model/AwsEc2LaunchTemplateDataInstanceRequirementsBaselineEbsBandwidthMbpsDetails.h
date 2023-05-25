/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>

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
namespace SecurityHub
{
namespace Model
{

  /**
   * <p> The minimum and maximum baseline bandwidth to Amazon Elastic Block Store
   * (Amazon EBS), in Mbps. For more information, see <a
   * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ebs-optimized.html">Amazon
   * EBS–optimized instances </a> in the <i>Amazon EC2 User Guide</i>. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsEc2LaunchTemplateDataInstanceRequirementsBaselineEbsBandwidthMbpsDetails">AWS
   * API Reference</a></p>
   */
  class AwsEc2LaunchTemplateDataInstanceRequirementsBaselineEbsBandwidthMbpsDetails
  {
  public:
    AWS_SECURITYHUB_API AwsEc2LaunchTemplateDataInstanceRequirementsBaselineEbsBandwidthMbpsDetails();
    AWS_SECURITYHUB_API AwsEc2LaunchTemplateDataInstanceRequirementsBaselineEbsBandwidthMbpsDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsEc2LaunchTemplateDataInstanceRequirementsBaselineEbsBandwidthMbpsDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The maximum baseline bandwidth, in Mbps. If this parameter is omitted,
     * there's no maximum limit. </p>
     */
    inline int GetMax() const{ return m_max; }

    /**
     * <p> The maximum baseline bandwidth, in Mbps. If this parameter is omitted,
     * there's no maximum limit. </p>
     */
    inline bool MaxHasBeenSet() const { return m_maxHasBeenSet; }

    /**
     * <p> The maximum baseline bandwidth, in Mbps. If this parameter is omitted,
     * there's no maximum limit. </p>
     */
    inline void SetMax(int value) { m_maxHasBeenSet = true; m_max = value; }

    /**
     * <p> The maximum baseline bandwidth, in Mbps. If this parameter is omitted,
     * there's no maximum limit. </p>
     */
    inline AwsEc2LaunchTemplateDataInstanceRequirementsBaselineEbsBandwidthMbpsDetails& WithMax(int value) { SetMax(value); return *this;}


    /**
     * <p> The minimum baseline bandwidth, in Mbps. If this parameter is omitted,
     * there's no minimum limit. </p>
     */
    inline int GetMin() const{ return m_min; }

    /**
     * <p> The minimum baseline bandwidth, in Mbps. If this parameter is omitted,
     * there's no minimum limit. </p>
     */
    inline bool MinHasBeenSet() const { return m_minHasBeenSet; }

    /**
     * <p> The minimum baseline bandwidth, in Mbps. If this parameter is omitted,
     * there's no minimum limit. </p>
     */
    inline void SetMin(int value) { m_minHasBeenSet = true; m_min = value; }

    /**
     * <p> The minimum baseline bandwidth, in Mbps. If this parameter is omitted,
     * there's no minimum limit. </p>
     */
    inline AwsEc2LaunchTemplateDataInstanceRequirementsBaselineEbsBandwidthMbpsDetails& WithMin(int value) { SetMin(value); return *this;}

  private:

    int m_max;
    bool m_maxHasBeenSet = false;

    int m_min;
    bool m_minHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
