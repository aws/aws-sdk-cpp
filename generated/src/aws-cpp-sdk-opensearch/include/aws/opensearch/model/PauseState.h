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
enum class PauseState { NOT_SET, Active, Completed, Scheduled, Disabled };

namespace PauseStateMapper {
AWS_OPENSEARCHSERVICE_API PauseState GetPauseStateForName(const Aws::String& name);

AWS_OPENSEARCHSERVICE_API Aws::String GetNameForPauseState(PauseState value);
}  // namespace PauseStateMapper
}  // namespace Model
}  // namespace OpenSearchService
}  // namespace Aws
