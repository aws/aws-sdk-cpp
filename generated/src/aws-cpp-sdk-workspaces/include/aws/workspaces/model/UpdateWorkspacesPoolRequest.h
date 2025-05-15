/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces/WorkSpaces_EXPORTS.h>
#include <aws/workspaces/WorkSpacesRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/workspaces/model/Capacity.h>
#include <aws/workspaces/model/ApplicationSettingsRequest.h>
#include <aws/workspaces/model/TimeoutSettings.h>
#include <aws/workspaces/model/PoolsRunningMode.h>
#include <utility>

namespace Aws
{
namespace WorkSpaces
{
namespace Model
{

  /**
   */
  class UpdateWorkspacesPoolRequest : public WorkSpacesRequest
  {
  public:
    AWS_WORKSPACES_API UpdateWorkspacesPoolRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateWorkspacesPool"; }

    AWS_WORKSPACES_API Aws::String SerializePayload() const override;

    AWS_WORKSPACES_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The identifier of the specified pool to update.</p>
     */
    inline const Aws::String& GetPoolId() const { return m_poolId; }
    inline bool PoolIdHasBeenSet() const { return m_poolIdHasBeenSet; }
    template<typename PoolIdT = Aws::String>
    void SetPoolId(PoolIdT&& value) { m_poolIdHasBeenSet = true; m_poolId = std::forward<PoolIdT>(value); }
    template<typename PoolIdT = Aws::String>
    UpdateWorkspacesPoolRequest& WithPoolId(PoolIdT&& value) { SetPoolId(std::forward<PoolIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes the specified pool to update.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    UpdateWorkspacesPoolRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the bundle.</p>
     */
    inline const Aws::String& GetBundleId() const { return m_bundleId; }
    inline bool BundleIdHasBeenSet() const { return m_bundleIdHasBeenSet; }
    template<typename BundleIdT = Aws::String>
    void SetBundleId(BundleIdT&& value) { m_bundleIdHasBeenSet = true; m_bundleId = std::forward<BundleIdT>(value); }
    template<typename BundleIdT = Aws::String>
    UpdateWorkspacesPoolRequest& WithBundleId(BundleIdT&& value) { SetBundleId(std::forward<BundleIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the directory.</p>
     */
    inline const Aws::String& GetDirectoryId() const { return m_directoryId; }
    inline bool DirectoryIdHasBeenSet() const { return m_directoryIdHasBeenSet; }
    template<typename DirectoryIdT = Aws::String>
    void SetDirectoryId(DirectoryIdT&& value) { m_directoryIdHasBeenSet = true; m_directoryId = std::forward<DirectoryIdT>(value); }
    template<typename DirectoryIdT = Aws::String>
    UpdateWorkspacesPoolRequest& WithDirectoryId(DirectoryIdT&& value) { SetDirectoryId(std::forward<DirectoryIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The desired capacity for the pool.</p>
     */
    inline const Capacity& GetCapacity() const { return m_capacity; }
    inline bool CapacityHasBeenSet() const { return m_capacityHasBeenSet; }
    template<typename CapacityT = Capacity>
    void SetCapacity(CapacityT&& value) { m_capacityHasBeenSet = true; m_capacity = std::forward<CapacityT>(value); }
    template<typename CapacityT = Capacity>
    UpdateWorkspacesPoolRequest& WithCapacity(CapacityT&& value) { SetCapacity(std::forward<CapacityT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The persistent application settings for users in the pool.</p>
     */
    inline const ApplicationSettingsRequest& GetApplicationSettings() const { return m_applicationSettings; }
    inline bool ApplicationSettingsHasBeenSet() const { return m_applicationSettingsHasBeenSet; }
    template<typename ApplicationSettingsT = ApplicationSettingsRequest>
    void SetApplicationSettings(ApplicationSettingsT&& value) { m_applicationSettingsHasBeenSet = true; m_applicationSettings = std::forward<ApplicationSettingsT>(value); }
    template<typename ApplicationSettingsT = ApplicationSettingsRequest>
    UpdateWorkspacesPoolRequest& WithApplicationSettings(ApplicationSettingsT&& value) { SetApplicationSettings(std::forward<ApplicationSettingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the timeout settings of the specified pool.</p>
     */
    inline const TimeoutSettings& GetTimeoutSettings() const { return m_timeoutSettings; }
    inline bool TimeoutSettingsHasBeenSet() const { return m_timeoutSettingsHasBeenSet; }
    template<typename TimeoutSettingsT = TimeoutSettings>
    void SetTimeoutSettings(TimeoutSettingsT&& value) { m_timeoutSettingsHasBeenSet = true; m_timeoutSettings = std::forward<TimeoutSettingsT>(value); }
    template<typename TimeoutSettingsT = TimeoutSettings>
    UpdateWorkspacesPoolRequest& WithTimeoutSettings(TimeoutSettingsT&& value) { SetTimeoutSettings(std::forward<TimeoutSettingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The desired running mode for the pool. The running mode can only be updated
     * when the pool is in a stopped state.</p>
     */
    inline PoolsRunningMode GetRunningMode() const { return m_runningMode; }
    inline bool RunningModeHasBeenSet() const { return m_runningModeHasBeenSet; }
    inline void SetRunningMode(PoolsRunningMode value) { m_runningModeHasBeenSet = true; m_runningMode = value; }
    inline UpdateWorkspacesPoolRequest& WithRunningMode(PoolsRunningMode value) { SetRunningMode(value); return *this;}
    ///@}
  private:

    Aws::String m_poolId;
    bool m_poolIdHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_bundleId;
    bool m_bundleIdHasBeenSet = false;

    Aws::String m_directoryId;
    bool m_directoryIdHasBeenSet = false;

    Capacity m_capacity;
    bool m_capacityHasBeenSet = false;

    ApplicationSettingsRequest m_applicationSettings;
    bool m_applicationSettingsHasBeenSet = false;

    TimeoutSettings m_timeoutSettings;
    bool m_timeoutSettingsHasBeenSet = false;

    PoolsRunningMode m_runningMode{PoolsRunningMode::NOT_SET};
    bool m_runningModeHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
