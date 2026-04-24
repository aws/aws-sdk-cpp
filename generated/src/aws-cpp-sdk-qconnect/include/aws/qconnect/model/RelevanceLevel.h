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
enum class RelevanceLevel { NOT_SET, HIGH, MEDIUM, LOW };

namespace RelevanceLevelMapper {
AWS_QCONNECT_API RelevanceLevel GetRelevanceLevelForName(const Aws::String& name);

AWS_QCONNECT_API Aws::String GetNameForRelevanceLevel(RelevanceLevel value);
}  // namespace RelevanceLevelMapper
}  // namespace Model
}  // namespace QConnect
}  // namespace Aws
