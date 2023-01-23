/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workdocs/WorkDocs_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace WorkDocs
{
namespace Model
{
  enum class StorageType
  {
    NOT_SET,
    UNLIMITED,
    QUOTA
  };

namespace StorageTypeMapper
{
AWS_WORKDOCS_API StorageType GetStorageTypeForName(const Aws::String& name);

AWS_WORKDOCS_API Aws::String GetNameForStorageType(StorageType value);
} // namespace StorageTypeMapper
} // namespace Model
} // namespace WorkDocs
} // namespace Aws
