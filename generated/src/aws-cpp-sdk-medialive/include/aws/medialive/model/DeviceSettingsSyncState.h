/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/medialive/MediaLive_EXPORTS.h>

namespace Aws {
namespace MediaLive {
namespace Model {
enum class DeviceSettingsSyncState { NOT_SET, SYNCED, SYNCING };

namespace DeviceSettingsSyncStateMapper {
AWS_MEDIALIVE_API DeviceSettingsSyncState GetDeviceSettingsSyncStateForName(const Aws::String& name);

AWS_MEDIALIVE_API Aws::String GetNameForDeviceSettingsSyncState(DeviceSettingsSyncState value);
}  // namespace DeviceSettingsSyncStateMapper
}  // namespace Model
}  // namespace MediaLive
}  // namespace Aws
