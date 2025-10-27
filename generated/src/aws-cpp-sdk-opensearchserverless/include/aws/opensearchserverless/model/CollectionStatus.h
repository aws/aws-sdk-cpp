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
enum class CollectionStatus { NOT_SET, CREATING, DELETING, ACTIVE, FAILED };

namespace CollectionStatusMapper {
AWS_OPENSEARCHSERVERLESS_API CollectionStatus GetCollectionStatusForName(const Aws::String& name);

AWS_OPENSEARCHSERVERLESS_API Aws::String GetNameForCollectionStatus(CollectionStatus value);
}  // namespace CollectionStatusMapper
}  // namespace Model
}  // namespace OpenSearchServerless
}  // namespace Aws
