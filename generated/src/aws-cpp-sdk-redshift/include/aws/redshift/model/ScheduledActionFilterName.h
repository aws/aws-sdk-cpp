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
  enum class ScheduledActionFilterName
  {
    NOT_SET,
    cluster_identifier,
    iam_role
  };

namespace ScheduledActionFilterNameMapper
{
AWS_REDSHIFT_API ScheduledActionFilterName GetScheduledActionFilterNameForName(const Aws::String& name);

AWS_REDSHIFT_API Aws::String GetNameForScheduledActionFilterName(ScheduledActionFilterName value);
} // namespace ScheduledActionFilterNameMapper
} // namespace Model
} // namespace Redshift
} // namespace Aws
