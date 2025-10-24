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
enum class ResponseContentType { NOT_SET, TEXT_PLAIN, TEXT_HTML, APPLICATION_JSON };

namespace ResponseContentTypeMapper {
AWS_WAFV2_API ResponseContentType GetResponseContentTypeForName(const Aws::String& name);

AWS_WAFV2_API Aws::String GetNameForResponseContentType(ResponseContentType value);
}  // namespace ResponseContentTypeMapper
}  // namespace Model
}  // namespace WAFV2
}  // namespace Aws
