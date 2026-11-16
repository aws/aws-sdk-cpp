/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/opensearchmemory/OpenSearchMemory_EXPORTS.h>

namespace Aws {
namespace OpenSearchMemory {
namespace Model {
enum class MetadataMode { NOT_SET, REPLACE, MERGE };

namespace MetadataModeMapper {
AWS_OPENSEARCHMEMORY_API MetadataMode GetMetadataModeForName(const Aws::String& name);

AWS_OPENSEARCHMEMORY_API Aws::String GetNameForMetadataMode(MetadataMode value);
}  // namespace MetadataModeMapper
}  // namespace Model
}  // namespace OpenSearchMemory
}  // namespace Aws
