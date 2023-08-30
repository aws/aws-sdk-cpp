/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pca-connector-ad/PcaConnectorAd_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace PcaConnectorAd
{
namespace Model
{
  enum class ConnectorStatusReason
  {
    NOT_SET,
    DIRECTORY_ACCESS_DENIED,
    INTERNAL_FAILURE,
    PRIVATECA_ACCESS_DENIED,
    PRIVATECA_RESOURCE_NOT_FOUND,
    SECURITY_GROUP_NOT_IN_VPC,
    VPC_ACCESS_DENIED,
    VPC_ENDPOINT_LIMIT_EXCEEDED,
    VPC_RESOURCE_NOT_FOUND
  };

namespace ConnectorStatusReasonMapper
{
AWS_PCACONNECTORAD_API ConnectorStatusReason GetConnectorStatusReasonForName(const Aws::String& name);

AWS_PCACONNECTORAD_API Aws::String GetNameForConnectorStatusReason(ConnectorStatusReason value);
} // namespace ConnectorStatusReasonMapper
} // namespace Model
} // namespace PcaConnectorAd
} // namespace Aws
