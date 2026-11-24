/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/payments/model/BusinessUnit.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Payments {
namespace Model {

BusinessUnit::BusinessUnit(JsonView jsonValue) { *this = jsonValue; }

BusinessUnit& BusinessUnit::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("merchantOfRecord")) {
    m_merchantOfRecord = jsonValue.GetString("merchantOfRecord");
    m_merchantOfRecordHasBeenSet = true;
  }
  if (jsonValue.ValueExists("lineOfBusiness")) {
    m_lineOfBusiness = LineOfBusinessMapper::GetLineOfBusinessForName(jsonValue.GetString("lineOfBusiness"));
    m_lineOfBusinessHasBeenSet = true;
  }
  return *this;
}

JsonValue BusinessUnit::Jsonize() const {
  JsonValue payload;

  if (m_merchantOfRecordHasBeenSet) {
    payload.WithString("merchantOfRecord", m_merchantOfRecord);
  }

  if (m_lineOfBusinessHasBeenSet) {
    payload.WithString("lineOfBusiness", LineOfBusinessMapper::GetNameForLineOfBusiness(m_lineOfBusiness));
  }

  return payload;
}

}  // namespace Model
}  // namespace Payments
}  // namespace Aws
