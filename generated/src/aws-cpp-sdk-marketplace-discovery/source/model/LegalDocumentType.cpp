/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/marketplace-discovery/model/LegalDocumentType.h>

using namespace Aws::Utils;

namespace Aws {
namespace MarketplaceDiscovery {
namespace Model {
namespace LegalDocumentTypeMapper {

static const int CustomEula_HASH = HashingUtils::HashString("CustomEula");
static const int CustomDsa_HASH = HashingUtils::HashString("CustomDsa");
static const int EnterpriseEula_HASH = HashingUtils::HashString("EnterpriseEula");
static const int StandardEula_HASH = HashingUtils::HashString("StandardEula");
static const int StandardDsa_HASH = HashingUtils::HashString("StandardDsa");

LegalDocumentType GetLegalDocumentTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == CustomEula_HASH) {
    return LegalDocumentType::CustomEula;
  } else if (hashCode == CustomDsa_HASH) {
    return LegalDocumentType::CustomDsa;
  } else if (hashCode == EnterpriseEula_HASH) {
    return LegalDocumentType::EnterpriseEula;
  } else if (hashCode == StandardEula_HASH) {
    return LegalDocumentType::StandardEula;
  } else if (hashCode == StandardDsa_HASH) {
    return LegalDocumentType::StandardDsa;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<LegalDocumentType>(hashCode);
  }

  return LegalDocumentType::NOT_SET;
}

Aws::String GetNameForLegalDocumentType(LegalDocumentType enumValue) {
  switch (enumValue) {
    case LegalDocumentType::NOT_SET:
      return {};
    case LegalDocumentType::CustomEula:
      return "CustomEula";
    case LegalDocumentType::CustomDsa:
      return "CustomDsa";
    case LegalDocumentType::EnterpriseEula:
      return "EnterpriseEula";
    case LegalDocumentType::StandardEula:
      return "StandardEula";
    case LegalDocumentType::StandardDsa:
      return "StandardDsa";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace LegalDocumentTypeMapper
}  // namespace Model
}  // namespace MarketplaceDiscovery
}  // namespace Aws
