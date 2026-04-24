/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sesv2/SESV2_EXPORTS.h>

namespace Aws {
namespace SESV2 {
namespace Model {
enum class QueryErrorCode { NOT_SET, INTERNAL_FAILURE, ACCESS_DENIED };

namespace QueryErrorCodeMapper {
AWS_SESV2_API QueryErrorCode GetQueryErrorCodeForName(const Aws::String& name);

AWS_SESV2_API Aws::String GetNameForQueryErrorCode(QueryErrorCode value);
}  // namespace QueryErrorCodeMapper
}  // namespace Model
}  // namespace SESV2
}  // namespace Aws
