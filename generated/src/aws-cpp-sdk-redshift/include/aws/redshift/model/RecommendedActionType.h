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
  enum class RecommendedActionType
  {
    NOT_SET,
    SQL,
    CLI
  };

namespace RecommendedActionTypeMapper
{
AWS_REDSHIFT_API RecommendedActionType GetRecommendedActionTypeForName(const Aws::String& name);

AWS_REDSHIFT_API Aws::String GetNameForRecommendedActionType(RecommendedActionType value);
} // namespace RecommendedActionTypeMapper
} // namespace Model
} // namespace Redshift
} // namespace Aws
