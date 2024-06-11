/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/ssm/SSMRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ssm/model/Target.h>
#include <utility>

namespace Aws
{
namespace SSM
{
namespace Model
{

  /**
   */
  class UpdateMaintenanceWindowTargetRequest : public SSMRequest
  {
  public:
    AWS_SSM_API UpdateMaintenanceWindowTargetRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateMaintenanceWindowTarget"; }

    AWS_SSM_API Aws::String SerializePayload() const override;

    AWS_SSM_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The maintenance window ID with which to modify the target.</p>
     */
    inline const Aws::String& GetWindowId() const{ return m_windowId; }
    inline bool WindowIdHasBeenSet() const { return m_windowIdHasBeenSet; }
    inline void SetWindowId(const Aws::String& value) { m_windowIdHasBeenSet = true; m_windowId = value; }
    inline void SetWindowId(Aws::String&& value) { m_windowIdHasBeenSet = true; m_windowId = std::move(value); }
    inline void SetWindowId(const char* value) { m_windowIdHasBeenSet = true; m_windowId.assign(value); }
    inline UpdateMaintenanceWindowTargetRequest& WithWindowId(const Aws::String& value) { SetWindowId(value); return *this;}
    inline UpdateMaintenanceWindowTargetRequest& WithWindowId(Aws::String&& value) { SetWindowId(std::move(value)); return *this;}
    inline UpdateMaintenanceWindowTargetRequest& WithWindowId(const char* value) { SetWindowId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The target ID to modify.</p>
     */
    inline const Aws::String& GetWindowTargetId() const{ return m_windowTargetId; }
    inline bool WindowTargetIdHasBeenSet() const { return m_windowTargetIdHasBeenSet; }
    inline void SetWindowTargetId(const Aws::String& value) { m_windowTargetIdHasBeenSet = true; m_windowTargetId = value; }
    inline void SetWindowTargetId(Aws::String&& value) { m_windowTargetIdHasBeenSet = true; m_windowTargetId = std::move(value); }
    inline void SetWindowTargetId(const char* value) { m_windowTargetIdHasBeenSet = true; m_windowTargetId.assign(value); }
    inline UpdateMaintenanceWindowTargetRequest& WithWindowTargetId(const Aws::String& value) { SetWindowTargetId(value); return *this;}
    inline UpdateMaintenanceWindowTargetRequest& WithWindowTargetId(Aws::String&& value) { SetWindowTargetId(std::move(value)); return *this;}
    inline UpdateMaintenanceWindowTargetRequest& WithWindowTargetId(const char* value) { SetWindowTargetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The targets to add or replace.</p>
     */
    inline const Aws::Vector<Target>& GetTargets() const{ return m_targets; }
    inline bool TargetsHasBeenSet() const { return m_targetsHasBeenSet; }
    inline void SetTargets(const Aws::Vector<Target>& value) { m_targetsHasBeenSet = true; m_targets = value; }
    inline void SetTargets(Aws::Vector<Target>&& value) { m_targetsHasBeenSet = true; m_targets = std::move(value); }
    inline UpdateMaintenanceWindowTargetRequest& WithTargets(const Aws::Vector<Target>& value) { SetTargets(value); return *this;}
    inline UpdateMaintenanceWindowTargetRequest& WithTargets(Aws::Vector<Target>&& value) { SetTargets(std::move(value)); return *this;}
    inline UpdateMaintenanceWindowTargetRequest& AddTargets(const Target& value) { m_targetsHasBeenSet = true; m_targets.push_back(value); return *this; }
    inline UpdateMaintenanceWindowTargetRequest& AddTargets(Target&& value) { m_targetsHasBeenSet = true; m_targets.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>User-provided value that will be included in any Amazon CloudWatch Events
     * events raised while running tasks for these targets in this maintenance
     * window.</p>
     */
    inline const Aws::String& GetOwnerInformation() const{ return m_ownerInformation; }
    inline bool OwnerInformationHasBeenSet() const { return m_ownerInformationHasBeenSet; }
    inline void SetOwnerInformation(const Aws::String& value) { m_ownerInformationHasBeenSet = true; m_ownerInformation = value; }
    inline void SetOwnerInformation(Aws::String&& value) { m_ownerInformationHasBeenSet = true; m_ownerInformation = std::move(value); }
    inline void SetOwnerInformation(const char* value) { m_ownerInformationHasBeenSet = true; m_ownerInformation.assign(value); }
    inline UpdateMaintenanceWindowTargetRequest& WithOwnerInformation(const Aws::String& value) { SetOwnerInformation(value); return *this;}
    inline UpdateMaintenanceWindowTargetRequest& WithOwnerInformation(Aws::String&& value) { SetOwnerInformation(std::move(value)); return *this;}
    inline UpdateMaintenanceWindowTargetRequest& WithOwnerInformation(const char* value) { SetOwnerInformation(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A name for the update.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline UpdateMaintenanceWindowTargetRequest& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline UpdateMaintenanceWindowTargetRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline UpdateMaintenanceWindowTargetRequest& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An optional description for the update.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline UpdateMaintenanceWindowTargetRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline UpdateMaintenanceWindowTargetRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline UpdateMaintenanceWindowTargetRequest& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If <code>True</code>, then all fields that are required by the
     * <a>RegisterTargetWithMaintenanceWindow</a> operation are also required for this
     * API request. Optional fields that aren't specified are set to null.</p>
     */
    inline bool GetReplace() const{ return m_replace; }
    inline bool ReplaceHasBeenSet() const { return m_replaceHasBeenSet; }
    inline void SetReplace(bool value) { m_replaceHasBeenSet = true; m_replace = value; }
    inline UpdateMaintenanceWindowTargetRequest& WithReplace(bool value) { SetReplace(value); return *this;}
    ///@}
  private:

    Aws::String m_windowId;
    bool m_windowIdHasBeenSet = false;

    Aws::String m_windowTargetId;
    bool m_windowTargetIdHasBeenSet = false;

    Aws::Vector<Target> m_targets;
    bool m_targetsHasBeenSet = false;

    Aws::String m_ownerInformation;
    bool m_ownerInformationHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    bool m_replace;
    bool m_replaceHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
