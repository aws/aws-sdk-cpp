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
enum class EngineMode { NOT_SET, GENERAL, OPTIMIZED };

namespace EngineModeMapper {
AWS_OPENSEARCHSERVICE_API EngineMode GetEngineModeForName(const Aws::String& name);

AWS_OPENSEARCHSERVICE_API Aws::String GetNameForEngineMode(EngineMode value);
}  // namespace EngineModeMapper
}  // namespace Model
}  // namespace OpenSearchService
}  // namespace Aws
