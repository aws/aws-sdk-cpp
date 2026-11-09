/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/qconnect/QConnect_EXPORTS.h>

namespace Aws {
namespace QConnect {
namespace Model {
enum class GlobalResiliencyStatus { NOT_SET, SUPPORTED, UNSUPPORTED };

namespace GlobalResiliencyStatusMapper {
AWS_QCONNECT_API GlobalResiliencyStatus GetGlobalResiliencyStatusForName(const Aws::String& name);

AWS_QCONNECT_API Aws::String GetNameForGlobalResiliencyStatus(GlobalResiliencyStatus value);
}  // namespace GlobalResiliencyStatusMapper
}  // namespace Model
}  // namespace QConnect
}  // namespace Aws
