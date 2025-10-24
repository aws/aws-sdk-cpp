﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/medialive/MediaLive_EXPORTS.h>

namespace Aws {
namespace MediaLive {
namespace Model {
enum class NetworkState { NOT_SET, CREATING, CREATE_FAILED, ACTIVE, DELETING, IDLE, IN_USE, UPDATING, DELETE_FAILED, DELETED };

namespace NetworkStateMapper {
AWS_MEDIALIVE_API NetworkState GetNetworkStateForName(const Aws::String& name);

AWS_MEDIALIVE_API Aws::String GetNameForNetworkState(NetworkState value);
}  // namespace NetworkStateMapper
}  // namespace Model
}  // namespace MediaLive
}  // namespace Aws
