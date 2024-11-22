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
  enum class StoreType
  {
    NOT_SET,
    SEQUENCE_STORE,
    REFERENCE_STORE
  };

namespace StoreTypeMapper
{
AWS_OMICS_API StoreType GetStoreTypeForName(const Aws::String& name);

AWS_OMICS_API Aws::String GetNameForStoreType(StoreType value);
} // namespace StoreTypeMapper
} // namespace Model
} // namespace Omics
} // namespace Aws
