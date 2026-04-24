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
enum class InputDeviceTransferType { NOT_SET, OUTGOING, INCOMING };

namespace InputDeviceTransferTypeMapper {
AWS_MEDIALIVE_API InputDeviceTransferType GetInputDeviceTransferTypeForName(const Aws::String& name);

AWS_MEDIALIVE_API Aws::String GetNameForInputDeviceTransferType(InputDeviceTransferType value);
}  // namespace InputDeviceTransferTypeMapper
}  // namespace Model
}  // namespace MediaLive
}  // namespace Aws
