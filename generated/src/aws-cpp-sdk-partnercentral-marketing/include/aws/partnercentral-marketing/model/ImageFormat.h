/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/partnercentral-marketing/PartnerCentralMarketing_EXPORTS.h>

namespace Aws {
namespace PartnerCentralMarketing {
namespace Model {
enum class ImageFormat { NOT_SET, PNG, JPEG };

namespace ImageFormatMapper {
AWS_PARTNERCENTRALMARKETING_API ImageFormat GetImageFormatForName(const Aws::String& name);

AWS_PARTNERCENTRALMARKETING_API Aws::String GetNameForImageFormat(ImageFormat value);
}  // namespace ImageFormatMapper
}  // namespace Model
}  // namespace PartnerCentralMarketing
}  // namespace Aws
