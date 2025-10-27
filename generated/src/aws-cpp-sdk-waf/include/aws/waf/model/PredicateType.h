/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/waf/WAF_EXPORTS.h>

namespace Aws {
namespace WAF {
namespace Model {
enum class PredicateType { NOT_SET, IPMatch, ByteMatch, SqlInjectionMatch, GeoMatch, SizeConstraint, XssMatch, RegexMatch };

namespace PredicateTypeMapper {
AWS_WAF_API PredicateType GetPredicateTypeForName(const Aws::String& name);

AWS_WAF_API Aws::String GetNameForPredicateType(PredicateType value);
}  // namespace PredicateTypeMapper
}  // namespace Model
}  // namespace WAF
}  // namespace Aws
