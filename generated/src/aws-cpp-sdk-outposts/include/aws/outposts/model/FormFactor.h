/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/outposts/Outposts_EXPORTS.h>

namespace Aws {
namespace Outposts {
namespace Model {
enum class FormFactor { NOT_SET, RACK, SERVER };

namespace FormFactorMapper {
AWS_OUTPOSTS_API FormFactor GetFormFactorForName(const Aws::String& name);

AWS_OUTPOSTS_API Aws::String GetNameForFormFactor(FormFactor value);
}  // namespace FormFactorMapper
}  // namespace Model
}  // namespace Outposts
}  // namespace Aws
