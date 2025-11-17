/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mwaa-serverless/MWAAServerless_EXPORTS.h>

namespace Aws {
namespace MWAAServerless {
namespace Model {
enum class RunType { NOT_SET, ON_DEMAND, SCHEDULED };

namespace RunTypeMapper {
AWS_MWAASERVERLESS_API RunType GetRunTypeForName(const Aws::String& name);

AWS_MWAASERVERLESS_API Aws::String GetNameForRunType(RunType value);
}  // namespace RunTypeMapper
}  // namespace Model
}  // namespace MWAAServerless
}  // namespace Aws
