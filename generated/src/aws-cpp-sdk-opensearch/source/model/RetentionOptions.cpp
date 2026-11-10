/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/opensearch/model/RetentionOptions.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace OpenSearchService {
namespace Model {

RetentionOptions::RetentionOptions(JsonView jsonValue) { *this = jsonValue; }

RetentionOptions& RetentionOptions::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("RetentionInHours")) {
    m_retentionInHours = jsonValue.GetInteger("RetentionInHours");
    m_retentionInHoursHasBeenSet = true;
  }
  if (jsonValue.ValueExists("RetentionAction")) {
    m_retentionAction = RetentionActionMapper::GetRetentionActionForName(jsonValue.GetString("RetentionAction"));
    m_retentionActionHasBeenSet = true;
  }
  return *this;
}

JsonValue RetentionOptions::Jsonize() const {
  JsonValue payload;

  if (m_retentionInHoursHasBeenSet) {
    payload.WithInteger("RetentionInHours", m_retentionInHours);
  }

  if (m_retentionActionHasBeenSet) {
    payload.WithString("RetentionAction", RetentionActionMapper::GetNameForRetentionAction(m_retentionAction));
  }

  return payload;
}

}  // namespace Model
}  // namespace OpenSearchService
}  // namespace Aws
