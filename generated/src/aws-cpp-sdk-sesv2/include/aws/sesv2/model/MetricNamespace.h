/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sesv2/SESV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace SESV2
{
namespace Model
{
  enum class MetricNamespace
  {
    NOT_SET,
    VDM
  };

namespace MetricNamespaceMapper
{
AWS_SESV2_API MetricNamespace GetMetricNamespaceForName(const Aws::String& name);

AWS_SESV2_API Aws::String GetNameForMetricNamespace(MetricNamespace value);
} // namespace MetricNamespaceMapper
} // namespace Model
} // namespace SESV2
} // namespace Aws
