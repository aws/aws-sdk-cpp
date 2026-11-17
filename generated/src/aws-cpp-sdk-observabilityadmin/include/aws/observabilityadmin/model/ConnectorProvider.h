/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/observabilityadmin/ObservabilityAdmin_EXPORTS.h>

namespace Aws {
namespace ObservabilityAdmin {
namespace Model {
enum class ConnectorProvider { NOT_SET, AZURE };

namespace ConnectorProviderMapper {
AWS_OBSERVABILITYADMIN_API ConnectorProvider GetConnectorProviderForName(const Aws::String& name);

AWS_OBSERVABILITYADMIN_API Aws::String GetNameForConnectorProvider(ConnectorProvider value);
}  // namespace ConnectorProviderMapper
}  // namespace Model
}  // namespace ObservabilityAdmin
}  // namespace Aws
