/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/ssm/SSMRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ssm/model/MaintenanceWindowResourceType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ssm/model/Target.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace SSM
{
namespace Model
{

  /**
   */
  class RegisterTargetWithMaintenanceWindowRequest : public SSMRequest
  {
  public:
    AWS_SSM_API RegisterTargetWithMaintenanceWindowRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "RegisterTargetWithMaintenanceWindow"; }

    AWS_SSM_API Aws::String SerializePayload() const override;

    AWS_SSM_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The ID of the maintenance window the target should be registered with.</p>
     */
    inline const Aws::String& GetWindowId() const{ return m_windowId; }

    /**
     * <p>The ID of the maintenance window the target should be registered with.</p>
     */
    inline bool WindowIdHasBeenSet() const { return m_windowIdHasBeenSet; }

    /**
     * <p>The ID of the maintenance window the target should be registered with.</p>
     */
    inline void SetWindowId(const Aws::String& value) { m_windowIdHasBeenSet = true; m_windowId = value; }

    /**
     * <p>The ID of the maintenance window the target should be registered with.</p>
     */
    inline void SetWindowId(Aws::String&& value) { m_windowIdHasBeenSet = true; m_windowId = std::move(value); }

    /**
     * <p>The ID of the maintenance window the target should be registered with.</p>
     */
    inline void SetWindowId(const char* value) { m_windowIdHasBeenSet = true; m_windowId.assign(value); }

    /**
     * <p>The ID of the maintenance window the target should be registered with.</p>
     */
    inline RegisterTargetWithMaintenanceWindowRequest& WithWindowId(const Aws::String& value) { SetWindowId(value); return *this;}

    /**
     * <p>The ID of the maintenance window the target should be registered with.</p>
     */
    inline RegisterTargetWithMaintenanceWindowRequest& WithWindowId(Aws::String&& value) { SetWindowId(std::move(value)); return *this;}

    /**
     * <p>The ID of the maintenance window the target should be registered with.</p>
     */
    inline RegisterTargetWithMaintenanceWindowRequest& WithWindowId(const char* value) { SetWindowId(value); return *this;}


    /**
     * <p>The type of target being registered with the maintenance window.</p>
     */
    inline const MaintenanceWindowResourceType& GetResourceType() const{ return m_resourceType; }

    /**
     * <p>The type of target being registered with the maintenance window.</p>
     */
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }

    /**
     * <p>The type of target being registered with the maintenance window.</p>
     */
    inline void SetResourceType(const MaintenanceWindowResourceType& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }

    /**
     * <p>The type of target being registered with the maintenance window.</p>
     */
    inline void SetResourceType(MaintenanceWindowResourceType&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::move(value); }

    /**
     * <p>The type of target being registered with the maintenance window.</p>
     */
    inline RegisterTargetWithMaintenanceWindowRequest& WithResourceType(const MaintenanceWindowResourceType& value) { SetResourceType(value); return *this;}

    /**
     * <p>The type of target being registered with the maintenance window.</p>
     */
    inline RegisterTargetWithMaintenanceWindowRequest& WithResourceType(MaintenanceWindowResourceType&& value) { SetResourceType(std::move(value)); return *this;}


    /**
     * <p>The targets to register with the maintenance window. In other words, the
     * managed nodes to run commands on when the maintenance window runs.</p> 
     * <p>If a single maintenance window task is registered with multiple targets, its
     * task invocations occur sequentially and not in parallel. If your task must run
     * on multiple targets at the same time, register a task for each target
     * individually and assign each task the same priority level.</p>  <p>You
     * can specify targets using managed node IDs, resource group names, or tags that
     * have been applied to managed nodes.</p> <p> <b>Example 1</b>: Specify managed
     * node IDs</p> <p>
     * <code>Key=InstanceIds,Values=&lt;instance-id-1&gt;,&lt;instance-id-2&gt;,&lt;instance-id-3&gt;</code>
     * </p> <p> <b>Example 2</b>: Use tag key-pairs applied to managed nodes</p> <p>
     * <code>Key=tag:&lt;my-tag-key&gt;,Values=&lt;my-tag-value-1&gt;,&lt;my-tag-value-2&gt;</code>
     * </p> <p> <b>Example 3</b>: Use tag-keys applied to managed nodes</p> <p>
     * <code>Key=tag-key,Values=&lt;my-tag-key-1&gt;,&lt;my-tag-key-2&gt;</code> </p>
     * <p> <b>Example 4</b>: Use resource group names</p> <p>
     * <code>Key=resource-groups:Name,Values=&lt;resource-group-name&gt;</code> </p>
     * <p> <b>Example 5</b>: Use filters for resource group types</p> <p>
     * <code>Key=resource-groups:ResourceTypeFilters,Values=&lt;resource-type-1&gt;,&lt;resource-type-2&gt;</code>
     * </p>  <p>For <code>Key=resource-groups:ResourceTypeFilters</code>, specify
     * resource types in the following format</p> <p>
     * <code>Key=resource-groups:ResourceTypeFilters,Values=AWS::EC2::INSTANCE,AWS::EC2::VPC</code>
     * </p>  <p>For more information about these examples formats, including the
     * best use case for each one, see <a
     * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/mw-cli-tutorial-targets-examples.html">Examples:
     * Register targets with a maintenance window</a> in the <i>Amazon Web Services
     * Systems Manager User Guide</i>.</p>
     */
    inline const Aws::Vector<Target>& GetTargets() const{ return m_targets; }

    /**
     * <p>The targets to register with the maintenance window. In other words, the
     * managed nodes to run commands on when the maintenance window runs.</p> 
     * <p>If a single maintenance window task is registered with multiple targets, its
     * task invocations occur sequentially and not in parallel. If your task must run
     * on multiple targets at the same time, register a task for each target
     * individually and assign each task the same priority level.</p>  <p>You
     * can specify targets using managed node IDs, resource group names, or tags that
     * have been applied to managed nodes.</p> <p> <b>Example 1</b>: Specify managed
     * node IDs</p> <p>
     * <code>Key=InstanceIds,Values=&lt;instance-id-1&gt;,&lt;instance-id-2&gt;,&lt;instance-id-3&gt;</code>
     * </p> <p> <b>Example 2</b>: Use tag key-pairs applied to managed nodes</p> <p>
     * <code>Key=tag:&lt;my-tag-key&gt;,Values=&lt;my-tag-value-1&gt;,&lt;my-tag-value-2&gt;</code>
     * </p> <p> <b>Example 3</b>: Use tag-keys applied to managed nodes</p> <p>
     * <code>Key=tag-key,Values=&lt;my-tag-key-1&gt;,&lt;my-tag-key-2&gt;</code> </p>
     * <p> <b>Example 4</b>: Use resource group names</p> <p>
     * <code>Key=resource-groups:Name,Values=&lt;resource-group-name&gt;</code> </p>
     * <p> <b>Example 5</b>: Use filters for resource group types</p> <p>
     * <code>Key=resource-groups:ResourceTypeFilters,Values=&lt;resource-type-1&gt;,&lt;resource-type-2&gt;</code>
     * </p>  <p>For <code>Key=resource-groups:ResourceTypeFilters</code>, specify
     * resource types in the following format</p> <p>
     * <code>Key=resource-groups:ResourceTypeFilters,Values=AWS::EC2::INSTANCE,AWS::EC2::VPC</code>
     * </p>  <p>For more information about these examples formats, including the
     * best use case for each one, see <a
     * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/mw-cli-tutorial-targets-examples.html">Examples:
     * Register targets with a maintenance window</a> in the <i>Amazon Web Services
     * Systems Manager User Guide</i>.</p>
     */
    inline bool TargetsHasBeenSet() const { return m_targetsHasBeenSet; }

    /**
     * <p>The targets to register with the maintenance window. In other words, the
     * managed nodes to run commands on when the maintenance window runs.</p> 
     * <p>If a single maintenance window task is registered with multiple targets, its
     * task invocations occur sequentially and not in parallel. If your task must run
     * on multiple targets at the same time, register a task for each target
     * individually and assign each task the same priority level.</p>  <p>You
     * can specify targets using managed node IDs, resource group names, or tags that
     * have been applied to managed nodes.</p> <p> <b>Example 1</b>: Specify managed
     * node IDs</p> <p>
     * <code>Key=InstanceIds,Values=&lt;instance-id-1&gt;,&lt;instance-id-2&gt;,&lt;instance-id-3&gt;</code>
     * </p> <p> <b>Example 2</b>: Use tag key-pairs applied to managed nodes</p> <p>
     * <code>Key=tag:&lt;my-tag-key&gt;,Values=&lt;my-tag-value-1&gt;,&lt;my-tag-value-2&gt;</code>
     * </p> <p> <b>Example 3</b>: Use tag-keys applied to managed nodes</p> <p>
     * <code>Key=tag-key,Values=&lt;my-tag-key-1&gt;,&lt;my-tag-key-2&gt;</code> </p>
     * <p> <b>Example 4</b>: Use resource group names</p> <p>
     * <code>Key=resource-groups:Name,Values=&lt;resource-group-name&gt;</code> </p>
     * <p> <b>Example 5</b>: Use filters for resource group types</p> <p>
     * <code>Key=resource-groups:ResourceTypeFilters,Values=&lt;resource-type-1&gt;,&lt;resource-type-2&gt;</code>
     * </p>  <p>For <code>Key=resource-groups:ResourceTypeFilters</code>, specify
     * resource types in the following format</p> <p>
     * <code>Key=resource-groups:ResourceTypeFilters,Values=AWS::EC2::INSTANCE,AWS::EC2::VPC</code>
     * </p>  <p>For more information about these examples formats, including the
     * best use case for each one, see <a
     * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/mw-cli-tutorial-targets-examples.html">Examples:
     * Register targets with a maintenance window</a> in the <i>Amazon Web Services
     * Systems Manager User Guide</i>.</p>
     */
    inline void SetTargets(const Aws::Vector<Target>& value) { m_targetsHasBeenSet = true; m_targets = value; }

    /**
     * <p>The targets to register with the maintenance window. In other words, the
     * managed nodes to run commands on when the maintenance window runs.</p> 
     * <p>If a single maintenance window task is registered with multiple targets, its
     * task invocations occur sequentially and not in parallel. If your task must run
     * on multiple targets at the same time, register a task for each target
     * individually and assign each task the same priority level.</p>  <p>You
     * can specify targets using managed node IDs, resource group names, or tags that
     * have been applied to managed nodes.</p> <p> <b>Example 1</b>: Specify managed
     * node IDs</p> <p>
     * <code>Key=InstanceIds,Values=&lt;instance-id-1&gt;,&lt;instance-id-2&gt;,&lt;instance-id-3&gt;</code>
     * </p> <p> <b>Example 2</b>: Use tag key-pairs applied to managed nodes</p> <p>
     * <code>Key=tag:&lt;my-tag-key&gt;,Values=&lt;my-tag-value-1&gt;,&lt;my-tag-value-2&gt;</code>
     * </p> <p> <b>Example 3</b>: Use tag-keys applied to managed nodes</p> <p>
     * <code>Key=tag-key,Values=&lt;my-tag-key-1&gt;,&lt;my-tag-key-2&gt;</code> </p>
     * <p> <b>Example 4</b>: Use resource group names</p> <p>
     * <code>Key=resource-groups:Name,Values=&lt;resource-group-name&gt;</code> </p>
     * <p> <b>Example 5</b>: Use filters for resource group types</p> <p>
     * <code>Key=resource-groups:ResourceTypeFilters,Values=&lt;resource-type-1&gt;,&lt;resource-type-2&gt;</code>
     * </p>  <p>For <code>Key=resource-groups:ResourceTypeFilters</code>, specify
     * resource types in the following format</p> <p>
     * <code>Key=resource-groups:ResourceTypeFilters,Values=AWS::EC2::INSTANCE,AWS::EC2::VPC</code>
     * </p>  <p>For more information about these examples formats, including the
     * best use case for each one, see <a
     * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/mw-cli-tutorial-targets-examples.html">Examples:
     * Register targets with a maintenance window</a> in the <i>Amazon Web Services
     * Systems Manager User Guide</i>.</p>
     */
    inline void SetTargets(Aws::Vector<Target>&& value) { m_targetsHasBeenSet = true; m_targets = std::move(value); }

    /**
     * <p>The targets to register with the maintenance window. In other words, the
     * managed nodes to run commands on when the maintenance window runs.</p> 
     * <p>If a single maintenance window task is registered with multiple targets, its
     * task invocations occur sequentially and not in parallel. If your task must run
     * on multiple targets at the same time, register a task for each target
     * individually and assign each task the same priority level.</p>  <p>You
     * can specify targets using managed node IDs, resource group names, or tags that
     * have been applied to managed nodes.</p> <p> <b>Example 1</b>: Specify managed
     * node IDs</p> <p>
     * <code>Key=InstanceIds,Values=&lt;instance-id-1&gt;,&lt;instance-id-2&gt;,&lt;instance-id-3&gt;</code>
     * </p> <p> <b>Example 2</b>: Use tag key-pairs applied to managed nodes</p> <p>
     * <code>Key=tag:&lt;my-tag-key&gt;,Values=&lt;my-tag-value-1&gt;,&lt;my-tag-value-2&gt;</code>
     * </p> <p> <b>Example 3</b>: Use tag-keys applied to managed nodes</p> <p>
     * <code>Key=tag-key,Values=&lt;my-tag-key-1&gt;,&lt;my-tag-key-2&gt;</code> </p>
     * <p> <b>Example 4</b>: Use resource group names</p> <p>
     * <code>Key=resource-groups:Name,Values=&lt;resource-group-name&gt;</code> </p>
     * <p> <b>Example 5</b>: Use filters for resource group types</p> <p>
     * <code>Key=resource-groups:ResourceTypeFilters,Values=&lt;resource-type-1&gt;,&lt;resource-type-2&gt;</code>
     * </p>  <p>For <code>Key=resource-groups:ResourceTypeFilters</code>, specify
     * resource types in the following format</p> <p>
     * <code>Key=resource-groups:ResourceTypeFilters,Values=AWS::EC2::INSTANCE,AWS::EC2::VPC</code>
     * </p>  <p>For more information about these examples formats, including the
     * best use case for each one, see <a
     * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/mw-cli-tutorial-targets-examples.html">Examples:
     * Register targets with a maintenance window</a> in the <i>Amazon Web Services
     * Systems Manager User Guide</i>.</p>
     */
    inline RegisterTargetWithMaintenanceWindowRequest& WithTargets(const Aws::Vector<Target>& value) { SetTargets(value); return *this;}

    /**
     * <p>The targets to register with the maintenance window. In other words, the
     * managed nodes to run commands on when the maintenance window runs.</p> 
     * <p>If a single maintenance window task is registered with multiple targets, its
     * task invocations occur sequentially and not in parallel. If your task must run
     * on multiple targets at the same time, register a task for each target
     * individually and assign each task the same priority level.</p>  <p>You
     * can specify targets using managed node IDs, resource group names, or tags that
     * have been applied to managed nodes.</p> <p> <b>Example 1</b>: Specify managed
     * node IDs</p> <p>
     * <code>Key=InstanceIds,Values=&lt;instance-id-1&gt;,&lt;instance-id-2&gt;,&lt;instance-id-3&gt;</code>
     * </p> <p> <b>Example 2</b>: Use tag key-pairs applied to managed nodes</p> <p>
     * <code>Key=tag:&lt;my-tag-key&gt;,Values=&lt;my-tag-value-1&gt;,&lt;my-tag-value-2&gt;</code>
     * </p> <p> <b>Example 3</b>: Use tag-keys applied to managed nodes</p> <p>
     * <code>Key=tag-key,Values=&lt;my-tag-key-1&gt;,&lt;my-tag-key-2&gt;</code> </p>
     * <p> <b>Example 4</b>: Use resource group names</p> <p>
     * <code>Key=resource-groups:Name,Values=&lt;resource-group-name&gt;</code> </p>
     * <p> <b>Example 5</b>: Use filters for resource group types</p> <p>
     * <code>Key=resource-groups:ResourceTypeFilters,Values=&lt;resource-type-1&gt;,&lt;resource-type-2&gt;</code>
     * </p>  <p>For <code>Key=resource-groups:ResourceTypeFilters</code>, specify
     * resource types in the following format</p> <p>
     * <code>Key=resource-groups:ResourceTypeFilters,Values=AWS::EC2::INSTANCE,AWS::EC2::VPC</code>
     * </p>  <p>For more information about these examples formats, including the
     * best use case for each one, see <a
     * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/mw-cli-tutorial-targets-examples.html">Examples:
     * Register targets with a maintenance window</a> in the <i>Amazon Web Services
     * Systems Manager User Guide</i>.</p>
     */
    inline RegisterTargetWithMaintenanceWindowRequest& WithTargets(Aws::Vector<Target>&& value) { SetTargets(std::move(value)); return *this;}

    /**
     * <p>The targets to register with the maintenance window. In other words, the
     * managed nodes to run commands on when the maintenance window runs.</p> 
     * <p>If a single maintenance window task is registered with multiple targets, its
     * task invocations occur sequentially and not in parallel. If your task must run
     * on multiple targets at the same time, register a task for each target
     * individually and assign each task the same priority level.</p>  <p>You
     * can specify targets using managed node IDs, resource group names, or tags that
     * have been applied to managed nodes.</p> <p> <b>Example 1</b>: Specify managed
     * node IDs</p> <p>
     * <code>Key=InstanceIds,Values=&lt;instance-id-1&gt;,&lt;instance-id-2&gt;,&lt;instance-id-3&gt;</code>
     * </p> <p> <b>Example 2</b>: Use tag key-pairs applied to managed nodes</p> <p>
     * <code>Key=tag:&lt;my-tag-key&gt;,Values=&lt;my-tag-value-1&gt;,&lt;my-tag-value-2&gt;</code>
     * </p> <p> <b>Example 3</b>: Use tag-keys applied to managed nodes</p> <p>
     * <code>Key=tag-key,Values=&lt;my-tag-key-1&gt;,&lt;my-tag-key-2&gt;</code> </p>
     * <p> <b>Example 4</b>: Use resource group names</p> <p>
     * <code>Key=resource-groups:Name,Values=&lt;resource-group-name&gt;</code> </p>
     * <p> <b>Example 5</b>: Use filters for resource group types</p> <p>
     * <code>Key=resource-groups:ResourceTypeFilters,Values=&lt;resource-type-1&gt;,&lt;resource-type-2&gt;</code>
     * </p>  <p>For <code>Key=resource-groups:ResourceTypeFilters</code>, specify
     * resource types in the following format</p> <p>
     * <code>Key=resource-groups:ResourceTypeFilters,Values=AWS::EC2::INSTANCE,AWS::EC2::VPC</code>
     * </p>  <p>For more information about these examples formats, including the
     * best use case for each one, see <a
     * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/mw-cli-tutorial-targets-examples.html">Examples:
     * Register targets with a maintenance window</a> in the <i>Amazon Web Services
     * Systems Manager User Guide</i>.</p>
     */
    inline RegisterTargetWithMaintenanceWindowRequest& AddTargets(const Target& value) { m_targetsHasBeenSet = true; m_targets.push_back(value); return *this; }

    /**
     * <p>The targets to register with the maintenance window. In other words, the
     * managed nodes to run commands on when the maintenance window runs.</p> 
     * <p>If a single maintenance window task is registered with multiple targets, its
     * task invocations occur sequentially and not in parallel. If your task must run
     * on multiple targets at the same time, register a task for each target
     * individually and assign each task the same priority level.</p>  <p>You
     * can specify targets using managed node IDs, resource group names, or tags that
     * have been applied to managed nodes.</p> <p> <b>Example 1</b>: Specify managed
     * node IDs</p> <p>
     * <code>Key=InstanceIds,Values=&lt;instance-id-1&gt;,&lt;instance-id-2&gt;,&lt;instance-id-3&gt;</code>
     * </p> <p> <b>Example 2</b>: Use tag key-pairs applied to managed nodes</p> <p>
     * <code>Key=tag:&lt;my-tag-key&gt;,Values=&lt;my-tag-value-1&gt;,&lt;my-tag-value-2&gt;</code>
     * </p> <p> <b>Example 3</b>: Use tag-keys applied to managed nodes</p> <p>
     * <code>Key=tag-key,Values=&lt;my-tag-key-1&gt;,&lt;my-tag-key-2&gt;</code> </p>
     * <p> <b>Example 4</b>: Use resource group names</p> <p>
     * <code>Key=resource-groups:Name,Values=&lt;resource-group-name&gt;</code> </p>
     * <p> <b>Example 5</b>: Use filters for resource group types</p> <p>
     * <code>Key=resource-groups:ResourceTypeFilters,Values=&lt;resource-type-1&gt;,&lt;resource-type-2&gt;</code>
     * </p>  <p>For <code>Key=resource-groups:ResourceTypeFilters</code>, specify
     * resource types in the following format</p> <p>
     * <code>Key=resource-groups:ResourceTypeFilters,Values=AWS::EC2::INSTANCE,AWS::EC2::VPC</code>
     * </p>  <p>For more information about these examples formats, including the
     * best use case for each one, see <a
     * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/mw-cli-tutorial-targets-examples.html">Examples:
     * Register targets with a maintenance window</a> in the <i>Amazon Web Services
     * Systems Manager User Guide</i>.</p>
     */
    inline RegisterTargetWithMaintenanceWindowRequest& AddTargets(Target&& value) { m_targetsHasBeenSet = true; m_targets.push_back(std::move(value)); return *this; }


    /**
     * <p>User-provided value that will be included in any Amazon CloudWatch Events
     * events raised while running tasks for these targets in this maintenance
     * window.</p>
     */
    inline const Aws::String& GetOwnerInformation() const{ return m_ownerInformation; }

    /**
     * <p>User-provided value that will be included in any Amazon CloudWatch Events
     * events raised while running tasks for these targets in this maintenance
     * window.</p>
     */
    inline bool OwnerInformationHasBeenSet() const { return m_ownerInformationHasBeenSet; }

    /**
     * <p>User-provided value that will be included in any Amazon CloudWatch Events
     * events raised while running tasks for these targets in this maintenance
     * window.</p>
     */
    inline void SetOwnerInformation(const Aws::String& value) { m_ownerInformationHasBeenSet = true; m_ownerInformation = value; }

    /**
     * <p>User-provided value that will be included in any Amazon CloudWatch Events
     * events raised while running tasks for these targets in this maintenance
     * window.</p>
     */
    inline void SetOwnerInformation(Aws::String&& value) { m_ownerInformationHasBeenSet = true; m_ownerInformation = std::move(value); }

    /**
     * <p>User-provided value that will be included in any Amazon CloudWatch Events
     * events raised while running tasks for these targets in this maintenance
     * window.</p>
     */
    inline void SetOwnerInformation(const char* value) { m_ownerInformationHasBeenSet = true; m_ownerInformation.assign(value); }

    /**
     * <p>User-provided value that will be included in any Amazon CloudWatch Events
     * events raised while running tasks for these targets in this maintenance
     * window.</p>
     */
    inline RegisterTargetWithMaintenanceWindowRequest& WithOwnerInformation(const Aws::String& value) { SetOwnerInformation(value); return *this;}

    /**
     * <p>User-provided value that will be included in any Amazon CloudWatch Events
     * events raised while running tasks for these targets in this maintenance
     * window.</p>
     */
    inline RegisterTargetWithMaintenanceWindowRequest& WithOwnerInformation(Aws::String&& value) { SetOwnerInformation(std::move(value)); return *this;}

    /**
     * <p>User-provided value that will be included in any Amazon CloudWatch Events
     * events raised while running tasks for these targets in this maintenance
     * window.</p>
     */
    inline RegisterTargetWithMaintenanceWindowRequest& WithOwnerInformation(const char* value) { SetOwnerInformation(value); return *this;}


    /**
     * <p>An optional name for the target.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>An optional name for the target.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>An optional name for the target.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>An optional name for the target.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>An optional name for the target.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>An optional name for the target.</p>
     */
    inline RegisterTargetWithMaintenanceWindowRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>An optional name for the target.</p>
     */
    inline RegisterTargetWithMaintenanceWindowRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>An optional name for the target.</p>
     */
    inline RegisterTargetWithMaintenanceWindowRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>An optional description for the target.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>An optional description for the target.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>An optional description for the target.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>An optional description for the target.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>An optional description for the target.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>An optional description for the target.</p>
     */
    inline RegisterTargetWithMaintenanceWindowRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>An optional description for the target.</p>
     */
    inline RegisterTargetWithMaintenanceWindowRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>An optional description for the target.</p>
     */
    inline RegisterTargetWithMaintenanceWindowRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>User-provided idempotency token.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p>User-provided idempotency token.</p>
     */
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }

    /**
     * <p>User-provided idempotency token.</p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p>User-provided idempotency token.</p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }

    /**
     * <p>User-provided idempotency token.</p>
     */
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    /**
     * <p>User-provided idempotency token.</p>
     */
    inline RegisterTargetWithMaintenanceWindowRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>User-provided idempotency token.</p>
     */
    inline RegisterTargetWithMaintenanceWindowRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>User-provided idempotency token.</p>
     */
    inline RegisterTargetWithMaintenanceWindowRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}

  private:

    Aws::String m_windowId;
    bool m_windowIdHasBeenSet = false;

    MaintenanceWindowResourceType m_resourceType;
    bool m_resourceTypeHasBeenSet = false;

    Aws::Vector<Target> m_targets;
    bool m_targetsHasBeenSet = false;

    Aws::String m_ownerInformation;
    bool m_ownerInformationHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
