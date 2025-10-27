/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/qbusiness/QBusiness_EXPORTS.h>

namespace Aws {
namespace QBusiness {
namespace Model {
enum class ResponseScope { NOT_SET, ENTERPRISE_CONTENT_ONLY, EXTENDED_KNOWLEDGE_ENABLED };

namespace ResponseScopeMapper {
AWS_QBUSINESS_API ResponseScope GetResponseScopeForName(const Aws::String& name);

AWS_QBUSINESS_API Aws::String GetNameForResponseScope(ResponseScope value);
}  // namespace ResponseScopeMapper
}  // namespace Model
}  // namespace QBusiness
}  // namespace Aws
