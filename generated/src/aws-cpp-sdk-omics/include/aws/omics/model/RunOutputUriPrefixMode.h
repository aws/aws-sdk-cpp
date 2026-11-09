/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/omics/Omics_EXPORTS.h>

namespace Aws {
namespace Omics {
namespace Model {
enum class RunOutputUriPrefixMode { NOT_SET, SERVICE_DEFINED, NONE_WITH_OVERWRITE };

namespace RunOutputUriPrefixModeMapper {
AWS_OMICS_API RunOutputUriPrefixMode GetRunOutputUriPrefixModeForName(const Aws::String& name);

AWS_OMICS_API Aws::String GetNameForRunOutputUriPrefixMode(RunOutputUriPrefixMode value);
}  // namespace RunOutputUriPrefixModeMapper
}  // namespace Model
}  // namespace Omics
}  // namespace Aws
