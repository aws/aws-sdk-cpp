/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>

namespace Aws {
namespace MediaConnect {
namespace Model {
enum class RouterOutputRoutedState { NOT_SET, ROUTED, ROUTING, UNROUTED };

namespace RouterOutputRoutedStateMapper {
AWS_MEDIACONNECT_API RouterOutputRoutedState GetRouterOutputRoutedStateForName(const Aws::String& name);

AWS_MEDIACONNECT_API Aws::String GetNameForRouterOutputRoutedState(RouterOutputRoutedState value);
}  // namespace RouterOutputRoutedStateMapper
}  // namespace Model
}  // namespace MediaConnect
}  // namespace Aws
