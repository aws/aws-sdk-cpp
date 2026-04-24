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
enum class AssessmentInvoker { NOT_SET, User, System };

namespace AssessmentInvokerMapper {
AWS_RESILIENCEHUB_API AssessmentInvoker GetAssessmentInvokerForName(const Aws::String& name);

AWS_RESILIENCEHUB_API Aws::String GetNameForAssessmentInvoker(AssessmentInvoker value);
}  // namespace AssessmentInvokerMapper
}  // namespace Model
}  // namespace ResilienceHub
}  // namespace Aws
