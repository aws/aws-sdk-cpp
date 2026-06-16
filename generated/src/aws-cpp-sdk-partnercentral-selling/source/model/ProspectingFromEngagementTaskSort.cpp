/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/partnercentral-selling/model/ProspectingFromEngagementTaskSort.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace PartnerCentralSelling {
namespace Model {

ProspectingFromEngagementTaskSort::ProspectingFromEngagementTaskSort(JsonView jsonValue) { *this = jsonValue; }

ProspectingFromEngagementTaskSort& ProspectingFromEngagementTaskSort::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("SortOrder")) {
    m_sortOrder = SortOrderMapper::GetSortOrderForName(jsonValue.GetString("SortOrder"));
    m_sortOrderHasBeenSet = true;
  }
  if (jsonValue.ValueExists("SortBy")) {
    m_sortBy = ProspectingFromEngagementTaskSortNameMapper::GetProspectingFromEngagementTaskSortNameForName(jsonValue.GetString("SortBy"));
    m_sortByHasBeenSet = true;
  }
  return *this;
}

JsonValue ProspectingFromEngagementTaskSort::Jsonize() const {
  JsonValue payload;

  if (m_sortOrderHasBeenSet) {
    payload.WithString("SortOrder", SortOrderMapper::GetNameForSortOrder(m_sortOrder));
  }

  if (m_sortByHasBeenSet) {
    payload.WithString("SortBy", ProspectingFromEngagementTaskSortNameMapper::GetNameForProspectingFromEngagementTaskSortName(m_sortBy));
  }

  return payload;
}

}  // namespace Model
}  // namespace PartnerCentralSelling
}  // namespace Aws
