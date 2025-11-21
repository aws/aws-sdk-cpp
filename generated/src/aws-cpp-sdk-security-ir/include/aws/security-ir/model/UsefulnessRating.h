/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/security-ir/SecurityIR_EXPORTS.h>

namespace Aws {
namespace SecurityIR {
namespace Model {
enum class UsefulnessRating { NOT_SET, USEFUL, NOT_USEFUL };

namespace UsefulnessRatingMapper {
AWS_SECURITYIR_API UsefulnessRating GetUsefulnessRatingForName(const Aws::String& name);

AWS_SECURITYIR_API Aws::String GetNameForUsefulnessRating(UsefulnessRating value);
}  // namespace UsefulnessRatingMapper
}  // namespace Model
}  // namespace SecurityIR
}  // namespace Aws
