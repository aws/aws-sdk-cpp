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
    AWS_SSM_API UpdateMaintenanceWindowTargetRequest() = default;

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
    inline const Aws::String& GetWindowId() const { return m_windowId; }
    inline bool WindowIdHasBeenSet() const { return m_windowIdHasBeenSet; }
    template<typename WindowIdT = Aws::String>
    void SetWindowId(WindowIdT&& value) { m_windowIdHasBeenSet = true; m_windowId = std::forward<WindowIdT>(value); }
    template<typename WindowIdT = Aws::String>
    UpdateMaintenanceWindowTargetRequest& WithWindowId(WindowIdT&& value) { SetWindowId(std::forward<WindowIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The target ID to modify.</p>
     */
    inline const Aws::String& GetWindowTargetId() const { return m_windowTargetId; }
    inline bool WindowTargetIdHasBeenSet() const { return m_windowTargetIdHasBeenSet; }
    template<typename WindowTargetIdT = Aws::String>
    void SetWindowTargetId(WindowTargetIdT&& value) { m_windowTargetIdHasBeenSet = true; m_windowTargetId = std::forward<WindowTargetIdT>(value); }
    template<typename WindowTargetIdT = Aws::String>
    UpdateMaintenanceWindowTargetRequest& WithWindowTargetId(WindowTargetIdT&& value) { SetWindowTargetId(std::forward<WindowTargetIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The targets to add or replace.</p>
     */
    inline const Aws::Vector<Target>& GetTargets() const { return m_targets; }
    inline bool TargetsHasBeenSet() const { return m_targetsHasBeenSet; }
    template<typename TargetsT = Aws::Vector<Target>>
    void SetTargets(TargetsT&& value) { m_targetsHasBeenSet = true; m_targets = std::forward<TargetsT>(value); }
    template<typename TargetsT = Aws::Vector<Target>>
    UpdateMaintenanceWindowTargetRequest& WithTargets(TargetsT&& value) { SetTargets(std::forward<TargetsT>(value)); return *this;}
    template<typename TargetsT = Target>
    UpdateMaintenanceWindowTargetRequest& AddTargets(TargetsT&& value) { m_targetsHasBeenSet = true; m_targets.emplace_back(std::forward<TargetsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>User-provided value that will be included in any Amazon CloudWatch Events
     * events raised while running tasks for these targets in this maintenance
     * window.</p>
     */
    inline const Aws::String& GetOwnerInformation() const { return m_ownerInformation; }
    inline bool OwnerInformationHasBeenSet() const { return m_ownerInformationHasBeenSet; }
    template<typename OwnerInformationT = Aws::String>
    void SetOwnerInformation(OwnerInformationT&& value) { m_ownerInformationHasBeenSet = true; m_ownerInformation = std::forward<OwnerInformationT>(value); }
    template<typename OwnerInformationT = Aws::String>
    UpdateMaintenanceWindowTargetRequest& WithOwnerInformation(OwnerInformationT&& value) { SetOwnerInformation(std::forward<OwnerInformationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A name for the update.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    UpdateMaintenanceWindowTargetRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An optional description for the update.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    UpdateMaintenanceWindowTargetRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If <code>True</code>, then all fields that are required by the
     * <a>RegisterTargetWithMaintenanceWindow</a> operation are also required for this
     * API request. Optional fields that aren't specified are set to null.</p>
     */
    inline bool GetReplace() const { return m_replace; }
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

    bool m_replace{false};
    bool m_replaceHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
