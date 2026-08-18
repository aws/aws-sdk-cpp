/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/outposts/Outposts_EXPORTS.h>

namespace Aws {
namespace Outposts {
namespace Model {
enum class PrivateConnectivityStatus { NOT_SET, ENABLED, DISABLED };

namespace PrivateConnectivityStatusMapper {
AWS_OUTPOSTS_API PrivateConnectivityStatus GetPrivateConnectivityStatusForName(const Aws::String& name);

AWS_OUTPOSTS_API Aws::String GetNameForPrivateConnectivityStatus(PrivateConnectivityStatus value);
}  // namespace PrivateConnectivityStatusMapper
}  // namespace Model
}  // namespace Outposts
}  // namespace Aws
