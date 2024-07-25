/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/states/SFN_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace SFN
{
namespace Model
{
  enum class IncludedData
  {
    NOT_SET,
    ALL_DATA,
    METADATA_ONLY
  };

namespace IncludedDataMapper
{
AWS_SFN_API IncludedData GetIncludedDataForName(const Aws::String& name);

AWS_SFN_API Aws::String GetNameForIncludedData(IncludedData value);
} // namespace IncludedDataMapper
} // namespace Model
} // namespace SFN
} // namespace Aws
