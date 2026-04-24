/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/partnercentral-benefits/model/FileType.h>

using namespace Aws::Utils;

namespace Aws {
namespace PartnerCentralBenefits {
namespace Model {
namespace FileTypeMapper {

static const int application_msword_HASH = HashingUtils::HashString("application/msword");
static const int application_vnd_openxmlformats_officedocument_wordprocessingml_document_HASH =
    HashingUtils::HashString("application/vnd.openxmlformats-officedocument.wordprocessingml.document");
static const int application_vnd_openxmlformats_officedocument_spreadsheetml_sheet_HASH =
    HashingUtils::HashString("application/vnd.openxmlformats-officedocument.spreadsheetml.sheet");
static const int application_vnd_openxmlformats_officedocument_presentationml_presentation_HASH =
    HashingUtils::HashString("application/vnd.openxmlformats-officedocument.presentationml.presentation");
static const int application_pdf_HASH = HashingUtils::HashString("application/pdf");
static const int image_png_HASH = HashingUtils::HashString("image/png");
static const int image_jpeg_HASH = HashingUtils::HashString("image/jpeg");
static const int image_svg_xml_HASH = HashingUtils::HashString("image/svg+xml");
static const int text_csv_HASH = HashingUtils::HashString("text/csv");

FileType GetFileTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == application_msword_HASH) {
    return FileType::application_msword;
  } else if (hashCode == application_vnd_openxmlformats_officedocument_wordprocessingml_document_HASH) {
    return FileType::application_vnd_openxmlformats_officedocument_wordprocessingml_document;
  } else if (hashCode == application_vnd_openxmlformats_officedocument_spreadsheetml_sheet_HASH) {
    return FileType::application_vnd_openxmlformats_officedocument_spreadsheetml_sheet;
  } else if (hashCode == application_vnd_openxmlformats_officedocument_presentationml_presentation_HASH) {
    return FileType::application_vnd_openxmlformats_officedocument_presentationml_presentation;
  } else if (hashCode == application_pdf_HASH) {
    return FileType::application_pdf;
  } else if (hashCode == image_png_HASH) {
    return FileType::image_png;
  } else if (hashCode == image_jpeg_HASH) {
    return FileType::image_jpeg;
  } else if (hashCode == image_svg_xml_HASH) {
    return FileType::image_svg_xml;
  } else if (hashCode == text_csv_HASH) {
    return FileType::text_csv;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<FileType>(hashCode);
  }

  return FileType::NOT_SET;
}

Aws::String GetNameForFileType(FileType enumValue) {
  switch (enumValue) {
    case FileType::NOT_SET:
      return {};
    case FileType::application_msword:
      return "application/msword";
    case FileType::application_vnd_openxmlformats_officedocument_wordprocessingml_document:
      return "application/vnd.openxmlformats-officedocument.wordprocessingml.document";
    case FileType::application_vnd_openxmlformats_officedocument_spreadsheetml_sheet:
      return "application/vnd.openxmlformats-officedocument.spreadsheetml.sheet";
    case FileType::application_vnd_openxmlformats_officedocument_presentationml_presentation:
      return "application/vnd.openxmlformats-officedocument.presentationml.presentation";
    case FileType::application_pdf:
      return "application/pdf";
    case FileType::image_png:
      return "image/png";
    case FileType::image_jpeg:
      return "image/jpeg";
    case FileType::image_svg_xml:
      return "image/svg+xml";
    case FileType::text_csv:
      return "text/csv";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace FileTypeMapper
}  // namespace Model
}  // namespace PartnerCentralBenefits
}  // namespace Aws
