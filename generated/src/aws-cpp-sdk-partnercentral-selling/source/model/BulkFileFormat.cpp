/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/partnercentral-selling/model/BulkFileFormat.h>

using namespace Aws::Utils;

namespace Aws {
namespace PartnerCentralSelling {
namespace Model {
namespace BulkFileFormatMapper {

static const int CSV_HASH = HashingUtils::HashString("CSV");

BulkFileFormat GetBulkFileFormatForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == CSV_HASH) {
    return BulkFileFormat::CSV;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<BulkFileFormat>(hashCode);
  }

  return BulkFileFormat::NOT_SET;
}

Aws::String GetNameForBulkFileFormat(BulkFileFormat enumValue) {
  switch (enumValue) {
    case BulkFileFormat::NOT_SET:
      return {};
    case BulkFileFormat::CSV:
      return "CSV";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace BulkFileFormatMapper
}  // namespace Model
}  // namespace PartnerCentralSelling
}  // namespace Aws
