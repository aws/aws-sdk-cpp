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
enum class IngestionState { NOT_SET, STARTING, SCANNING, INGESTION_IN_PROGRESS, INGESTION_COMPLETE, STOPPED, FAILED };

namespace IngestionStateMapper {
AWS_OPENSEARCHSERVERLESS_API IngestionState GetIngestionStateForName(const Aws::String& name);

AWS_OPENSEARCHSERVERLESS_API Aws::String GetNameForIngestionState(IngestionState value);
}  // namespace IngestionStateMapper
}  // namespace Model
}  // namespace OpenSearchServerless
}  // namespace Aws
