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
  enum class AthenaResultFormat
  {
    NOT_SET,
    PARQUET,
    ORC,
    AVRO,
    JSON,
    TEXTFILE
  };

namespace AthenaResultFormatMapper
{
AWS_SAGEMAKER_API AthenaResultFormat GetAthenaResultFormatForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForAthenaResultFormat(AthenaResultFormat value);
} // namespace AthenaResultFormatMapper
} // namespace Model
} // namespace SageMaker
} // namespace Aws
