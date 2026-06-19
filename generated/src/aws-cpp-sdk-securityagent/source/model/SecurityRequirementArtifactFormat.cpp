/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/securityagent/model/SecurityRequirementArtifactFormat.h>

using namespace Aws::Utils;

namespace Aws {
namespace SecurityAgent {
namespace Model {
namespace SecurityRequirementArtifactFormatMapper {

static const int MD_HASH = HashingUtils::HashString("MD");
static const int PDF_HASH = HashingUtils::HashString("PDF");
static const int TXT_HASH = HashingUtils::HashString("TXT");
static const int DOCX_HASH = HashingUtils::HashString("DOCX");
static const int DOC_HASH = HashingUtils::HashString("DOC");

SecurityRequirementArtifactFormat GetSecurityRequirementArtifactFormatForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == MD_HASH) {
    return SecurityRequirementArtifactFormat::MD;
  } else if (hashCode == PDF_HASH) {
    return SecurityRequirementArtifactFormat::PDF;
  } else if (hashCode == TXT_HASH) {
    return SecurityRequirementArtifactFormat::TXT;
  } else if (hashCode == DOCX_HASH) {
    return SecurityRequirementArtifactFormat::DOCX;
  } else if (hashCode == DOC_HASH) {
    return SecurityRequirementArtifactFormat::DOC;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<SecurityRequirementArtifactFormat>(hashCode);
  }

  return SecurityRequirementArtifactFormat::NOT_SET;
}

Aws::String GetNameForSecurityRequirementArtifactFormat(SecurityRequirementArtifactFormat enumValue) {
  switch (enumValue) {
    case SecurityRequirementArtifactFormat::NOT_SET:
      return {};
    case SecurityRequirementArtifactFormat::MD:
      return "MD";
    case SecurityRequirementArtifactFormat::PDF:
      return "PDF";
    case SecurityRequirementArtifactFormat::TXT:
      return "TXT";
    case SecurityRequirementArtifactFormat::DOCX:
      return "DOCX";
    case SecurityRequirementArtifactFormat::DOC:
      return "DOC";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace SecurityRequirementArtifactFormatMapper
}  // namespace Model
}  // namespace SecurityAgent
}  // namespace Aws
