/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/observabilityadmin/ObservabilityAdmin_EXPORTS.h>

namespace Aws {
namespace ObservabilityAdmin {
namespace Model {
enum class EncryptionScope { NOT_SET, ENCRYPTED_SOURCE_ONLY, NEW_DESTINATION_LOG_GROUPS };

namespace EncryptionScopeMapper {
AWS_OBSERVABILITYADMIN_API EncryptionScope GetEncryptionScopeForName(const Aws::String& name);

AWS_OBSERVABILITYADMIN_API Aws::String GetNameForEncryptionScope(EncryptionScope value);
}  // namespace EncryptionScopeMapper
}  // namespace Model
}  // namespace ObservabilityAdmin
}  // namespace Aws
