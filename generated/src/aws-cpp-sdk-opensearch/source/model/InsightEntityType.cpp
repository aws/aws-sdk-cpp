/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/opensearch/model/InsightEntityType.h>

using namespace Aws::Utils;

namespace Aws {
namespace OpenSearchService {
namespace Model {
namespace InsightEntityTypeMapper {

static const int Account_HASH = HashingUtils::HashString("Account");
static const int DomainName_HASH = HashingUtils::HashString("DomainName");

InsightEntityType GetInsightEntityTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == Account_HASH) {
    return InsightEntityType::Account;
  } else if (hashCode == DomainName_HASH) {
    return InsightEntityType::DomainName;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<InsightEntityType>(hashCode);
  }

  return InsightEntityType::NOT_SET;
}

Aws::String GetNameForInsightEntityType(InsightEntityType enumValue) {
  switch (enumValue) {
    case InsightEntityType::NOT_SET:
      return {};
    case InsightEntityType::Account:
      return "Account";
    case InsightEntityType::DomainName:
      return "DomainName";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace InsightEntityTypeMapper
}  // namespace Model
}  // namespace OpenSearchService
}  // namespace Aws
