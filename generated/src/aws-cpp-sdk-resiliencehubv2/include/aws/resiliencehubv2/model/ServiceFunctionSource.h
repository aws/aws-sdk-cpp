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
enum class ServiceFunctionSource { NOT_SET, AI_GENERATED, USER };

namespace ServiceFunctionSourceMapper {
AWS_RESILIENCEHUBV2_API ServiceFunctionSource GetServiceFunctionSourceForName(const Aws::String& name);

AWS_RESILIENCEHUBV2_API Aws::String GetNameForServiceFunctionSource(ServiceFunctionSource value);
}  // namespace ServiceFunctionSourceMapper
}  // namespace Model
}  // namespace resiliencehubv2
}  // namespace Aws
