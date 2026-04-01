/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/securityagent/model/ArtifactType.h>

using namespace Aws::Utils;

namespace Aws {
namespace SecurityAgent {
namespace Model {
namespace ArtifactTypeMapper {

static const int TXT_HASH = HashingUtils::HashString("TXT");
static const int PNG_HASH = HashingUtils::HashString("PNG");
static const int JPEG_HASH = HashingUtils::HashString("JPEG");
static const int MD_HASH = HashingUtils::HashString("MD");
static const int PDF_HASH = HashingUtils::HashString("PDF");
static const int DOCX_HASH = HashingUtils::HashString("DOCX");
static const int DOC_HASH = HashingUtils::HashString("DOC");
static const int JSON_HASH = HashingUtils::HashString("JSON");
static const int YAML_HASH = HashingUtils::HashString("YAML");

ArtifactType GetArtifactTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == TXT_HASH) {
    return ArtifactType::TXT;
  } else if (hashCode == PNG_HASH) {
    return ArtifactType::PNG;
  } else if (hashCode == JPEG_HASH) {
    return ArtifactType::JPEG;
  } else if (hashCode == MD_HASH) {
    return ArtifactType::MD;
  } else if (hashCode == PDF_HASH) {
    return ArtifactType::PDF;
  } else if (hashCode == DOCX_HASH) {
    return ArtifactType::DOCX;
  } else if (hashCode == DOC_HASH) {
    return ArtifactType::DOC;
  } else if (hashCode == JSON_HASH) {
    return ArtifactType::JSON;
  } else if (hashCode == YAML_HASH) {
    return ArtifactType::YAML;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ArtifactType>(hashCode);
  }

  return ArtifactType::NOT_SET;
}

Aws::String GetNameForArtifactType(ArtifactType enumValue) {
  switch (enumValue) {
    case ArtifactType::NOT_SET:
      return {};
    case ArtifactType::TXT:
      return "TXT";
    case ArtifactType::PNG:
      return "PNG";
    case ArtifactType::JPEG:
      return "JPEG";
    case ArtifactType::MD:
      return "MD";
    case ArtifactType::PDF:
      return "PDF";
    case ArtifactType::DOCX:
      return "DOCX";
    case ArtifactType::DOC:
      return "DOC";
    case ArtifactType::JSON:
      return "JSON";
    case ArtifactType::YAML:
      return "YAML";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ArtifactTypeMapper
}  // namespace Model
}  // namespace SecurityAgent
}  // namespace Aws
