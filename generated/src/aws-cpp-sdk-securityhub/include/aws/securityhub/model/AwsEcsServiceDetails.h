/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securityhub/model/AwsEcsServiceDeploymentConfigurationDetails.h>
#include <aws/securityhub/model/AwsEcsServiceDeploymentControllerDetails.h>
#include <aws/securityhub/model/AwsEcsServiceNetworkConfigurationDetails.h>
#include <aws/securityhub/model/AwsEcsServiceCapacityProviderStrategyDetails.h>
#include <aws/securityhub/model/AwsEcsServiceLoadBalancersDetails.h>
#include <aws/securityhub/model/AwsEcsServicePlacementConstraintsDetails.h>
#include <aws/securityhub/model/AwsEcsServicePlacementStrategiesDetails.h>
#include <aws/securityhub/model/AwsEcsServiceServiceRegistriesDetails.h>
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
   * <p>Provides details about a service within an ECS cluster.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsEcsServiceDetails">AWS
   * API Reference</a></p>
   */
  class AwsEcsServiceDetails
  {
  public:
    AWS_SECURITYHUB_API AwsEcsServiceDetails() = default;
    AWS_SECURITYHUB_API AwsEcsServiceDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsEcsServiceDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The capacity provider strategy that the service uses.</p>
     */
    inline const Aws::Vector<AwsEcsServiceCapacityProviderStrategyDetails>& GetCapacityProviderStrategy() const { return m_capacityProviderStrategy; }
    inline bool CapacityProviderStrategyHasBeenSet() const { return m_capacityProviderStrategyHasBeenSet; }
    template<typename CapacityProviderStrategyT = Aws::Vector<AwsEcsServiceCapacityProviderStrategyDetails>>
    void SetCapacityProviderStrategy(CapacityProviderStrategyT&& value) { m_capacityProviderStrategyHasBeenSet = true; m_capacityProviderStrategy = std::forward<CapacityProviderStrategyT>(value); }
    template<typename CapacityProviderStrategyT = Aws::Vector<AwsEcsServiceCapacityProviderStrategyDetails>>
    AwsEcsServiceDetails& WithCapacityProviderStrategy(CapacityProviderStrategyT&& value) { SetCapacityProviderStrategy(std::forward<CapacityProviderStrategyT>(value)); return *this;}
    template<typename CapacityProviderStrategyT = AwsEcsServiceCapacityProviderStrategyDetails>
    AwsEcsServiceDetails& AddCapacityProviderStrategy(CapacityProviderStrategyT&& value) { m_capacityProviderStrategyHasBeenSet = true; m_capacityProviderStrategy.emplace_back(std::forward<CapacityProviderStrategyT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The ARN of the cluster that hosts the service.</p>
     */
    inline const Aws::String& GetCluster() const { return m_cluster; }
    inline bool ClusterHasBeenSet() const { return m_clusterHasBeenSet; }
    template<typename ClusterT = Aws::String>
    void SetCluster(ClusterT&& value) { m_clusterHasBeenSet = true; m_cluster = std::forward<ClusterT>(value); }
    template<typename ClusterT = Aws::String>
    AwsEcsServiceDetails& WithCluster(ClusterT&& value) { SetCluster(std::forward<ClusterT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Deployment parameters for the service. Includes the number of tasks that run
     * and the order in which to start and stop tasks.</p>
     */
    inline const AwsEcsServiceDeploymentConfigurationDetails& GetDeploymentConfiguration() const { return m_deploymentConfiguration; }
    inline bool DeploymentConfigurationHasBeenSet() const { return m_deploymentConfigurationHasBeenSet; }
    template<typename DeploymentConfigurationT = AwsEcsServiceDeploymentConfigurationDetails>
    void SetDeploymentConfiguration(DeploymentConfigurationT&& value) { m_deploymentConfigurationHasBeenSet = true; m_deploymentConfiguration = std::forward<DeploymentConfigurationT>(value); }
    template<typename DeploymentConfigurationT = AwsEcsServiceDeploymentConfigurationDetails>
    AwsEcsServiceDetails& WithDeploymentConfiguration(DeploymentConfigurationT&& value) { SetDeploymentConfiguration(std::forward<DeploymentConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains the deployment controller type that the service uses.</p>
     */
    inline const AwsEcsServiceDeploymentControllerDetails& GetDeploymentController() const { return m_deploymentController; }
    inline bool DeploymentControllerHasBeenSet() const { return m_deploymentControllerHasBeenSet; }
    template<typename DeploymentControllerT = AwsEcsServiceDeploymentControllerDetails>
    void SetDeploymentController(DeploymentControllerT&& value) { m_deploymentControllerHasBeenSet = true; m_deploymentController = std::forward<DeploymentControllerT>(value); }
    template<typename DeploymentControllerT = AwsEcsServiceDeploymentControllerDetails>
    AwsEcsServiceDetails& WithDeploymentController(DeploymentControllerT&& value) { SetDeploymentController(std::forward<DeploymentControllerT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of instantiations of the task definition to run on the
     * service.</p>
     */
    inline int GetDesiredCount() const { return m_desiredCount; }
    inline bool DesiredCountHasBeenSet() const { return m_desiredCountHasBeenSet; }
    inline void SetDesiredCount(int value) { m_desiredCountHasBeenSet = true; m_desiredCount = value; }
    inline AwsEcsServiceDetails& WithDesiredCount(int value) { SetDesiredCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether to enable Amazon ECS managed tags for the tasks in the service.</p>
     */
    inline bool GetEnableEcsManagedTags() const { return m_enableEcsManagedTags; }
    inline bool EnableEcsManagedTagsHasBeenSet() const { return m_enableEcsManagedTagsHasBeenSet; }
    inline void SetEnableEcsManagedTags(bool value) { m_enableEcsManagedTagsHasBeenSet = true; m_enableEcsManagedTags = value; }
    inline AwsEcsServiceDetails& WithEnableEcsManagedTags(bool value) { SetEnableEcsManagedTags(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether the execute command functionality is enabled for the service.</p>
     */
    inline bool GetEnableExecuteCommand() const { return m_enableExecuteCommand; }
    inline bool EnableExecuteCommandHasBeenSet() const { return m_enableExecuteCommandHasBeenSet; }
    inline void SetEnableExecuteCommand(bool value) { m_enableExecuteCommandHasBeenSet = true; m_enableExecuteCommand = value; }
    inline AwsEcsServiceDetails& WithEnableExecuteCommand(bool value) { SetEnableExecuteCommand(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>After a task starts, the amount of time in seconds that the Amazon ECS
     * service scheduler ignores unhealthy Elastic Load Balancing target health
     * checks.</p>
     */
    inline int GetHealthCheckGracePeriodSeconds() const { return m_healthCheckGracePeriodSeconds; }
    inline bool HealthCheckGracePeriodSecondsHasBeenSet() const { return m_healthCheckGracePeriodSecondsHasBeenSet; }
    inline void SetHealthCheckGracePeriodSeconds(int value) { m_healthCheckGracePeriodSecondsHasBeenSet = true; m_healthCheckGracePeriodSeconds = value; }
    inline AwsEcsServiceDetails& WithHealthCheckGracePeriodSeconds(int value) { SetHealthCheckGracePeriodSeconds(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The launch type that the service uses.</p> <p>Valid values: <code>EC2</code>
     * | <code>FARGATE</code> | <code>EXTERNAL</code> </p>
     */
    inline const Aws::String& GetLaunchType() const { return m_launchType; }
    inline bool LaunchTypeHasBeenSet() const { return m_launchTypeHasBeenSet; }
    template<typename LaunchTypeT = Aws::String>
    void SetLaunchType(LaunchTypeT&& value) { m_launchTypeHasBeenSet = true; m_launchType = std::forward<LaunchTypeT>(value); }
    template<typename LaunchTypeT = Aws::String>
    AwsEcsServiceDetails& WithLaunchType(LaunchTypeT&& value) { SetLaunchType(std::forward<LaunchTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the load balancers that the service uses.</p>
     */
    inline const Aws::Vector<AwsEcsServiceLoadBalancersDetails>& GetLoadBalancers() const { return m_loadBalancers; }
    inline bool LoadBalancersHasBeenSet() const { return m_loadBalancersHasBeenSet; }
    template<typename LoadBalancersT = Aws::Vector<AwsEcsServiceLoadBalancersDetails>>
    void SetLoadBalancers(LoadBalancersT&& value) { m_loadBalancersHasBeenSet = true; m_loadBalancers = std::forward<LoadBalancersT>(value); }
    template<typename LoadBalancersT = Aws::Vector<AwsEcsServiceLoadBalancersDetails>>
    AwsEcsServiceDetails& WithLoadBalancers(LoadBalancersT&& value) { SetLoadBalancers(std::forward<LoadBalancersT>(value)); return *this;}
    template<typename LoadBalancersT = AwsEcsServiceLoadBalancersDetails>
    AwsEcsServiceDetails& AddLoadBalancers(LoadBalancersT&& value) { m_loadBalancersHasBeenSet = true; m_loadBalancers.emplace_back(std::forward<LoadBalancersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The name of the service.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    AwsEcsServiceDetails& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>For tasks that use the <code>awsvpc</code> networking mode, the VPC subnet
     * and security group configuration.</p>
     */
    inline const AwsEcsServiceNetworkConfigurationDetails& GetNetworkConfiguration() const { return m_networkConfiguration; }
    inline bool NetworkConfigurationHasBeenSet() const { return m_networkConfigurationHasBeenSet; }
    template<typename NetworkConfigurationT = AwsEcsServiceNetworkConfigurationDetails>
    void SetNetworkConfiguration(NetworkConfigurationT&& value) { m_networkConfigurationHasBeenSet = true; m_networkConfiguration = std::forward<NetworkConfigurationT>(value); }
    template<typename NetworkConfigurationT = AwsEcsServiceNetworkConfigurationDetails>
    AwsEcsServiceDetails& WithNetworkConfiguration(NetworkConfigurationT&& value) { SetNetworkConfiguration(std::forward<NetworkConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The placement constraints for the tasks in the service.</p>
     */
    inline const Aws::Vector<AwsEcsServicePlacementConstraintsDetails>& GetPlacementConstraints() const { return m_placementConstraints; }
    inline bool PlacementConstraintsHasBeenSet() const { return m_placementConstraintsHasBeenSet; }
    template<typename PlacementConstraintsT = Aws::Vector<AwsEcsServicePlacementConstraintsDetails>>
    void SetPlacementConstraints(PlacementConstraintsT&& value) { m_placementConstraintsHasBeenSet = true; m_placementConstraints = std::forward<PlacementConstraintsT>(value); }
    template<typename PlacementConstraintsT = Aws::Vector<AwsEcsServicePlacementConstraintsDetails>>
    AwsEcsServiceDetails& WithPlacementConstraints(PlacementConstraintsT&& value) { SetPlacementConstraints(std::forward<PlacementConstraintsT>(value)); return *this;}
    template<typename PlacementConstraintsT = AwsEcsServicePlacementConstraintsDetails>
    AwsEcsServiceDetails& AddPlacementConstraints(PlacementConstraintsT&& value) { m_placementConstraintsHasBeenSet = true; m_placementConstraints.emplace_back(std::forward<PlacementConstraintsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Information about how tasks for the service are placed.</p>
     */
    inline const Aws::Vector<AwsEcsServicePlacementStrategiesDetails>& GetPlacementStrategies() const { return m_placementStrategies; }
    inline bool PlacementStrategiesHasBeenSet() const { return m_placementStrategiesHasBeenSet; }
    template<typename PlacementStrategiesT = Aws::Vector<AwsEcsServicePlacementStrategiesDetails>>
    void SetPlacementStrategies(PlacementStrategiesT&& value) { m_placementStrategiesHasBeenSet = true; m_placementStrategies = std::forward<PlacementStrategiesT>(value); }
    template<typename PlacementStrategiesT = Aws::Vector<AwsEcsServicePlacementStrategiesDetails>>
    AwsEcsServiceDetails& WithPlacementStrategies(PlacementStrategiesT&& value) { SetPlacementStrategies(std::forward<PlacementStrategiesT>(value)); return *this;}
    template<typename PlacementStrategiesT = AwsEcsServicePlacementStrategiesDetails>
    AwsEcsServiceDetails& AddPlacementStrategies(PlacementStrategiesT&& value) { m_placementStrategiesHasBeenSet = true; m_placementStrategies.emplace_back(std::forward<PlacementStrategiesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The platform version on which to run the service. Only specified for tasks
     * that are hosted on Fargate. If a platform version is not specified, the
     * <code>LATEST</code> platform version is used by default.</p>
     */
    inline const Aws::String& GetPlatformVersion() const { return m_platformVersion; }
    inline bool PlatformVersionHasBeenSet() const { return m_platformVersionHasBeenSet; }
    template<typename PlatformVersionT = Aws::String>
    void SetPlatformVersion(PlatformVersionT&& value) { m_platformVersionHasBeenSet = true; m_platformVersion = std::forward<PlatformVersionT>(value); }
    template<typename PlatformVersionT = Aws::String>
    AwsEcsServiceDetails& WithPlatformVersion(PlatformVersionT&& value) { SetPlatformVersion(std::forward<PlatformVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether to propagate the tags from the task definition to the task
     * or from the service to the task. If no value is provided, then tags are not
     * propagated.</p> <p>Valid values: <code>TASK_DEFINITION</code> |
     * <code>SERVICE</code> </p>
     */
    inline const Aws::String& GetPropagateTags() const { return m_propagateTags; }
    inline bool PropagateTagsHasBeenSet() const { return m_propagateTagsHasBeenSet; }
    template<typename PropagateTagsT = Aws::String>
    void SetPropagateTags(PropagateTagsT&& value) { m_propagateTagsHasBeenSet = true; m_propagateTags = std::forward<PropagateTagsT>(value); }
    template<typename PropagateTagsT = Aws::String>
    AwsEcsServiceDetails& WithPropagateTags(PropagateTagsT&& value) { SetPropagateTags(std::forward<PropagateTagsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the IAM role that is associated with the service. The role allows
     * the Amazon ECS container agent to register container instances with an Elastic
     * Load Balancing load balancer.</p>
     */
    inline const Aws::String& GetRole() const { return m_role; }
    inline bool RoleHasBeenSet() const { return m_roleHasBeenSet; }
    template<typename RoleT = Aws::String>
    void SetRole(RoleT&& value) { m_roleHasBeenSet = true; m_role = std::forward<RoleT>(value); }
    template<typename RoleT = Aws::String>
    AwsEcsServiceDetails& WithRole(RoleT&& value) { SetRole(std::forward<RoleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The scheduling strategy to use for the service.</p> <p>The
     * <code>REPLICA</code> scheduling strategy places and maintains the desired number
     * of tasks across the cluster. By default, the service scheduler spreads tasks
     * across Availability Zones. Task placement strategies and constraints are used to
     * customize task placement decisions.</p> <p>The <code>DAEMON</code> scheduling
     * strategy deploys exactly one task on each active container instance that meets
     * all of the task placement constraints that are specified in the cluster. The
     * service scheduler also evaluates the task placement constraints for running
     * tasks and stops tasks that don't meet the placement constraints.</p> <p>Valid
     * values: <code>REPLICA</code> | <code>DAEMON</code> </p>
     */
    inline const Aws::String& GetSchedulingStrategy() const { return m_schedulingStrategy; }
    inline bool SchedulingStrategyHasBeenSet() const { return m_schedulingStrategyHasBeenSet; }
    template<typename SchedulingStrategyT = Aws::String>
    void SetSchedulingStrategy(SchedulingStrategyT&& value) { m_schedulingStrategyHasBeenSet = true; m_schedulingStrategy = std::forward<SchedulingStrategyT>(value); }
    template<typename SchedulingStrategyT = Aws::String>
    AwsEcsServiceDetails& WithSchedulingStrategy(SchedulingStrategyT&& value) { SetSchedulingStrategy(std::forward<SchedulingStrategyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the service.</p>
     */
    inline const Aws::String& GetServiceArn() const { return m_serviceArn; }
    inline bool ServiceArnHasBeenSet() const { return m_serviceArnHasBeenSet; }
    template<typename ServiceArnT = Aws::String>
    void SetServiceArn(ServiceArnT&& value) { m_serviceArnHasBeenSet = true; m_serviceArn = std::forward<ServiceArnT>(value); }
    template<typename ServiceArnT = Aws::String>
    AwsEcsServiceDetails& WithServiceArn(ServiceArnT&& value) { SetServiceArn(std::forward<ServiceArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the service.</p> <p>The name can contain up to 255 characters. It
     * can use letters, numbers, underscores, and hyphens.</p>
     */
    inline const Aws::String& GetServiceName() const { return m_serviceName; }
    inline bool ServiceNameHasBeenSet() const { return m_serviceNameHasBeenSet; }
    template<typename ServiceNameT = Aws::String>
    void SetServiceName(ServiceNameT&& value) { m_serviceNameHasBeenSet = true; m_serviceName = std::forward<ServiceNameT>(value); }
    template<typename ServiceNameT = Aws::String>
    AwsEcsServiceDetails& WithServiceName(ServiceNameT&& value) { SetServiceName(std::forward<ServiceNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the service discovery registries to assign to the
     * service.</p>
     */
    inline const Aws::Vector<AwsEcsServiceServiceRegistriesDetails>& GetServiceRegistries() const { return m_serviceRegistries; }
    inline bool ServiceRegistriesHasBeenSet() const { return m_serviceRegistriesHasBeenSet; }
    template<typename ServiceRegistriesT = Aws::Vector<AwsEcsServiceServiceRegistriesDetails>>
    void SetServiceRegistries(ServiceRegistriesT&& value) { m_serviceRegistriesHasBeenSet = true; m_serviceRegistries = std::forward<ServiceRegistriesT>(value); }
    template<typename ServiceRegistriesT = Aws::Vector<AwsEcsServiceServiceRegistriesDetails>>
    AwsEcsServiceDetails& WithServiceRegistries(ServiceRegistriesT&& value) { SetServiceRegistries(std::forward<ServiceRegistriesT>(value)); return *this;}
    template<typename ServiceRegistriesT = AwsEcsServiceServiceRegistriesDetails>
    AwsEcsServiceDetails& AddServiceRegistries(ServiceRegistriesT&& value) { m_serviceRegistriesHasBeenSet = true; m_serviceRegistries.emplace_back(std::forward<ServiceRegistriesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The task definition to use for tasks in the service.</p>
     */
    inline const Aws::String& GetTaskDefinition() const { return m_taskDefinition; }
    inline bool TaskDefinitionHasBeenSet() const { return m_taskDefinitionHasBeenSet; }
    template<typename TaskDefinitionT = Aws::String>
    void SetTaskDefinition(TaskDefinitionT&& value) { m_taskDefinitionHasBeenSet = true; m_taskDefinition = std::forward<TaskDefinitionT>(value); }
    template<typename TaskDefinitionT = Aws::String>
    AwsEcsServiceDetails& WithTaskDefinition(TaskDefinitionT&& value) { SetTaskDefinition(std::forward<TaskDefinitionT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<AwsEcsServiceCapacityProviderStrategyDetails> m_capacityProviderStrategy;
    bool m_capacityProviderStrategyHasBeenSet = false;

    Aws::String m_cluster;
    bool m_clusterHasBeenSet = false;

    AwsEcsServiceDeploymentConfigurationDetails m_deploymentConfiguration;
    bool m_deploymentConfigurationHasBeenSet = false;

    AwsEcsServiceDeploymentControllerDetails m_deploymentController;
    bool m_deploymentControllerHasBeenSet = false;

    int m_desiredCount{0};
    bool m_desiredCountHasBeenSet = false;

    bool m_enableEcsManagedTags{false};
    bool m_enableEcsManagedTagsHasBeenSet = false;

    bool m_enableExecuteCommand{false};
    bool m_enableExecuteCommandHasBeenSet = false;

    int m_healthCheckGracePeriodSeconds{0};
    bool m_healthCheckGracePeriodSecondsHasBeenSet = false;

    Aws::String m_launchType;
    bool m_launchTypeHasBeenSet = false;

    Aws::Vector<AwsEcsServiceLoadBalancersDetails> m_loadBalancers;
    bool m_loadBalancersHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    AwsEcsServiceNetworkConfigurationDetails m_networkConfiguration;
    bool m_networkConfigurationHasBeenSet = false;

    Aws::Vector<AwsEcsServicePlacementConstraintsDetails> m_placementConstraints;
    bool m_placementConstraintsHasBeenSet = false;

    Aws::Vector<AwsEcsServicePlacementStrategiesDetails> m_placementStrategies;
    bool m_placementStrategiesHasBeenSet = false;

    Aws::String m_platformVersion;
    bool m_platformVersionHasBeenSet = false;

    Aws::String m_propagateTags;
    bool m_propagateTagsHasBeenSet = false;

    Aws::String m_role;
    bool m_roleHasBeenSet = false;

    Aws::String m_schedulingStrategy;
    bool m_schedulingStrategyHasBeenSet = false;

    Aws::String m_serviceArn;
    bool m_serviceArnHasBeenSet = false;

    Aws::String m_serviceName;
    bool m_serviceNameHasBeenSet = false;

    Aws::Vector<AwsEcsServiceServiceRegistriesDetails> m_serviceRegistries;
    bool m_serviceRegistriesHasBeenSet = false;

    Aws::String m_taskDefinition;
    bool m_taskDefinitionHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
