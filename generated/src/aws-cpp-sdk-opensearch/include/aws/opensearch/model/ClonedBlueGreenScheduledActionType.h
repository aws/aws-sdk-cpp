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
enum class ClonedBlueGreenScheduledActionType { NOT_SET, AutomaticCutoverToPrimaryCluster, DeletePrimaryCluster };

namespace ClonedBlueGreenScheduledActionTypeMapper {
AWS_OPENSEARCHSERVICE_API ClonedBlueGreenScheduledActionType GetClonedBlueGreenScheduledActionTypeForName(const Aws::String& name);

AWS_OPENSEARCHSERVICE_API Aws::String GetNameForClonedBlueGreenScheduledActionType(ClonedBlueGreenScheduledActionType value);
}  // namespace ClonedBlueGreenScheduledActionTypeMapper
}  // namespace Model
}  // namespace OpenSearchService
}  // namespace Aws
