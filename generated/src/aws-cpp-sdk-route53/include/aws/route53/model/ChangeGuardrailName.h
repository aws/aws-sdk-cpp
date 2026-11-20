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
enum class ChangeGuardrailName {
  NOT_SET,
  NS_FORMAT_CHECK,
  NS_DELEGATION_AUTHORITY_CHECK,
  NS_OCCLUSION_CHECK,
  ALIAS_TARGET_CHECK,
  ACTIVE_RECORD_CHECK,
  ACTIVE_DELEGATION_CHECK
};

namespace ChangeGuardrailNameMapper {
AWS_ROUTE53_API ChangeGuardrailName GetChangeGuardrailNameForName(const Aws::String& name);

AWS_ROUTE53_API Aws::String GetNameForChangeGuardrailName(ChangeGuardrailName value);
}  // namespace ChangeGuardrailNameMapper
}  // namespace Model
}  // namespace Route53
}  // namespace Aws
