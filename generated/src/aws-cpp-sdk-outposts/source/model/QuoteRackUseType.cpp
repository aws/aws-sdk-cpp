/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/outposts/model/QuoteRackUseType.h>

using namespace Aws::Utils;

namespace Aws {
namespace Outposts {
namespace Model {
namespace QuoteRackUseTypeMapper {

static const int NETWORKING_HASH = HashingUtils::HashString("NETWORKING");
static const int COMPUTE_HASH = HashingUtils::HashString("COMPUTE");

QuoteRackUseType GetQuoteRackUseTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == NETWORKING_HASH) {
    return QuoteRackUseType::NETWORKING;
  } else if (hashCode == COMPUTE_HASH) {
    return QuoteRackUseType::COMPUTE;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<QuoteRackUseType>(hashCode);
  }

  return QuoteRackUseType::NOT_SET;
}

Aws::String GetNameForQuoteRackUseType(QuoteRackUseType enumValue) {
  switch (enumValue) {
    case QuoteRackUseType::NOT_SET:
      return {};
    case QuoteRackUseType::NETWORKING:
      return "NETWORKING";
    case QuoteRackUseType::COMPUTE:
      return "COMPUTE";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace QuoteRackUseTypeMapper
}  // namespace Model
}  // namespace Outposts
}  // namespace Aws
