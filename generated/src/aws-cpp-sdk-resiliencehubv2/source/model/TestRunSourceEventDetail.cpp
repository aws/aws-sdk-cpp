/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/resiliencehubv2/model/TestRunSourceEventDetail.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace resiliencehubv2 {
namespace Model {

TestRunSourceEventDetail::TestRunSourceEventDetail(JsonView jsonValue) { *this = jsonValue; }

TestRunSourceEventDetail& TestRunSourceEventDetail::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("alarmStateChange")) {
    m_alarmStateChange = jsonValue.GetObject("alarmStateChange");
    m_alarmStateChangeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("error")) {
    m_error = jsonValue.GetObject("error");
    m_errorHasBeenSet = true;
  }
  return *this;
}

JsonValue TestRunSourceEventDetail::Jsonize() const {
  JsonValue payload;

  if (m_alarmStateChangeHasBeenSet) {
    payload.WithObject("alarmStateChange", m_alarmStateChange.Jsonize());
  }

  if (m_errorHasBeenSet) {
    payload.WithObject("error", m_error.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace resiliencehubv2
}  // namespace Aws
