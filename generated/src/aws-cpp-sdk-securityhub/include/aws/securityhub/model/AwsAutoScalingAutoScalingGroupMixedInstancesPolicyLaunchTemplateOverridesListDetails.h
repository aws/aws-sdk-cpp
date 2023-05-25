/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace SecurityHub
{
namespace Model
{

  /**
   * <p>Property values to use to override the values in the launch
   * template.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsAutoScalingAutoScalingGroupMixedInstancesPolicyLaunchTemplateOverridesListDetails">AWS
   * API Reference</a></p>
   */
  class AwsAutoScalingAutoScalingGroupMixedInstancesPolicyLaunchTemplateOverridesListDetails
  {
  public:
    AWS_SECURITYHUB_API AwsAutoScalingAutoScalingGroupMixedInstancesPolicyLaunchTemplateOverridesListDetails();
    AWS_SECURITYHUB_API AwsAutoScalingAutoScalingGroupMixedInstancesPolicyLaunchTemplateOverridesListDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsAutoScalingAutoScalingGroupMixedInstancesPolicyLaunchTemplateOverridesListDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The instance type. For example, <code>m3.xlarge</code>.</p>
     */
    inline const Aws::String& GetInstanceType() const{ return m_instanceType; }

    /**
     * <p>The instance type. For example, <code>m3.xlarge</code>.</p>
     */
    inline bool InstanceTypeHasBeenSet() const { return m_instanceTypeHasBeenSet; }

    /**
     * <p>The instance type. For example, <code>m3.xlarge</code>.</p>
     */
    inline void SetInstanceType(const Aws::String& value) { m_instanceTypeHasBeenSet = true; m_instanceType = value; }

    /**
     * <p>The instance type. For example, <code>m3.xlarge</code>.</p>
     */
    inline void SetInstanceType(Aws::String&& value) { m_instanceTypeHasBeenSet = true; m_instanceType = std::move(value); }

    /**
     * <p>The instance type. For example, <code>m3.xlarge</code>.</p>
     */
    inline void SetInstanceType(const char* value) { m_instanceTypeHasBeenSet = true; m_instanceType.assign(value); }

    /**
     * <p>The instance type. For example, <code>m3.xlarge</code>.</p>
     */
    inline AwsAutoScalingAutoScalingGroupMixedInstancesPolicyLaunchTemplateOverridesListDetails& WithInstanceType(const Aws::String& value) { SetInstanceType(value); return *this;}

    /**
     * <p>The instance type. For example, <code>m3.xlarge</code>.</p>
     */
    inline AwsAutoScalingAutoScalingGroupMixedInstancesPolicyLaunchTemplateOverridesListDetails& WithInstanceType(Aws::String&& value) { SetInstanceType(std::move(value)); return *this;}

    /**
     * <p>The instance type. For example, <code>m3.xlarge</code>.</p>
     */
    inline AwsAutoScalingAutoScalingGroupMixedInstancesPolicyLaunchTemplateOverridesListDetails& WithInstanceType(const char* value) { SetInstanceType(value); return *this;}


    /**
     * <p>The number of capacity units provided by the specified instance type in terms
     * of virtual CPUs, memory, storage, throughput, or other relative performance
     * characteristic.</p>
     */
    inline const Aws::String& GetWeightedCapacity() const{ return m_weightedCapacity; }

    /**
     * <p>The number of capacity units provided by the specified instance type in terms
     * of virtual CPUs, memory, storage, throughput, or other relative performance
     * characteristic.</p>
     */
    inline bool WeightedCapacityHasBeenSet() const { return m_weightedCapacityHasBeenSet; }

    /**
     * <p>The number of capacity units provided by the specified instance type in terms
     * of virtual CPUs, memory, storage, throughput, or other relative performance
     * characteristic.</p>
     */
    inline void SetWeightedCapacity(const Aws::String& value) { m_weightedCapacityHasBeenSet = true; m_weightedCapacity = value; }

    /**
     * <p>The number of capacity units provided by the specified instance type in terms
     * of virtual CPUs, memory, storage, throughput, or other relative performance
     * characteristic.</p>
     */
    inline void SetWeightedCapacity(Aws::String&& value) { m_weightedCapacityHasBeenSet = true; m_weightedCapacity = std::move(value); }

    /**
     * <p>The number of capacity units provided by the specified instance type in terms
     * of virtual CPUs, memory, storage, throughput, or other relative performance
     * characteristic.</p>
     */
    inline void SetWeightedCapacity(const char* value) { m_weightedCapacityHasBeenSet = true; m_weightedCapacity.assign(value); }

    /**
     * <p>The number of capacity units provided by the specified instance type in terms
     * of virtual CPUs, memory, storage, throughput, or other relative performance
     * characteristic.</p>
     */
    inline AwsAutoScalingAutoScalingGroupMixedInstancesPolicyLaunchTemplateOverridesListDetails& WithWeightedCapacity(const Aws::String& value) { SetWeightedCapacity(value); return *this;}

    /**
     * <p>The number of capacity units provided by the specified instance type in terms
     * of virtual CPUs, memory, storage, throughput, or other relative performance
     * characteristic.</p>
     */
    inline AwsAutoScalingAutoScalingGroupMixedInstancesPolicyLaunchTemplateOverridesListDetails& WithWeightedCapacity(Aws::String&& value) { SetWeightedCapacity(std::move(value)); return *this;}

    /**
     * <p>The number of capacity units provided by the specified instance type in terms
     * of virtual CPUs, memory, storage, throughput, or other relative performance
     * characteristic.</p>
     */
    inline AwsAutoScalingAutoScalingGroupMixedInstancesPolicyLaunchTemplateOverridesListDetails& WithWeightedCapacity(const char* value) { SetWeightedCapacity(value); return *this;}

  private:

    Aws::String m_instanceType;
    bool m_instanceTypeHasBeenSet = false;

    Aws::String m_weightedCapacity;
    bool m_weightedCapacityHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
