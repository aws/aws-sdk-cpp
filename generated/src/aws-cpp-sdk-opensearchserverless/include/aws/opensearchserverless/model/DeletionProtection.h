/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/opensearchserverless/OpenSearchServerless_EXPORTS.h>

namespace Aws {
namespace OpenSearchServerless {
namespace Model {
enum class DeletionProtection { NOT_SET, ENABLED, DISABLED };

namespace DeletionProtectionMapper {
AWS_OPENSEARCHSERVERLESS_API DeletionProtection GetDeletionProtectionForName(const Aws::String& name);

AWS_OPENSEARCHSERVERLESS_API Aws::String GetNameForDeletionProtection(DeletionProtection value);
}  // namespace DeletionProtectionMapper
}  // namespace Model
}  // namespace OpenSearchServerless
}  // namespace Aws
