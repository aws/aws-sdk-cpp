/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/resiliencehub/ResilienceHub_EXPORTS.h>

namespace Aws {
namespace ResilienceHub {
namespace Model {
enum class DataLocationConstraint { NOT_SET, AnyLocation, SameContinent, SameCountry };

namespace DataLocationConstraintMapper {
AWS_RESILIENCEHUB_API DataLocationConstraint GetDataLocationConstraintForName(const Aws::String& name);

AWS_RESILIENCEHUB_API Aws::String GetNameForDataLocationConstraint(DataLocationConstraint value);
}  // namespace DataLocationConstraintMapper
}  // namespace Model
}  // namespace ResilienceHub
}  // namespace Aws
