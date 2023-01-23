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
    AWS_SECURITYHUB_API AwsEcsServiceDetails();
    AWS_SECURITYHUB_API AwsEcsServiceDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsEcsServiceDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The capacity provider strategy that the service uses.</p>
     */
    inline const Aws::Vector<AwsEcsServiceCapacityProviderStrategyDetails>& GetCapacityProviderStrategy() const{ return m_capacityProviderStrategy; }

    /**
     * <p>The capacity provider strategy that the service uses.</p>
     */
    inline bool CapacityProviderStrategyHasBeenSet() const { return m_capacityProviderStrategyHasBeenSet; }

    /**
     * <p>The capacity provider strategy that the service uses.</p>
     */
    inline void SetCapacityProviderStrategy(const Aws::Vector<AwsEcsServiceCapacityProviderStrategyDetails>& value) { m_capacityProviderStrategyHasBeenSet = true; m_capacityProviderStrategy = value; }

    /**
     * <p>The capacity provider strategy that the service uses.</p>
     */
    inline void SetCapacityProviderStrategy(Aws::Vector<AwsEcsServiceCapacityProviderStrategyDetails>&& value) { m_capacityProviderStrategyHasBeenSet = true; m_capacityProviderStrategy = std::move(value); }

    /**
     * <p>The capacity provider strategy that the service uses.</p>
     */
    inline AwsEcsServiceDetails& WithCapacityProviderStrategy(const Aws::Vector<AwsEcsServiceCapacityProviderStrategyDetails>& value) { SetCapacityProviderStrategy(value); return *this;}

    /**
     * <p>The capacity provider strategy that the service uses.</p>
     */
    inline AwsEcsServiceDetails& WithCapacityProviderStrategy(Aws::Vector<AwsEcsServiceCapacityProviderStrategyDetails>&& value) { SetCapacityProviderStrategy(std::move(value)); return *this;}

    /**
     * <p>The capacity provider strategy that the service uses.</p>
     */
    inline AwsEcsServiceDetails& AddCapacityProviderStrategy(const AwsEcsServiceCapacityProviderStrategyDetails& value) { m_capacityProviderStrategyHasBeenSet = true; m_capacityProviderStrategy.push_back(value); return *this; }

    /**
     * <p>The capacity provider strategy that the service uses.</p>
     */
    inline AwsEcsServiceDetails& AddCapacityProviderStrategy(AwsEcsServiceCapacityProviderStrategyDetails&& value) { m_capacityProviderStrategyHasBeenSet = true; m_capacityProviderStrategy.push_back(std::move(value)); return *this; }


    /**
     * <p>The ARN of the cluster that hosts the service.</p>
     */
    inline const Aws::String& GetCluster() const{ return m_cluster; }

    /**
     * <p>The ARN of the cluster that hosts the service.</p>
     */
    inline bool ClusterHasBeenSet() const { return m_clusterHasBeenSet; }

    /**
     * <p>The ARN of the cluster that hosts the service.</p>
     */
    inline void SetCluster(const Aws::String& value) { m_clusterHasBeenSet = true; m_cluster = value; }

    /**
     * <p>The ARN of the cluster that hosts the service.</p>
     */
    inline void SetCluster(Aws::String&& value) { m_clusterHasBeenSet = true; m_cluster = std::move(value); }

    /**
     * <p>The ARN of the cluster that hosts the service.</p>
     */
    inline void SetCluster(const char* value) { m_clusterHasBeenSet = true; m_cluster.assign(value); }

    /**
     * <p>The ARN of the cluster that hosts the service.</p>
     */
    inline AwsEcsServiceDetails& WithCluster(const Aws::String& value) { SetCluster(value); return *this;}

    /**
     * <p>The ARN of the cluster that hosts the service.</p>
     */
    inline AwsEcsServiceDetails& WithCluster(Aws::String&& value) { SetCluster(std::move(value)); return *this;}

    /**
     * <p>The ARN of the cluster that hosts the service.</p>
     */
    inline AwsEcsServiceDetails& WithCluster(const char* value) { SetCluster(value); return *this;}


    /**
     * <p>Deployment parameters for the service. Includes the number of tasks that run
     * and the order in which to start and stop tasks.</p>
     */
    inline const AwsEcsServiceDeploymentConfigurationDetails& GetDeploymentConfiguration() const{ return m_deploymentConfiguration; }

    /**
     * <p>Deployment parameters for the service. Includes the number of tasks that run
     * and the order in which to start and stop tasks.</p>
     */
    inline bool DeploymentConfigurationHasBeenSet() const { return m_deploymentConfigurationHasBeenSet; }

    /**
     * <p>Deployment parameters for the service. Includes the number of tasks that run
     * and the order in which to start and stop tasks.</p>
     */
    inline void SetDeploymentConfiguration(const AwsEcsServiceDeploymentConfigurationDetails& value) { m_deploymentConfigurationHasBeenSet = true; m_deploymentConfiguration = value; }

    /**
     * <p>Deployment parameters for the service. Includes the number of tasks that run
     * and the order in which to start and stop tasks.</p>
     */
    inline void SetDeploymentConfiguration(AwsEcsServiceDeploymentConfigurationDetails&& value) { m_deploymentConfigurationHasBeenSet = true; m_deploymentConfiguration = std::move(value); }

    /**
     * <p>Deployment parameters for the service. Includes the number of tasks that run
     * and the order in which to start and stop tasks.</p>
     */
    inline AwsEcsServiceDetails& WithDeploymentConfiguration(const AwsEcsServiceDeploymentConfigurationDetails& value) { SetDeploymentConfiguration(value); return *this;}

    /**
     * <p>Deployment parameters for the service. Includes the number of tasks that run
     * and the order in which to start and stop tasks.</p>
     */
    inline AwsEcsServiceDetails& WithDeploymentConfiguration(AwsEcsServiceDeploymentConfigurationDetails&& value) { SetDeploymentConfiguration(std::move(value)); return *this;}


    /**
     * <p>Contains the deployment controller type that the service uses.</p>
     */
    inline const AwsEcsServiceDeploymentControllerDetails& GetDeploymentController() const{ return m_deploymentController; }

    /**
     * <p>Contains the deployment controller type that the service uses.</p>
     */
    inline bool DeploymentControllerHasBeenSet() const { return m_deploymentControllerHasBeenSet; }

    /**
     * <p>Contains the deployment controller type that the service uses.</p>
     */
    inline void SetDeploymentController(const AwsEcsServiceDeploymentControllerDetails& value) { m_deploymentControllerHasBeenSet = true; m_deploymentController = value; }

    /**
     * <p>Contains the deployment controller type that the service uses.</p>
     */
    inline void SetDeploymentController(AwsEcsServiceDeploymentControllerDetails&& value) { m_deploymentControllerHasBeenSet = true; m_deploymentController = std::move(value); }

    /**
     * <p>Contains the deployment controller type that the service uses.</p>
     */
    inline AwsEcsServiceDetails& WithDeploymentController(const AwsEcsServiceDeploymentControllerDetails& value) { SetDeploymentController(value); return *this;}

    /**
     * <p>Contains the deployment controller type that the service uses.</p>
     */
    inline AwsEcsServiceDetails& WithDeploymentController(AwsEcsServiceDeploymentControllerDetails&& value) { SetDeploymentController(std::move(value)); return *this;}


    /**
     * <p>The number of instantiations of the task definition to run on the
     * service.</p>
     */
    inline int GetDesiredCount() const{ return m_desiredCount; }

    /**
     * <p>The number of instantiations of the task definition to run on the
     * service.</p>
     */
    inline bool DesiredCountHasBeenSet() const { return m_desiredCountHasBeenSet; }

    /**
     * <p>The number of instantiations of the task definition to run on the
     * service.</p>
     */
    inline void SetDesiredCount(int value) { m_desiredCountHasBeenSet = true; m_desiredCount = value; }

    /**
     * <p>The number of instantiations of the task definition to run on the
     * service.</p>
     */
    inline AwsEcsServiceDetails& WithDesiredCount(int value) { SetDesiredCount(value); return *this;}


    /**
     * <p>Whether to enable Amazon ECS managed tags for the tasks in the service.</p>
     */
    inline bool GetEnableEcsManagedTags() const{ return m_enableEcsManagedTags; }

    /**
     * <p>Whether to enable Amazon ECS managed tags for the tasks in the service.</p>
     */
    inline bool EnableEcsManagedTagsHasBeenSet() const { return m_enableEcsManagedTagsHasBeenSet; }

    /**
     * <p>Whether to enable Amazon ECS managed tags for the tasks in the service.</p>
     */
    inline void SetEnableEcsManagedTags(bool value) { m_enableEcsManagedTagsHasBeenSet = true; m_enableEcsManagedTags = value; }

    /**
     * <p>Whether to enable Amazon ECS managed tags for the tasks in the service.</p>
     */
    inline AwsEcsServiceDetails& WithEnableEcsManagedTags(bool value) { SetEnableEcsManagedTags(value); return *this;}


    /**
     * <p>Whether the execute command functionality is enabled for the service.</p>
     */
    inline bool GetEnableExecuteCommand() const{ return m_enableExecuteCommand; }

    /**
     * <p>Whether the execute command functionality is enabled for the service.</p>
     */
    inline bool EnableExecuteCommandHasBeenSet() const { return m_enableExecuteCommandHasBeenSet; }

    /**
     * <p>Whether the execute command functionality is enabled for the service.</p>
     */
    inline void SetEnableExecuteCommand(bool value) { m_enableExecuteCommandHasBeenSet = true; m_enableExecuteCommand = value; }

    /**
     * <p>Whether the execute command functionality is enabled for the service.</p>
     */
    inline AwsEcsServiceDetails& WithEnableExecuteCommand(bool value) { SetEnableExecuteCommand(value); return *this;}


    /**
     * <p>After a task starts, the amount of time in seconds that the Amazon ECS
     * service scheduler ignores unhealthy Elastic Load Balancing target health
     * checks.</p>
     */
    inline int GetHealthCheckGracePeriodSeconds() const{ return m_healthCheckGracePeriodSeconds; }

    /**
     * <p>After a task starts, the amount of time in seconds that the Amazon ECS
     * service scheduler ignores unhealthy Elastic Load Balancing target health
     * checks.</p>
     */
    inline bool HealthCheckGracePeriodSecondsHasBeenSet() const { return m_healthCheckGracePeriodSecondsHasBeenSet; }

    /**
     * <p>After a task starts, the amount of time in seconds that the Amazon ECS
     * service scheduler ignores unhealthy Elastic Load Balancing target health
     * checks.</p>
     */
    inline void SetHealthCheckGracePeriodSeconds(int value) { m_healthCheckGracePeriodSecondsHasBeenSet = true; m_healthCheckGracePeriodSeconds = value; }

    /**
     * <p>After a task starts, the amount of time in seconds that the Amazon ECS
     * service scheduler ignores unhealthy Elastic Load Balancing target health
     * checks.</p>
     */
    inline AwsEcsServiceDetails& WithHealthCheckGracePeriodSeconds(int value) { SetHealthCheckGracePeriodSeconds(value); return *this;}


    /**
     * <p>The launch type that the service uses.</p> <p>Valid values: <code>EC2</code>
     * | <code>FARGATE</code> | <code>EXTERNAL</code> </p>
     */
    inline const Aws::String& GetLaunchType() const{ return m_launchType; }

    /**
     * <p>The launch type that the service uses.</p> <p>Valid values: <code>EC2</code>
     * | <code>FARGATE</code> | <code>EXTERNAL</code> </p>
     */
    inline bool LaunchTypeHasBeenSet() const { return m_launchTypeHasBeenSet; }

    /**
     * <p>The launch type that the service uses.</p> <p>Valid values: <code>EC2</code>
     * | <code>FARGATE</code> | <code>EXTERNAL</code> </p>
     */
    inline void SetLaunchType(const Aws::String& value) { m_launchTypeHasBeenSet = true; m_launchType = value; }

    /**
     * <p>The launch type that the service uses.</p> <p>Valid values: <code>EC2</code>
     * | <code>FARGATE</code> | <code>EXTERNAL</code> </p>
     */
    inline void SetLaunchType(Aws::String&& value) { m_launchTypeHasBeenSet = true; m_launchType = std::move(value); }

    /**
     * <p>The launch type that the service uses.</p> <p>Valid values: <code>EC2</code>
     * | <code>FARGATE</code> | <code>EXTERNAL</code> </p>
     */
    inline void SetLaunchType(const char* value) { m_launchTypeHasBeenSet = true; m_launchType.assign(value); }

    /**
     * <p>The launch type that the service uses.</p> <p>Valid values: <code>EC2</code>
     * | <code>FARGATE</code> | <code>EXTERNAL</code> </p>
     */
    inline AwsEcsServiceDetails& WithLaunchType(const Aws::String& value) { SetLaunchType(value); return *this;}

    /**
     * <p>The launch type that the service uses.</p> <p>Valid values: <code>EC2</code>
     * | <code>FARGATE</code> | <code>EXTERNAL</code> </p>
     */
    inline AwsEcsServiceDetails& WithLaunchType(Aws::String&& value) { SetLaunchType(std::move(value)); return *this;}

    /**
     * <p>The launch type that the service uses.</p> <p>Valid values: <code>EC2</code>
     * | <code>FARGATE</code> | <code>EXTERNAL</code> </p>
     */
    inline AwsEcsServiceDetails& WithLaunchType(const char* value) { SetLaunchType(value); return *this;}


    /**
     * <p>Information about the load balancers that the service uses.</p>
     */
    inline const Aws::Vector<AwsEcsServiceLoadBalancersDetails>& GetLoadBalancers() const{ return m_loadBalancers; }

    /**
     * <p>Information about the load balancers that the service uses.</p>
     */
    inline bool LoadBalancersHasBeenSet() const { return m_loadBalancersHasBeenSet; }

    /**
     * <p>Information about the load balancers that the service uses.</p>
     */
    inline void SetLoadBalancers(const Aws::Vector<AwsEcsServiceLoadBalancersDetails>& value) { m_loadBalancersHasBeenSet = true; m_loadBalancers = value; }

    /**
     * <p>Information about the load balancers that the service uses.</p>
     */
    inline void SetLoadBalancers(Aws::Vector<AwsEcsServiceLoadBalancersDetails>&& value) { m_loadBalancersHasBeenSet = true; m_loadBalancers = std::move(value); }

    /**
     * <p>Information about the load balancers that the service uses.</p>
     */
    inline AwsEcsServiceDetails& WithLoadBalancers(const Aws::Vector<AwsEcsServiceLoadBalancersDetails>& value) { SetLoadBalancers(value); return *this;}

    /**
     * <p>Information about the load balancers that the service uses.</p>
     */
    inline AwsEcsServiceDetails& WithLoadBalancers(Aws::Vector<AwsEcsServiceLoadBalancersDetails>&& value) { SetLoadBalancers(std::move(value)); return *this;}

    /**
     * <p>Information about the load balancers that the service uses.</p>
     */
    inline AwsEcsServiceDetails& AddLoadBalancers(const AwsEcsServiceLoadBalancersDetails& value) { m_loadBalancersHasBeenSet = true; m_loadBalancers.push_back(value); return *this; }

    /**
     * <p>Information about the load balancers that the service uses.</p>
     */
    inline AwsEcsServiceDetails& AddLoadBalancers(AwsEcsServiceLoadBalancersDetails&& value) { m_loadBalancersHasBeenSet = true; m_loadBalancers.push_back(std::move(value)); return *this; }


    /**
     * <p>The name of the service.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the service.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the service.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the service.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the service.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the service.</p>
     */
    inline AwsEcsServiceDetails& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the service.</p>
     */
    inline AwsEcsServiceDetails& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the service.</p>
     */
    inline AwsEcsServiceDetails& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>For tasks that use the <code>awsvpc</code> networking mode, the VPC subnet
     * and security group configuration.</p>
     */
    inline const AwsEcsServiceNetworkConfigurationDetails& GetNetworkConfiguration() const{ return m_networkConfiguration; }

    /**
     * <p>For tasks that use the <code>awsvpc</code> networking mode, the VPC subnet
     * and security group configuration.</p>
     */
    inline bool NetworkConfigurationHasBeenSet() const { return m_networkConfigurationHasBeenSet; }

    /**
     * <p>For tasks that use the <code>awsvpc</code> networking mode, the VPC subnet
     * and security group configuration.</p>
     */
    inline void SetNetworkConfiguration(const AwsEcsServiceNetworkConfigurationDetails& value) { m_networkConfigurationHasBeenSet = true; m_networkConfiguration = value; }

    /**
     * <p>For tasks that use the <code>awsvpc</code> networking mode, the VPC subnet
     * and security group configuration.</p>
     */
    inline void SetNetworkConfiguration(AwsEcsServiceNetworkConfigurationDetails&& value) { m_networkConfigurationHasBeenSet = true; m_networkConfiguration = std::move(value); }

    /**
     * <p>For tasks that use the <code>awsvpc</code> networking mode, the VPC subnet
     * and security group configuration.</p>
     */
    inline AwsEcsServiceDetails& WithNetworkConfiguration(const AwsEcsServiceNetworkConfigurationDetails& value) { SetNetworkConfiguration(value); return *this;}

    /**
     * <p>For tasks that use the <code>awsvpc</code> networking mode, the VPC subnet
     * and security group configuration.</p>
     */
    inline AwsEcsServiceDetails& WithNetworkConfiguration(AwsEcsServiceNetworkConfigurationDetails&& value) { SetNetworkConfiguration(std::move(value)); return *this;}


    /**
     * <p>The placement constraints for the tasks in the service.</p>
     */
    inline const Aws::Vector<AwsEcsServicePlacementConstraintsDetails>& GetPlacementConstraints() const{ return m_placementConstraints; }

    /**
     * <p>The placement constraints for the tasks in the service.</p>
     */
    inline bool PlacementConstraintsHasBeenSet() const { return m_placementConstraintsHasBeenSet; }

    /**
     * <p>The placement constraints for the tasks in the service.</p>
     */
    inline void SetPlacementConstraints(const Aws::Vector<AwsEcsServicePlacementConstraintsDetails>& value) { m_placementConstraintsHasBeenSet = true; m_placementConstraints = value; }

    /**
     * <p>The placement constraints for the tasks in the service.</p>
     */
    inline void SetPlacementConstraints(Aws::Vector<AwsEcsServicePlacementConstraintsDetails>&& value) { m_placementConstraintsHasBeenSet = true; m_placementConstraints = std::move(value); }

    /**
     * <p>The placement constraints for the tasks in the service.</p>
     */
    inline AwsEcsServiceDetails& WithPlacementConstraints(const Aws::Vector<AwsEcsServicePlacementConstraintsDetails>& value) { SetPlacementConstraints(value); return *this;}

    /**
     * <p>The placement constraints for the tasks in the service.</p>
     */
    inline AwsEcsServiceDetails& WithPlacementConstraints(Aws::Vector<AwsEcsServicePlacementConstraintsDetails>&& value) { SetPlacementConstraints(std::move(value)); return *this;}

    /**
     * <p>The placement constraints for the tasks in the service.</p>
     */
    inline AwsEcsServiceDetails& AddPlacementConstraints(const AwsEcsServicePlacementConstraintsDetails& value) { m_placementConstraintsHasBeenSet = true; m_placementConstraints.push_back(value); return *this; }

    /**
     * <p>The placement constraints for the tasks in the service.</p>
     */
    inline AwsEcsServiceDetails& AddPlacementConstraints(AwsEcsServicePlacementConstraintsDetails&& value) { m_placementConstraintsHasBeenSet = true; m_placementConstraints.push_back(std::move(value)); return *this; }


    /**
     * <p>Information about how tasks for the service are placed.</p>
     */
    inline const Aws::Vector<AwsEcsServicePlacementStrategiesDetails>& GetPlacementStrategies() const{ return m_placementStrategies; }

    /**
     * <p>Information about how tasks for the service are placed.</p>
     */
    inline bool PlacementStrategiesHasBeenSet() const { return m_placementStrategiesHasBeenSet; }

    /**
     * <p>Information about how tasks for the service are placed.</p>
     */
    inline void SetPlacementStrategies(const Aws::Vector<AwsEcsServicePlacementStrategiesDetails>& value) { m_placementStrategiesHasBeenSet = true; m_placementStrategies = value; }

    /**
     * <p>Information about how tasks for the service are placed.</p>
     */
    inline void SetPlacementStrategies(Aws::Vector<AwsEcsServicePlacementStrategiesDetails>&& value) { m_placementStrategiesHasBeenSet = true; m_placementStrategies = std::move(value); }

    /**
     * <p>Information about how tasks for the service are placed.</p>
     */
    inline AwsEcsServiceDetails& WithPlacementStrategies(const Aws::Vector<AwsEcsServicePlacementStrategiesDetails>& value) { SetPlacementStrategies(value); return *this;}

    /**
     * <p>Information about how tasks for the service are placed.</p>
     */
    inline AwsEcsServiceDetails& WithPlacementStrategies(Aws::Vector<AwsEcsServicePlacementStrategiesDetails>&& value) { SetPlacementStrategies(std::move(value)); return *this;}

    /**
     * <p>Information about how tasks for the service are placed.</p>
     */
    inline AwsEcsServiceDetails& AddPlacementStrategies(const AwsEcsServicePlacementStrategiesDetails& value) { m_placementStrategiesHasBeenSet = true; m_placementStrategies.push_back(value); return *this; }

    /**
     * <p>Information about how tasks for the service are placed.</p>
     */
    inline AwsEcsServiceDetails& AddPlacementStrategies(AwsEcsServicePlacementStrategiesDetails&& value) { m_placementStrategiesHasBeenSet = true; m_placementStrategies.push_back(std::move(value)); return *this; }


    /**
     * <p>The platform version on which to run the service. Only specified for tasks
     * that are hosted on Fargate. If a platform version is not specified, the
     * <code>LATEST</code> platform version is used by default.</p>
     */
    inline const Aws::String& GetPlatformVersion() const{ return m_platformVersion; }

    /**
     * <p>The platform version on which to run the service. Only specified for tasks
     * that are hosted on Fargate. If a platform version is not specified, the
     * <code>LATEST</code> platform version is used by default.</p>
     */
    inline bool PlatformVersionHasBeenSet() const { return m_platformVersionHasBeenSet; }

    /**
     * <p>The platform version on which to run the service. Only specified for tasks
     * that are hosted on Fargate. If a platform version is not specified, the
     * <code>LATEST</code> platform version is used by default.</p>
     */
    inline void SetPlatformVersion(const Aws::String& value) { m_platformVersionHasBeenSet = true; m_platformVersion = value; }

    /**
     * <p>The platform version on which to run the service. Only specified for tasks
     * that are hosted on Fargate. If a platform version is not specified, the
     * <code>LATEST</code> platform version is used by default.</p>
     */
    inline void SetPlatformVersion(Aws::String&& value) { m_platformVersionHasBeenSet = true; m_platformVersion = std::move(value); }

    /**
     * <p>The platform version on which to run the service. Only specified for tasks
     * that are hosted on Fargate. If a platform version is not specified, the
     * <code>LATEST</code> platform version is used by default.</p>
     */
    inline void SetPlatformVersion(const char* value) { m_platformVersionHasBeenSet = true; m_platformVersion.assign(value); }

    /**
     * <p>The platform version on which to run the service. Only specified for tasks
     * that are hosted on Fargate. If a platform version is not specified, the
     * <code>LATEST</code> platform version is used by default.</p>
     */
    inline AwsEcsServiceDetails& WithPlatformVersion(const Aws::String& value) { SetPlatformVersion(value); return *this;}

    /**
     * <p>The platform version on which to run the service. Only specified for tasks
     * that are hosted on Fargate. If a platform version is not specified, the
     * <code>LATEST</code> platform version is used by default.</p>
     */
    inline AwsEcsServiceDetails& WithPlatformVersion(Aws::String&& value) { SetPlatformVersion(std::move(value)); return *this;}

    /**
     * <p>The platform version on which to run the service. Only specified for tasks
     * that are hosted on Fargate. If a platform version is not specified, the
     * <code>LATEST</code> platform version is used by default.</p>
     */
    inline AwsEcsServiceDetails& WithPlatformVersion(const char* value) { SetPlatformVersion(value); return *this;}


    /**
     * <p>Indicates whether to propagate the tags from the task definition to the task
     * or from the service to the task. If no value is provided, then tags are not
     * propagated.</p> <p>Valid values: <code>TASK_DEFINITION</code> |
     * <code>SERVICE</code> </p>
     */
    inline const Aws::String& GetPropagateTags() const{ return m_propagateTags; }

    /**
     * <p>Indicates whether to propagate the tags from the task definition to the task
     * or from the service to the task. If no value is provided, then tags are not
     * propagated.</p> <p>Valid values: <code>TASK_DEFINITION</code> |
     * <code>SERVICE</code> </p>
     */
    inline bool PropagateTagsHasBeenSet() const { return m_propagateTagsHasBeenSet; }

    /**
     * <p>Indicates whether to propagate the tags from the task definition to the task
     * or from the service to the task. If no value is provided, then tags are not
     * propagated.</p> <p>Valid values: <code>TASK_DEFINITION</code> |
     * <code>SERVICE</code> </p>
     */
    inline void SetPropagateTags(const Aws::String& value) { m_propagateTagsHasBeenSet = true; m_propagateTags = value; }

    /**
     * <p>Indicates whether to propagate the tags from the task definition to the task
     * or from the service to the task. If no value is provided, then tags are not
     * propagated.</p> <p>Valid values: <code>TASK_DEFINITION</code> |
     * <code>SERVICE</code> </p>
     */
    inline void SetPropagateTags(Aws::String&& value) { m_propagateTagsHasBeenSet = true; m_propagateTags = std::move(value); }

    /**
     * <p>Indicates whether to propagate the tags from the task definition to the task
     * or from the service to the task. If no value is provided, then tags are not
     * propagated.</p> <p>Valid values: <code>TASK_DEFINITION</code> |
     * <code>SERVICE</code> </p>
     */
    inline void SetPropagateTags(const char* value) { m_propagateTagsHasBeenSet = true; m_propagateTags.assign(value); }

    /**
     * <p>Indicates whether to propagate the tags from the task definition to the task
     * or from the service to the task. If no value is provided, then tags are not
     * propagated.</p> <p>Valid values: <code>TASK_DEFINITION</code> |
     * <code>SERVICE</code> </p>
     */
    inline AwsEcsServiceDetails& WithPropagateTags(const Aws::String& value) { SetPropagateTags(value); return *this;}

    /**
     * <p>Indicates whether to propagate the tags from the task definition to the task
     * or from the service to the task. If no value is provided, then tags are not
     * propagated.</p> <p>Valid values: <code>TASK_DEFINITION</code> |
     * <code>SERVICE</code> </p>
     */
    inline AwsEcsServiceDetails& WithPropagateTags(Aws::String&& value) { SetPropagateTags(std::move(value)); return *this;}

    /**
     * <p>Indicates whether to propagate the tags from the task definition to the task
     * or from the service to the task. If no value is provided, then tags are not
     * propagated.</p> <p>Valid values: <code>TASK_DEFINITION</code> |
     * <code>SERVICE</code> </p>
     */
    inline AwsEcsServiceDetails& WithPropagateTags(const char* value) { SetPropagateTags(value); return *this;}


    /**
     * <p>The ARN of the IAM role that is associated with the service. The role allows
     * the Amazon ECS container agent to register container instances with an Elastic
     * Load Balancing load balancer.</p>
     */
    inline const Aws::String& GetRole() const{ return m_role; }

    /**
     * <p>The ARN of the IAM role that is associated with the service. The role allows
     * the Amazon ECS container agent to register container instances with an Elastic
     * Load Balancing load balancer.</p>
     */
    inline bool RoleHasBeenSet() const { return m_roleHasBeenSet; }

    /**
     * <p>The ARN of the IAM role that is associated with the service. The role allows
     * the Amazon ECS container agent to register container instances with an Elastic
     * Load Balancing load balancer.</p>
     */
    inline void SetRole(const Aws::String& value) { m_roleHasBeenSet = true; m_role = value; }

    /**
     * <p>The ARN of the IAM role that is associated with the service. The role allows
     * the Amazon ECS container agent to register container instances with an Elastic
     * Load Balancing load balancer.</p>
     */
    inline void SetRole(Aws::String&& value) { m_roleHasBeenSet = true; m_role = std::move(value); }

    /**
     * <p>The ARN of the IAM role that is associated with the service. The role allows
     * the Amazon ECS container agent to register container instances with an Elastic
     * Load Balancing load balancer.</p>
     */
    inline void SetRole(const char* value) { m_roleHasBeenSet = true; m_role.assign(value); }

    /**
     * <p>The ARN of the IAM role that is associated with the service. The role allows
     * the Amazon ECS container agent to register container instances with an Elastic
     * Load Balancing load balancer.</p>
     */
    inline AwsEcsServiceDetails& WithRole(const Aws::String& value) { SetRole(value); return *this;}

    /**
     * <p>The ARN of the IAM role that is associated with the service. The role allows
     * the Amazon ECS container agent to register container instances with an Elastic
     * Load Balancing load balancer.</p>
     */
    inline AwsEcsServiceDetails& WithRole(Aws::String&& value) { SetRole(std::move(value)); return *this;}

    /**
     * <p>The ARN of the IAM role that is associated with the service. The role allows
     * the Amazon ECS container agent to register container instances with an Elastic
     * Load Balancing load balancer.</p>
     */
    inline AwsEcsServiceDetails& WithRole(const char* value) { SetRole(value); return *this;}


    /**
     * <p>The scheduling strategy to use for the service.</p> <p>The
     * <code>REPLICA</code> scheduling strategy places and maintains the desired number
     * of tasks across the cluster. By default, the service scheduler spreads tasks
     * across Availability Zones. Task placement strategies and constraints are used to
     * customize task placement decisions.</p> <p>The <code>DAEMON</code> scheduling
     * strategy deploys exactly one task on each active container instance that meets
     * all of the task placement constraints that are specified in the cluster. The
     * service scheduler also evaluates the task placement constraints for running
     * tasks and stops tasks that do not meet the placement constraints.</p> <p>Valid
     * values: <code>REPLICA</code> | <code>DAEMON</code> </p>
     */
    inline const Aws::String& GetSchedulingStrategy() const{ return m_schedulingStrategy; }

    /**
     * <p>The scheduling strategy to use for the service.</p> <p>The
     * <code>REPLICA</code> scheduling strategy places and maintains the desired number
     * of tasks across the cluster. By default, the service scheduler spreads tasks
     * across Availability Zones. Task placement strategies and constraints are used to
     * customize task placement decisions.</p> <p>The <code>DAEMON</code> scheduling
     * strategy deploys exactly one task on each active container instance that meets
     * all of the task placement constraints that are specified in the cluster. The
     * service scheduler also evaluates the task placement constraints for running
     * tasks and stops tasks that do not meet the placement constraints.</p> <p>Valid
     * values: <code>REPLICA</code> | <code>DAEMON</code> </p>
     */
    inline bool SchedulingStrategyHasBeenSet() const { return m_schedulingStrategyHasBeenSet; }

    /**
     * <p>The scheduling strategy to use for the service.</p> <p>The
     * <code>REPLICA</code> scheduling strategy places and maintains the desired number
     * of tasks across the cluster. By default, the service scheduler spreads tasks
     * across Availability Zones. Task placement strategies and constraints are used to
     * customize task placement decisions.</p> <p>The <code>DAEMON</code> scheduling
     * strategy deploys exactly one task on each active container instance that meets
     * all of the task placement constraints that are specified in the cluster. The
     * service scheduler also evaluates the task placement constraints for running
     * tasks and stops tasks that do not meet the placement constraints.</p> <p>Valid
     * values: <code>REPLICA</code> | <code>DAEMON</code> </p>
     */
    inline void SetSchedulingStrategy(const Aws::String& value) { m_schedulingStrategyHasBeenSet = true; m_schedulingStrategy = value; }

    /**
     * <p>The scheduling strategy to use for the service.</p> <p>The
     * <code>REPLICA</code> scheduling strategy places and maintains the desired number
     * of tasks across the cluster. By default, the service scheduler spreads tasks
     * across Availability Zones. Task placement strategies and constraints are used to
     * customize task placement decisions.</p> <p>The <code>DAEMON</code> scheduling
     * strategy deploys exactly one task on each active container instance that meets
     * all of the task placement constraints that are specified in the cluster. The
     * service scheduler also evaluates the task placement constraints for running
     * tasks and stops tasks that do not meet the placement constraints.</p> <p>Valid
     * values: <code>REPLICA</code> | <code>DAEMON</code> </p>
     */
    inline void SetSchedulingStrategy(Aws::String&& value) { m_schedulingStrategyHasBeenSet = true; m_schedulingStrategy = std::move(value); }

    /**
     * <p>The scheduling strategy to use for the service.</p> <p>The
     * <code>REPLICA</code> scheduling strategy places and maintains the desired number
     * of tasks across the cluster. By default, the service scheduler spreads tasks
     * across Availability Zones. Task placement strategies and constraints are used to
     * customize task placement decisions.</p> <p>The <code>DAEMON</code> scheduling
     * strategy deploys exactly one task on each active container instance that meets
     * all of the task placement constraints that are specified in the cluster. The
     * service scheduler also evaluates the task placement constraints for running
     * tasks and stops tasks that do not meet the placement constraints.</p> <p>Valid
     * values: <code>REPLICA</code> | <code>DAEMON</code> </p>
     */
    inline void SetSchedulingStrategy(const char* value) { m_schedulingStrategyHasBeenSet = true; m_schedulingStrategy.assign(value); }

    /**
     * <p>The scheduling strategy to use for the service.</p> <p>The
     * <code>REPLICA</code> scheduling strategy places and maintains the desired number
     * of tasks across the cluster. By default, the service scheduler spreads tasks
     * across Availability Zones. Task placement strategies and constraints are used to
     * customize task placement decisions.</p> <p>The <code>DAEMON</code> scheduling
     * strategy deploys exactly one task on each active container instance that meets
     * all of the task placement constraints that are specified in the cluster. The
     * service scheduler also evaluates the task placement constraints for running
     * tasks and stops tasks that do not meet the placement constraints.</p> <p>Valid
     * values: <code>REPLICA</code> | <code>DAEMON</code> </p>
     */
    inline AwsEcsServiceDetails& WithSchedulingStrategy(const Aws::String& value) { SetSchedulingStrategy(value); return *this;}

    /**
     * <p>The scheduling strategy to use for the service.</p> <p>The
     * <code>REPLICA</code> scheduling strategy places and maintains the desired number
     * of tasks across the cluster. By default, the service scheduler spreads tasks
     * across Availability Zones. Task placement strategies and constraints are used to
     * customize task placement decisions.</p> <p>The <code>DAEMON</code> scheduling
     * strategy deploys exactly one task on each active container instance that meets
     * all of the task placement constraints that are specified in the cluster. The
     * service scheduler also evaluates the task placement constraints for running
     * tasks and stops tasks that do not meet the placement constraints.</p> <p>Valid
     * values: <code>REPLICA</code> | <code>DAEMON</code> </p>
     */
    inline AwsEcsServiceDetails& WithSchedulingStrategy(Aws::String&& value) { SetSchedulingStrategy(std::move(value)); return *this;}

    /**
     * <p>The scheduling strategy to use for the service.</p> <p>The
     * <code>REPLICA</code> scheduling strategy places and maintains the desired number
     * of tasks across the cluster. By default, the service scheduler spreads tasks
     * across Availability Zones. Task placement strategies and constraints are used to
     * customize task placement decisions.</p> <p>The <code>DAEMON</code> scheduling
     * strategy deploys exactly one task on each active container instance that meets
     * all of the task placement constraints that are specified in the cluster. The
     * service scheduler also evaluates the task placement constraints for running
     * tasks and stops tasks that do not meet the placement constraints.</p> <p>Valid
     * values: <code>REPLICA</code> | <code>DAEMON</code> </p>
     */
    inline AwsEcsServiceDetails& WithSchedulingStrategy(const char* value) { SetSchedulingStrategy(value); return *this;}


    /**
     * <p>The ARN of the service.</p>
     */
    inline const Aws::String& GetServiceArn() const{ return m_serviceArn; }

    /**
     * <p>The ARN of the service.</p>
     */
    inline bool ServiceArnHasBeenSet() const { return m_serviceArnHasBeenSet; }

    /**
     * <p>The ARN of the service.</p>
     */
    inline void SetServiceArn(const Aws::String& value) { m_serviceArnHasBeenSet = true; m_serviceArn = value; }

    /**
     * <p>The ARN of the service.</p>
     */
    inline void SetServiceArn(Aws::String&& value) { m_serviceArnHasBeenSet = true; m_serviceArn = std::move(value); }

    /**
     * <p>The ARN of the service.</p>
     */
    inline void SetServiceArn(const char* value) { m_serviceArnHasBeenSet = true; m_serviceArn.assign(value); }

    /**
     * <p>The ARN of the service.</p>
     */
    inline AwsEcsServiceDetails& WithServiceArn(const Aws::String& value) { SetServiceArn(value); return *this;}

    /**
     * <p>The ARN of the service.</p>
     */
    inline AwsEcsServiceDetails& WithServiceArn(Aws::String&& value) { SetServiceArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the service.</p>
     */
    inline AwsEcsServiceDetails& WithServiceArn(const char* value) { SetServiceArn(value); return *this;}


    /**
     * <p>The name of the service.</p> <p>The name can contain up to 255 characters. It
     * can use letters, numbers, underscores, and hyphens.</p>
     */
    inline const Aws::String& GetServiceName() const{ return m_serviceName; }

    /**
     * <p>The name of the service.</p> <p>The name can contain up to 255 characters. It
     * can use letters, numbers, underscores, and hyphens.</p>
     */
    inline bool ServiceNameHasBeenSet() const { return m_serviceNameHasBeenSet; }

    /**
     * <p>The name of the service.</p> <p>The name can contain up to 255 characters. It
     * can use letters, numbers, underscores, and hyphens.</p>
     */
    inline void SetServiceName(const Aws::String& value) { m_serviceNameHasBeenSet = true; m_serviceName = value; }

    /**
     * <p>The name of the service.</p> <p>The name can contain up to 255 characters. It
     * can use letters, numbers, underscores, and hyphens.</p>
     */
    inline void SetServiceName(Aws::String&& value) { m_serviceNameHasBeenSet = true; m_serviceName = std::move(value); }

    /**
     * <p>The name of the service.</p> <p>The name can contain up to 255 characters. It
     * can use letters, numbers, underscores, and hyphens.</p>
     */
    inline void SetServiceName(const char* value) { m_serviceNameHasBeenSet = true; m_serviceName.assign(value); }

    /**
     * <p>The name of the service.</p> <p>The name can contain up to 255 characters. It
     * can use letters, numbers, underscores, and hyphens.</p>
     */
    inline AwsEcsServiceDetails& WithServiceName(const Aws::String& value) { SetServiceName(value); return *this;}

    /**
     * <p>The name of the service.</p> <p>The name can contain up to 255 characters. It
     * can use letters, numbers, underscores, and hyphens.</p>
     */
    inline AwsEcsServiceDetails& WithServiceName(Aws::String&& value) { SetServiceName(std::move(value)); return *this;}

    /**
     * <p>The name of the service.</p> <p>The name can contain up to 255 characters. It
     * can use letters, numbers, underscores, and hyphens.</p>
     */
    inline AwsEcsServiceDetails& WithServiceName(const char* value) { SetServiceName(value); return *this;}


    /**
     * <p>Information about the service discovery registries to assign to the
     * service.</p>
     */
    inline const Aws::Vector<AwsEcsServiceServiceRegistriesDetails>& GetServiceRegistries() const{ return m_serviceRegistries; }

    /**
     * <p>Information about the service discovery registries to assign to the
     * service.</p>
     */
    inline bool ServiceRegistriesHasBeenSet() const { return m_serviceRegistriesHasBeenSet; }

    /**
     * <p>Information about the service discovery registries to assign to the
     * service.</p>
     */
    inline void SetServiceRegistries(const Aws::Vector<AwsEcsServiceServiceRegistriesDetails>& value) { m_serviceRegistriesHasBeenSet = true; m_serviceRegistries = value; }

    /**
     * <p>Information about the service discovery registries to assign to the
     * service.</p>
     */
    inline void SetServiceRegistries(Aws::Vector<AwsEcsServiceServiceRegistriesDetails>&& value) { m_serviceRegistriesHasBeenSet = true; m_serviceRegistries = std::move(value); }

    /**
     * <p>Information about the service discovery registries to assign to the
     * service.</p>
     */
    inline AwsEcsServiceDetails& WithServiceRegistries(const Aws::Vector<AwsEcsServiceServiceRegistriesDetails>& value) { SetServiceRegistries(value); return *this;}

    /**
     * <p>Information about the service discovery registries to assign to the
     * service.</p>
     */
    inline AwsEcsServiceDetails& WithServiceRegistries(Aws::Vector<AwsEcsServiceServiceRegistriesDetails>&& value) { SetServiceRegistries(std::move(value)); return *this;}

    /**
     * <p>Information about the service discovery registries to assign to the
     * service.</p>
     */
    inline AwsEcsServiceDetails& AddServiceRegistries(const AwsEcsServiceServiceRegistriesDetails& value) { m_serviceRegistriesHasBeenSet = true; m_serviceRegistries.push_back(value); return *this; }

    /**
     * <p>Information about the service discovery registries to assign to the
     * service.</p>
     */
    inline AwsEcsServiceDetails& AddServiceRegistries(AwsEcsServiceServiceRegistriesDetails&& value) { m_serviceRegistriesHasBeenSet = true; m_serviceRegistries.push_back(std::move(value)); return *this; }


    /**
     * <p>The task definition to use for tasks in the service.</p>
     */
    inline const Aws::String& GetTaskDefinition() const{ return m_taskDefinition; }

    /**
     * <p>The task definition to use for tasks in the service.</p>
     */
    inline bool TaskDefinitionHasBeenSet() const { return m_taskDefinitionHasBeenSet; }

    /**
     * <p>The task definition to use for tasks in the service.</p>
     */
    inline void SetTaskDefinition(const Aws::String& value) { m_taskDefinitionHasBeenSet = true; m_taskDefinition = value; }

    /**
     * <p>The task definition to use for tasks in the service.</p>
     */
    inline void SetTaskDefinition(Aws::String&& value) { m_taskDefinitionHasBeenSet = true; m_taskDefinition = std::move(value); }

    /**
     * <p>The task definition to use for tasks in the service.</p>
     */
    inline void SetTaskDefinition(const char* value) { m_taskDefinitionHasBeenSet = true; m_taskDefinition.assign(value); }

    /**
     * <p>The task definition to use for tasks in the service.</p>
     */
    inline AwsEcsServiceDetails& WithTaskDefinition(const Aws::String& value) { SetTaskDefinition(value); return *this;}

    /**
     * <p>The task definition to use for tasks in the service.</p>
     */
    inline AwsEcsServiceDetails& WithTaskDefinition(Aws::String&& value) { SetTaskDefinition(std::move(value)); return *this;}

    /**
     * <p>The task definition to use for tasks in the service.</p>
     */
    inline AwsEcsServiceDetails& WithTaskDefinition(const char* value) { SetTaskDefinition(value); return *this;}

  private:

    Aws::Vector<AwsEcsServiceCapacityProviderStrategyDetails> m_capacityProviderStrategy;
    bool m_capacityProviderStrategyHasBeenSet = false;

    Aws::String m_cluster;
    bool m_clusterHasBeenSet = false;

    AwsEcsServiceDeploymentConfigurationDetails m_deploymentConfiguration;
    bool m_deploymentConfigurationHasBeenSet = false;

    AwsEcsServiceDeploymentControllerDetails m_deploymentController;
    bool m_deploymentControllerHasBeenSet = false;

    int m_desiredCount;
    bool m_desiredCountHasBeenSet = false;

    bool m_enableEcsManagedTags;
    bool m_enableEcsManagedTagsHasBeenSet = false;

    bool m_enableExecuteCommand;
    bool m_enableExecuteCommandHasBeenSet = false;

    int m_healthCheckGracePeriodSeconds;
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
