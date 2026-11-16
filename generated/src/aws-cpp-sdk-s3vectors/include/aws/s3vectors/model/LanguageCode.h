/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/s3vectors/S3Vectors_EXPORTS.h>

namespace Aws {
namespace S3Vectors {
namespace Model {
enum class LanguageCode { NOT_SET, en, fr, es, pt, it, de, nl, zh, ja, ko };

namespace LanguageCodeMapper {
AWS_S3VECTORS_API LanguageCode GetLanguageCodeForName(const Aws::String& name);

AWS_S3VECTORS_API Aws::String GetNameForLanguageCode(LanguageCode value);
}  // namespace LanguageCodeMapper
}  // namespace Model
}  // namespace S3Vectors
}  // namespace Aws
