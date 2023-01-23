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
  enum class SourceType
  {
    NOT_SET,
    cluster,
    cluster_parameter_group,
    cluster_security_group,
    cluster_snapshot,
    scheduled_action
  };

namespace SourceTypeMapper
{
AWS_REDSHIFT_API SourceType GetSourceTypeForName(const Aws::String& name);

AWS_REDSHIFT_API Aws::String GetNameForSourceType(SourceType value);
} // namespace SourceTypeMapper
} // namespace Model
} // namespace Redshift
} // namespace Aws
