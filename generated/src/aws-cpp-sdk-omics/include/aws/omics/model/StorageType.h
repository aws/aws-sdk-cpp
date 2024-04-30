/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/omics/Omics_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Omics
{
namespace Model
{
  enum class StorageType
  {
    NOT_SET,
    STATIC_,
    DYNAMIC
  };

namespace StorageTypeMapper
{
AWS_OMICS_API StorageType GetStorageTypeForName(const Aws::String& name);

AWS_OMICS_API Aws::String GetNameForStorageType(StorageType value);
} // namespace StorageTypeMapper
} // namespace Model
} // namespace Omics
} // namespace Aws
