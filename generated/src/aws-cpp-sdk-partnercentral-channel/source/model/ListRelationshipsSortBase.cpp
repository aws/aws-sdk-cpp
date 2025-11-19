/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/partnercentral-channel/model/ListRelationshipsSortBase.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace PartnerCentralChannel {
namespace Model {

ListRelationshipsSortBase::ListRelationshipsSortBase(JsonView jsonValue) { *this = jsonValue; }

ListRelationshipsSortBase& ListRelationshipsSortBase::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("sortOrder")) {
    m_sortOrder = SortOrderMapper::GetSortOrderForName(jsonValue.GetString("sortOrder"));
    m_sortOrderHasBeenSet = true;
  }
  if (jsonValue.ValueExists("sortBy")) {
    m_sortBy = ListRelationshipsSortNameMapper::GetListRelationshipsSortNameForName(jsonValue.GetString("sortBy"));
    m_sortByHasBeenSet = true;
  }
  return *this;
}

JsonValue ListRelationshipsSortBase::Jsonize() const {
  JsonValue payload;

  if (m_sortOrderHasBeenSet) {
    payload.WithString("sortOrder", SortOrderMapper::GetNameForSortOrder(m_sortOrder));
  }

  if (m_sortByHasBeenSet) {
    payload.WithString("sortBy", ListRelationshipsSortNameMapper::GetNameForListRelationshipsSortName(m_sortBy));
  }

  return payload;
}

}  // namespace Model
}  // namespace PartnerCentralChannel
}  // namespace Aws
