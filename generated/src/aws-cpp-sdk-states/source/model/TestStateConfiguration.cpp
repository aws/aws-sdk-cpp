/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/states/model/TestStateConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SFN {
namespace Model {

TestStateConfiguration::TestStateConfiguration(JsonView jsonValue) { *this = jsonValue; }

TestStateConfiguration& TestStateConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("retrierRetryCount")) {
    m_retrierRetryCount = jsonValue.GetInteger("retrierRetryCount");
    m_retrierRetryCountHasBeenSet = true;
  }
  if (jsonValue.ValueExists("errorCausedByState")) {
    m_errorCausedByState = jsonValue.GetString("errorCausedByState");
    m_errorCausedByStateHasBeenSet = true;
  }
  if (jsonValue.ValueExists("mapIterationFailureCount")) {
    m_mapIterationFailureCount = jsonValue.GetInteger("mapIterationFailureCount");
    m_mapIterationFailureCountHasBeenSet = true;
  }
  if (jsonValue.ValueExists("mapItemReaderData")) {
    m_mapItemReaderData = jsonValue.GetString("mapItemReaderData");
    m_mapItemReaderDataHasBeenSet = true;
  }
  return *this;
}

JsonValue TestStateConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_retrierRetryCountHasBeenSet) {
    payload.WithInteger("retrierRetryCount", m_retrierRetryCount);
  }

  if (m_errorCausedByStateHasBeenSet) {
    payload.WithString("errorCausedByState", m_errorCausedByState);
  }

  if (m_mapIterationFailureCountHasBeenSet) {
    payload.WithInteger("mapIterationFailureCount", m_mapIterationFailureCount);
  }

  if (m_mapItemReaderDataHasBeenSet) {
    payload.WithString("mapItemReaderData", m_mapItemReaderData);
  }

  return payload;
}

}  // namespace Model
}  // namespace SFN
}  // namespace Aws
