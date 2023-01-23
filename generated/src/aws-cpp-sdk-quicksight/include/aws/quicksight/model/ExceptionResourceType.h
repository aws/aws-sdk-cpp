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
  enum class ExceptionResourceType
  {
    NOT_SET,
    USER,
    GROUP,
    NAMESPACE,
    ACCOUNT_SETTINGS,
    IAMPOLICY_ASSIGNMENT,
    DATA_SOURCE,
    DATA_SET,
    VPC_CONNECTION,
    INGESTION
  };

namespace ExceptionResourceTypeMapper
{
AWS_QUICKSIGHT_API ExceptionResourceType GetExceptionResourceTypeForName(const Aws::String& name);

AWS_QUICKSIGHT_API Aws::String GetNameForExceptionResourceType(ExceptionResourceType value);
} // namespace ExceptionResourceTypeMapper
} // namespace Model
} // namespace QuickSight
} // namespace Aws
