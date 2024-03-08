/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resiliencehub/ResilienceHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ResilienceHub
{
namespace Model
{
  enum class ResiliencyScoreType
  {
    NOT_SET,
    Compliance,
    Test,
    Alarm,
    Sop
  };

namespace ResiliencyScoreTypeMapper
{
AWS_RESILIENCEHUB_API ResiliencyScoreType GetResiliencyScoreTypeForName(const Aws::String& name);

AWS_RESILIENCEHUB_API Aws::String GetNameForResiliencyScoreType(ResiliencyScoreType value);
} // namespace ResiliencyScoreTypeMapper
} // namespace Model
} // namespace ResilienceHub
} // namespace Aws
