/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/taxsettings/model/ChileDocumentType.h>

using namespace Aws::Utils;

namespace Aws {
namespace TaxSettings {
namespace Model {
namespace ChileDocumentTypeMapper {

static const int Invoice_HASH = HashingUtils::HashString("Invoice");
static const int Receipt_HASH = HashingUtils::HashString("Receipt");

ChileDocumentType GetChileDocumentTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == Invoice_HASH) {
    return ChileDocumentType::Invoice;
  } else if (hashCode == Receipt_HASH) {
    return ChileDocumentType::Receipt;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ChileDocumentType>(hashCode);
  }

  return ChileDocumentType::NOT_SET;
}

Aws::String GetNameForChileDocumentType(ChileDocumentType enumValue) {
  switch (enumValue) {
    case ChileDocumentType::NOT_SET:
      return {};
    case ChileDocumentType::Invoice:
      return "Invoice";
    case ChileDocumentType::Receipt:
      return "Receipt";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ChileDocumentTypeMapper
}  // namespace Model
}  // namespace TaxSettings
}  // namespace Aws
