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
enum class ConnectionMode { NOT_SET, CALLER, LISTENER };

namespace ConnectionModeMapper {
AWS_MEDIALIVE_API ConnectionMode GetConnectionModeForName(const Aws::String& name);

AWS_MEDIALIVE_API Aws::String GetNameForConnectionMode(ConnectionMode value);
}  // namespace ConnectionModeMapper
}  // namespace Model
}  // namespace MediaLive
}  // namespace Aws
