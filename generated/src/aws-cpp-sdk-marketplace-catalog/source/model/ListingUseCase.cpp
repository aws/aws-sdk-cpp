/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/marketplace-catalog/model/ListingUseCase.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace MarketplaceCatalog {
namespace Model {

ListingUseCase::ListingUseCase(JsonView jsonValue) { *this = jsonValue; }

ListingUseCase& ListingUseCase::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Id")) {
    m_id = jsonValue.GetString("Id");
    m_idHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Rank")) {
    m_rank = jsonValue.GetInteger("Rank");
    m_rankHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Name")) {
    m_name = jsonValue.GetString("Name");
    m_nameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Group")) {
    m_group = jsonValue.GetString("Group");
    m_groupHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Subgroup")) {
    m_subgroup = jsonValue.GetString("Subgroup");
    m_subgroupHasBeenSet = true;
  }
  if (jsonValue.ValueExists("UseCaseDetails")) {
    m_useCaseDetails = jsonValue.GetString("UseCaseDetails");
    m_useCaseDetailsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Rationale")) {
    m_rationale = jsonValue.GetString("Rationale");
    m_rationaleHasBeenSet = true;
  }
  return *this;
}

JsonValue ListingUseCase::Jsonize() const {
  JsonValue payload;

  if (m_idHasBeenSet) {
    payload.WithString("Id", m_id);
  }

  if (m_rankHasBeenSet) {
    payload.WithInteger("Rank", m_rank);
  }

  if (m_nameHasBeenSet) {
    payload.WithString("Name", m_name);
  }

  if (m_groupHasBeenSet) {
    payload.WithString("Group", m_group);
  }

  if (m_subgroupHasBeenSet) {
    payload.WithString("Subgroup", m_subgroup);
  }

  if (m_useCaseDetailsHasBeenSet) {
    payload.WithString("UseCaseDetails", m_useCaseDetails);
  }

  if (m_rationaleHasBeenSet) {
    payload.WithString("Rationale", m_rationale);
  }

  return payload;
}

}  // namespace Model
}  // namespace MarketplaceCatalog
}  // namespace Aws
