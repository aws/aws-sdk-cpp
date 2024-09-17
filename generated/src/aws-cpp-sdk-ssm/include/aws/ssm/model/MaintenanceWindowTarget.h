/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ssm/model/MaintenanceWindowResourceType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ssm/model/Target.h>
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
namespace SSM
{
namespace Model
{

  /**
   * <p>The target registered with the maintenance window.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/MaintenanceWindowTarget">AWS
   * API Reference</a></p>
   */
  class MaintenanceWindowTarget
  {
  public:
    AWS_SSM_API MaintenanceWindowTarget();
    AWS_SSM_API MaintenanceWindowTarget(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API MaintenanceWindowTarget& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the maintenance window to register the target with.</p>
     */
    inline const Aws::String& GetWindowId() const{ return m_windowId; }
    inline bool WindowIdHasBeenSet() const { return m_windowIdHasBeenSet; }
    inline void SetWindowId(const Aws::String& value) { m_windowIdHasBeenSet = true; m_windowId = value; }
    inline void SetWindowId(Aws::String&& value) { m_windowIdHasBeenSet = true; m_windowId = std::move(value); }
    inline void SetWindowId(const char* value) { m_windowIdHasBeenSet = true; m_windowId.assign(value); }
    inline MaintenanceWindowTarget& WithWindowId(const Aws::String& value) { SetWindowId(value); return *this;}
    inline MaintenanceWindowTarget& WithWindowId(Aws::String&& value) { SetWindowId(std::move(value)); return *this;}
    inline MaintenanceWindowTarget& WithWindowId(const char* value) { SetWindowId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the target.</p>
     */
    inline const Aws::String& GetWindowTargetId() const{ return m_windowTargetId; }
    inline bool WindowTargetIdHasBeenSet() const { return m_windowTargetIdHasBeenSet; }
    inline void SetWindowTargetId(const Aws::String& value) { m_windowTargetIdHasBeenSet = true; m_windowTargetId = value; }
    inline void SetWindowTargetId(Aws::String&& value) { m_windowTargetIdHasBeenSet = true; m_windowTargetId = std::move(value); }
    inline void SetWindowTargetId(const char* value) { m_windowTargetIdHasBeenSet = true; m_windowTargetId.assign(value); }
    inline MaintenanceWindowTarget& WithWindowTargetId(const Aws::String& value) { SetWindowTargetId(value); return *this;}
    inline MaintenanceWindowTarget& WithWindowTargetId(Aws::String&& value) { SetWindowTargetId(std::move(value)); return *this;}
    inline MaintenanceWindowTarget& WithWindowTargetId(const char* value) { SetWindowTargetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of target that is being registered with the maintenance window.</p>
     */
    inline const MaintenanceWindowResourceType& GetResourceType() const{ return m_resourceType; }
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }
    inline void SetResourceType(const MaintenanceWindowResourceType& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }
    inline void SetResourceType(MaintenanceWindowResourceType&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::move(value); }
    inline MaintenanceWindowTarget& WithResourceType(const MaintenanceWindowResourceType& value) { SetResourceType(value); return *this;}
    inline MaintenanceWindowTarget& WithResourceType(MaintenanceWindowResourceType&& value) { SetResourceType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The targets, either managed nodes or tags.</p> <p>Specify managed nodes using
     * the following format:</p> <p>
     * <code>Key=instanceids,Values=&lt;instanceid1&gt;,&lt;instanceid2&gt;</code> </p>
     * <p>Tags are specified using the following format:</p> <p> <code>Key=&lt;tag
     * name&gt;,Values=&lt;tag value&gt;</code>.</p>
     */
    inline const Aws::Vector<Target>& GetTargets() const{ return m_targets; }
    inline bool TargetsHasBeenSet() const { return m_targetsHasBeenSet; }
    inline void SetTargets(const Aws::Vector<Target>& value) { m_targetsHasBeenSet = true; m_targets = value; }
    inline void SetTargets(Aws::Vector<Target>&& value) { m_targetsHasBeenSet = true; m_targets = std::move(value); }
    inline MaintenanceWindowTarget& WithTargets(const Aws::Vector<Target>& value) { SetTargets(value); return *this;}
    inline MaintenanceWindowTarget& WithTargets(Aws::Vector<Target>&& value) { SetTargets(std::move(value)); return *this;}
    inline MaintenanceWindowTarget& AddTargets(const Target& value) { m_targetsHasBeenSet = true; m_targets.push_back(value); return *this; }
    inline MaintenanceWindowTarget& AddTargets(Target&& value) { m_targetsHasBeenSet = true; m_targets.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A user-provided value that will be included in any Amazon CloudWatch Events
     * events that are raised while running tasks for these targets in this maintenance
     * window.</p>
     */
    inline const Aws::String& GetOwnerInformation() const{ return m_ownerInformation; }
    inline bool OwnerInformationHasBeenSet() const { return m_ownerInformationHasBeenSet; }
    inline void SetOwnerInformation(const Aws::String& value) { m_ownerInformationHasBeenSet = true; m_ownerInformation = value; }
    inline void SetOwnerInformation(Aws::String&& value) { m_ownerInformationHasBeenSet = true; m_ownerInformation = std::move(value); }
    inline void SetOwnerInformation(const char* value) { m_ownerInformationHasBeenSet = true; m_ownerInformation.assign(value); }
    inline MaintenanceWindowTarget& WithOwnerInformation(const Aws::String& value) { SetOwnerInformation(value); return *this;}
    inline MaintenanceWindowTarget& WithOwnerInformation(Aws::String&& value) { SetOwnerInformation(std::move(value)); return *this;}
    inline MaintenanceWindowTarget& WithOwnerInformation(const char* value) { SetOwnerInformation(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name for the maintenance window target.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline MaintenanceWindowTarget& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline MaintenanceWindowTarget& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline MaintenanceWindowTarget& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description for the target.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline MaintenanceWindowTarget& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline MaintenanceWindowTarget& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline MaintenanceWindowTarget& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}
  private:

    Aws::String m_windowId;
    bool m_windowIdHasBeenSet = false;

    Aws::String m_windowTargetId;
    bool m_windowTargetIdHasBeenSet = false;

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
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
