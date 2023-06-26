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
  enum class StoreStatus
  {
    NOT_SET,
    CREATING,
    UPDATING,
    DELETING,
    ACTIVE,
    FAILED
  };

namespace StoreStatusMapper
{
AWS_OMICS_API StoreStatus GetStoreStatusForName(const Aws::String& name);

AWS_OMICS_API Aws::String GetNameForStoreStatus(StoreStatus value);
} // namespace StoreStatusMapper
} // namespace Model
} // namespace Omics
} // namespace Aws
