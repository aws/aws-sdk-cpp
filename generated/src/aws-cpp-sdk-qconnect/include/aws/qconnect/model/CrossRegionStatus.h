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
enum class CrossRegionStatus { NOT_SET, NONE, REGIONAL, GLOBAL };

namespace CrossRegionStatusMapper {
AWS_QCONNECT_API CrossRegionStatus GetCrossRegionStatusForName(const Aws::String& name);

AWS_QCONNECT_API Aws::String GetNameForCrossRegionStatus(CrossRegionStatus value);
}  // namespace CrossRegionStatusMapper
}  // namespace Model
}  // namespace QConnect
}  // namespace Aws
