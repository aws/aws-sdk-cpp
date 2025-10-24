﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>

namespace Aws {
namespace MediaConnect {
namespace Model {
enum class NdiState { NOT_SET, ENABLED, DISABLED };

namespace NdiStateMapper {
AWS_MEDIACONNECT_API NdiState GetNdiStateForName(const Aws::String& name);

AWS_MEDIACONNECT_API Aws::String GetNameForNdiState(NdiState value);
}  // namespace NdiStateMapper
}  // namespace Model
}  // namespace MediaConnect
}  // namespace Aws
