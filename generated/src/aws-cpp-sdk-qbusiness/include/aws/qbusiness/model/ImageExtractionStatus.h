/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/qbusiness/QBusiness_EXPORTS.h>

namespace Aws {
namespace QBusiness {
namespace Model {
enum class ImageExtractionStatus { NOT_SET, ENABLED, DISABLED };

namespace ImageExtractionStatusMapper {
AWS_QBUSINESS_API ImageExtractionStatus GetImageExtractionStatusForName(const Aws::String& name);

AWS_QBUSINESS_API Aws::String GetNameForImageExtractionStatus(ImageExtractionStatus value);
}  // namespace ImageExtractionStatusMapper
}  // namespace Model
}  // namespace QBusiness
}  // namespace Aws
