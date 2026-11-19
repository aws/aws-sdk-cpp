/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/partnercentral-selling/model/SortableField.h>

using namespace Aws::Utils;

namespace Aws {
namespace PartnerCentralSelling {
namespace Model {
namespace SortableFieldMapper {

static const int COMPANY_NAME_HASH = HashingUtils::HashString("COMPANY_NAME");
static const int CREATED_DATE_HASH = HashingUtils::HashString("CREATED_DATE");
static const int LAST_MODIFIED_DATE_HASH = HashingUtils::HashString("LAST_MODIFIED_DATE");
static const int MARKETPLACE_ENGAGEMENT_SCORE_HASH = HashingUtils::HashString("MARKETPLACE_ENGAGEMENT_SCORE");
static const int SOLUTION_SCORE_HASH = HashingUtils::HashString("SOLUTION_SCORE");

SortableField GetSortableFieldForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == COMPANY_NAME_HASH) {
    return SortableField::COMPANY_NAME;
  } else if (hashCode == CREATED_DATE_HASH) {
    return SortableField::CREATED_DATE;
  } else if (hashCode == LAST_MODIFIED_DATE_HASH) {
    return SortableField::LAST_MODIFIED_DATE;
  } else if (hashCode == MARKETPLACE_ENGAGEMENT_SCORE_HASH) {
    return SortableField::MARKETPLACE_ENGAGEMENT_SCORE;
  } else if (hashCode == SOLUTION_SCORE_HASH) {
    return SortableField::SOLUTION_SCORE;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<SortableField>(hashCode);
  }

  return SortableField::NOT_SET;
}

Aws::String GetNameForSortableField(SortableField enumValue) {
  switch (enumValue) {
    case SortableField::NOT_SET:
      return {};
    case SortableField::COMPANY_NAME:
      return "COMPANY_NAME";
    case SortableField::CREATED_DATE:
      return "CREATED_DATE";
    case SortableField::LAST_MODIFIED_DATE:
      return "LAST_MODIFIED_DATE";
    case SortableField::MARKETPLACE_ENGAGEMENT_SCORE:
      return "MARKETPLACE_ENGAGEMENT_SCORE";
    case SortableField::SOLUTION_SCORE:
      return "SOLUTION_SCORE";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace SortableFieldMapper
}  // namespace Model
}  // namespace PartnerCentralSelling
}  // namespace Aws
