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
  enum class ConnectorStatusReason
  {
    NOT_SET,
    INTERNAL_FAILURE,
    PRIVATECA_ACCESS_DENIED,
    PRIVATECA_INVALID_STATE,
    PRIVATECA_RESOURCE_NOT_FOUND
  };

namespace ConnectorStatusReasonMapper
{
AWS_PCACONNECTORSCEP_API ConnectorStatusReason GetConnectorStatusReasonForName(const Aws::String& name);

AWS_PCACONNECTORSCEP_API Aws::String GetNameForConnectorStatusReason(ConnectorStatusReason value);
} // namespace ConnectorStatusReasonMapper
} // namespace Model
} // namespace PcaConnectorScep
} // namespace Aws
