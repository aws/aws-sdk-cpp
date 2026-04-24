/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/mgn/model/JobLogEventData.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace mgn {
namespace Model {

JobLogEventData::JobLogEventData(JsonView jsonValue) { *this = jsonValue; }

JobLogEventData& JobLogEventData::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("sourceServerID")) {
    m_sourceServerID = jsonValue.GetString("sourceServerID");
    m_sourceServerIDHasBeenSet = true;
  }
  if (jsonValue.ValueExists("conversionServerID")) {
    m_conversionServerID = jsonValue.GetString("conversionServerID");
    m_conversionServerIDHasBeenSet = true;
  }
  if (jsonValue.ValueExists("targetInstanceID")) {
    m_targetInstanceID = jsonValue.GetString("targetInstanceID");
    m_targetInstanceIDHasBeenSet = true;
  }
  if (jsonValue.ValueExists("rawError")) {
    m_rawError = jsonValue.GetString("rawError");
    m_rawErrorHasBeenSet = true;
  }
  if (jsonValue.ValueExists("attemptCount")) {
    m_attemptCount = jsonValue.GetInteger("attemptCount");
    m_attemptCountHasBeenSet = true;
  }
  if (jsonValue.ValueExists("maxAttemptsCount")) {
    m_maxAttemptsCount = jsonValue.GetInteger("maxAttemptsCount");
    m_maxAttemptsCountHasBeenSet = true;
  }
  return *this;
}

JsonValue JobLogEventData::Jsonize() const {
  JsonValue payload;

  if (m_sourceServerIDHasBeenSet) {
    payload.WithString("sourceServerID", m_sourceServerID);
  }

  if (m_conversionServerIDHasBeenSet) {
    payload.WithString("conversionServerID", m_conversionServerID);
  }

  if (m_targetInstanceIDHasBeenSet) {
    payload.WithString("targetInstanceID", m_targetInstanceID);
  }

  if (m_rawErrorHasBeenSet) {
    payload.WithString("rawError", m_rawError);
  }

  if (m_attemptCountHasBeenSet) {
    payload.WithInteger("attemptCount", m_attemptCount);
  }

  if (m_maxAttemptsCountHasBeenSet) {
    payload.WithInteger("maxAttemptsCount", m_maxAttemptsCount);
  }

  return payload;
}

}  // namespace Model
}  // namespace mgn
}  // namespace Aws
