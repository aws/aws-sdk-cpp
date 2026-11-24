/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/route53/Route53_EXPORTS.h>

namespace Aws {
namespace Route53 {
namespace Model {
enum class ChangeGuardrailStatus { NOT_SET, ENABLED, DISABLED };

namespace ChangeGuardrailStatusMapper {
AWS_ROUTE53_API ChangeGuardrailStatus GetChangeGuardrailStatusForName(const Aws::String& name);

AWS_ROUTE53_API Aws::String GetNameForChangeGuardrailStatus(ChangeGuardrailStatus value);
}  // namespace ChangeGuardrailStatusMapper
}  // namespace Model
}  // namespace Route53
}  // namespace Aws
