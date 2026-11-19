/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/partnercentral-selling/model/EngagementSearchSummary.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace PartnerCentralSelling {
namespace Model {

EngagementSearchSummary::EngagementSearchSummary(JsonView jsonValue) { *this = jsonValue; }

EngagementSearchSummary& EngagementSearchSummary::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Id")) {
    m_id = jsonValue.GetString("Id");
    m_idHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Arn")) {
    m_arn = jsonValue.GetString("Arn");
    m_arnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Title")) {
    m_title = jsonValue.GetString("Title");
    m_titleHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Description")) {
    m_description = jsonValue.GetString("Description");
    m_descriptionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CreatedAt")) {
    m_createdAt = jsonValue.GetString("CreatedAt");
    m_createdAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CreatedBy")) {
    m_createdBy = jsonValue.GetString("CreatedBy");
    m_createdByHasBeenSet = true;
  }
  if (jsonValue.ValueExists("MemberCount")) {
    m_memberCount = jsonValue.GetInteger("MemberCount");
    m_memberCountHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ModifiedAt")) {
    m_modifiedAt = jsonValue.GetString("ModifiedAt");
    m_modifiedAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ModifiedBy")) {
    m_modifiedBy = jsonValue.GetString("ModifiedBy");
    m_modifiedByHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Contexts")) {
    Aws::Utils::Array<JsonView> contextsJsonList = jsonValue.GetArray("Contexts");
    for (unsigned contextsIndex = 0; contextsIndex < contextsJsonList.GetLength(); ++contextsIndex) {
      m_contexts.push_back(contextsJsonList[contextsIndex].AsObject());
    }
    m_contextsHasBeenSet = true;
  }
  return *this;
}

JsonValue EngagementSearchSummary::Jsonize() const {
  JsonValue payload;

  if (m_idHasBeenSet) {
    payload.WithString("Id", m_id);
  }

  if (m_arnHasBeenSet) {
    payload.WithString("Arn", m_arn);
  }

  if (m_titleHasBeenSet) {
    payload.WithString("Title", m_title);
  }

  if (m_descriptionHasBeenSet) {
    payload.WithString("Description", m_description);
  }

  if (m_createdAtHasBeenSet) {
    payload.WithString("CreatedAt", m_createdAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if (m_createdByHasBeenSet) {
    payload.WithString("CreatedBy", m_createdBy);
  }

  if (m_memberCountHasBeenSet) {
    payload.WithInteger("MemberCount", m_memberCount);
  }

  if (m_modifiedAtHasBeenSet) {
    payload.WithString("ModifiedAt", m_modifiedAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if (m_modifiedByHasBeenSet) {
    payload.WithString("ModifiedBy", m_modifiedBy);
  }

  if (m_contextsHasBeenSet) {
    Aws::Utils::Array<JsonValue> contextsJsonList(m_contexts.size());
    for (unsigned contextsIndex = 0; contextsIndex < contextsJsonList.GetLength(); ++contextsIndex) {
      contextsJsonList[contextsIndex].AsObject(m_contexts[contextsIndex].Jsonize());
    }
    payload.WithArray("Contexts", std::move(contextsJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace PartnerCentralSelling
}  // namespace Aws
