/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/pca-connector-scep/PcaConnectorScep_EXPORTS.h>

namespace Aws {
namespace PcaConnectorScep {
namespace Model {
enum class ConnectorType { NOT_SET, GENERAL_PURPOSE, INTUNE };

namespace ConnectorTypeMapper {
AWS_PCACONNECTORSCEP_API ConnectorType GetConnectorTypeForName(const Aws::String& name);

AWS_PCACONNECTORSCEP_API Aws::String GetNameForConnectorType(ConnectorType value);
}  // namespace ConnectorTypeMapper
}  // namespace Model
}  // namespace PcaConnectorScep
}  // namespace Aws
