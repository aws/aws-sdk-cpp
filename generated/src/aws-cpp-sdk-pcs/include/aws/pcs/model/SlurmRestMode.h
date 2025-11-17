/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/pcs/PCS_EXPORTS.h>

namespace Aws {
namespace PCS {
namespace Model {
enum class SlurmRestMode { NOT_SET, STANDARD, NONE };

namespace SlurmRestModeMapper {
AWS_PCS_API SlurmRestMode GetSlurmRestModeForName(const Aws::String& name);

AWS_PCS_API Aws::String GetNameForSlurmRestMode(SlurmRestMode value);
}  // namespace SlurmRestModeMapper
}  // namespace Model
}  // namespace PCS
}  // namespace Aws
