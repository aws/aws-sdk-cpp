/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/resiliencehubv2/model/Assertion.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace resiliencehubv2 {
namespace Model {

Assertion::Assertion(JsonView jsonValue) { *this = jsonValue; }

Assertion& Assertion::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("serviceArn")) {
    m_serviceArn = jsonValue.GetString("serviceArn");
    m_serviceArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("assertionId")) {
    m_assertionId = jsonValue.GetString("assertionId");
    m_assertionIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("text")) {
    m_text = jsonValue.GetString("text");
    m_textHasBeenSet = true;
  }
  if (jsonValue.ValueExists("source")) {
    m_source = AssertionSourceMapper::GetAssertionSourceForName(jsonValue.GetString("source"));
    m_sourceHasBeenSet = true;
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

JsonValue Assertion::Jsonize() const {
  JsonValue payload;

  if (m_serviceArnHasBeenSet) {
    payload.WithString("serviceArn", m_serviceArn);
  }

  if (m_assertionIdHasBeenSet) {
    payload.WithString("assertionId", m_assertionId);
  }

  if (m_textHasBeenSet) {
    payload.WithString("text", m_text);
  }

  if (m_sourceHasBeenSet) {
    payload.WithString("source", AssertionSourceMapper::GetNameForAssertionSource(m_source));
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
