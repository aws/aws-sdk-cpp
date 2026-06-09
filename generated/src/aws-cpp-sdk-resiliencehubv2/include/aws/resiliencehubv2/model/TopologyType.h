/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/resiliencehubv2/Resiliencehubv2_EXPORTS.h>

namespace Aws {
namespace resiliencehubv2 {
namespace Model {
enum class TopologyType { NOT_SET, CONTAINMENT, DATA_FLOW, OBSERVABILITY, PERMISSIONS };

namespace TopologyTypeMapper {
AWS_RESILIENCEHUBV2_API TopologyType GetTopologyTypeForName(const Aws::String& name);

AWS_RESILIENCEHUBV2_API Aws::String GetNameForTopologyType(TopologyType value);
}  // namespace TopologyTypeMapper
}  // namespace Model
}  // namespace resiliencehubv2
}  // namespace Aws
