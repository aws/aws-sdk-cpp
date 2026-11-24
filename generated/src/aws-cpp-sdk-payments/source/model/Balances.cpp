/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/payments/model/Balances.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Payments {
namespace Model {

Balances::Balances(JsonView jsonValue) { *this = jsonValue; }

Balances& Balances::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("outstanding")) {
    m_outstanding = jsonValue.GetObject("outstanding");
    m_outstandingHasBeenSet = true;
  }
  if (jsonValue.ValueExists("processing")) {
    m_processing = jsonValue.GetObject("processing");
    m_processingHasBeenSet = true;
  }
  if (jsonValue.ValueExists("settled")) {
    m_settled = jsonValue.GetObject("settled");
    m_settledHasBeenSet = true;
  }
  if (jsonValue.ValueExists("canceled")) {
    m_canceled = jsonValue.GetObject("canceled");
    m_canceledHasBeenSet = true;
  }
  return *this;
}

JsonValue Balances::Jsonize() const {
  JsonValue payload;

  if (m_outstandingHasBeenSet) {
    payload.WithObject("outstanding", m_outstanding.Jsonize());
  }

  if (m_processingHasBeenSet) {
    payload.WithObject("processing", m_processing.Jsonize());
  }

  if (m_settledHasBeenSet) {
    payload.WithObject("settled", m_settled.Jsonize());
  }

  if (m_canceledHasBeenSet) {
    payload.WithObject("canceled", m_canceled.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace Payments
}  // namespace Aws
