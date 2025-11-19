/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/states/model/InspectionErrorDetails.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SFN {
namespace Model {

InspectionErrorDetails::InspectionErrorDetails(JsonView jsonValue) { *this = jsonValue; }

InspectionErrorDetails& InspectionErrorDetails::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("catchIndex")) {
    m_catchIndex = jsonValue.GetInteger("catchIndex");
    m_catchIndexHasBeenSet = true;
  }
  if (jsonValue.ValueExists("retryIndex")) {
    m_retryIndex = jsonValue.GetInteger("retryIndex");
    m_retryIndexHasBeenSet = true;
  }
  if (jsonValue.ValueExists("retryBackoffIntervalSeconds")) {
    m_retryBackoffIntervalSeconds = jsonValue.GetInteger("retryBackoffIntervalSeconds");
    m_retryBackoffIntervalSecondsHasBeenSet = true;
  }
  return *this;
}

JsonValue InspectionErrorDetails::Jsonize() const {
  JsonValue payload;

  if (m_catchIndexHasBeenSet) {
    payload.WithInteger("catchIndex", m_catchIndex);
  }

  if (m_retryIndexHasBeenSet) {
    payload.WithInteger("retryIndex", m_retryIndex);
  }

  if (m_retryBackoffIntervalSecondsHasBeenSet) {
    payload.WithInteger("retryBackoffIntervalSeconds", m_retryBackoffIntervalSeconds);
  }

  return payload;
}

}  // namespace Model
}  // namespace SFN
}  // namespace Aws
