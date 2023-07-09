/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace SageMaker
{
namespace Model
{
  enum class FillingType
  {
    NOT_SET,
    frontfill,
    middlefill,
    backfill,
    futurefill,
    frontfill_value,
    middlefill_value,
    backfill_value,
    futurefill_value
  };

namespace FillingTypeMapper
{
AWS_SAGEMAKER_API FillingType GetFillingTypeForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForFillingType(FillingType value);
} // namespace FillingTypeMapper
} // namespace Model
} // namespace SageMaker
} // namespace Aws
