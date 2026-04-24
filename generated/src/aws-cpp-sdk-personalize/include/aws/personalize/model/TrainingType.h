/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/personalize/Personalize_EXPORTS.h>

namespace Aws {
namespace Personalize {
namespace Model {
enum class TrainingType { NOT_SET, AUTOMATIC, MANUAL };

namespace TrainingTypeMapper {
AWS_PERSONALIZE_API TrainingType GetTrainingTypeForName(const Aws::String& name);

AWS_PERSONALIZE_API Aws::String GetNameForTrainingType(TrainingType value);
}  // namespace TrainingTypeMapper
}  // namespace Model
}  // namespace Personalize
}  // namespace Aws
