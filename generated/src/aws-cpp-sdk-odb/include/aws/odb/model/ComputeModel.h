/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/odb/Odb_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace odb
{
namespace Model
{
  enum class ComputeModel
  {
    NOT_SET,
    ECPU,
    OCPU
  };

namespace ComputeModelMapper
{
AWS_ODB_API ComputeModel GetComputeModelForName(const Aws::String& name);

AWS_ODB_API Aws::String GetNameForComputeModel(ComputeModel value);
} // namespace ComputeModelMapper
} // namespace Model
} // namespace odb
} // namespace Aws
