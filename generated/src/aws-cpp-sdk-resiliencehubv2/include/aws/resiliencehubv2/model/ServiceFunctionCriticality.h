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
enum class ServiceFunctionCriticality { NOT_SET, PRIMARY, SUPPLEMENTAL };

namespace ServiceFunctionCriticalityMapper {
AWS_RESILIENCEHUBV2_API ServiceFunctionCriticality GetServiceFunctionCriticalityForName(const Aws::String& name);

AWS_RESILIENCEHUBV2_API Aws::String GetNameForServiceFunctionCriticality(ServiceFunctionCriticality value);
}  // namespace ServiceFunctionCriticalityMapper
}  // namespace Model
}  // namespace resiliencehubv2
}  // namespace Aws
