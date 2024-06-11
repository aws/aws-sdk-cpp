/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pca-connector-scep/PcaConnectorScep_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace PcaConnectorScep
{
namespace Model
{
  enum class ConnectorStatus
  {
    NOT_SET,
    CREATING,
    ACTIVE,
    DELETING,
    FAILED
  };

namespace ConnectorStatusMapper
{
AWS_PCACONNECTORSCEP_API ConnectorStatus GetConnectorStatusForName(const Aws::String& name);

AWS_PCACONNECTORSCEP_API Aws::String GetNameForConnectorStatus(ConnectorStatus value);
} // namespace ConnectorStatusMapper
} // namespace Model
} // namespace PcaConnectorScep
} // namespace Aws
