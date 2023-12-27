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
AWS_PCACONNECTORAD_API ConnectorStatus GetConnectorStatusForName(const Aws::String& name);

AWS_PCACONNECTORAD_API Aws::String GetNameForConnectorStatus(ConnectorStatus value);
} // namespace ConnectorStatusMapper
} // namespace Model
} // namespace PcaConnectorAd
} // namespace Aws
