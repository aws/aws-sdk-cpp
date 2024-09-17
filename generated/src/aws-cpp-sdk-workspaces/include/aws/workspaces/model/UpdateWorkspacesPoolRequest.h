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
    AWS_WORKSPACES_API UpdateWorkspacesPoolRequest();

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
    inline const Aws::String& GetPoolId() const{ return m_poolId; }
    inline bool PoolIdHasBeenSet() const { return m_poolIdHasBeenSet; }
    inline void SetPoolId(const Aws::String& value) { m_poolIdHasBeenSet = true; m_poolId = value; }
    inline void SetPoolId(Aws::String&& value) { m_poolIdHasBeenSet = true; m_poolId = std::move(value); }
    inline void SetPoolId(const char* value) { m_poolIdHasBeenSet = true; m_poolId.assign(value); }
    inline UpdateWorkspacesPoolRequest& WithPoolId(const Aws::String& value) { SetPoolId(value); return *this;}
    inline UpdateWorkspacesPoolRequest& WithPoolId(Aws::String&& value) { SetPoolId(std::move(value)); return *this;}
    inline UpdateWorkspacesPoolRequest& WithPoolId(const char* value) { SetPoolId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes the specified pool to update.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline UpdateWorkspacesPoolRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline UpdateWorkspacesPoolRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline UpdateWorkspacesPoolRequest& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the bundle.</p>
     */
    inline const Aws::String& GetBundleId() const{ return m_bundleId; }
    inline bool BundleIdHasBeenSet() const { return m_bundleIdHasBeenSet; }
    inline void SetBundleId(const Aws::String& value) { m_bundleIdHasBeenSet = true; m_bundleId = value; }
    inline void SetBundleId(Aws::String&& value) { m_bundleIdHasBeenSet = true; m_bundleId = std::move(value); }
    inline void SetBundleId(const char* value) { m_bundleIdHasBeenSet = true; m_bundleId.assign(value); }
    inline UpdateWorkspacesPoolRequest& WithBundleId(const Aws::String& value) { SetBundleId(value); return *this;}
    inline UpdateWorkspacesPoolRequest& WithBundleId(Aws::String&& value) { SetBundleId(std::move(value)); return *this;}
    inline UpdateWorkspacesPoolRequest& WithBundleId(const char* value) { SetBundleId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the directory.</p>
     */
    inline const Aws::String& GetDirectoryId() const{ return m_directoryId; }
    inline bool DirectoryIdHasBeenSet() const { return m_directoryIdHasBeenSet; }
    inline void SetDirectoryId(const Aws::String& value) { m_directoryIdHasBeenSet = true; m_directoryId = value; }
    inline void SetDirectoryId(Aws::String&& value) { m_directoryIdHasBeenSet = true; m_directoryId = std::move(value); }
    inline void SetDirectoryId(const char* value) { m_directoryIdHasBeenSet = true; m_directoryId.assign(value); }
    inline UpdateWorkspacesPoolRequest& WithDirectoryId(const Aws::String& value) { SetDirectoryId(value); return *this;}
    inline UpdateWorkspacesPoolRequest& WithDirectoryId(Aws::String&& value) { SetDirectoryId(std::move(value)); return *this;}
    inline UpdateWorkspacesPoolRequest& WithDirectoryId(const char* value) { SetDirectoryId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The desired capacity for the pool.</p>
     */
    inline const Capacity& GetCapacity() const{ return m_capacity; }
    inline bool CapacityHasBeenSet() const { return m_capacityHasBeenSet; }
    inline void SetCapacity(const Capacity& value) { m_capacityHasBeenSet = true; m_capacity = value; }
    inline void SetCapacity(Capacity&& value) { m_capacityHasBeenSet = true; m_capacity = std::move(value); }
    inline UpdateWorkspacesPoolRequest& WithCapacity(const Capacity& value) { SetCapacity(value); return *this;}
    inline UpdateWorkspacesPoolRequest& WithCapacity(Capacity&& value) { SetCapacity(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The persistent application settings for users in the pool.</p>
     */
    inline const ApplicationSettingsRequest& GetApplicationSettings() const{ return m_applicationSettings; }
    inline bool ApplicationSettingsHasBeenSet() const { return m_applicationSettingsHasBeenSet; }
    inline void SetApplicationSettings(const ApplicationSettingsRequest& value) { m_applicationSettingsHasBeenSet = true; m_applicationSettings = value; }
    inline void SetApplicationSettings(ApplicationSettingsRequest&& value) { m_applicationSettingsHasBeenSet = true; m_applicationSettings = std::move(value); }
    inline UpdateWorkspacesPoolRequest& WithApplicationSettings(const ApplicationSettingsRequest& value) { SetApplicationSettings(value); return *this;}
    inline UpdateWorkspacesPoolRequest& WithApplicationSettings(ApplicationSettingsRequest&& value) { SetApplicationSettings(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the timeout settings of the specified pool.</p>
     */
    inline const TimeoutSettings& GetTimeoutSettings() const{ return m_timeoutSettings; }
    inline bool TimeoutSettingsHasBeenSet() const { return m_timeoutSettingsHasBeenSet; }
    inline void SetTimeoutSettings(const TimeoutSettings& value) { m_timeoutSettingsHasBeenSet = true; m_timeoutSettings = value; }
    inline void SetTimeoutSettings(TimeoutSettings&& value) { m_timeoutSettingsHasBeenSet = true; m_timeoutSettings = std::move(value); }
    inline UpdateWorkspacesPoolRequest& WithTimeoutSettings(const TimeoutSettings& value) { SetTimeoutSettings(value); return *this;}
    inline UpdateWorkspacesPoolRequest& WithTimeoutSettings(TimeoutSettings&& value) { SetTimeoutSettings(std::move(value)); return *this;}
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
  };

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
