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
  enum class ImpactRankingType
  {
    NOT_SET,
    HIGH,
    MEDIUM,
    LOW
  };

namespace ImpactRankingTypeMapper
{
AWS_REDSHIFT_API ImpactRankingType GetImpactRankingTypeForName(const Aws::String& name);

AWS_REDSHIFT_API Aws::String GetNameForImpactRankingType(ImpactRankingType value);
} // namespace ImpactRankingTypeMapper
} // namespace Model
} // namespace Redshift
} // namespace Aws
