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
    AWS_WORKSPACES_API StreamingProperties() = default;
    AWS_WORKSPACES_API StreamingProperties(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACES_API StreamingProperties& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Indicates the type of preferred protocol for the streaming experience.</p>
     */
    inline StreamingExperiencePreferredProtocolEnum GetStreamingExperiencePreferredProtocol() const { return m_streamingExperiencePreferredProtocol; }
    inline bool StreamingExperiencePreferredProtocolHasBeenSet() const { return m_streamingExperiencePreferredProtocolHasBeenSet; }
    inline void SetStreamingExperiencePreferredProtocol(StreamingExperiencePreferredProtocolEnum value) { m_streamingExperiencePreferredProtocolHasBeenSet = true; m_streamingExperiencePreferredProtocol = value; }
    inline StreamingProperties& WithStreamingExperiencePreferredProtocol(StreamingExperiencePreferredProtocolEnum value) { SetStreamingExperiencePreferredProtocol(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the permission settings asscoiated with the user.</p>
     */
    inline const Aws::Vector<UserSetting>& GetUserSettings() const { return m_userSettings; }
    inline bool UserSettingsHasBeenSet() const { return m_userSettingsHasBeenSet; }
    template<typename UserSettingsT = Aws::Vector<UserSetting>>
    void SetUserSettings(UserSettingsT&& value) { m_userSettingsHasBeenSet = true; m_userSettings = std::forward<UserSettingsT>(value); }
    template<typename UserSettingsT = Aws::Vector<UserSetting>>
    StreamingProperties& WithUserSettings(UserSettingsT&& value) { SetUserSettings(std::forward<UserSettingsT>(value)); return *this;}
    template<typename UserSettingsT = UserSetting>
    StreamingProperties& AddUserSettings(UserSettingsT&& value) { m_userSettingsHasBeenSet = true; m_userSettings.emplace_back(std::forward<UserSettingsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Indicates the storage connector used </p>
     */
    inline const Aws::Vector<StorageConnector>& GetStorageConnectors() const { return m_storageConnectors; }
    inline bool StorageConnectorsHasBeenSet() const { return m_storageConnectorsHasBeenSet; }
    template<typename StorageConnectorsT = Aws::Vector<StorageConnector>>
    void SetStorageConnectors(StorageConnectorsT&& value) { m_storageConnectorsHasBeenSet = true; m_storageConnectors = std::forward<StorageConnectorsT>(value); }
    template<typename StorageConnectorsT = Aws::Vector<StorageConnector>>
    StreamingProperties& WithStorageConnectors(StorageConnectorsT&& value) { SetStorageConnectors(std::forward<StorageConnectorsT>(value)); return *this;}
    template<typename StorageConnectorsT = StorageConnector>
    StreamingProperties& AddStorageConnectors(StorageConnectorsT&& value) { m_storageConnectorsHasBeenSet = true; m_storageConnectors.emplace_back(std::forward<StorageConnectorsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Indicates the Global Accelerator properties.</p>
     */
    inline const GlobalAcceleratorForDirectory& GetGlobalAccelerator() const { return m_globalAccelerator; }
    inline bool GlobalAcceleratorHasBeenSet() const { return m_globalAcceleratorHasBeenSet; }
    template<typename GlobalAcceleratorT = GlobalAcceleratorForDirectory>
    void SetGlobalAccelerator(GlobalAcceleratorT&& value) { m_globalAcceleratorHasBeenSet = true; m_globalAccelerator = std::forward<GlobalAcceleratorT>(value); }
    template<typename GlobalAcceleratorT = GlobalAcceleratorForDirectory>
    StreamingProperties& WithGlobalAccelerator(GlobalAcceleratorT&& value) { SetGlobalAccelerator(std::forward<GlobalAcceleratorT>(value)); return *this;}
    ///@}
  private:

    StreamingExperiencePreferredProtocolEnum m_streamingExperiencePreferredProtocol{StreamingExperiencePreferredProtocolEnum::NOT_SET};
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
