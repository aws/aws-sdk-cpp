/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/nova-act/NovaAct_EXPORTS.h>

namespace Aws {
namespace NovaAct {
namespace Model {
enum class TraceLocationType { NOT_SET, S3 };

namespace TraceLocationTypeMapper {
AWS_NOVAACT_API TraceLocationType GetTraceLocationTypeForName(const Aws::String& name);

AWS_NOVAACT_API Aws::String GetNameForTraceLocationType(TraceLocationType value);
}  // namespace TraceLocationTypeMapper
}  // namespace Model
}  // namespace NovaAct
}  // namespace Aws
