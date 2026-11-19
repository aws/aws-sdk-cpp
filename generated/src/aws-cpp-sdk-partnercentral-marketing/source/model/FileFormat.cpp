/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/partnercentral-marketing/model/FileFormat.h>

using namespace Aws::Utils;

namespace Aws {
namespace PartnerCentralMarketing {
namespace Model {
namespace FileFormatMapper {

static const int PDF_HASH = HashingUtils::HashString("PDF");
static const int DOCX_HASH = HashingUtils::HashString("DOCX");
static const int PPTX_HASH = HashingUtils::HashString("PPTX");
static const int HTML_HASH = HashingUtils::HashString("HTML");
static const int IMAGE_HASH = HashingUtils::HashString("IMAGE");

FileFormat GetFileFormatForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == PDF_HASH) {
    return FileFormat::PDF;
  } else if (hashCode == DOCX_HASH) {
    return FileFormat::DOCX;
  } else if (hashCode == PPTX_HASH) {
    return FileFormat::PPTX;
  } else if (hashCode == HTML_HASH) {
    return FileFormat::HTML;
  } else if (hashCode == IMAGE_HASH) {
    return FileFormat::IMAGE;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<FileFormat>(hashCode);
  }

  return FileFormat::NOT_SET;
}

Aws::String GetNameForFileFormat(FileFormat enumValue) {
  switch (enumValue) {
    case FileFormat::NOT_SET:
      return {};
    case FileFormat::PDF:
      return "PDF";
    case FileFormat::DOCX:
      return "DOCX";
    case FileFormat::PPTX:
      return "PPTX";
    case FileFormat::HTML:
      return "HTML";
    case FileFormat::IMAGE:
      return "IMAGE";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace FileFormatMapper
}  // namespace Model
}  // namespace PartnerCentralMarketing
}  // namespace Aws
