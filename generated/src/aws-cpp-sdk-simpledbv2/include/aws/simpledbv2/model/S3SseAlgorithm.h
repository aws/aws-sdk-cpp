/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/simpledbv2/SimpleDBv2_EXPORTS.h>

namespace Aws {
namespace SimpleDBv2 {
namespace Model {
enum class S3SseAlgorithm { NOT_SET, AES256, KMS };

namespace S3SseAlgorithmMapper {
AWS_SIMPLEDBV2_API S3SseAlgorithm GetS3SseAlgorithmForName(const Aws::String& name);

AWS_SIMPLEDBV2_API Aws::String GetNameForS3SseAlgorithm(S3SseAlgorithm value);
}  // namespace S3SseAlgorithmMapper
}  // namespace Model
}  // namespace SimpleDBv2
}  // namespace Aws
