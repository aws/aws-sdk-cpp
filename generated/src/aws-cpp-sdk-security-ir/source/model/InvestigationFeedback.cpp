/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/security-ir/model/InvestigationFeedback.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SecurityIR {
namespace Model {

InvestigationFeedback::InvestigationFeedback(JsonView jsonValue) { *this = jsonValue; }

InvestigationFeedback& InvestigationFeedback::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("usefulness")) {
    m_usefulness = UsefulnessRatingMapper::GetUsefulnessRatingForName(jsonValue.GetString("usefulness"));
    m_usefulnessHasBeenSet = true;
  }
  if (jsonValue.ValueExists("comment")) {
    m_comment = jsonValue.GetString("comment");
    m_commentHasBeenSet = true;
  }
  if (jsonValue.ValueExists("submittedAt")) {
    m_submittedAt = jsonValue.GetDouble("submittedAt");
    m_submittedAtHasBeenSet = true;
  }
  return *this;
}

JsonValue InvestigationFeedback::Jsonize() const {
  JsonValue payload;

  if (m_usefulnessHasBeenSet) {
    payload.WithString("usefulness", UsefulnessRatingMapper::GetNameForUsefulnessRating(m_usefulness));
  }

  if (m_commentHasBeenSet) {
    payload.WithString("comment", m_comment);
  }

  if (m_submittedAtHasBeenSet) {
    payload.WithDouble("submittedAt", m_submittedAt.SecondsWithMSPrecision());
  }

  return payload;
}

}  // namespace Model
}  // namespace SecurityIR
}  // namespace Aws
