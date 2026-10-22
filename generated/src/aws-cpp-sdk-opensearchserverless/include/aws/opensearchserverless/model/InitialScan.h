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
enum class InitialScan { NOT_SET, ENABLED, DISABLED };

namespace InitialScanMapper {
AWS_OPENSEARCHSERVERLESS_API InitialScan GetInitialScanForName(const Aws::String& name);

AWS_OPENSEARCHSERVERLESS_API Aws::String GetNameForInitialScan(InitialScan value);
}  // namespace InitialScanMapper
}  // namespace Model
}  // namespace OpenSearchServerless
}  // namespace Aws
