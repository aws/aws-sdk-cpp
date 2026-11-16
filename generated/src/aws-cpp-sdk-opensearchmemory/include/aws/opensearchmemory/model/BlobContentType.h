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
enum class BlobContentType { NOT_SET, application_pdf, image_png, image_jpeg };

namespace BlobContentTypeMapper {
AWS_OPENSEARCHMEMORY_API BlobContentType GetBlobContentTypeForName(const Aws::String& name);

AWS_OPENSEARCHMEMORY_API Aws::String GetNameForBlobContentType(BlobContentType value);
}  // namespace BlobContentTypeMapper
}  // namespace Model
}  // namespace OpenSearchMemory
}  // namespace Aws
