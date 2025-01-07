/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces/WorkSpaces_EXPORTS.h>
#include <aws/workspaces/model/StreamingExperiencePreferredProtocolEnum.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/workspaces/model/GlobalAcceleratorForDirectory.h>
#include <aws/workspaces/model/UserSetting.h>
#include <aws/workspaces/model/StorageConnector.h>
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
namespace WorkSpaces
{
namespace Model
{

  /**
   * <p>Describes the streaming properties.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/StreamingProperties">AWS
   * API Reference</a></p>
   */
  class StreamingProperties
  {
  public:
    AWS_WORKSPACES_API StreamingProperties();
    AWS_WORKSPACES_API StreamingProperties(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACES_API StreamingProperties& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Indicates the type of preferred protocol for the streaming experience.</p>
     */
    inline const StreamingExperiencePreferredProtocolEnum& GetStreamingExperiencePreferredProtocol() const{ return m_streamingExperiencePreferredProtocol; }
    inline bool StreamingExperiencePreferredProtocolHasBeenSet() const { return m_streamingExperiencePreferredProtocolHasBeenSet; }
    inline void SetStreamingExperiencePreferredProtocol(const StreamingExperiencePreferredProtocolEnum& value) { m_streamingExperiencePreferredProtocolHasBeenSet = true; m_streamingExperiencePreferredProtocol = value; }
    inline void SetStreamingExperiencePreferredProtocol(StreamingExperiencePreferredProtocolEnum&& value) { m_streamingExperiencePreferredProtocolHasBeenSet = true; m_streamingExperiencePreferredProtocol = std::move(value); }
    inline StreamingProperties& WithStreamingExperiencePreferredProtocol(const StreamingExperiencePreferredProtocolEnum& value) { SetStreamingExperiencePreferredProtocol(value); return *this;}
    inline StreamingProperties& WithStreamingExperiencePreferredProtocol(StreamingExperiencePreferredProtocolEnum&& value) { SetStreamingExperiencePreferredProtocol(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the permission settings asscoiated with the user.</p>
     */
    inline const Aws::Vector<UserSetting>& GetUserSettings() const{ return m_userSettings; }
    inline bool UserSettingsHasBeenSet() const { return m_userSettingsHasBeenSet; }
    inline void SetUserSettings(const Aws::Vector<UserSetting>& value) { m_userSettingsHasBeenSet = true; m_userSettings = value; }
    inline void SetUserSettings(Aws::Vector<UserSetting>&& value) { m_userSettingsHasBeenSet = true; m_userSettings = std::move(value); }
    inline StreamingProperties& WithUserSettings(const Aws::Vector<UserSetting>& value) { SetUserSettings(value); return *this;}
    inline StreamingProperties& WithUserSettings(Aws::Vector<UserSetting>&& value) { SetUserSettings(std::move(value)); return *this;}
    inline StreamingProperties& AddUserSettings(const UserSetting& value) { m_userSettingsHasBeenSet = true; m_userSettings.push_back(value); return *this; }
    inline StreamingProperties& AddUserSettings(UserSetting&& value) { m_userSettingsHasBeenSet = true; m_userSettings.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Indicates the storage connector used </p>
     */
    inline const Aws::Vector<StorageConnector>& GetStorageConnectors() const{ return m_storageConnectors; }
    inline bool StorageConnectorsHasBeenSet() const { return m_storageConnectorsHasBeenSet; }
    inline void SetStorageConnectors(const Aws::Vector<StorageConnector>& value) { m_storageConnectorsHasBeenSet = true; m_storageConnectors = value; }
    inline void SetStorageConnectors(Aws::Vector<StorageConnector>&& value) { m_storageConnectorsHasBeenSet = true; m_storageConnectors = std::move(value); }
    inline StreamingProperties& WithStorageConnectors(const Aws::Vector<StorageConnector>& value) { SetStorageConnectors(value); return *this;}
    inline StreamingProperties& WithStorageConnectors(Aws::Vector<StorageConnector>&& value) { SetStorageConnectors(std::move(value)); return *this;}
    inline StreamingProperties& AddStorageConnectors(const StorageConnector& value) { m_storageConnectorsHasBeenSet = true; m_storageConnectors.push_back(value); return *this; }
    inline StreamingProperties& AddStorageConnectors(StorageConnector&& value) { m_storageConnectorsHasBeenSet = true; m_storageConnectors.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Indicates the Global Accelerator properties.</p>
     */
    inline const GlobalAcceleratorForDirectory& GetGlobalAccelerator() const{ return m_globalAccelerator; }
    inline bool GlobalAcceleratorHasBeenSet() const { return m_globalAcceleratorHasBeenSet; }
    inline void SetGlobalAccelerator(const GlobalAcceleratorForDirectory& value) { m_globalAcceleratorHasBeenSet = true; m_globalAccelerator = value; }
    inline void SetGlobalAccelerator(GlobalAcceleratorForDirectory&& value) { m_globalAcceleratorHasBeenSet = true; m_globalAccelerator = std::move(value); }
    inline StreamingProperties& WithGlobalAccelerator(const GlobalAcceleratorForDirectory& value) { SetGlobalAccelerator(value); return *this;}
    inline StreamingProperties& WithGlobalAccelerator(GlobalAcceleratorForDirectory&& value) { SetGlobalAccelerator(std::move(value)); return *this;}
    ///@}
  private:

    StreamingExperiencePreferredProtocolEnum m_streamingExperiencePreferredProtocol;
    bool m_streamingExperiencePreferredProtocolHasBeenSet = false;

    Aws::Vector<UserSetting> m_userSettings;
    bool m_userSettingsHasBeenSet = false;

    Aws::Vector<StorageConnector> m_storageConnectors;
    bool m_storageConnectorsHasBeenSet = false;

    GlobalAcceleratorForDirectory m_globalAccelerator;
    bool m_globalAcceleratorHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
