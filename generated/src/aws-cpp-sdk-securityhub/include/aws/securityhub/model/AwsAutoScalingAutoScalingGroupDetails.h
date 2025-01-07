/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/securityhub/model/AwsAutoScalingAutoScalingGroupMixedInstancesPolicyDetails.h>
#include <aws/securityhub/model/AwsAutoScalingAutoScalingGroupLaunchTemplateLaunchTemplateSpecification.h>
#include <aws/securityhub/model/AwsAutoScalingAutoScalingGroupAvailabilityZonesListDetails.h>
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
   * <p>Provides details about an auto scaling group.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsAutoScalingAutoScalingGroupDetails">AWS
   * API Reference</a></p>
   */
  class AwsAutoScalingAutoScalingGroupDetails
  {
  public:
    AWS_SECURITYHUB_API AwsAutoScalingAutoScalingGroupDetails();
    AWS_SECURITYHUB_API AwsAutoScalingAutoScalingGroupDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsAutoScalingAutoScalingGroupDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the launch configuration.</p>
     */
    inline const Aws::String& GetLaunchConfigurationName() const{ return m_launchConfigurationName; }
    inline bool LaunchConfigurationNameHasBeenSet() const { return m_launchConfigurationNameHasBeenSet; }
    inline void SetLaunchConfigurationName(const Aws::String& value) { m_launchConfigurationNameHasBeenSet = true; m_launchConfigurationName = value; }
    inline void SetLaunchConfigurationName(Aws::String&& value) { m_launchConfigurationNameHasBeenSet = true; m_launchConfigurationName = std::move(value); }
    inline void SetLaunchConfigurationName(const char* value) { m_launchConfigurationNameHasBeenSet = true; m_launchConfigurationName.assign(value); }
    inline AwsAutoScalingAutoScalingGroupDetails& WithLaunchConfigurationName(const Aws::String& value) { SetLaunchConfigurationName(value); return *this;}
    inline AwsAutoScalingAutoScalingGroupDetails& WithLaunchConfigurationName(Aws::String&& value) { SetLaunchConfigurationName(std::move(value)); return *this;}
    inline AwsAutoScalingAutoScalingGroupDetails& WithLaunchConfigurationName(const char* value) { SetLaunchConfigurationName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of load balancers associated with the group.</p>
     */
    inline const Aws::Vector<Aws::String>& GetLoadBalancerNames() const{ return m_loadBalancerNames; }
    inline bool LoadBalancerNamesHasBeenSet() const { return m_loadBalancerNamesHasBeenSet; }
    inline void SetLoadBalancerNames(const Aws::Vector<Aws::String>& value) { m_loadBalancerNamesHasBeenSet = true; m_loadBalancerNames = value; }
    inline void SetLoadBalancerNames(Aws::Vector<Aws::String>&& value) { m_loadBalancerNamesHasBeenSet = true; m_loadBalancerNames = std::move(value); }
    inline AwsAutoScalingAutoScalingGroupDetails& WithLoadBalancerNames(const Aws::Vector<Aws::String>& value) { SetLoadBalancerNames(value); return *this;}
    inline AwsAutoScalingAutoScalingGroupDetails& WithLoadBalancerNames(Aws::Vector<Aws::String>&& value) { SetLoadBalancerNames(std::move(value)); return *this;}
    inline AwsAutoScalingAutoScalingGroupDetails& AddLoadBalancerNames(const Aws::String& value) { m_loadBalancerNamesHasBeenSet = true; m_loadBalancerNames.push_back(value); return *this; }
    inline AwsAutoScalingAutoScalingGroupDetails& AddLoadBalancerNames(Aws::String&& value) { m_loadBalancerNamesHasBeenSet = true; m_loadBalancerNames.push_back(std::move(value)); return *this; }
    inline AwsAutoScalingAutoScalingGroupDetails& AddLoadBalancerNames(const char* value) { m_loadBalancerNamesHasBeenSet = true; m_loadBalancerNames.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The service to use for the health checks. Valid values are <code>EC2</code>
     * or <code>ELB</code>.</p>
     */
    inline const Aws::String& GetHealthCheckType() const{ return m_healthCheckType; }
    inline bool HealthCheckTypeHasBeenSet() const { return m_healthCheckTypeHasBeenSet; }
    inline void SetHealthCheckType(const Aws::String& value) { m_healthCheckTypeHasBeenSet = true; m_healthCheckType = value; }
    inline void SetHealthCheckType(Aws::String&& value) { m_healthCheckTypeHasBeenSet = true; m_healthCheckType = std::move(value); }
    inline void SetHealthCheckType(const char* value) { m_healthCheckTypeHasBeenSet = true; m_healthCheckType.assign(value); }
    inline AwsAutoScalingAutoScalingGroupDetails& WithHealthCheckType(const Aws::String& value) { SetHealthCheckType(value); return *this;}
    inline AwsAutoScalingAutoScalingGroupDetails& WithHealthCheckType(Aws::String&& value) { SetHealthCheckType(std::move(value)); return *this;}
    inline AwsAutoScalingAutoScalingGroupDetails& WithHealthCheckType(const char* value) { SetHealthCheckType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The amount of time, in seconds, that Amazon EC2 Auto Scaling waits before it
     * checks the health status of an EC2 instance that has come into service.</p>
     */
    inline int GetHealthCheckGracePeriod() const{ return m_healthCheckGracePeriod; }
    inline bool HealthCheckGracePeriodHasBeenSet() const { return m_healthCheckGracePeriodHasBeenSet; }
    inline void SetHealthCheckGracePeriod(int value) { m_healthCheckGracePeriodHasBeenSet = true; m_healthCheckGracePeriod = value; }
    inline AwsAutoScalingAutoScalingGroupDetails& WithHealthCheckGracePeriod(int value) { SetHealthCheckGracePeriod(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates when the auto scaling group was created.</p> <p>For more
     * information about the validation and formatting of timestamp fields in Security
     * Hub, see <a
     * href="https://docs.aws.amazon.com/securityhub/1.0/APIReference/Welcome.html#timestamps">Timestamps</a>.</p>
     */
    inline const Aws::String& GetCreatedTime() const{ return m_createdTime; }
    inline bool CreatedTimeHasBeenSet() const { return m_createdTimeHasBeenSet; }
    inline void SetCreatedTime(const Aws::String& value) { m_createdTimeHasBeenSet = true; m_createdTime = value; }
    inline void SetCreatedTime(Aws::String&& value) { m_createdTimeHasBeenSet = true; m_createdTime = std::move(value); }
    inline void SetCreatedTime(const char* value) { m_createdTimeHasBeenSet = true; m_createdTime.assign(value); }
    inline AwsAutoScalingAutoScalingGroupDetails& WithCreatedTime(const Aws::String& value) { SetCreatedTime(value); return *this;}
    inline AwsAutoScalingAutoScalingGroupDetails& WithCreatedTime(Aws::String&& value) { SetCreatedTime(std::move(value)); return *this;}
    inline AwsAutoScalingAutoScalingGroupDetails& WithCreatedTime(const char* value) { SetCreatedTime(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The mixed instances policy for the automatic scaling group.</p>
     */
    inline const AwsAutoScalingAutoScalingGroupMixedInstancesPolicyDetails& GetMixedInstancesPolicy() const{ return m_mixedInstancesPolicy; }
    inline bool MixedInstancesPolicyHasBeenSet() const { return m_mixedInstancesPolicyHasBeenSet; }
    inline void SetMixedInstancesPolicy(const AwsAutoScalingAutoScalingGroupMixedInstancesPolicyDetails& value) { m_mixedInstancesPolicyHasBeenSet = true; m_mixedInstancesPolicy = value; }
    inline void SetMixedInstancesPolicy(AwsAutoScalingAutoScalingGroupMixedInstancesPolicyDetails&& value) { m_mixedInstancesPolicyHasBeenSet = true; m_mixedInstancesPolicy = std::move(value); }
    inline AwsAutoScalingAutoScalingGroupDetails& WithMixedInstancesPolicy(const AwsAutoScalingAutoScalingGroupMixedInstancesPolicyDetails& value) { SetMixedInstancesPolicy(value); return *this;}
    inline AwsAutoScalingAutoScalingGroupDetails& WithMixedInstancesPolicy(AwsAutoScalingAutoScalingGroupMixedInstancesPolicyDetails&& value) { SetMixedInstancesPolicy(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of Availability Zones for the automatic scaling group.</p>
     */
    inline const Aws::Vector<AwsAutoScalingAutoScalingGroupAvailabilityZonesListDetails>& GetAvailabilityZones() const{ return m_availabilityZones; }
    inline bool AvailabilityZonesHasBeenSet() const { return m_availabilityZonesHasBeenSet; }
    inline void SetAvailabilityZones(const Aws::Vector<AwsAutoScalingAutoScalingGroupAvailabilityZonesListDetails>& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones = value; }
    inline void SetAvailabilityZones(Aws::Vector<AwsAutoScalingAutoScalingGroupAvailabilityZonesListDetails>&& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones = std::move(value); }
    inline AwsAutoScalingAutoScalingGroupDetails& WithAvailabilityZones(const Aws::Vector<AwsAutoScalingAutoScalingGroupAvailabilityZonesListDetails>& value) { SetAvailabilityZones(value); return *this;}
    inline AwsAutoScalingAutoScalingGroupDetails& WithAvailabilityZones(Aws::Vector<AwsAutoScalingAutoScalingGroupAvailabilityZonesListDetails>&& value) { SetAvailabilityZones(std::move(value)); return *this;}
    inline AwsAutoScalingAutoScalingGroupDetails& AddAvailabilityZones(const AwsAutoScalingAutoScalingGroupAvailabilityZonesListDetails& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones.push_back(value); return *this; }
    inline AwsAutoScalingAutoScalingGroupDetails& AddAvailabilityZones(AwsAutoScalingAutoScalingGroupAvailabilityZonesListDetails&& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The launch template to use.</p>
     */
    inline const AwsAutoScalingAutoScalingGroupLaunchTemplateLaunchTemplateSpecification& GetLaunchTemplate() const{ return m_launchTemplate; }
    inline bool LaunchTemplateHasBeenSet() const { return m_launchTemplateHasBeenSet; }
    inline void SetLaunchTemplate(const AwsAutoScalingAutoScalingGroupLaunchTemplateLaunchTemplateSpecification& value) { m_launchTemplateHasBeenSet = true; m_launchTemplate = value; }
    inline void SetLaunchTemplate(AwsAutoScalingAutoScalingGroupLaunchTemplateLaunchTemplateSpecification&& value) { m_launchTemplateHasBeenSet = true; m_launchTemplate = std::move(value); }
    inline AwsAutoScalingAutoScalingGroupDetails& WithLaunchTemplate(const AwsAutoScalingAutoScalingGroupLaunchTemplateLaunchTemplateSpecification& value) { SetLaunchTemplate(value); return *this;}
    inline AwsAutoScalingAutoScalingGroupDetails& WithLaunchTemplate(AwsAutoScalingAutoScalingGroupLaunchTemplateLaunchTemplateSpecification&& value) { SetLaunchTemplate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether capacity rebalancing is enabled. </p>
     */
    inline bool GetCapacityRebalance() const{ return m_capacityRebalance; }
    inline bool CapacityRebalanceHasBeenSet() const { return m_capacityRebalanceHasBeenSet; }
    inline void SetCapacityRebalance(bool value) { m_capacityRebalanceHasBeenSet = true; m_capacityRebalance = value; }
    inline AwsAutoScalingAutoScalingGroupDetails& WithCapacityRebalance(bool value) { SetCapacityRebalance(value); return *this;}
    ///@}
  private:

    Aws::String m_launchConfigurationName;
    bool m_launchConfigurationNameHasBeenSet = false;

    Aws::Vector<Aws::String> m_loadBalancerNames;
    bool m_loadBalancerNamesHasBeenSet = false;

    Aws::String m_healthCheckType;
    bool m_healthCheckTypeHasBeenSet = false;

    int m_healthCheckGracePeriod;
    bool m_healthCheckGracePeriodHasBeenSet = false;

    Aws::String m_createdTime;
    bool m_createdTimeHasBeenSet = false;

    AwsAutoScalingAutoScalingGroupMixedInstancesPolicyDetails m_mixedInstancesPolicy;
    bool m_mixedInstancesPolicyHasBeenSet = false;

    Aws::Vector<AwsAutoScalingAutoScalingGroupAvailabilityZonesListDetails> m_availabilityZones;
    bool m_availabilityZonesHasBeenSet = false;

    AwsAutoScalingAutoScalingGroupLaunchTemplateLaunchTemplateSpecification m_launchTemplate;
    bool m_launchTemplateHasBeenSet = false;

    bool m_capacityRebalance;
    bool m_capacityRebalanceHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
