/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift/Redshift_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Redshift
{
namespace Model
{
  enum class NodeConfigurationOptionsFilterName
  {
    NOT_SET,
    NodeType,
    NumberOfNodes,
    EstimatedDiskUtilizationPercent,
    Mode
  };

namespace NodeConfigurationOptionsFilterNameMapper
{
AWS_REDSHIFT_API NodeConfigurationOptionsFilterName GetNodeConfigurationOptionsFilterNameForName(const Aws::String& name);

AWS_REDSHIFT_API Aws::String GetNameForNodeConfigurationOptionsFilterName(NodeConfigurationOptionsFilterName value);
} // namespace NodeConfigurationOptionsFilterNameMapper
} // namespace Model
} // namespace Redshift
} // namespace Aws
