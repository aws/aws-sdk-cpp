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
  enum class StoreFormat
  {
    NOT_SET,
    GFF,
    TSV,
    VCF
  };

namespace StoreFormatMapper
{
AWS_OMICS_API StoreFormat GetStoreFormatForName(const Aws::String& name);

AWS_OMICS_API Aws::String GetNameForStoreFormat(StoreFormat value);
} // namespace StoreFormatMapper
} // namespace Model
} // namespace Omics
} // namespace Aws
