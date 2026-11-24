/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/marketplace-discovery/model/CaseStudyResourceType.h>

using namespace Aws::Utils;

namespace Aws {
namespace MarketplaceDiscovery {
namespace Model {
namespace CaseStudyResourceTypeMapper {

static const int CASE_STUDY_WEBSITE_HASH = HashingUtils::HashString("CASE_STUDY_WEBSITE");

CaseStudyResourceType GetCaseStudyResourceTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == CASE_STUDY_WEBSITE_HASH) {
    return CaseStudyResourceType::CASE_STUDY_WEBSITE;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<CaseStudyResourceType>(hashCode);
  }

  return CaseStudyResourceType::NOT_SET;
}

Aws::String GetNameForCaseStudyResourceType(CaseStudyResourceType enumValue) {
  switch (enumValue) {
    case CaseStudyResourceType::NOT_SET:
      return {};
    case CaseStudyResourceType::CASE_STUDY_WEBSITE:
      return "CASE_STUDY_WEBSITE";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace CaseStudyResourceTypeMapper
}  // namespace Model
}  // namespace MarketplaceDiscovery
}  // namespace Aws
