/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/resiliencehubv2/model/SystemSummary.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace resiliencehubv2 {
namespace Model {

SystemSummary::SystemSummary(JsonView jsonValue) { *this = jsonValue; }

SystemSummary& SystemSummary::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("systemId")) {
    m_systemId = jsonValue.GetString("systemId");
    m_systemIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("name")) {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("systemArn")) {
    m_systemArn = jsonValue.GetString("systemArn");
    m_systemArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("userJourneysCount")) {
    m_userJourneysCount = jsonValue.GetInteger("userJourneysCount");
    m_userJourneysCountHasBeenSet = true;
  }
  if (jsonValue.ValueExists("servicesCount")) {
    m_servicesCount = jsonValue.GetInteger("servicesCount");
    m_servicesCountHasBeenSet = true;
  }
  if (jsonValue.ValueExists("organizationId")) {
    m_organizationId = jsonValue.GetString("organizationId");
    m_organizationIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ouId")) {
    m_ouId = jsonValue.GetString("ouId");
    m_ouIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("createdAt")) {
    m_createdAt = jsonValue.GetDouble("createdAt");
    m_createdAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("updatedAt")) {
    m_updatedAt = jsonValue.GetDouble("updatedAt");
    m_updatedAtHasBeenSet = true;
  }
  return *this;
}

JsonValue SystemSummary::Jsonize() const {
  JsonValue payload;

  if (m_systemIdHasBeenSet) {
    payload.WithString("systemId", m_systemId);
  }

  if (m_nameHasBeenSet) {
    payload.WithString("name", m_name);
  }

  if (m_systemArnHasBeenSet) {
    payload.WithString("systemArn", m_systemArn);
  }

  if (m_userJourneysCountHasBeenSet) {
    payload.WithInteger("userJourneysCount", m_userJourneysCount);
  }

  if (m_servicesCountHasBeenSet) {
    payload.WithInteger("servicesCount", m_servicesCount);
  }

  if (m_organizationIdHasBeenSet) {
    payload.WithString("organizationId", m_organizationId);
  }

  if (m_ouIdHasBeenSet) {
    payload.WithString("ouId", m_ouId);
  }

  if (m_createdAtHasBeenSet) {
    payload.WithDouble("createdAt", m_createdAt.SecondsWithMSPrecision());
  }

  if (m_updatedAtHasBeenSet) {
    payload.WithDouble("updatedAt", m_updatedAt.SecondsWithMSPrecision());
  }

  return payload;
}

}  // namespace Model
}  // namespace resiliencehubv2
}  // namespace Aws
