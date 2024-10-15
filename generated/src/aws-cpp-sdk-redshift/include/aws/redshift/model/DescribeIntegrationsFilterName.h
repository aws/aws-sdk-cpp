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
  enum class DescribeIntegrationsFilterName
  {
    NOT_SET,
    integration_arn,
    source_arn,
    source_types,
    status
  };

namespace DescribeIntegrationsFilterNameMapper
{
AWS_REDSHIFT_API DescribeIntegrationsFilterName GetDescribeIntegrationsFilterNameForName(const Aws::String& name);

AWS_REDSHIFT_API Aws::String GetNameForDescribeIntegrationsFilterName(DescribeIntegrationsFilterName value);
} // namespace DescribeIntegrationsFilterNameMapper
} // namespace Model
} // namespace Redshift
} // namespace Aws
