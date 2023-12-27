/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace QuickSight
{
namespace Model
{
  enum class MemberType
  {
    NOT_SET,
    DASHBOARD,
    ANALYSIS,
    DATASET,
    DATASOURCE,
    TOPIC
  };

namespace MemberTypeMapper
{
AWS_QUICKSIGHT_API MemberType GetMemberTypeForName(const Aws::String& name);

AWS_QUICKSIGHT_API Aws::String GetNameForMemberType(MemberType value);
} // namespace MemberTypeMapper
} // namespace Model
} // namespace QuickSight
} // namespace Aws
