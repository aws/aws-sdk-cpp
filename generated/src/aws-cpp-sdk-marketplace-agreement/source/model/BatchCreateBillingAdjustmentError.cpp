/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/marketplace-agreement/model/BatchCreateBillingAdjustmentError.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace AgreementService {
namespace Model {

BatchCreateBillingAdjustmentError::BatchCreateBillingAdjustmentError(JsonView jsonValue) { *this = jsonValue; }

BatchCreateBillingAdjustmentError& BatchCreateBillingAdjustmentError::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("code")) {
    m_code = BillingAdjustmentErrorCodeMapper::GetBillingAdjustmentErrorCodeForName(jsonValue.GetString("code"));
    m_codeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("message")) {
    m_message = jsonValue.GetString("message");
    m_messageHasBeenSet = true;
  }
  if (jsonValue.ValueExists("clientToken")) {
    m_clientToken = jsonValue.GetString("clientToken");
    m_clientTokenHasBeenSet = true;
  }
  return *this;
}

JsonValue BatchCreateBillingAdjustmentError::Jsonize() const {
  JsonValue payload;

  if (m_codeHasBeenSet) {
    payload.WithString("code", BillingAdjustmentErrorCodeMapper::GetNameForBillingAdjustmentErrorCode(m_code));
  }

  if (m_messageHasBeenSet) {
    payload.WithString("message", m_message);
  }

  if (m_clientTokenHasBeenSet) {
    payload.WithString("clientToken", m_clientToken);
  }

  return payload;
}

}  // namespace Model
}  // namespace AgreementService
}  // namespace Aws
