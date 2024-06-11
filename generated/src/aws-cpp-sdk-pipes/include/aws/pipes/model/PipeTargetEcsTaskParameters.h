﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pipes/Pipes_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/pipes/model/LaunchType.h>
#include <aws/pipes/model/NetworkConfiguration.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/pipes/model/PropagateTags.h>
#include <aws/pipes/model/EcsTaskOverride.h>
#include <aws/pipes/model/CapacityProviderStrategyItem.h>
#include <aws/pipes/model/PlacementConstraint.h>
#include <aws/pipes/model/PlacementStrategy.h>
#include <aws/pipes/model/Tag.h>
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
namespace Pipes
{
namespace Model
{

  /**
   * <p>The parameters for using an Amazon ECS task as a target.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pipes-2015-10-07/PipeTargetEcsTaskParameters">AWS
   * API Reference</a></p>
   */
  class PipeTargetEcsTaskParameters
  {
  public:
    AWS_PIPES_API PipeTargetEcsTaskParameters();
    AWS_PIPES_API PipeTargetEcsTaskParameters(Aws::Utils::Json::JsonView jsonValue);
    AWS_PIPES_API PipeTargetEcsTaskParameters& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PIPES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ARN of the task definition to use if the event target is an Amazon ECS
     * task. </p>
     */
    inline const Aws::String& GetTaskDefinitionArn() const{ return m_taskDefinitionArn; }
    inline bool TaskDefinitionArnHasBeenSet() const { return m_taskDefinitionArnHasBeenSet; }
    inline void SetTaskDefinitionArn(const Aws::String& value) { m_taskDefinitionArnHasBeenSet = true; m_taskDefinitionArn = value; }
    inline void SetTaskDefinitionArn(Aws::String&& value) { m_taskDefinitionArnHasBeenSet = true; m_taskDefinitionArn = std::move(value); }
    inline void SetTaskDefinitionArn(const char* value) { m_taskDefinitionArnHasBeenSet = true; m_taskDefinitionArn.assign(value); }
    inline PipeTargetEcsTaskParameters& WithTaskDefinitionArn(const Aws::String& value) { SetTaskDefinitionArn(value); return *this;}
    inline PipeTargetEcsTaskParameters& WithTaskDefinitionArn(Aws::String&& value) { SetTaskDefinitionArn(std::move(value)); return *this;}
    inline PipeTargetEcsTaskParameters& WithTaskDefinitionArn(const char* value) { SetTaskDefinitionArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of tasks to create based on <code>TaskDefinition</code>. The
     * default is 1.</p>
     */
    inline int GetTaskCount() const{ return m_taskCount; }
    inline bool TaskCountHasBeenSet() const { return m_taskCountHasBeenSet; }
    inline void SetTaskCount(int value) { m_taskCountHasBeenSet = true; m_taskCount = value; }
    inline PipeTargetEcsTaskParameters& WithTaskCount(int value) { SetTaskCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the launch type on which your task is running. The launch type that
     * you specify here must match one of the launch type (compatibilities) of the
     * target task. The <code>FARGATE</code> value is supported only in the Regions
     * where Fargate with Amazon ECS is supported. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/AWS-Fargate.html">Fargate
     * on Amazon ECS</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p>
     */
    inline const LaunchType& GetLaunchType() const{ return m_launchType; }
    inline bool LaunchTypeHasBeenSet() const { return m_launchTypeHasBeenSet; }
    inline void SetLaunchType(const LaunchType& value) { m_launchTypeHasBeenSet = true; m_launchType = value; }
    inline void SetLaunchType(LaunchType&& value) { m_launchTypeHasBeenSet = true; m_launchType = std::move(value); }
    inline PipeTargetEcsTaskParameters& WithLaunchType(const LaunchType& value) { SetLaunchType(value); return *this;}
    inline PipeTargetEcsTaskParameters& WithLaunchType(LaunchType&& value) { SetLaunchType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Use this structure if the Amazon ECS task uses the <code>awsvpc</code>
     * network mode. This structure specifies the VPC subnets and security groups
     * associated with the task, and whether a public IP address is to be used. This
     * structure is required if <code>LaunchType</code> is <code>FARGATE</code> because
     * the <code>awsvpc</code> mode is required for Fargate tasks.</p> <p>If you
     * specify <code>NetworkConfiguration</code> when the target ECS task does not use
     * the <code>awsvpc</code> network mode, the task fails.</p>
     */
    inline const NetworkConfiguration& GetNetworkConfiguration() const{ return m_networkConfiguration; }
    inline bool NetworkConfigurationHasBeenSet() const { return m_networkConfigurationHasBeenSet; }
    inline void SetNetworkConfiguration(const NetworkConfiguration& value) { m_networkConfigurationHasBeenSet = true; m_networkConfiguration = value; }
    inline void SetNetworkConfiguration(NetworkConfiguration&& value) { m_networkConfigurationHasBeenSet = true; m_networkConfiguration = std::move(value); }
    inline PipeTargetEcsTaskParameters& WithNetworkConfiguration(const NetworkConfiguration& value) { SetNetworkConfiguration(value); return *this;}
    inline PipeTargetEcsTaskParameters& WithNetworkConfiguration(NetworkConfiguration&& value) { SetNetworkConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the platform version for the task. Specify only the numeric portion
     * of the platform version, such as <code>1.1.0</code>.</p> <p>This structure is
     * used only if <code>LaunchType</code> is <code>FARGATE</code>. For more
     * information about valid platform versions, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/platform_versions.html">Fargate
     * Platform Versions</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p>
     */
    inline const Aws::String& GetPlatformVersion() const{ return m_platformVersion; }
    inline bool PlatformVersionHasBeenSet() const { return m_platformVersionHasBeenSet; }
    inline void SetPlatformVersion(const Aws::String& value) { m_platformVersionHasBeenSet = true; m_platformVersion = value; }
    inline void SetPlatformVersion(Aws::String&& value) { m_platformVersionHasBeenSet = true; m_platformVersion = std::move(value); }
    inline void SetPlatformVersion(const char* value) { m_platformVersionHasBeenSet = true; m_platformVersion.assign(value); }
    inline PipeTargetEcsTaskParameters& WithPlatformVersion(const Aws::String& value) { SetPlatformVersion(value); return *this;}
    inline PipeTargetEcsTaskParameters& WithPlatformVersion(Aws::String&& value) { SetPlatformVersion(std::move(value)); return *this;}
    inline PipeTargetEcsTaskParameters& WithPlatformVersion(const char* value) { SetPlatformVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies an Amazon ECS task group for the task. The maximum length is 255
     * characters.</p>
     */
    inline const Aws::String& GetGroup() const{ return m_group; }
    inline bool GroupHasBeenSet() const { return m_groupHasBeenSet; }
    inline void SetGroup(const Aws::String& value) { m_groupHasBeenSet = true; m_group = value; }
    inline void SetGroup(Aws::String&& value) { m_groupHasBeenSet = true; m_group = std::move(value); }
    inline void SetGroup(const char* value) { m_groupHasBeenSet = true; m_group.assign(value); }
    inline PipeTargetEcsTaskParameters& WithGroup(const Aws::String& value) { SetGroup(value); return *this;}
    inline PipeTargetEcsTaskParameters& WithGroup(Aws::String&& value) { SetGroup(std::move(value)); return *this;}
    inline PipeTargetEcsTaskParameters& WithGroup(const char* value) { SetGroup(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The capacity provider strategy to use for the task.</p> <p>If a
     * <code>capacityProviderStrategy</code> is specified, the <code>launchType</code>
     * parameter must be omitted. If no <code>capacityProviderStrategy</code> or
     * launchType is specified, the <code>defaultCapacityProviderStrategy</code> for
     * the cluster is used. </p>
     */
    inline const Aws::Vector<CapacityProviderStrategyItem>& GetCapacityProviderStrategy() const{ return m_capacityProviderStrategy; }
    inline bool CapacityProviderStrategyHasBeenSet() const { return m_capacityProviderStrategyHasBeenSet; }
    inline void SetCapacityProviderStrategy(const Aws::Vector<CapacityProviderStrategyItem>& value) { m_capacityProviderStrategyHasBeenSet = true; m_capacityProviderStrategy = value; }
    inline void SetCapacityProviderStrategy(Aws::Vector<CapacityProviderStrategyItem>&& value) { m_capacityProviderStrategyHasBeenSet = true; m_capacityProviderStrategy = std::move(value); }
    inline PipeTargetEcsTaskParameters& WithCapacityProviderStrategy(const Aws::Vector<CapacityProviderStrategyItem>& value) { SetCapacityProviderStrategy(value); return *this;}
    inline PipeTargetEcsTaskParameters& WithCapacityProviderStrategy(Aws::Vector<CapacityProviderStrategyItem>&& value) { SetCapacityProviderStrategy(std::move(value)); return *this;}
    inline PipeTargetEcsTaskParameters& AddCapacityProviderStrategy(const CapacityProviderStrategyItem& value) { m_capacityProviderStrategyHasBeenSet = true; m_capacityProviderStrategy.push_back(value); return *this; }
    inline PipeTargetEcsTaskParameters& AddCapacityProviderStrategy(CapacityProviderStrategyItem&& value) { m_capacityProviderStrategyHasBeenSet = true; m_capacityProviderStrategy.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies whether to enable Amazon ECS managed tags for the task. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/ecs-using-tags.html">Tagging
     * Your Amazon ECS Resources</a> in the Amazon Elastic Container Service Developer
     * Guide. </p>
     */
    inline bool GetEnableECSManagedTags() const{ return m_enableECSManagedTags; }
    inline bool EnableECSManagedTagsHasBeenSet() const { return m_enableECSManagedTagsHasBeenSet; }
    inline void SetEnableECSManagedTags(bool value) { m_enableECSManagedTagsHasBeenSet = true; m_enableECSManagedTags = value; }
    inline PipeTargetEcsTaskParameters& WithEnableECSManagedTags(bool value) { SetEnableECSManagedTags(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether or not to enable the execute command functionality for the containers
     * in this task. If true, this enables execute command functionality on all
     * containers in the task.</p>
     */
    inline bool GetEnableExecuteCommand() const{ return m_enableExecuteCommand; }
    inline bool EnableExecuteCommandHasBeenSet() const { return m_enableExecuteCommandHasBeenSet; }
    inline void SetEnableExecuteCommand(bool value) { m_enableExecuteCommandHasBeenSet = true; m_enableExecuteCommand = value; }
    inline PipeTargetEcsTaskParameters& WithEnableExecuteCommand(bool value) { SetEnableExecuteCommand(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of placement constraint objects to use for the task. You can specify
     * up to 10 constraints per task (including constraints in the task definition and
     * those specified at runtime).</p>
     */
    inline const Aws::Vector<PlacementConstraint>& GetPlacementConstraints() const{ return m_placementConstraints; }
    inline bool PlacementConstraintsHasBeenSet() const { return m_placementConstraintsHasBeenSet; }
    inline void SetPlacementConstraints(const Aws::Vector<PlacementConstraint>& value) { m_placementConstraintsHasBeenSet = true; m_placementConstraints = value; }
    inline void SetPlacementConstraints(Aws::Vector<PlacementConstraint>&& value) { m_placementConstraintsHasBeenSet = true; m_placementConstraints = std::move(value); }
    inline PipeTargetEcsTaskParameters& WithPlacementConstraints(const Aws::Vector<PlacementConstraint>& value) { SetPlacementConstraints(value); return *this;}
    inline PipeTargetEcsTaskParameters& WithPlacementConstraints(Aws::Vector<PlacementConstraint>&& value) { SetPlacementConstraints(std::move(value)); return *this;}
    inline PipeTargetEcsTaskParameters& AddPlacementConstraints(const PlacementConstraint& value) { m_placementConstraintsHasBeenSet = true; m_placementConstraints.push_back(value); return *this; }
    inline PipeTargetEcsTaskParameters& AddPlacementConstraints(PlacementConstraint&& value) { m_placementConstraintsHasBeenSet = true; m_placementConstraints.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The placement strategy objects to use for the task. You can specify a maximum
     * of five strategy rules per task. </p>
     */
    inline const Aws::Vector<PlacementStrategy>& GetPlacementStrategy() const{ return m_placementStrategy; }
    inline bool PlacementStrategyHasBeenSet() const { return m_placementStrategyHasBeenSet; }
    inline void SetPlacementStrategy(const Aws::Vector<PlacementStrategy>& value) { m_placementStrategyHasBeenSet = true; m_placementStrategy = value; }
    inline void SetPlacementStrategy(Aws::Vector<PlacementStrategy>&& value) { m_placementStrategyHasBeenSet = true; m_placementStrategy = std::move(value); }
    inline PipeTargetEcsTaskParameters& WithPlacementStrategy(const Aws::Vector<PlacementStrategy>& value) { SetPlacementStrategy(value); return *this;}
    inline PipeTargetEcsTaskParameters& WithPlacementStrategy(Aws::Vector<PlacementStrategy>&& value) { SetPlacementStrategy(std::move(value)); return *this;}
    inline PipeTargetEcsTaskParameters& AddPlacementStrategy(const PlacementStrategy& value) { m_placementStrategyHasBeenSet = true; m_placementStrategy.push_back(value); return *this; }
    inline PipeTargetEcsTaskParameters& AddPlacementStrategy(PlacementStrategy&& value) { m_placementStrategyHasBeenSet = true; m_placementStrategy.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies whether to propagate the tags from the task definition to the task.
     * If no value is specified, the tags are not propagated. Tags can only be
     * propagated to the task during task creation. To add tags to a task after task
     * creation, use the <code>TagResource</code> API action. </p>
     */
    inline const PropagateTags& GetPropagateTags() const{ return m_propagateTags; }
    inline bool PropagateTagsHasBeenSet() const { return m_propagateTagsHasBeenSet; }
    inline void SetPropagateTags(const PropagateTags& value) { m_propagateTagsHasBeenSet = true; m_propagateTags = value; }
    inline void SetPropagateTags(PropagateTags&& value) { m_propagateTagsHasBeenSet = true; m_propagateTags = std::move(value); }
    inline PipeTargetEcsTaskParameters& WithPropagateTags(const PropagateTags& value) { SetPropagateTags(value); return *this;}
    inline PipeTargetEcsTaskParameters& WithPropagateTags(PropagateTags&& value) { SetPropagateTags(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reference ID to use for the task.</p>
     */
    inline const Aws::String& GetReferenceId() const{ return m_referenceId; }
    inline bool ReferenceIdHasBeenSet() const { return m_referenceIdHasBeenSet; }
    inline void SetReferenceId(const Aws::String& value) { m_referenceIdHasBeenSet = true; m_referenceId = value; }
    inline void SetReferenceId(Aws::String&& value) { m_referenceIdHasBeenSet = true; m_referenceId = std::move(value); }
    inline void SetReferenceId(const char* value) { m_referenceIdHasBeenSet = true; m_referenceId.assign(value); }
    inline PipeTargetEcsTaskParameters& WithReferenceId(const Aws::String& value) { SetReferenceId(value); return *this;}
    inline PipeTargetEcsTaskParameters& WithReferenceId(Aws::String&& value) { SetReferenceId(std::move(value)); return *this;}
    inline PipeTargetEcsTaskParameters& WithReferenceId(const char* value) { SetReferenceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The overrides that are associated with a task.</p>
     */
    inline const EcsTaskOverride& GetOverrides() const{ return m_overrides; }
    inline bool OverridesHasBeenSet() const { return m_overridesHasBeenSet; }
    inline void SetOverrides(const EcsTaskOverride& value) { m_overridesHasBeenSet = true; m_overrides = value; }
    inline void SetOverrides(EcsTaskOverride&& value) { m_overridesHasBeenSet = true; m_overrides = std::move(value); }
    inline PipeTargetEcsTaskParameters& WithOverrides(const EcsTaskOverride& value) { SetOverrides(value); return *this;}
    inline PipeTargetEcsTaskParameters& WithOverrides(EcsTaskOverride&& value) { SetOverrides(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The metadata that you apply to the task to help you categorize and organize
     * them. Each tag consists of a key and an optional value, both of which you
     * define. To learn more, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/APIReference/API_RunTask.html#ECS-RunTask-request-tags">RunTask</a>
     * in the Amazon ECS API Reference.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline PipeTargetEcsTaskParameters& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline PipeTargetEcsTaskParameters& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline PipeTargetEcsTaskParameters& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    inline PipeTargetEcsTaskParameters& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_taskDefinitionArn;
    bool m_taskDefinitionArnHasBeenSet = false;

    int m_taskCount;
    bool m_taskCountHasBeenSet = false;

    LaunchType m_launchType;
    bool m_launchTypeHasBeenSet = false;

    NetworkConfiguration m_networkConfiguration;
    bool m_networkConfigurationHasBeenSet = false;

    Aws::String m_platformVersion;
    bool m_platformVersionHasBeenSet = false;

    Aws::String m_group;
    bool m_groupHasBeenSet = false;

    Aws::Vector<CapacityProviderStrategyItem> m_capacityProviderStrategy;
    bool m_capacityProviderStrategyHasBeenSet = false;

    bool m_enableECSManagedTags;
    bool m_enableECSManagedTagsHasBeenSet = false;

    bool m_enableExecuteCommand;
    bool m_enableExecuteCommandHasBeenSet = false;

    Aws::Vector<PlacementConstraint> m_placementConstraints;
    bool m_placementConstraintsHasBeenSet = false;

    Aws::Vector<PlacementStrategy> m_placementStrategy;
    bool m_placementStrategyHasBeenSet = false;

    PropagateTags m_propagateTags;
    bool m_propagateTagsHasBeenSet = false;

    Aws::String m_referenceId;
    bool m_referenceIdHasBeenSet = false;

    EcsTaskOverride m_overrides;
    bool m_overridesHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace Pipes
} // namespace Aws
