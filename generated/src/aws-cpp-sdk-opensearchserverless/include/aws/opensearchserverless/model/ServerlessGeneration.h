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
enum class ServerlessGeneration { NOT_SET, CLASSIC, NEXTGEN };

namespace ServerlessGenerationMapper {
AWS_OPENSEARCHSERVERLESS_API ServerlessGeneration GetServerlessGenerationForName(const Aws::String& name);

AWS_OPENSEARCHSERVERLESS_API Aws::String GetNameForServerlessGeneration(ServerlessGeneration value);
}  // namespace ServerlessGenerationMapper
}  // namespace Model
}  // namespace OpenSearchServerless
}  // namespace Aws
