/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/wellarchitected/model/ContextSummary.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace WellArchitected {
namespace Model {

ContextSummary::ContextSummary(JsonView jsonValue) { *this = jsonValue; }

ContextSummary& ContextSummary::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("id")) {
    m_id = jsonValue.GetString("id");
    m_idHasBeenSet = true;
  }
  if (jsonValue.ValueExists("profileArn")) {
    m_profileArn = jsonValue.GetString("profileArn");
    m_profileArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("title")) {
    m_title = jsonValue.GetString("title");
    m_titleHasBeenSet = true;
  }
  if (jsonValue.ValueExists("contextType")) {
    m_contextType = ContextTypeMapper::GetContextTypeForName(jsonValue.GetString("contextType"));
    m_contextTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("content")) {
    m_content = jsonValue.GetObject("content");
    m_contentHasBeenSet = true;
  }
  if (jsonValue.ValueExists("applicationType")) {
    m_applicationType = ApplicationTypeMapper::GetApplicationTypeForName(jsonValue.GetString("applicationType"));
    m_applicationTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("criticality")) {
    m_criticality = CriticalityMapper::GetCriticalityForName(jsonValue.GetString("criticality"));
    m_criticalityHasBeenSet = true;
  }
  if (jsonValue.ValueExists("createdBy")) {
    m_createdBy = jsonValue.GetString("createdBy");
    m_createdByHasBeenSet = true;
  }
  if (jsonValue.ValueExists("createdAt")) {
    m_createdAt = jsonValue.GetString("createdAt");
    m_createdAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("lastModifiedBy")) {
    m_lastModifiedBy = jsonValue.GetString("lastModifiedBy");
    m_lastModifiedByHasBeenSet = true;
  }
  if (jsonValue.ValueExists("lastModifiedAt")) {
    m_lastModifiedAt = jsonValue.GetString("lastModifiedAt");
    m_lastModifiedAtHasBeenSet = true;
  }
  return *this;
}

JsonValue ContextSummary::Jsonize() const {
  JsonValue payload;

  if (m_idHasBeenSet) {
    payload.WithString("id", m_id);
  }

  if (m_profileArnHasBeenSet) {
    payload.WithString("profileArn", m_profileArn);
  }

  if (m_titleHasBeenSet) {
    payload.WithString("title", m_title);
  }

  if (m_contextTypeHasBeenSet) {
    payload.WithString("contextType", ContextTypeMapper::GetNameForContextType(m_contextType));
  }

  if (m_contentHasBeenSet) {
    payload.WithObject("content", m_content.Jsonize());
  }

  if (m_applicationTypeHasBeenSet) {
    payload.WithString("applicationType", ApplicationTypeMapper::GetNameForApplicationType(m_applicationType));
  }

  if (m_criticalityHasBeenSet) {
    payload.WithString("criticality", CriticalityMapper::GetNameForCriticality(m_criticality));
  }

  if (m_createdByHasBeenSet) {
    payload.WithString("createdBy", m_createdBy);
  }

  if (m_createdAtHasBeenSet) {
    payload.WithString("createdAt", m_createdAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if (m_lastModifiedByHasBeenSet) {
    payload.WithString("lastModifiedBy", m_lastModifiedBy);
  }

  if (m_lastModifiedAtHasBeenSet) {
    payload.WithString("lastModifiedAt", m_lastModifiedAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  return payload;
}

}  // namespace Model
}  // namespace WellArchitected
}  // namespace Aws
