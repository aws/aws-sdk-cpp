/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/opensearch/OpenSearchService_EXPORTS.h>

namespace Aws {
namespace OpenSearchService {
namespace Model {
enum class EncryptionMode { NOT_SET, DISK, NATIVE };

namespace EncryptionModeMapper {
AWS_OPENSEARCHSERVICE_API EncryptionMode GetEncryptionModeForName(const Aws::String& name);

AWS_OPENSEARCHSERVICE_API Aws::String GetNameForEncryptionMode(EncryptionMode value);
}  // namespace EncryptionModeMapper
}  // namespace Model
}  // namespace OpenSearchService
}  // namespace Aws
