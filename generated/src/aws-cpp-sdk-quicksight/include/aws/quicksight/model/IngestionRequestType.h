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
  enum class IngestionRequestType
  {
    NOT_SET,
    INITIAL_INGESTION,
    EDIT,
    INCREMENTAL_REFRESH,
    FULL_REFRESH
  };

namespace IngestionRequestTypeMapper
{
AWS_QUICKSIGHT_API IngestionRequestType GetIngestionRequestTypeForName(const Aws::String& name);

AWS_QUICKSIGHT_API Aws::String GetNameForIngestionRequestType(IngestionRequestType value);
} // namespace IngestionRequestTypeMapper
} // namespace Model
} // namespace QuickSight
} // namespace Aws
