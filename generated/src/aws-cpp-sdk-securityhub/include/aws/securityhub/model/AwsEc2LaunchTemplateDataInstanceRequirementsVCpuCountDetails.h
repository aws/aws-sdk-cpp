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
   * <p> The minimum and maximum number of vCPUs for an Amazon EC2 instance.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsEc2LaunchTemplateDataInstanceRequirementsVCpuCountDetails">AWS
   * API Reference</a></p>
   */
  class AwsEc2LaunchTemplateDataInstanceRequirementsVCpuCountDetails
  {
  public:
    AWS_SECURITYHUB_API AwsEc2LaunchTemplateDataInstanceRequirementsVCpuCountDetails();
    AWS_SECURITYHUB_API AwsEc2LaunchTemplateDataInstanceRequirementsVCpuCountDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsEc2LaunchTemplateDataInstanceRequirementsVCpuCountDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The maximum number of vCPUs. </p>
     */
    inline int GetMax() const{ return m_max; }

    /**
     * <p> The maximum number of vCPUs. </p>
     */
    inline bool MaxHasBeenSet() const { return m_maxHasBeenSet; }

    /**
     * <p> The maximum number of vCPUs. </p>
     */
    inline void SetMax(int value) { m_maxHasBeenSet = true; m_max = value; }

    /**
     * <p> The maximum number of vCPUs. </p>
     */
    inline AwsEc2LaunchTemplateDataInstanceRequirementsVCpuCountDetails& WithMax(int value) { SetMax(value); return *this;}


    /**
     * <p> The minimum number of vCPUs. </p>
     */
    inline int GetMin() const{ return m_min; }

    /**
     * <p> The minimum number of vCPUs. </p>
     */
    inline bool MinHasBeenSet() const { return m_minHasBeenSet; }

    /**
     * <p> The minimum number of vCPUs. </p>
     */
    inline void SetMin(int value) { m_minHasBeenSet = true; m_min = value; }

    /**
     * <p> The minimum number of vCPUs. </p>
     */
    inline AwsEc2LaunchTemplateDataInstanceRequirementsVCpuCountDetails& WithMin(int value) { SetMin(value); return *this;}

  private:

    int m_max;
    bool m_maxHasBeenSet = false;

    int m_min;
    bool m_minHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
