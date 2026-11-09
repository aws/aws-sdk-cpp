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
enum class RetentionAction { NOT_SET, RollbackToPrimaryCluster, DeletePrimaryCluster };

namespace RetentionActionMapper {
AWS_OPENSEARCHSERVICE_API RetentionAction GetRetentionActionForName(const Aws::String& name);

AWS_OPENSEARCHSERVICE_API Aws::String GetNameForRetentionAction(RetentionAction value);
}  // namespace RetentionActionMapper
}  // namespace Model
}  // namespace OpenSearchService
}  // namespace Aws
