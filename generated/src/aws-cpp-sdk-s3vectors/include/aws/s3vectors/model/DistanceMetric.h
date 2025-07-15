/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3vectors/S3Vectors_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace S3Vectors
{
namespace Model
{
  enum class DistanceMetric
  {
    NOT_SET,
    euclidean,
    cosine
  };

namespace DistanceMetricMapper
{
AWS_S3VECTORS_API DistanceMetric GetDistanceMetricForName(const Aws::String& name);

AWS_S3VECTORS_API Aws::String GetNameForDistanceMetric(DistanceMetric value);
} // namespace DistanceMetricMapper
} // namespace Model
} // namespace S3Vectors
} // namespace Aws
