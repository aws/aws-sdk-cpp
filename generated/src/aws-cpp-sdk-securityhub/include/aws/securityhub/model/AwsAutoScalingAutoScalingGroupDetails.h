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
    AWS_SECURITYHUB_API AwsAutoScalingAutoScalingGroupDetails() = default;
    AWS_SECURITYHUB_API AwsAutoScalingAutoScalingGroupDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsAutoScalingAutoScalingGroupDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the launch configuration.</p>
     */
    inline const Aws::String& GetLaunchConfigurationName() const { return m_launchConfigurationName; }
    inline bool LaunchConfigurationNameHasBeenSet() const { return m_launchConfigurationNameHasBeenSet; }
    template<typename LaunchConfigurationNameT = Aws::String>
    void SetLaunchConfigurationName(LaunchConfigurationNameT&& value) { m_launchConfigurationNameHasBeenSet = true; m_launchConfigurationName = std::forward<LaunchConfigurationNameT>(value); }
    template<typename LaunchConfigurationNameT = Aws::String>
    AwsAutoScalingAutoScalingGroupDetails& WithLaunchConfigurationName(LaunchConfigurationNameT&& value) { SetLaunchConfigurationName(std::forward<LaunchConfigurationNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of load balancers associated with the group.</p>
     */
    inline const Aws::Vector<Aws::String>& GetLoadBalancerNames() const { return m_loadBalancerNames; }
    inline bool LoadBalancerNamesHasBeenSet() const { return m_loadBalancerNamesHasBeenSet; }
    template<typename LoadBalancerNamesT = Aws::Vector<Aws::String>>
    void SetLoadBalancerNames(LoadBalancerNamesT&& value) { m_loadBalancerNamesHasBeenSet = true; m_loadBalancerNames = std::forward<LoadBalancerNamesT>(value); }
    template<typename LoadBalancerNamesT = Aws::Vector<Aws::String>>
    AwsAutoScalingAutoScalingGroupDetails& WithLoadBalancerNames(LoadBalancerNamesT&& value) { SetLoadBalancerNames(std::forward<LoadBalancerNamesT>(value)); return *this;}
    template<typename LoadBalancerNamesT = Aws::String>
    AwsAutoScalingAutoScalingGroupDetails& AddLoadBalancerNames(LoadBalancerNamesT&& value) { m_loadBalancerNamesHasBeenSet = true; m_loadBalancerNames.emplace_back(std::forward<LoadBalancerNamesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The service to use for the health checks. Valid values are <code>EC2</code>
     * or <code>ELB</code>.</p>
     */
    inline const Aws::String& GetHealthCheckType() const { return m_healthCheckType; }
    inline bool HealthCheckTypeHasBeenSet() const { return m_healthCheckTypeHasBeenSet; }
    template<typename HealthCheckTypeT = Aws::String>
    void SetHealthCheckType(HealthCheckTypeT&& value) { m_healthCheckTypeHasBeenSet = true; m_healthCheckType = std::forward<HealthCheckTypeT>(value); }
    template<typename HealthCheckTypeT = Aws::String>
    AwsAutoScalingAutoScalingGroupDetails& WithHealthCheckType(HealthCheckTypeT&& value) { SetHealthCheckType(std::forward<HealthCheckTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The amount of time, in seconds, that Amazon EC2 Auto Scaling waits before it
     * checks the health status of an EC2 instance that has come into service.</p>
     */
    inline int GetHealthCheckGracePeriod() const { return m_healthCheckGracePeriod; }
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
    inline const Aws::String& GetCreatedTime() const { return m_createdTime; }
    inline bool CreatedTimeHasBeenSet() const { return m_createdTimeHasBeenSet; }
    template<typename CreatedTimeT = Aws::String>
    void SetCreatedTime(CreatedTimeT&& value) { m_createdTimeHasBeenSet = true; m_createdTime = std::forward<CreatedTimeT>(value); }
    template<typename CreatedTimeT = Aws::String>
    AwsAutoScalingAutoScalingGroupDetails& WithCreatedTime(CreatedTimeT&& value) { SetCreatedTime(std::forward<CreatedTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The mixed instances policy for the automatic scaling group.</p>
     */
    inline const AwsAutoScalingAutoScalingGroupMixedInstancesPolicyDetails& GetMixedInstancesPolicy() const { return m_mixedInstancesPolicy; }
    inline bool MixedInstancesPolicyHasBeenSet() const { return m_mixedInstancesPolicyHasBeenSet; }
    template<typename MixedInstancesPolicyT = AwsAutoScalingAutoScalingGroupMixedInstancesPolicyDetails>
    void SetMixedInstancesPolicy(MixedInstancesPolicyT&& value) { m_mixedInstancesPolicyHasBeenSet = true; m_mixedInstancesPolicy = std::forward<MixedInstancesPolicyT>(value); }
    template<typename MixedInstancesPolicyT = AwsAutoScalingAutoScalingGroupMixedInstancesPolicyDetails>
    AwsAutoScalingAutoScalingGroupDetails& WithMixedInstancesPolicy(MixedInstancesPolicyT&& value) { SetMixedInstancesPolicy(std::forward<MixedInstancesPolicyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of Availability Zones for the automatic scaling group.</p>
     */
    inline const Aws::Vector<AwsAutoScalingAutoScalingGroupAvailabilityZonesListDetails>& GetAvailabilityZones() const { return m_availabilityZones; }
    inline bool AvailabilityZonesHasBeenSet() const { return m_availabilityZonesHasBeenSet; }
    template<typename AvailabilityZonesT = Aws::Vector<AwsAutoScalingAutoScalingGroupAvailabilityZonesListDetails>>
    void SetAvailabilityZones(AvailabilityZonesT&& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones = std::forward<AvailabilityZonesT>(value); }
    template<typename AvailabilityZonesT = Aws::Vector<AwsAutoScalingAutoScalingGroupAvailabilityZonesListDetails>>
    AwsAutoScalingAutoScalingGroupDetails& WithAvailabilityZones(AvailabilityZonesT&& value) { SetAvailabilityZones(std::forward<AvailabilityZonesT>(value)); return *this;}
    template<typename AvailabilityZonesT = AwsAutoScalingAutoScalingGroupAvailabilityZonesListDetails>
    AwsAutoScalingAutoScalingGroupDetails& AddAvailabilityZones(AvailabilityZonesT&& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones.emplace_back(std::forward<AvailabilityZonesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The launch template to use.</p>
     */
    inline const AwsAutoScalingAutoScalingGroupLaunchTemplateLaunchTemplateSpecification& GetLaunchTemplate() const { return m_launchTemplate; }
    inline bool LaunchTemplateHasBeenSet() const { return m_launchTemplateHasBeenSet; }
    template<typename LaunchTemplateT = AwsAutoScalingAutoScalingGroupLaunchTemplateLaunchTemplateSpecification>
    void SetLaunchTemplate(LaunchTemplateT&& value) { m_launchTemplateHasBeenSet = true; m_launchTemplate = std::forward<LaunchTemplateT>(value); }
    template<typename LaunchTemplateT = AwsAutoScalingAutoScalingGroupLaunchTemplateLaunchTemplateSpecification>
    AwsAutoScalingAutoScalingGroupDetails& WithLaunchTemplate(LaunchTemplateT&& value) { SetLaunchTemplate(std::forward<LaunchTemplateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether capacity rebalancing is enabled. </p>
     */
    inline bool GetCapacityRebalance() const { return m_capacityRebalance; }
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

    int m_healthCheckGracePeriod{0};
    bool m_healthCheckGracePeriodHasBeenSet = false;

    Aws::String m_createdTime;
    bool m_createdTimeHasBeenSet = false;

    AwsAutoScalingAutoScalingGroupMixedInstancesPolicyDetails m_mixedInstancesPolicy;
    bool m_mixedInstancesPolicyHasBeenSet = false;

    Aws::Vector<AwsAutoScalingAutoScalingGroupAvailabilityZonesListDetails> m_availabilityZones;
    bool m_availabilityZonesHasBeenSet = false;

    AwsAutoScalingAutoScalingGroupLaunchTemplateLaunchTemplateSpecification m_launchTemplate;
    bool m_launchTemplateHasBeenSet = false;

    bool m_capacityRebalance{false};
    bool m_capacityRebalanceHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
