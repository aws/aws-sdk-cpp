/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/redshift/Redshift_EXPORTS.h>

namespace Aws {
namespace Redshift {
namespace Model {
enum class Mode { NOT_SET, standard, high_performance };

namespace ModeMapper {
AWS_REDSHIFT_API Mode GetModeForName(const Aws::String& name);

AWS_REDSHIFT_API Aws::String GetNameForMode(Mode value);
}  // namespace ModeMapper
}  // namespace Model
}  // namespace Redshift
}  // namespace Aws
