/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/wafv2/WAFV2_EXPORTS.h>

namespace Aws {
namespace WAFV2 {
namespace Model {
enum class PreParseTextTransformationType {
  NOT_SET,
  NONE,
  URL_DECODE,
  URL_DECODE_UNI,
  COMBINE_DUPLICATE_QUERY_ARGS_BY_COMMA,
  REPLACE_SEMICOLONS_WITH_AMPERSANDS
};

namespace PreParseTextTransformationTypeMapper {
AWS_WAFV2_API PreParseTextTransformationType GetPreParseTextTransformationTypeForName(const Aws::String& name);

AWS_WAFV2_API Aws::String GetNameForPreParseTextTransformationType(PreParseTextTransformationType value);
}  // namespace PreParseTextTransformationTypeMapper
}  // namespace Model
}  // namespace WAFV2
}  // namespace Aws
