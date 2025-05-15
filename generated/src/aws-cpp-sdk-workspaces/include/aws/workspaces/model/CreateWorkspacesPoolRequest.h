/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces/WorkSpaces_EXPORTS.h>
#include <aws/workspaces/WorkSpacesRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/workspaces/model/Capacity.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/workspaces/model/ApplicationSettingsRequest.h>
#include <aws/workspaces/model/TimeoutSettings.h>
#include <aws/workspaces/model/PoolsRunningMode.h>
#include <aws/workspaces/model/Tag.h>
#include <utility>

namespace Aws
{
namespace WorkSpaces
{
namespace Model
{

  /**
   */
  class CreateWorkspacesPoolRequest : public WorkSpacesRequest
  {
  public:
    AWS_WORKSPACES_API CreateWorkspacesPoolRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateWorkspacesPool"; }

    AWS_WORKSPACES_API Aws::String SerializePayload() const override;

    AWS_WORKSPACES_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the pool.</p>
     */
    inline const Aws::String& GetPoolName() const { return m_poolName; }
    inline bool PoolNameHasBeenSet() const { return m_poolNameHasBeenSet; }
    template<typename PoolNameT = Aws::String>
    void SetPoolName(PoolNameT&& value) { m_poolNameHasBeenSet = true; m_poolName = std::forward<PoolNameT>(value); }
    template<typename PoolNameT = Aws::String>
    CreateWorkspacesPoolRequest& WithPoolName(PoolNameT&& value) { SetPoolName(std::forward<PoolNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The pool description.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    CreateWorkspacesPoolRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the bundle for the pool.</p>
     */
    inline const Aws::String& GetBundleId() const { return m_bundleId; }
    inline bool BundleIdHasBeenSet() const { return m_bundleIdHasBeenSet; }
    template<typename BundleIdT = Aws::String>
    void SetBundleId(BundleIdT&& value) { m_bundleIdHasBeenSet = true; m_bundleId = std::forward<BundleIdT>(value); }
    template<typename BundleIdT = Aws::String>
    CreateWorkspacesPoolRequest& WithBundleId(BundleIdT&& value) { SetBundleId(std::forward<BundleIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the directory for the pool.</p>
     */
    inline const Aws::String& GetDirectoryId() const { return m_directoryId; }
    inline bool DirectoryIdHasBeenSet() const { return m_directoryIdHasBeenSet; }
    template<typename DirectoryIdT = Aws::String>
    void SetDirectoryId(DirectoryIdT&& value) { m_directoryIdHasBeenSet = true; m_directoryId = std::forward<DirectoryIdT>(value); }
    template<typename DirectoryIdT = Aws::String>
    CreateWorkspacesPoolRequest& WithDirectoryId(DirectoryIdT&& value) { SetDirectoryId(std::forward<DirectoryIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user capacity of the pool.</p>
     */
    inline const Capacity& GetCapacity() const { return m_capacity; }
    inline bool CapacityHasBeenSet() const { return m_capacityHasBeenSet; }
    template<typename CapacityT = Capacity>
    void SetCapacity(CapacityT&& value) { m_capacityHasBeenSet = true; m_capacity = std::forward<CapacityT>(value); }
    template<typename CapacityT = Capacity>
    CreateWorkspacesPoolRequest& WithCapacity(CapacityT&& value) { SetCapacity(std::forward<CapacityT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags for the pool.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    CreateWorkspacesPoolRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    CreateWorkspacesPoolRequest& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Indicates the application settings of the pool.</p>
     */
    inline const ApplicationSettingsRequest& GetApplicationSettings() const { return m_applicationSettings; }
    inline bool ApplicationSettingsHasBeenSet() const { return m_applicationSettingsHasBeenSet; }
    template<typename ApplicationSettingsT = ApplicationSettingsRequest>
    void SetApplicationSettings(ApplicationSettingsT&& value) { m_applicationSettingsHasBeenSet = true; m_applicationSettings = std::forward<ApplicationSettingsT>(value); }
    template<typename ApplicationSettingsT = ApplicationSettingsRequest>
    CreateWorkspacesPoolRequest& WithApplicationSettings(ApplicationSettingsT&& value) { SetApplicationSettings(std::forward<ApplicationSettingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the timeout settings of the pool.</p>
     */
    inline const TimeoutSettings& GetTimeoutSettings() const { return m_timeoutSettings; }
    inline bool TimeoutSettingsHasBeenSet() const { return m_timeoutSettingsHasBeenSet; }
    template<typename TimeoutSettingsT = TimeoutSettings>
    void SetTimeoutSettings(TimeoutSettingsT&& value) { m_timeoutSettingsHasBeenSet = true; m_timeoutSettings = std::forward<TimeoutSettingsT>(value); }
    template<typename TimeoutSettingsT = TimeoutSettings>
    CreateWorkspacesPoolRequest& WithTimeoutSettings(TimeoutSettingsT&& value) { SetTimeoutSettings(std::forward<TimeoutSettingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The running mode for the pool.</p>
     */
    inline PoolsRunningMode GetRunningMode() const { return m_runningMode; }
    inline bool RunningModeHasBeenSet() const { return m_runningModeHasBeenSet; }
    inline void SetRunningMode(PoolsRunningMode value) { m_runningModeHasBeenSet = true; m_runningMode = value; }
    inline CreateWorkspacesPoolRequest& WithRunningMode(PoolsRunningMode value) { SetRunningMode(value); return *this;}
    ///@}
  private:

    Aws::String m_poolName;
    bool m_poolNameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_bundleId;
    bool m_bundleIdHasBeenSet = false;

    Aws::String m_directoryId;
    bool m_directoryIdHasBeenSet = false;

    Capacity m_capacity;
    bool m_capacityHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

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
