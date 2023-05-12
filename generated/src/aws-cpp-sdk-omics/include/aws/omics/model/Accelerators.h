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
  enum class Accelerators
  {
    NOT_SET,
    GPU
  };

namespace AcceleratorsMapper
{
AWS_OMICS_API Accelerators GetAcceleratorsForName(const Aws::String& name);

AWS_OMICS_API Aws::String GetNameForAccelerators(Accelerators value);
} // namespace AcceleratorsMapper
} // namespace Model
} // namespace Omics
} // namespace Aws
