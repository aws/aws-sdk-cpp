/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/partnercentral-benefits/PartnerCentralBenefits_EXPORTS.h>

namespace Aws {
namespace PartnerCentralBenefits {
namespace Model {
enum class FileType {
  NOT_SET,
  application_msword,
  application_vnd_openxmlformats_officedocument_wordprocessingml_document,
  application_vnd_openxmlformats_officedocument_spreadsheetml_sheet,
  application_vnd_openxmlformats_officedocument_presentationml_presentation,
  application_pdf,
  image_png,
  image_jpeg,
  image_svg_xml,
  text_csv
};

namespace FileTypeMapper {
AWS_PARTNERCENTRALBENEFITS_API FileType GetFileTypeForName(const Aws::String& name);

AWS_PARTNERCENTRALBENEFITS_API Aws::String GetNameForFileType(FileType value);
}  // namespace FileTypeMapper
}  // namespace Model
}  // namespace PartnerCentralBenefits
}  // namespace Aws
