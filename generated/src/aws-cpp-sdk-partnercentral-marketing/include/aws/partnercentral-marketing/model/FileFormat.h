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
enum class FileFormat { NOT_SET, PDF, DOCX, PPTX, HTML, IMAGE };

namespace FileFormatMapper {
AWS_PARTNERCENTRALMARKETING_API FileFormat GetFileFormatForName(const Aws::String& name);

AWS_PARTNERCENTRALMARKETING_API Aws::String GetNameForFileFormat(FileFormat value);
}  // namespace FileFormatMapper
}  // namespace Model
}  // namespace PartnerCentralMarketing
}  // namespace Aws
