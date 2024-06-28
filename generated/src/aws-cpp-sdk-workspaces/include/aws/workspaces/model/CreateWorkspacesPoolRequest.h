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
    AWS_WORKSPACES_API CreateWorkspacesPoolRequest();

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
    inline const Aws::String& GetPoolName() const{ return m_poolName; }
    inline bool PoolNameHasBeenSet() const { return m_poolNameHasBeenSet; }
    inline void SetPoolName(const Aws::String& value) { m_poolNameHasBeenSet = true; m_poolName = value; }
    inline void SetPoolName(Aws::String&& value) { m_poolNameHasBeenSet = true; m_poolName = std::move(value); }
    inline void SetPoolName(const char* value) { m_poolNameHasBeenSet = true; m_poolName.assign(value); }
    inline CreateWorkspacesPoolRequest& WithPoolName(const Aws::String& value) { SetPoolName(value); return *this;}
    inline CreateWorkspacesPoolRequest& WithPoolName(Aws::String&& value) { SetPoolName(std::move(value)); return *this;}
    inline CreateWorkspacesPoolRequest& WithPoolName(const char* value) { SetPoolName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The pool description.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline CreateWorkspacesPoolRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline CreateWorkspacesPoolRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline CreateWorkspacesPoolRequest& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the bundle for the pool.</p>
     */
    inline const Aws::String& GetBundleId() const{ return m_bundleId; }
    inline bool BundleIdHasBeenSet() const { return m_bundleIdHasBeenSet; }
    inline void SetBundleId(const Aws::String& value) { m_bundleIdHasBeenSet = true; m_bundleId = value; }
    inline void SetBundleId(Aws::String&& value) { m_bundleIdHasBeenSet = true; m_bundleId = std::move(value); }
    inline void SetBundleId(const char* value) { m_bundleIdHasBeenSet = true; m_bundleId.assign(value); }
    inline CreateWorkspacesPoolRequest& WithBundleId(const Aws::String& value) { SetBundleId(value); return *this;}
    inline CreateWorkspacesPoolRequest& WithBundleId(Aws::String&& value) { SetBundleId(std::move(value)); return *this;}
    inline CreateWorkspacesPoolRequest& WithBundleId(const char* value) { SetBundleId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the directory for the pool.</p>
     */
    inline const Aws::String& GetDirectoryId() const{ return m_directoryId; }
    inline bool DirectoryIdHasBeenSet() const { return m_directoryIdHasBeenSet; }
    inline void SetDirectoryId(const Aws::String& value) { m_directoryIdHasBeenSet = true; m_directoryId = value; }
    inline void SetDirectoryId(Aws::String&& value) { m_directoryIdHasBeenSet = true; m_directoryId = std::move(value); }
    inline void SetDirectoryId(const char* value) { m_directoryIdHasBeenSet = true; m_directoryId.assign(value); }
    inline CreateWorkspacesPoolRequest& WithDirectoryId(const Aws::String& value) { SetDirectoryId(value); return *this;}
    inline CreateWorkspacesPoolRequest& WithDirectoryId(Aws::String&& value) { SetDirectoryId(std::move(value)); return *this;}
    inline CreateWorkspacesPoolRequest& WithDirectoryId(const char* value) { SetDirectoryId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user capacity of the pool.</p>
     */
    inline const Capacity& GetCapacity() const{ return m_capacity; }
    inline bool CapacityHasBeenSet() const { return m_capacityHasBeenSet; }
    inline void SetCapacity(const Capacity& value) { m_capacityHasBeenSet = true; m_capacity = value; }
    inline void SetCapacity(Capacity&& value) { m_capacityHasBeenSet = true; m_capacity = std::move(value); }
    inline CreateWorkspacesPoolRequest& WithCapacity(const Capacity& value) { SetCapacity(value); return *this;}
    inline CreateWorkspacesPoolRequest& WithCapacity(Capacity&& value) { SetCapacity(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags for the pool.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline CreateWorkspacesPoolRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline CreateWorkspacesPoolRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline CreateWorkspacesPoolRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    inline CreateWorkspacesPoolRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Indicates the application settings of the pool.</p>
     */
    inline const ApplicationSettingsRequest& GetApplicationSettings() const{ return m_applicationSettings; }
    inline bool ApplicationSettingsHasBeenSet() const { return m_applicationSettingsHasBeenSet; }
    inline void SetApplicationSettings(const ApplicationSettingsRequest& value) { m_applicationSettingsHasBeenSet = true; m_applicationSettings = value; }
    inline void SetApplicationSettings(ApplicationSettingsRequest&& value) { m_applicationSettingsHasBeenSet = true; m_applicationSettings = std::move(value); }
    inline CreateWorkspacesPoolRequest& WithApplicationSettings(const ApplicationSettingsRequest& value) { SetApplicationSettings(value); return *this;}
    inline CreateWorkspacesPoolRequest& WithApplicationSettings(ApplicationSettingsRequest&& value) { SetApplicationSettings(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the timeout settings of the pool.</p>
     */
    inline const TimeoutSettings& GetTimeoutSettings() const{ return m_timeoutSettings; }
    inline bool TimeoutSettingsHasBeenSet() const { return m_timeoutSettingsHasBeenSet; }
    inline void SetTimeoutSettings(const TimeoutSettings& value) { m_timeoutSettingsHasBeenSet = true; m_timeoutSettings = value; }
    inline void SetTimeoutSettings(TimeoutSettings&& value) { m_timeoutSettingsHasBeenSet = true; m_timeoutSettings = std::move(value); }
    inline CreateWorkspacesPoolRequest& WithTimeoutSettings(const TimeoutSettings& value) { SetTimeoutSettings(value); return *this;}
    inline CreateWorkspacesPoolRequest& WithTimeoutSettings(TimeoutSettings&& value) { SetTimeoutSettings(std::move(value)); return *this;}
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
  };

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
